// FCAI – Programming 1 – 2022 - Assignment 4
// Program Name: Text Editor Application
// Last Modification Date: xx/xx/xxxx
// Author1 and ID and Group: Eslam mohamed abdel azim ali, 20211013, group A
// Author2 and ID and Group: Sama Ahmed Saeed, 20210163, group A
// Author3 and ID and Group: Omar Rabea Shaban Bayoumi, 20210593, group A
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
    fstream f1, f2, f3;
    string str1, str2; //str1 for fetching string line from file 1 and str2 for fetching string from file2

    f1.open("file1.txt", ios::in);//opening file in reading mode
    f2.open("file2.txt", ios::in);
    f3.open("file3.txt", ios::out);//opening file in writing mode

    while (getline(f1, str1)) { //read lines from file object and put it into string and push back to file 3.
        f3 << str1; // inserting the fetched string inside file3
        f3 << endl;
    }

    while (getline(f2, str2)) { //Same step for file 2 to file 3 fetching
        f3 << str2;
        f3 << endl;
    }

    f1.close();
    f2.close();
    f3.close();
}
//-----------------------------------------------------------------------------------------------------------------------------------
void countwords(string file_name)
{

    ifstream fin;
    fin.open(file_name);          // To open the file
    char word[30];
    int count = 0;
    while (!fin.eof())
    {
        fin >> word;
        count++;
    }
    cout << "The Number Of Words In Ur File = " << count << endl;
    fin.close();     // To close the file
}
//-----------------------------------------------------------------------------------------------------------------------------------
void countcharacters(string file_name)
{
    fstream ncha(file_name);
    int ncharacters = -1;           //Because the first word not count
    char cha;
    ncha.seekg(0, ios::beg);       // To bring the pointer to the start
    while (ncha)
    {
        ncha.get(cha);
        if (cha != '\n')           // The characters is all that we wrote except the new line
            ncharacters++;
    }
    cout << "The Number Of Characters In Ur File = " << ncharacters << endl;
    ncha.close();
}
//-----------------------------------------------------------------------------------------------------------------------------------
void countnumberlines(string file_name)
{
    fstream nl(file_name);
    int nlines = 1;
    char cha;
    nl.seekg(0, ios::beg);       // To bring the pointer to the start
    while (nl)
    {
        nl.get(cha);
        if (cha == '\n')
            nlines++;
    }
    cout << "The Number Of Lines In Ur File = " << nlines << endl;
    nl.close();
}
//-----------------------------------------------------------------------------------------------------------------------------------
void searchword(fstream& file, string file_name)
{
    string search;
    int offset, c = 1;
    string line;
    file.open(file_name, ios::in);
    cout << "Type the word that you want to search about it: ";
    cin >> search;
    if (file.is_open())
    {
        while (!file.eof())
        {
            getline(file, line);
            if ((offset = line.find(search, 0)) != string::npos)       // string::npos is returned if string is not found
            {
                cout << endl;
                cout << "The word (" << search << ")" << " has been found in the file *-* ." << endl;
                break;
            }
            c++;
        }
    }
    if (offset == -1)
    {
        cout << endl;
        cout << "OMG!!!!! the word (" << search << ")" << " hasn't been found in the file '_' ." << endl;
    }
    file.close();
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
    while (getline(file, line)) { //this while loop to take from the file line by line and each time stores it in variable line
        istringstream iss;
        iss.str(line);
        while (iss.good()) {
            iss >> word; tolowercase(word); //this expression to take from each line word by word and stores it in variable word
            if (word == wordsearch) {
                repetition++; //if the any word from the file equals to the user's wanted word then the variable increases by one
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
    while (getline(file, line)) { //this while loop to take from the file line by line
        filecontent += line + "\n"; //to transfer the line by line from file to variable filecontent and after each line endl to transfer all content file as such
    }
    file.close();
    touppercase(filecontent); //here to convert all data of variable to uppercase
    file.open(file_name, ios::out);
    file << filecontent; //here we file the file by its content one more time but as uppercase
    file.close();
}
//------------------------------------------------------------------------------------------------------------------------------------
void turntolower(fstream& file, string file_name)
{
    file.open(file_name, ios::in);
    string filecontent, line;
    while (getline(file, line)) { //this while loop to take from the file line by line and store it in variable line
        filecontent += line + "\n"; //to transfer the line by line from file to variable filecontent and after each line endl to transfer all content file as such
    }
    file.close();
    tolowercase(filecontent); //here to convert all data of variable to lowercase
    file.open(file_name, ios::out);
    file << filecontent; //here we file the file by its content one more time but as lowercase
    file.close();
}
//-----------------------------------------------------------------------------------------------------------------------------------
void turnfircharupper(fstream& file, string file_name)
{
    file.open(file_name, ios::in);
    string filecontent, line, word;
    while (getline(file, line)) //this while loop to take from file line by line
    {
        istringstream iss;
        iss.str(line);
        while (iss.good())
        {
            iss >> word; //this expression to take from each line word by word
            tofirstupper(word, filecontent); // this function to store in the variable filecontent each word but the first letter from each word as uppercase and
                                            //all rest is lowercase
        }
        filecontent += "\n";
    }
    file.close();
    file.open(file_name, ios::out);
    file << filecontent; //here we file the file by its content one more time after changes
    file.close();
}
//-----------------------------------------------------------------------------------------------------------------------------------
void saveoldfilecontent(fstream &file,string file_name,string &oldfilecontent)
{
    string line;
    file.open(file_name,ios::in);
    while (getline(file, line))
        {
            oldfilecontent += line + "\n";
        }
    file.close();
}
//-----------------------------------------------------------------------------------------------------------------------------------
void savefile(fstream& file, string file_name,string &oldfilecontent)
{
    int choice;
    cout << "where is you want to save the file\n"
        "(1)to save in the same file\n"
        "(2)to save in the different file\n"
        ">>>> ";
    cin >> choice;
    if (choice == 1) { //in the same file (same name)
        cout << "the modifications are applied in the same file :)" << endl;//if the user chooses the option of saving in the same file then the file changed and saved already
        saveoldfilecontent(file,file_name,oldfilecontent); //to save current content of file to variable oldfilecontent
    }
    else if (choice == 2) { //another file (different name)
        string newnamefile, newfilecontent, line; fstream newfile;
        cout << "please enter the file name to deal with" << endl; cin.ignore();
        getline(cin, newnamefile);

        if (newnamefile.size() < 4) {
            newnamefile += ".txt";
        }
        else {
            if (newnamefile.substr(newnamefile.size() - 4, newnamefile.size() - 1) != ".txt") {
                newnamefile += ".txt";
            }
        }
        newfile.open(newnamefile);
        if (newfile.fail()) //if the name of new file doesn't exist then we will create file for him
        {
            newfile.open(newnamefile, ios::out);
            cout << "This is a new file. I created it for you\n";
        }
        newfile.close();file.open(file_name,ios::in);
        while (getline(file, line)) //this while loop to transfer all content from the file to variable newfilecontent
            {
                newfilecontent += line + "\n";
            }
        file.close();
        newfile.open(newnamefile, ios::out);
        newfile << newfilecontent; //we open new file to add new modified content to it
        newfile.close();
        file.open(file_name,ios::out); //we open old file to add its old content
        file << oldfilecontent;
        file.close();
        cout << "the modifications are applied in different file named " << newnamefile << " :)" << endl;
    }
}
//------------------------------------------------------------------------------------------------------------------------------------
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
        case 6:mergetwofiles();
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


