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
void to_register(infuser &user)
{
    //your code...........
    fillfile(user);fillmapinfusers();
    cout<<"the registration completed successfully"<<endl;
}
void to_login(infuser &user)
{
    
}
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
            "(4) Exit\n"
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
            state=false;
        }
        else cout<<"the option you entered is't correct ";
    }
}
