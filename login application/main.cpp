// FCAI � Programming 1 � 2022 - Assignment 4
// Program Name: login application
// Last Modification Date: xx/xx/xxxx
// Author1 and ID and Group: eslam mohamed abdel azim ali and ID: 20211013 and Group A
// Author2 and ID and Group: xxxxx xxxxx
// Author3 and ID and Group: xxxxx xxxxx
// Teaching Assistant: xxxxx xxxxx
// Purpose:..........
#include <bits/stdc++.h>
#include<conio.h>
#include<string>>
#include<fstream>
using namespace std;
//------------------------------------------------------------------------------------------------------------------------------------
fstream fileinformation,storingfile;string filename="user informations.txt";
struct infuser
{
    string ID,email,password,username,mobile;
};
map<string,infuser>mapinfusers;
//-------------------------------------------------------------------------------------------------------------------------------------
void fillmapinfusers()
{
    fileinformation.open(filename,ios::in);string line1,line2,line3,line4,line5;
    while(!fileinformation.eof())
    {
        getline(fileinformation,line1);
        getline(fileinformation,line2);
        getline(fileinformation,line3);
        getline(fileinformation,line4);
        getline(fileinformation,line5);
        mapinfusers[line1] = {line1,line2,line3,line4,line5};
        /*
        cout<<mapinfusers[line1].ID<<endl;
        cout<<mapinfusers[line1].email<<endl;
        cout<<mapinfusers[line1].password<<endl;
        cout<<mapinfusers[line1].username<<endl;
        cout<<mapinfusers[line1].mobile<<endl;
        */
    }
    fileinformation.close();
}
//------------------------------------------------------------------------------------------------------------------------------------
void fillfile(infuser user)
{
    fileinformation.open(filename,ios::app);
    fileinformation<<user.ID<<endl;
    fileinformation<<user.email<<endl;
    fileinformation<<user.password<<endl;
    fileinformation<<user.username<<endl;
    fileinformation<<user.mobile<<endl;
    fileinformation.close();
}
//-------------------------------------------------------------------------------------------------------------------------------------
bool checkID(infuser &user)
{
    cout<<"please enter unique ID: "<<endl;
    cin>>user.ID;
    regex format("[0-9]+");
    return regex_match(user.ID,format)&&(mapinfusers.count(user.ID)==0);
}
//--------------------------------------------------------------------------------------------------------------------------------------
bool checkusername(infuser &user)
{
    cout<<"please enter your new user name and must contain letters and underscore(_) only\n";
    cin.ignore();
    getline(cin,user.username);
    regex format("[a-zA-Z_]+");
    return regex_match(user.username,format);
}
//--------------------------------------------------------------------------------------------------------------------------------------
bool existinformation(string information)
{
    fileinformation.open(filename,ios::in);string line;
    while(!fileinformation.eof())
    {
        getline(fileinformation,line);
        if(information==line){
            return false;
        }
    }
    fileinformation.close();
    return true;
}
bool checkemail(infuser &user)
{
    cout<<"please enter your email and must contain digits or letters and after that @ and domain then .com only\n";
    cin>>user.email;
    regex format("[[:w:]]+@[[:w:]]+.com");
    return regex_match(user.email,format)&&existinformation(user.email);
}
//---------------------------------------------------------------------------------------------------------------------------------------------
void encryptpassword(string &password)
{
    for(int i=0;i<password.size();i++){
        password[i]=char(int(password[i])+1);
    }
}
//-----------------------------------------------------------------------------
string inp_invispass(string &password)
{
    char character;
    while((character=getch())!='\r'){

        if(character==8){
            if(password!=""){
                password.pop_back();
                cout<<character<<" "<<character;
            }
        }
        else{
            password+=character;
            cout<<"*";
        }
    }
    cout<<endl;
    return password;
}
//--------------------------------------------------------------------------------
bool checkpassword(string &userpassword)
{
    bool state=false;string repeatedpass;
    while(!state){
        cout<<"please enter your password of length 10 and must contain at least one from digits and letters and symbols only\n";
        userpassword=inp_invispass(userpassword);
        regex format("(?=.*[a-zA-Z])(?=.*[@#$&%*!-_])(?=.*[0-9])[a-zA-Z0-9@#$&%*!-_]{10,}");
        state=regex_match(userpassword,format);
    }
    while(state){
        cout<<"please repeat the password again correctly\n";
        repeatedpass=inp_invispass(repeatedpass);
        if(repeatedpass==userpassword){
            state=false;
        }
    }
    encryptpassword(userpassword);
    return true;
}
//---------------------------------------------------------------------------------------------------------------------------------------------------
bool checkmobile(infuser &user)
{
    cout<<"please enter your mobil: "<<endl;
    cin>>user.mobile;
    regex format("01[0125][0-9]{8}");
    return regex_match(user.mobile,format);
}
//---------------------------------------------------------------------------------------------------------------------------------------------------
void to_register(infuser &user)
{
    while(!checkID(user)){};
    while(!checkemail(user)){};
    while(!checkpassword(user.password)){};
    while(!checkusername(user)){};
    while(!checkmobile(user)){};
    /*
    cout<<user.ID<<endl;
    cout<<user.email<<endl;
    cout<<user.password<<endl;
    cout<<user.username<<endl;
    cout<<user.mobile<<endl;
    */
    fillfile(user);fillmapinfusers();
    cout<<"the registration completed successfully"<<endl;
}
//---------------------------------------------------------------------------------------------------------------------------------------
void to_login(infuser &user)
{
    while(true){
        cout<<"please enter your ID and your password that already exist in this system"<<endl;
        cin>>user.ID;
        user.password=inp_invispass(user.password);encryptpassword(user.password);
        if((mapinfusers.count(user.ID)>0) && (mapinfusers[user.ID].password==user.password))
        {
            cout<<"Successful login, welcome xxx his name xxx."<<endl;
            break;
        }
        else{
            cout<<"Failed login. Try again "<<endl;
        }

    }
}
//----------------------------------------------------------------------------------------------------------------------------------------
void to_change_password(infuser &user)
{
    to_login(user);string oldpassword=user.password,newpassword;
    while(!checkpassword(newpassword)){};
    fileinformation.open(filename,ios::in);string line1,line2,line3,line4,line5;
    storingfile.open("forstoringdata.txt",ios::out);
    while(!fileinformation.eof())
    {
        getline(fileinformation,line1);
        getline(fileinformation,line2);
        getline(fileinformation,line3);
        getline(fileinformation,line4);
        getline(fileinformation,line5);
        storingfile<<line1<<endl;
        storingfile<<line2<<endl;
        if(line3==oldpassword){
            storingfile<<newpassword<<endl;
            storingfile<<line4<<endl;
            storingfile<<line5<<endl;
            break;
        }
        else{
            storingfile<<line3<<endl;
            storingfile<<line4<<endl;
            storingfile<<line5<<endl;
        }
    }
    storingfile.close();
    fileinformation.close();

    fileinformation.open(filename,ios::out);
    storingfile.open("forstoringdata.txt",ios::in);
    while(!storingfile.eof())
    {
        getline(storingfile,line1);
        fileinformation<<line1<<endl;
    }
    storingfile.close();
    fileinformation.close();
    remove("forstoringdata.txt");
    cout<<"the changing for your password is done "<<endl;
}
//----------------------------------------------------------------------------------------------------------------------------------------
void Forgot_Password()
{
    int option;string information;
    cout<<"what is the way you want to return your acount in this system"
          "(1) email"
          "(2) mobile"
          ">>>>>> ";
    cin>>option;
    if(option==1){
        cout<<"please enter your email which already exist in this system"<<endl;
        cin>>information;
        if(!existinformation(information)){

        }
    }
    else if(option==2){
        cout<<"please enter your mobile which already exist in this system"<<endl;
        cin>>information;
        if(!existinformation(information)){
        }
    }
    else cout<<"your option isn't exist .try again"<<endl;
}
//----------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    infuser user;
    fillmapinfusers();
    int option;bool state=true;
    while(state){
        cout <<"what do you want to do from this menu\n"
            "(1) Register\n"
            "(2) Login\n"
            "(3) Change Password\n"
            "(4) Forgot Password\n"
            "(5) Exit\n"
            ">>>> ";
        cin>>option;
        if(option==1){
            to_register(user);
        }
        else if(option==2){
            to_login(user);
        }
        else if(option==3){
            to_change_password(user);
        }
        else if(option==4){
            Forgot_Password();
        }
        else if(option==5){
            state=false;
        }
        else cout<<"the option you entered is't correct ";
    }
}
/*

#include <iostream>
#include <map>
#include <fstream>
#include <regex>
#include <string>
using namespace std;
fstream userinformf;
void storfile();
void checkformate(regex e, string& u, string thing);
void stormap();
void foundEmail(string& s);
struct userinfor {
	string ID;
	string username;
	string  password;
	string email;
	string mobilenumber;
};
userinfor getinfor();
int main() {
	storfile();
}

void storfile(){
	userinfor x = getinfor();
	userinformf.open("userinformation.txt", ios::app);
	userinformf << x.ID << endl;
	userinformf << x.email << endl;
	userinformf << x.password << endl;
	userinformf << x.username << endl;
	userinformf << x.mobilenumber << endl;
	userinformf.close();
}
userinfor getinfor() {
	userinfor user;
	string str;
	cout << "please enter user name has only – or letters\n";
	getline(cin,str);
	//e1 is a valid username format
	regex e1("[-]*[a-z]+[-]*[a-z]*", regex_constants::icase);
	checkformate(e1, str, "user name");
	user.username = str;

	cout << "\nplease enter password\n";
	getline(cin, user.password);
	
	cout << "\nplease enter email\n";
	getline(cin, str);
	//regex e2("[a-z]+[^.]{0,1}@", regex_constants::icase);
	//regex e2("[^.]{1}([a-z]*)([ #!\%\$‘&]*)([.]*)([.]{0,1})[[:w:]]*@[[:w:]]+\.com");
	regex e2("[a-z]+", regex_constants::icase);
	foundEmail(str);
	checkformate(e2, str, " email");
	user.email = str;

	cout << "\nplease enter mobile number\n";
	//e3 is a valid mobile number format
	regex e3("01[0125]+[0-9]{8}");
	getline(cin, str);
	checkformate(e3, str, "mobile number");
	user.mobilenumber = str;

	cout << "\nplease enter ID\n";
	getline(cin, user.ID);
	return user;
}
map<string, string>m;

void stormap() {
	while (!userinformf.eof()) {
		string key, value, line;
		getline(userinformf, line);
		getline(userinformf, key);
		getline(userinformf, line);
		getline(userinformf, value);
		getline(userinformf, line);
		m[key] = value;
	}
}

void foundEmail(string& s) {
	userinformf.open("userinformation.txt", ios::in);
	if (userinformf.fail()) {
		userinformf.close();
		userinformf.open("userinformation.txt", ios::out);
		userinformf.close();
	}
	else {
		stormap();
		while (m.count(s)) {
		cout << "this email is already regested please enter another ";
		getline(cin, s);
		}
	}
}

void checkformate(regex e,string& u,string thing) {
	while(true){

		bool match = regex_match(u, e);
		if (match) {
			break;
		}
		else {
			cout << "please enter a valid "<<thing<<"\n";
			getline(cin, u);
		}
	} 
}


*/
