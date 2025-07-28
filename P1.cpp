//Name: Varnika Maurya
//PRN: 24070123160
//Exp 7
//Program 1
#include <iostream>
using namespace std;
int main() {
    int n, i;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100]; // assuming maximum 100 elements

    cout << "Enter " << n << " elements: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
PS C:\Users\DELL\Desktop\C++> g++ l7.cpp -o l7
PS C:\Users\DELL\Desktop\C++> .\l7.exe
Enter the number of elements: 5
Enter 5 elements: 1   
5
6
8
12
Array elements are: 1 5 6 8 12 
  */
