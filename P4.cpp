//Name: Varnika Maurya
//PRN: 24070123160
//Exp 7
//Program 3
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
    int max = arr[0], min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;
    

    return 0;
}

/*
PS C:\Users\DELL\Desktop\C++> g++ P4.cpp -o P4
PS C:\Users\DELL\Desktop\C++> .\P4.exe        
Enter the number of elements: 5
Enter 5 elements: 1
6
8
9
4
Array elements are: 1 6 8 9 4 
Maximum element: 9
Minimum element: 1
  */
