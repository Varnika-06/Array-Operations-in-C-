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
    
    int sum = 0;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    float avg = (float)sum / n;
    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << avg << endl;

    cout << "Enter number to search: ";
    cin >> num;

    return 0;
}

/*
PS C:\Users\DELL\Desktop\C++> .\P2.exe
Enter the number of elements: 5
Enter 5 elements: 4
3
6
8
1
Array elements are: 4 3 6 8 1
Sum of array elements: 22
Average of array elements: 4.4
  */
