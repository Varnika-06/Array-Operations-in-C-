//Name: Varnika Maurya
//PRN: 24070123160
//Exp 7
//Program 2
#include <iostream>
using namespace std;
int main() {
    int n, i, num, found = 0;
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
    cout << "Enter number to search: ";
    cin >> num;

    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            found = 1;
            break;
        }
    }

    if(found)
        cout << num << " is found in the array." << endl;
    else
        cout << num << " is not found in the array." << endl;


    return 0;
}

/*
PS C:\Users\DELL\Desktop\C++> g++ l7.cpp -o l7
PS C:\Users\DELL\Desktop\C++> .\l7.exe        
Enter the number of elements: 5
Enter 5 elements: 6
3
8
7
13
Array elements are: 6 3 8 7 13 
Enter number to search: 46
46 is not found in the array.
  */
