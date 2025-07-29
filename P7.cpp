//Name: Varnika Maurya
//PRN: 24070123160
//Exp 7
//Program 7
#include <iostream>
#include <string>
using namespace std;

int main() {
    string  s3;
    cout << "Enter string: ";
    getline(cin, s3);


    // Print s3 in reverse
    cout << "s3 in reverse: ";
    for(int i = s3.length() - 1; i >= 0; i--) {
        cout << s3[i];
    }
    cout << endl;

    return 0;
}

/*
PS C:\Users\DELL\Desktop\C++> g++ P7.cpp -o P7
PS C:\Users\DELL\Desktop\C++> .\P7.exe
Enter string: Hello World
s3 in reverse: dlroW olleH
*/
