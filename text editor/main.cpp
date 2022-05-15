// FCAI � Programming 1 � 2022 - Assignment 4
// Program Name: Text Editor Application
// Last Modification Date: 15/5/2022
// Author1 and ID and Group: Eslam mohamed abdel azim ali, 20211013, group A
// Author2 and ID and Group: Sama Ahmed Saeed, 20210163, group A
// Author3 and ID and Group: Omar Rabea Shaban Bayoumi, 20210593, group A
// Teaching Assistant: Eng.Afaf Abelmonem
// Purpose:this application applys some modifications on files that the user enters
#include "header.h"
int main()
{
    fstream filemodified; string file_name,oldfilecontent;
    load_file(filemodified, file_name);
    saveoldfilecontent(filemodified,file_name,oldfilecontent);
    bool state = true; int option;
    while (state) {
        cout << "what do you want to do\n"
            "1- Add new text to the end of the file\n"
            "2- Display the content of the file\n"
            "3- Empty the file \n"
            "4- Encrypt the file content \n"
            "5- Decrypt the file content \n"
            "6- Merge another file\n"
            "7- Count the number of words in the file \n"
            "8- Count the number of characters in the file\n"
            "9- Count the number of lines in the file\n"
            "10- Search for a word in the file\n"
            "11- Count the number of times a word exists in the file\n"
            "12- Turn the file content to upper case\n"
            "13- Turn the file content to lower case\n"
            "14- Turn file content to 1st caps (1st char of each word is capital)\n"
            "15- Save\n"
            "16- Exit\n"
            ">>>> ";
        cin >> option;
        switch (option)
        {
        case 1: {addNewText(filemodified, file_name);
            cin.clear();
            filemodified.close();
            break; }
        case 2:displaycontent(filemodified, file_name);
            break;
        case 3:emptyfile(filemodified, file_name);
            break;
        case 4:encryptcontent(filemodified, file_name);
            break;
        case 5:decryptcontent(filemodified, file_name);
            break;
        case 6:mergetwofiles(filemodified, file_name);
            break;
        case 7:countwords(file_name);
            break;
        case 8:countcharacters(file_name);
            break;
        case 9:countnumberlines(file_name);
            break;
        case 10:searchword(filemodified,file_name);
            break;
        case 11:countwordrepetition(filemodified, file_name);
            break;
        case 12:turntoupper(filemodified, file_name);
            break;
        case 13:turntolower(filemodified, file_name);
            break;
        case 14:turnfircharupper(filemodified, file_name);
            break;
        case 15:savefile(filemodified, file_name,oldfilecontent);
            break;
        case 16:state = false;
            break;
        default:
            cout << "the choice you entered isn't correct ";
        }
    }
}


