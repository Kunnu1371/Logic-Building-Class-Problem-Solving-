// 1.	WAP to accept an Array input from an User. and find the Sum of Numbers of each array

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    int  a[10];
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elelements: ";

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    cout << "Sum: " << sum;
}