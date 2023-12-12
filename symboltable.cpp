#include<iostream>
#include<unordered_map>
using namespace std;

// Symbol Table
unordered_map<string, int> symbolTable;

// Insert into Symbol Table
void insert(string id, int value) {
    symbolTable[id] = value;
}

// Lookup in Symbol Table
int lookup(string id) {
    if(symbolTable.find(id) != symbolTable.end())
        return symbolTable[id];
    else
        return -1; // Return -1 if id not found
}

int main() {
    insert("a", 1);
    insert("b", 2);
    cout << "Value of a: " << lookup("a") << endl;
    cout << "Value of b: " << lookup("b") << endl;
    return 0;
}
