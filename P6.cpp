//Name: Varnika Maurya
//PRN: 24070123160
//Exp 7
//Program 6
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    string s2 = "World";
    string s3 = "C++ String";

    // Concatenate using +
    string result1 = s1 + " " + s2;
    cout << "Concatenation using + : " << result1 << endl;

    // Concatenate using append()
    string result2 = s1;
    result2.append(" ").append(s3);
    cout << "Concatenation using append(): " << result2 << endl;

    return 0;
}

/*
PS C:\Users\DELL\Desktop\C++> g++ P6.cpp -o P6
PS C:\Users\DELL\Desktop\C++> .\P6.exe        
Concatenation using + : Hello World
Concatenation using append(): Hello C++ String
  */
