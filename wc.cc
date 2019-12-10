/**
 *@file wc.cc
 *@brief this is the file for the wc implementation
 *@author Dylan Smith
 */
#include <iostream>
#include <string>
#include <fstream>

/**
 *@brief This the function that counts the chars in a string
 *@param string is a string name that the user wants to know the char count for
 *@return str1.length - an interger for the char count in a string
 */

int countChar(std::string pName){
    return pName.length();
}

/**
 *@brief This function counts the lines in a string
 *@param string is a string name that the user wants to know the line count for
 *@return count - an interger for the char count in a string
 */

int countLine(std::string pName){
    int count = 1;
    if(pName == "") {
        return 0;
    }
    for(int i = 0; i < pName.size(); i++) {
        if(pName[i] == '\n') {
            count++;
        }
    }
    return count;
}


/**
 *@brief This the main function for the functions countLine() and countChar()
 *@param argc is the number of command lines passed through
 *@param argv is the command line args passed in for testing
 */

int main(int argc, char** argv){
    std::string s1;
    for(int i = 1; i < argc; i++){
        s1 += argv[i];
  }
    std:: cout << "Characters: " << countChar(s1) << std::endl;
    std:: cout << "Lines: " << countLine(s1) << std::endl;
}
