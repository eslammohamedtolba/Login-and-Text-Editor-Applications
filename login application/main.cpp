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
fstream fileinformation,storingfile;string filename="user informations.txt";//to create the file and its name 
struct infuser  //to create the struct that will contain the user information 
{
    string ID,email,password,username,mobile;
};
map<string,infuser>mapinfusers;
//-------------------------------------------------------------------------------------------------------------------------------------
void fillmapinfusers() //function to fill the map by the values that exist in the file by run the program or register the 
{
    fileinformation.open(filename,ios::in);string line1,line2,line3,line4,line5;
    while(!fileinformation.eof())
    {
        getline(fileinformation,line1);
        getline(fileinformation,line2);
        getline(fileinformation,line3);
        getline(fileinformation,line4);
        getline(fileinformation,line5);
        mapinfusers[line1] = {line1,line2,line3,line4,line5}; // to make the key map is the ID and the value is the information of users
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
void fillfile(infuser user) //function to fill the file by the infomation of user after his registration to store it
{
    fileinformation.open(filename,ios::app);//here the file open as append to append on it with not effecting on its data  
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
    return regex_match(user.ID,format)&&(mapinfusers.count(user.ID)==0); //to match the ID of user by rules of regex and check that it not exit before in the map
}
//--------------------------------------------------------------------------------------------------------------------------------------
bool checkusername(infuser &user)
{
    cout<<"please enter your new user name and must contain letters and underscore(_) only\n";
    cin.ignore();
    getline(cin,user.username);
    regex format("[a-zA-Z_]+");
    return regex_match(user.username,format); //to match the username of user by rules of regex
}
//--------------------------------------------------------------------------------------------------------------------------------------
bool existinformation(string information) // this function to check if the string given information exits in the map as a value or not
{
    fileinformation.open(filename,ios::in);string line;
    while(!fileinformation.eof())
    {
        getline(fileinformation,line);
        if(information==line){
            return false; // if the information exits in the map as a value return false 
        }
    }
    fileinformation.close();
    return true; //if the information doesn't exit in the map as a value
}
bool checkemail(infuser &user)
{
    cout<<"please enter your email and must contain digits or letters and after that @ and domain then .com only\n";
    cin>>user.email;
    regex format("(([a-z-#!%$‘&_+*–/=?^_`{|}~]+)[.]{0,1}([a-z-#!%$‘&_+*–/=?^_`{|}~]+))+@([a-z-#!%$‘&_+*–/=?^_`{|}~]+)[.]{0,1}([a-z-#!%$‘&_+*–/=?^_`{|}~]+))+\.com");
    return regex_match(user.email,format)&&existinformation(user.email); //to match the user email and check if it doesn't exit before
}
//---------------------------------------------------------------------------------------------------------------------------------------------
void encryptpassword(string &password) //this function to encrypt the password after ensure that it follows the rules of program and before storing it in the file
{
    for(int i=0;i<password.size();i++){
        password[i]=char(int(password[i])+1);
    }
}
//-----------------------------------------------------------------------------
string inp_invispass(string &password) // this function to make the user input the password as invisible string word 
{
    char character;
    while((character=getch())!='\r'){ //to check if the user enter button enter or not (the ascii of enter is 13 or can write it as '\r' that means enter)

        if(character==8){ //to check if the user enter backspace (the ascii of backspace is 8)
            if(password!=""){ //if the user enter backspace then we check if we are in beginning of the password or not 
                password.pop_back(); //if we aren't in the start then we remove character from the string 
                cout<<character<<" "<<character; //here character has value backspace that he wants to return one step so we return step to the last star
		    				// and write space to remove this star and then we come back again to write in it what user wants 
            }
        }
        else{ //if the user doesn't enter backspace then we will store the character value in the string password and print star (*)
            password+=character;
            cout<<"*";
        }
    }
    cout<<endl;
    return password; //here we return the value after enter it to variable userpassword to take its value and it has changed too because it was sent as reference
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
    while(state){ //this function to make the user enter the password again
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
    return regex_match(user.mobile,format); //to check the match of user mobile
}
//---------------------------------------------------------------------------------------------------------------------------------------------------
void to_register(infuser &user)
{
    //this loops to make the user enter his data correctly
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
        user.password=inp_invispass(user.password);//to make the user enter the password invisible
	encryptpassword(user.password); //to encrypt the password to match it to the password in the file by his ID
        if((mapinfusers.count(user.ID)>0) && (mapinfusers[user.ID].password==user.password))//if his ID is exit already and entered password is matching to his ID'password
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
    to_login(user); //we check if the user register in this system already or not by to login by his account
    string oldpassword=user.password,newpassword;
    while(!checkpassword(newpassword)){}; //after the user enter his account by old password we check matching his new password as correct or not
    fileinformation.open(filename,ios::in);string line1,line2,line3,line4,line5;
    storingfile.open("forstoringdata.txt",ios::out); //we create new temporary file to store all data from the old file but replace old password by new
    while(!fileinformation.eof()) //this while to loop on all lines in the file of users information 
    {
	//here we take every time five lines by fives lines that represent the information for one user and we check on the line of password that exist in line3
        getline(fileinformation,line1);
        getline(fileinformation,line2);
        getline(fileinformation,line3);
        getline(fileinformation,line4);
        getline(fileinformation,line5);
        storingfile<<line1<<endl; //we always store the lines of user ID and email to new file
        storingfile<<line2<<endl;
        if(line3==oldpassword){ //this if condition to find the line of old user'password to replace it by new password in new file
            storingfile<<newpassword<<endl;
            storingfile<<line4<<endl;
            storingfile<<line5<<endl;
            break;
        }
        else{
		//if the line3(of passwords) didn't equal old password then store password and username and mobile as  such
            storingfile<<line3<<endl;
            storingfile<<line4<<endl;
            storingfile<<line5<<endl;
        }
    }
    storingfile.close();
    fileinformation.close();

    fileinformation.open(filename,ios::out);
    storingfile.open("forstoringdata.txt",ios::in);
    while(!storingfile.eof()) //this while loop to store all data from the temporary file to main old file 
    {
        getline(storingfile,line1);
        fileinformation<<line1<<endl;
    }
    storingfile.close();
    fileinformation.close();
    remove("forstoringdata.txt"); //here we remove the temporary file
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
        if(!existinformation(information)){ //to check that user email is exist already 
		
		//your code to send message by email as otp...........
        }
    }
    else if(option==2){
        cout<<"please enter your mobile which already exist in this system"<<endl;
        cin>>information;
        if(!existinformation(information)){ //to check that user mobile is exist already 
		
		//your code to send message by SMS................
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
