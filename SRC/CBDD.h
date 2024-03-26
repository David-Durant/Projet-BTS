#pragma once


/* Standard C++ includes */
#include <stdlib.h>
#include <iostream>


#include <mysql/jdbc.h>  

#include <atlstr.h>
#include <string>

class CBDD
{
private :
	//déclaration des variables utilisées dans le programme pour mySQL
	sql::Driver*		Ptr_driver;
	sql::Connection*	Ptr_con;
	sql::Statement*		Ptr_stmt;
	sql::ResultSet*		Ptr_res;

	sql::SQLString		JoindreServeurSQL;
	sql::SQLString		Login;
	sql::SQLString		Pwd;
	sql::SQLString		Element, Element2;

	CString				MessageErreur;
	bool				EnErreur;
	bool				EstConnecte;

public:
	CBDD();
	void BDDConvertirTexte(CString p_texte, sql::SQLString & p_dest);
	bool BDDConnexion();
	bool BDDConnexionAdmin(CString p_utilisateur, CString p_mdp);
	void BDDDeconnexion();
	CString BDDRecupMessageErreur();
	bool BDDRecupEnErreur();
	void BDDFixerEnErreur(bool p_val);
	bool BDDRecupEstConnecte();
	void BDDFixerEstConnecte(bool p_val);
	void BDDCreerTraitement();
	void BDDExecuter(CString p_requete);
	void BDDSupprimerTraitement();
	void BDDCreerBaseRMS();
};