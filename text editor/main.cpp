#include <bits/stdc++.h>
using namespace std;

void add_newtext()
{

}
void displaycontent()
{

}
void emptyfile()
{

}
void encryptcontent()
{

}
void decryptcontent()
{

}
void mergetwofiles()
{

}
void countwords()
{

}
void countcharacters()
{

}
void countnumberlines()
{

}
void searchword()
{

}
void countrepeatedword()
{

}
void turntoupper()
{

}
void turntolower()
{

}
void turnlastcharacter()
{

}
void savefile()
{

}
int main()
{
    bool state=true;int typemodifys;
    /*
    here we will test if the file entered exist or not
    */
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
        case 1:add_newtext();
            break;
        case 2:displaycontent();
            break;
        case 3:emptyfile();
            break;
        case 4:encryptcontent();
            break;
        case 5:decryptcontent();
            break;
        case 6:mergetwofiles();
            break;
        case 7:countwords();
            break;
        case 8:countcharacters();
            break;
        case 9:countnumberlines();
            break;
        case 10:searchword();
            break;
        case 11:countrepeatedword();
            break;
        case 12:turntoupper();
            break;
        case 13:turntolower();
            break;
        case 14:turnlastcharacter();
            break;
        case 15:savefile();
            break;
        case 16:state=false;
            break;
        }
        default:
            cout<<"the choice you entered isn't correct ";
    }
}