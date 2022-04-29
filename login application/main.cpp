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
void to_register()
{

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
