
// FCAI – Programming 1 – 2022 - Assignment 4
// Program Name: Text Editor Application
// Last Modification Date: xx/xx/xxxx
// Author1 and ID and Group: Eslam mohamed abdel azim ali, 20211013, group A
// Author2 and ID and Group: Sama Ahmed Saeed, 20210163, group A
// Author3 and ID and Group: xxxxx xxxxx
// Teaching Assistant: Eng.Afaf Abelmonem
// Purpose:this application applys some modifications on files that the user enters
#include <iostream>
#include <sstream>
#include <fstream>
#include<cctype>
using namespace std;
//-----------------------------------------------------------------------------------------------------------------------------------
void load_file(fstream& filemodified, string& file_name)
{
    cout << "please enter the file name to deal with" << endl;
    getline(cin, file_name);
    //to check if the name of function ends by .txt or not.

    if (file_name.size() < 4) {
        file_name += ".txt";
    }
    else {
        if (file_name.substr(file_name.size() - 4, file_name.size() - 1) != ".txt") {
            file_name += ".txt";
        }
    }
    //to test if the name of file exist or not.
    filemodified.open(file_name);
    //if the name of file doesn't exist then will create a file in the same folder of main and stored in filecreated.
    if (filemodified.fail()) {

        filemodified.open(file_name, ios::out);
        filemodified.close();
        cout << "This is a new file. I created it for you\n";
    }
    else {
        //if the file name exists then will store it in filecreated
        cout << "This File Already Exists\n";
        filemodified.close();
    }
}
//-----------------------------------------------------------------------------------------------------------------------------------
/*
void fillt_vector(fstream &file,string file_name,vector<string>&veclines)
{
    file.open(file_name,ios::in);
    string line;
    if(file.is_open()){
        while(getline(file,line)){
                veclines.push_back(line);
        }
    }
}
void fillf_vector(fstream &file,string file_name,vector<string>&veclines)
{
    file.open(file_name,ios::in);
    ostream_iterator<string>out_iterator(file,"\n");
    copy(veclines.begin(),veclines.end(),out_iterator);
}
*/
//-----------------------------------------------------------------------------------------------------------------------------------

void addNewText(fstream& file, string file_name)
{
    string  addedContent;
    file.open(file_name, ios::app);
    cout << "enter things you want to add it then \n";
    cout << "press ctrl+z to exist\n";
    while (getline(cin, addedContent)) {//end at ctr+z??
        file << addedContent << "\n";
    }
    cin.clear();
    file.close();
}
/*
void addNewText(fstream& file, string file_name)
{
    file.open(file_name, ios::app);
    string addedcontent;
    cout << "enter things you want to add it then" << endl;
    cout << "press ctrl+z to exit" << endl;
    do {
        getline(cin, addedcontent);
        file << addedcontent << endl;
        if (cin.eof())
            break;
    } while (cin);
    file.close();
}
*/
//-----------------------------------------------------------------------------------------------------------------------------------
void displaycontent(fstream& file, string file_name)
{
    string filecontents;
    file.open(file_name, ios::in);

    cout << "the contents of the file are-->\n";
    while (!file.eof()) {//if we didn't reach to the end of the file do the following
        //read line by line 
        getline(file, filecontents);//read the line and stor it in the string line
        //print this line
        cout << filecontents << endl;
    }
    file.close();
}
//-----------------------------------------------------------------------------------------------------------------------------------
void emptyfile(fstream& file, string file_name)
{
    file.open(file_name, ios::out);
    file.close();
}
//-----------------------------------------------------------------------------------------------------------------------------------
void shifftChar(string& filecontents, string& storeContents, int nshifft) {
    for (char c : filecontents) {
        storeContents += (char)((int)c + nshifft);
        //shift character's ascii by 1,then add it in the string
    }
    storeContents += '\n';
}

//-------------------------------------------------------------------------------------
void encryptcontent(fstream& file, string file_name)
{
    string filecontents, word, storeContents = "";
    file.open(file_name, ios::in);

    while (!file.eof()) {// If we haven't reached the end of the file
        //read line by line 
        getline(file, filecontents);//read the line and stor it in the string line
        shifftChar(filecontents, storeContents, 1);
    }
    file.close();
    file.open(file_name, ios::out);
    file << storeContents;
    file.close();
}
//-----------------------------------------------------------------------------------------------------------------------------------
void decryptcontent(fstream& file, string file_name) {
    string filecontents, word, storeContents = "";
    file.open(file_name, ios::in);

    while (!file.eof()) {// If we haven't reached the end of the file
        //read line by line 
        getline(file, filecontents);//read the line and stor it in the string line
        shifftChar(filecontents, storeContents, -1);
    }
    file.close();
    file.open(file_name, ios::out);
    file << storeContents;
    file.close();
}
//-----------------------------------------------------------------------------------------------------------------------------------
void mergetwofiles()
{

}
//-----------------------------------------------------------------------------------------------------------------------------------
void countwords()
{

}
//-----------------------------------------------------------------------------------------------------------------------------------
void countcharacters()
{

}
//-----------------------------------------------------------------------------------------------------------------------------------
void countnumberlines()
{

}
//-----------------------------------------------------------------------------------------------------------------------------------
void searchword()
{

}
//-----------------------------------------------------------------------------------------------------------------------------------
void tolowercase(string& word)
{
    for (int i = 0; i < word.size(); i++) {
        word[i] = tolower(word[i]);
    }
}
void touppercase(string& word)
{
    for (int i = 0; i < word.size(); i++) {
        word[i] = toupper(word[i]);
    }
}
void tofirstupper(string& word, string& filecontent)
{
    string word2 = word;
    word2 = word.substr(1, word.size()); tolowercase(word2);
    word = toupper(word[0]); word += word2;
    filecontent += word + " ";
}
//----------------------------------------------------------------------------------------------------------------------------------
void countwordrepetition(fstream& file, string file_name)
{
    file.open(file_name, ios::in); int repetition = 0; string wordsearch, line, word;
    cout << "what is the word you want to know repetition number of it" << endl;
    cin >> wordsearch; tolowercase(wordsearch);
    while (getline(file, line)) {
        istringstream iss;
        iss.str(line);
        while (iss.good()) {
            iss >> word; tolowercase(word);
            if (word == wordsearch) {
                repetition++;
            }
        }
    }
    file.close();
    cout << "the word " << wordsearch << " is repeated by " << repetition << " times" << endl;
}
//----------------------------------------------------------------------------------------------------------------------------------
void turntoupper(fstream& file, string file_name)
{
    file.open(file_name, ios::in);
    string filecontent, line;
    while (getline(file, line)) {
        filecontent += line + "\n";
    }
    file.close();
    touppercase(filecontent);
    file.open(file_name, ios::out);
    file << filecontent;
    file.close();
}
//------------------------------------------------------------------------------------------------------------------------------------
void turntolower(fstream& file, string file_name)
{
    file.open(file_name, ios::in);
    string filecontent, line;
    while (getline(file, line)) {
        filecontent += line + "\n";
    }
    file.close();
    tolowercase(filecontent);
    file.open(file_name, ios::out);
    file << filecontent;
    file.close();
}
//-----------------------------------------------------------------------------------------------------------------------------------
void turnfircharupper(fstream& file, string file_name)
{
    file.open(file_name, ios::in);
    string filecontent, line, word;
    while (getline(file, line))
    {
        istringstream iss;
        iss.str(line);
        while (iss.good())
        {
            iss >> word;
            tofirstupper(word, filecontent);
        }
        filecontent += "\n";
    }
    file.close();
    file.open(file_name, ios::out);
    file << filecontent;
    file.close();
}
//-----------------------------------------------------------------------------------------------------------------------------------
void savefile(fstream& file, string file_name)
{
    int choice;
    cout << "where is you want to save the file\n"
        "(1)to save in the same file\n"
        "(2)to save in the different file\n"
        ">>>> ";
    cin >> choice;
    if (choice == 1) {
        cout << "the modifications are applied in the same file :)" << endl;
    }
    else if (choice == 2) {
        string newnamefile, newfilecontent, line; fstream newfile;
        cout << "please enter the file name to deal with" << endl; cin.ignore();
        getline(cin, newnamefile);
        if (newnamefile.substr(newnamefile.size() - 4, newnamefile.size() - 1) != ".txt")
        {
            newnamefile += ".txt";
        }
        newfile.open(newnamefile);
        if (newfile.fail())
        {
            newfile.open(newnamefile, ios::out);
            cout << "This is a new file. I created it for you\n";
        }
        newfile.close();
        file.open(file_name, ios::in);
        if (file.is_open())
        {
            while (getline(file, line))
            {
                newfilecontent += line + "\n";
            }
        }

        file.close();
        newfile.open(newnamefile, ios::out);
        newfile << newfilecontent;
        newfile.close();
        cout << "the modifications are applied in different file named " << newnamefile << " :)" << endl;
    }
}
//------------------------------------------------------------------------------------------------------------------------------------
int main()
{
    fstream filemodified; string file_name;
    load_file(filemodified, file_name);
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
        case 11:countwordrepetition(filemodified, file_name);
            break;
        case 12:turntoupper(filemodified, file_name);
            break;
        case 13:turntolower(filemodified, file_name);
            break;
        case 14:turnfircharupper(filemodified, file_name);
            break;
        case 15:savefile(filemodified, file_name);
            break;
        case 16:state = false;
            break;
        default:
            cout << "the choice you entered isn't correct ";
        }
    }
}

