//Name: Varnika Maurya
//PRN: 24070123160
//Exp 7
//Program 5
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";           // Direct initialization
    string s2("World");            // Constructor initialization
    string s3;                     // Declaration only
    s3 = "C++ String";             // Assignment after declaration

    cout << s1 << " " << s2 << " " << s3 << endl;
    return 0;
}

/*
PS C:\Users\DELL\Desktop\C++> g++ P5.cpp -o P5
PS C:\Users\DELL\Desktop\C++> .\P5.exe
Hello World C++ String
  */
