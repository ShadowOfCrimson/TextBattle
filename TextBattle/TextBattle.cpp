// TextBattle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <string> //string manipulation
#include <random> //random numbers
#include <iostream> //cout/cin service
#include <fstream> //file service

bool SaveFile(string fileName, string saveContent) {
    //try to open file to read
    fstream file;
    file.open(fileName);
    if (file) {
        file << saveContent;
        cout << "Content to save is : " + saveContent + "\n";
        cout << "File Saved!";
        file.close();
    }
    else {
        throw;
    }
    file.close();
}

bool FileCheck(string fileName) {
    //try to open file to read
    ifstream ifile;
    ifile.open(fileName);
    if (ifile) {
        //cout << "file exists, check contents.\n";

        string fileContents; //declare a string variable to use.
        ifstream fileToRead(fileName); //read the file.

        while (getline(fileToRead, fileContents)) { //loop through the contents of the file
            //output the text from the file
            saveData.userName = fileContents
            cout << fileContents;
            //this is where I will sort through the data and apply its content to values for the game
        }

        return true;
    }
    else {
        //cout << "file doesn't exist, create new file.\n";
        ofstream newFile(fileName); //Create a new file
        return false; //tells the call that it had to make a new file
    }
    ifile.close(); //close the file when we're done with it.
}

string IntroConversation(string uName) {
start: //Label for start of conversation
    unsigned MAX_NAME_LEN = 12; //unsigned because string.length() outputs an unsigned integer
    printf("Hello! What's your name?\n");
    getline(cin, uName); //Get username input
    if (uName.length() < MAX_NAME_LEN) { //matching unsigned integer datatypes
        cout << "So your name is " + uName + "... okay!\n";
        SaveFile("save.txt", uName);
    }
    else {
        cout << "Your name is too goddamn long son... try again!\n";
        goto start;
    }
    return uName;
}

int main()
{
    //Define any variables needed in saving/reading saves here.
    struct { //structure call
        string userName; //variables go inside structure for saving
    } saveData;//Name of structure goes at the end
    
    bool success = FileCheck("save.txt", saveData.userName);
    if (success) {
        cout << "found save";
    }
    else {//Introductory conversation:

        saveData.userName = IntroConversation(saveData.userName);
        //cout << userName;
    }
    /*  At this point the player either has a 
        username or has made one and saved it
    */ 

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
