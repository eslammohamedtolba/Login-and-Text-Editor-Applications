// FCAI – Programming 1 – 2022 - Assignment 4
// Program Name: xxxxxx.cpp
// Last Modification Date: xx/xx/xxxx
// Author1 and ID and Group: xxxxx xxxxx
// Author2 and ID and Group: xxxxx xxxxx
// Author3 and ID and Group: xxxxx xxxxx
// Teaching Assistant: xxxxx xxxxx
// Purpose:..........
#include <bits/stdc++.h>
using namespace std;
fstream fileinformation;string filename="user informations.txt";
struct infuser
{
    string ID,username,password,email,phone;
};
bool checkID(infuser user)
{
    cout<<"please enter unique ID: "<<endl;
    cin>>user.ID;
    regex format("[0-9]+");
    return regex_match(user.ID,format);
}
bool checkusername(infuser user)
{
    cout<<"please enter your new user name and must contain letters and underscore(_) only\n";
    cin>>user.username;
    regex format("[a-zA-Z_]+");
    return regex_match(user.username,format);
}
bool checkemail(infuser user)
{
    cout<<"please enter your email and must contain digits or letters and after that @ and domain then .com only\n";
    cin>>user.email;
    regex format("[[:w:]]+@[[:w:]]+.com");
    return regex_match(user.email,format);
}
bool checkpassword(infuser user)
{
    bool state=false;string repeatedpass;
    while(!state){
        cout<<"please enter your password of length 10 and must contain at least one from digits and letters and symbols only\n";
        cin>>user.password;
        regex format("(?=.*[a-zA-Z])(?=.*[@#$&*!-_])(?=.*[0-9])[a-zA-Z0-9@#$&*!-_]{10,}");
        state=regex_match(user.password,format);
    }
    while(state){
        cout<<"please repeat the password again correctly\n";
        cin>>repeatedpass;
        if(repeatedpass==user.password){
            state=false;
        }
    }
    return true;
}
void to_register()
{
    infuser user;
    while(!checkID(user)){};
    while(!checkusername(user)){};
    while(!checkpassword(user)){};
    while(!checkemail(user)){};
    cout<<"the registration completed successfully"<<endl;
    fileinformation.open(filename,ios::out);

}
void to_login()
{

}
void to_change_password()
{

}
int main()
{
    int option;bool state=true;
    while(state){
        cout <<"what do you want to do from this menu\n"
            "(1) Register\n"
            "(2) Login\n"
            "(3) Change Password\n"
            "(4) Exit\n"
            ">>>> ";
        cin>>option;
        if(option==1){
            to_register();
        }
        else if(option==2){
            to_login();
        }
        else if(option==3){
            to_change_password();
        }
        else if(option==4){
            state=false;
        }
        else cout<<"the option you entered is't correct ";
    }
}
