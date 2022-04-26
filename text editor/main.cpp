// FCAI – Programming 1 – 2022 - Assignment 4
// Program Name: editor text application
// Last Modification Date: xx/xx/xxxx
// Author1 and ID and Group: Eslam mohamed abdel azim ali, 20211013, group A
// Author2 and ID and Group: xxxxx xxxxx
// Author3 and ID and Group: xxxxx xxxxx
// Teaching Assistant: Eng.Afaf Abelmonem
// Purpose:this application applys some modifications on files that the user enters
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

void add_newtext(fstream& file)
{

}
void displaycontent(fstream& file)
{

}
void emptyfile(fstream& file)
{

}
void encryptcontent(fstream& file)
{

}
void decryptcontent(fstream& file)
{

}
void mergetwofiles(fstream& file)
{

}
void countwords(fstream& file)
{

}
void countcharacters(fstream& file)
{

}
void countnumberlines(fstream& file)
{

}
void searchword(fstream& file)
{

}
void countwordrepetition(fstream& file)
{

}
void turntoupper(fstream& file)
{

}
void turntolower(fstream& file)
{

}
void turnfirstcharacter(fstream& file)
{

}
void savefile(fstream& file)
{

}
int main()
{
    bool state=true;int typemodifys;
    fstream filemodified;fstream filecreated;
    string file_name;
    cout << "Please enter a file to open for you: ";
    cin >> file_name;
    if(file_name.substr(file_name.size()-4,file_name.size()-1)!=".txt"){
        file_name+=".txt";
    }
    filemodified.open (file_name);

    if (filemodified.fail()){
        string namefile;
        cout<<"please enter the name of the file that will be create\n"<<endl;
        cin>>namefile;
        if(namefile.substr(namefile.size()-4,namefile.size()-1)!=".txt"){
            namefile=namefile+".txt";
        }
        filecreated.open(namefile,ios::out);
        cout << "This is a new file. I created it for you\n";
    }
    else {
        cout << "This File Already Exists\n";
        filecreated.open (file_name,ios::out);
    }
    filecreated<<4<<endl;
    while(state){
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
        cin>>typemodifys;
        switch(typemodifys)
        {
        case 1:add_newtext(filecreated);
            break;
        case 2:displaycontent(filecreated);
            break;
        case 3:emptyfile(filecreated);
            break;
        case 4:encryptcontent(filecreated);
            break;
        case 5:decryptcontent(filecreated);
            break;
        case 6:mergetwofiles(filecreated);
            break;
        case 7:countwords(filecreated);
            break;
        case 8:countcharacters(filecreated);
            break;
        case 9:countnumberlines(filecreated);
            break;
        case 10:searchword(filecreated);
            break;
        case 11:countwordrepetition(filecreated);
            break;
        case 12:turntoupper(filecreated);
            break;
        case 13:turntolower(filecreated);
            break;
        case 14:turnfirstcharacter(filecreated);
            break;
        case 15:savefile(filecreated);
            break;
        case 16:state=false;
            break;
        default:
            cout<<"the choice you entered isn't correct ";
        }
    }
}
