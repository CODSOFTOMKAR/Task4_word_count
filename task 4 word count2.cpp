//TASK 4
//Develop a program that counts the number of words in a given
//text file. Prompt the user to enter the file name and display the total word count. 
//Name:omkar mohare
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int countWordsInFile(const string& filename) {
    ifstream file(filename.c_str()); // Convert C++ string to C-style string
    if (!file.is_open()) {
        cout << "Error opening the file: " << filename << endl;
        return -1;
    }

    int wordCount = 0;
    string word;
    while (file >> word) {
        wordCount++;
    }

    file.close();
    return wordCount;
}

int main() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename;

    int wordCount = countWordsInFile(filename);
    if (wordCount >= 0) {
        cout << "Total word count in the file: " << wordCount << endl;
    }

    return 0;
}

