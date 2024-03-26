#include "pch.h"
#include "CBDD.h"
#include "Constantes.h"


CBDD::CBDD()
{
	Ptr_driver = nullptr;
	Ptr_con = nullptr;
	Ptr_stmt = nullptr;
	Ptr_res = nullptr;

	EnErreur = false;

	JoindreServeurSQL = "tcp://127.0.0.1:3306";
	Login = "David_Durant";
	Pwd = "david_MYSQL";
}

void CBDD::BDDConvertirTexte(CString p_texte, sql::SQLString &p_dest)
{
	std::string l_temp = std::string(CStringA(p_texte));
	p_dest = sql::SQLString(l_temp.c_str());
}


bool CBDD::BDDConnexion() 
{
	try
	{
		/* Create a connection */
		Ptr_driver = get_driver_instance();
		Ptr_con = Ptr_driver->connect(JoindreServeurSQL, Login, Pwd);
		CBDD::BDDFixerEnErreur(false); 
		CBDD::BDDFixerEstConnecte(true);
		return true;
	}//fin try

	catch (sql::SQLException& e)
	{
		std::string temp;

		temp = "# ERR: "; 
		temp += e.what(); 
		temp += "\r\n";
		temp += "\r\n";
		temp += "Veuillez vérifier que le serveur de base de données est actif";
		temp += "\r\n";
		temp += "Aller dans le menu parametrages puis creation base des patients si c est la premiere utilisation de RMS";
	
		MessageErreur = temp.c_str();

		CBDD::BDDFixerEnErreur(true);
		CBDD::BDDFixerEstConnecte(false);
		return false;
	}//fin catch
}

bool CBDD::BDDConnexionAdmin(CString p_utilisateur, CString p_mdp)
{

	try
	{
		sql::SQLString l_utilisateur;
		sql::SQLString l_mdp;
		BDDConvertirTexte(p_utilisateur, l_utilisateur);
		BDDConvertirTexte(p_mdp, l_mdp);

		/* Create a connection */
		Ptr_driver = get_driver_instance();
		Ptr_con = Ptr_driver->connect(JoindreServeurSQL, l_utilisateur, l_mdp);
		CBDD::BDDFixerEnErreur(false);
		CBDD::BDDFixerEstConnecte(true);
		return true;
	}//fin try

	catch (sql::SQLException& e)
	{
		std::string temp;

		temp = "# ERR: ";
		temp += e.what();
		temp += "\r\n";
		temp += "\r\n";
		temp += "Veuillez vérifier que le serveur de base de données est actif";
		temp += "\r\n";
		temp += "Aller dans le menu parametrages puis creation base des patients si c est la premiere utilisation de RMS";

		MessageErreur = temp.c_str();

		CBDD::BDDFixerEnErreur(true);
		CBDD::BDDFixerEstConnecte(false);
		return false;
	}//fin catch
}

void CBDD::BDDDeconnexion()
{
	CBDD::BDDFixerEnErreur(false);
	CBDD::BDDFixerEstConnecte(false);
	//plus le code de deconnexion bdd mysql
}

CString CBDD::BDDRecupMessageErreur()
{
	return MessageErreur;
}

bool CBDD::BDDRecupEnErreur()
{
	return EnErreur;
}

void CBDD::BDDFixerEnErreur(bool p_val)
{
	EnErreur = p_val;
}

bool CBDD::BDDRecupEstConnecte()
{
	return EstConnecte;
}

void CBDD::BDDFixerEstConnecte(bool p_val)
{
	EstConnecte = p_val;
}

void CBDD::BDDCreerTraitement()
{
	Ptr_stmt = Ptr_con->createStatement();
}

void CBDD::BDDSupprimerTraitement()
{
	delete Ptr_stmt;
}

void CBDD::BDDExecuter(CString p_requete)
{
	sql::SQLString l_requete;
	BDDConvertirTexte(p_requete, l_requete);
	Ptr_stmt->execute(l_requete);
}

void CBDD::BDDCreerBaseRMS()
{
	BDDExecuter((CString)"CREATE DATABASE rms CHARACTER set 'utf8'");
	BDDExecuter((CString)"USE rms");
	BDDExecuter((CString)"CREATE TABLE client ( IdClient smallint unsigned auto_increment, Nom varchar(255) not null, Prenom varchar(255) not null, DateNaissance date not null, PRIMARY KEY (IdClient) ) ENGINE=INNODB");
	BDDExecuter((CString)"CREATE TABLE config_bouton ( NumeroBouton tinyint unsigned, Rouge tinyint unsigned, Vert tinyint unsigned, Bleu tinyint unsigned ) ENGINE=INNODB");
	BDDExecuter((CString)"CREATE TABLE sequence ( IdSequence smallint unsigned auto_increment, NbreRepetition tinyint unsigned, NomSequence varchar(50) not null, PRIMARY KEY (IdSequence) ) ENGINE=INNODB");
	BDDExecuter((CString)"CREATE TABLE tests ( IdTest int unsigned auto_increment, IdClient smallint unsigned, IdSequence smallint unsigned, NbreEtapesSequence int unsigned, NbreEtapesTimeout int unsigned, NbreEtapesExecutees int unsigned, TempsTotalSequence decimal(5,1) unsigned, Date datetime not null, PRIMARY KEY (IdTest) ) ENGINE=INNODB");
	BDDExecuter((CString)"CREATE TABLE etapes ( IdEtapes smallint unsigned auto_increment, IdSequence smallint unsigned, NumeroEtapeSequence tinyint unsigned, TempsEtapes decimal(5,1) unsigned, PRIMARY KEY (IdEtapes) ) ENGINE=INNODB");
	BDDExecuter((CString)"CREATE TABLE config_rms ( NbreBoutonEsclave tinyint unsigned, AdresseIPBoutonMaitre tinyint unsigned ) ENGINE=INNODB");
	BDDExecuter((CString)"ALTER TABLE tests ADD CONSTRAINT relationIdClient FOREIGN KEY (IdClient) REFERENCES client(IdClient)");
	BDDExecuter((CString)"ALTER TABLE tests ADD CONSTRAINT relationIdSeqTests FOREIGN KEY (IdSequence) REFERENCES sequence(IdSequence)");
	BDDExecuter((CString)"ALTER TABLE etapes ADD CONSTRAINT relationIdSeqEtapes FOREIGN KEY (IdSequence) REFERENCES sequence(IdSequence)");

	BDDExecuter((CString)"CREATE user 'RMS'@'localhost' IDENTIFIED by 'CquiLeBoss'");
	BDDExecuter((CString)"GRANT ALL PRIVILEGES ON *.* TO 'RMS'@'localhost' WITH GRANT OPTION");

	BDDSupprimerTraitement();

}