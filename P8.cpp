//Name: Varnika Maurya
//PRN: 24070123160
//Exp 7
//Program 8
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    bool isPalindrome = true;
    int n = s.length();
    for(int i = 0; i < n / 2; i++) {
        if(s[i] != s[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}

/*
PS C:\Users\DELL\Desktop\C++> g++ l7.cpp -o l7
PS C:\Users\DELL\Desktop\C++> .\l7.exe        
Enter string: madam
The string is a palindrome.

PS C:\Users\DELL\Desktop\C++> g++ l7.cpp -o l7
PS C:\Users\DELL\Desktop\C++> .\l7.exe        
Enter string: Hello World
The string is not a palindrome

*/
