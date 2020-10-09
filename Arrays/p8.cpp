// 8.	WAP to accept 10 numbers in an array and search a given number,  if the number exists display its position (index) else display a suitable message.(Binary Search)

#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int n, key;
    int  a[10];
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elelements: ";

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the element you want to search: ";
    cin >> key;

    int low = 0, high = n-1, flag;
    

    while(low <= high) {
        int mid = (low + high)/2;
        if(key == a[mid]) {
            cout << "Element found at " << mid << " index location. " ;
            flag = 1;
            break;
        }
        else if(key > a[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

return 0;
}