#make an array of size 10 and take input from user and print the array

#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements of the array are: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}