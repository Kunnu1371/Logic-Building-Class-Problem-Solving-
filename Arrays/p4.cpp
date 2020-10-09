// 4.	WAP  to assign a set of numbers in an Array and display it is Reverse.


#include <iostream>
using namespace std;
int main()
{
    int n ;
    int  a[10];
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elelements: ";

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Reverse array: ";
     for(int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
}