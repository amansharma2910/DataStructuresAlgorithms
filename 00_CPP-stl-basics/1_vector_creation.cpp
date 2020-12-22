#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // Array of string objects
    string arr[] = {"first", "sec", "third", "fourth"};

    // Vector with a string array
    // vector<string> variable(starting pointer, ending pointer);
    vector<string> vecOfStr(arr, arr + sizeof(arr) / sizeof(string));
    
    // Copying one vector's values to the other
    // NOTE: passing just the name of the vector to be copied (acts as a pointer) will copy the entire vector into the new one. To copy just a part of the vector, use the following syntax:
    // vector<type> varaible(starting pointer, ending pointer)
    vector<string> vecOfStrCopy(vecOfStr.begin(), vecOfStr.end());
    
    for (string str: vecOfStrCopy)
        cout <<str <<endl;
    
}
