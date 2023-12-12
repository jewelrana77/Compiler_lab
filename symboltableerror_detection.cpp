#include<iostream>
#include<string>
using namespace std;

// Function to check if a character is a valid identifier character
bool isValidIdentifierChar(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '_';
}

// Function to check syntax errors in a line of code
void checkSyntax(string line) {
    for(int i = 0; i < line.size(); i++) {
        if(!isValidIdentifierChar(line[i])) {
            cout << "Syntax Error: Invalid character '" << line[i] << "' at position " << i << endl;
            return;
        }
    }
    cout << "No syntax errors found." << endl;
}

int main() {
    string line;
    cout << "Enter a line of code: ";
    getline(cin, line);
    checkSyntax(line);
    return 0;
}
