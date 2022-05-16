#ifndef LOGINHEADER_H_INCLUDED
#define LOGINHEADER_H_INCLUDED
#include <iostream>
#include <map>
#include <regex>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;
//------------------------------------------------------------------------------------------------------------------------------------
fstream fileinformation, storingfile; string filename = "user informations.txt";//to create the file and its name
struct infuser  //to create the struct that will contain the user information
{
    string ID, email, password, username, mobile;
};
map<string, infuser>mapinfusers;
//-------------------------------------------------------------------------------------------------------------------------------------
void fillmapinfusers();
void fillfile(infuser user);
bool checkID(string& ID);
bool checkusername(string& username);
bool existinformation(string information);
bool checkemail(string& email);
void encryptpassword(string& password); //this function to encrypt the password after ensure that it follows the rules of program and before storing it in the file
string inp_invispass();
bool checkpassword(string& password);
bool checkmobile(string& mobile);
void to_register(infuser& user);
void to_login(infuser& user);

void to_change_password(infuser& user);
void Forgot_Password();

#endif // HEADER_H_INCLUDED
