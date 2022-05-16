// FCAI � Programming 1 � 2022 - Assignment 4
// Program Name: login application
// Last Modification Date: xx/xx/xxxx
// Author1 and ID and Group: eslam mohamed abdel azim ali and ID: 20211013 and Group A
// Author2 and ID and Group: xxxxx xxxxx
// Author3 and ID and Group: xxxxx xxxxx
// Teaching Assistant: xxxxx xxxxx
// Purpose:..........
#include"loginHeader.h"


//----------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    infuser user;
    fillmapinfusers(); // here we call this function to fill map in beginning of program or start of run by all users informations to make it easy for us to get it
    int option; bool state = true;
    while (state) {
        cout << "what do you want to do from this menu\n"
            "(1) Register\n"
            "(2) Login\n"
            "(3) Change Password\n"
            "(4) Forgot Password\n"
            "(5) Exit\n"
            ">>>> ";
        cin >> option;
        if (option == 1) {
            to_register(user);
        }
        else if (option == 2) {
            to_login(user);
        }
        else if (option == 3) {
            to_change_password(user);
        }
        else if (option == 4) {
            Forgot_Password();
        }
        else if (option == 5) {
            state = false;
        }
        else cout << "the option you entered is't correct "; //if the user didn't enter the available options then we tell him that and to reselect another option
    }
}
