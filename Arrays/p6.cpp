// 6.	WAP to accept 10 numbers in an array and search a given number,  if the number exists display its position (index) else display a suitable message.(Linear Search)

#include <iostream>
using namespace std;
int main()
{
    int a[10], n, key, flag;

    cout<< "Enter size of array: ";
    cin >> n;

    cout<< "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter element you want to search: ";
    cin >> key;
    for(int i = 0; i < n; i++) {
        if(key == a[i]) {
            cout << "Element " << key << "  found at " << i << " index location";
            flag = 1;
            break;
        } 
    }
    if( flag != 1 ) {
        cout << "Element " << key << " not found";
    }
    
}