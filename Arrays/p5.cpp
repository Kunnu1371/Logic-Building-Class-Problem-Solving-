// 5.	WAP to assign some values in two arrays an merge them into third array. // one int 2 nd array sorting  order


#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j, k ;
    int  a[10], b[10], c[20];
    cout << "Enter size of array one: ";
    cin >> n;
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        c[i] = a[i];
    }

    cout << "Enter size of array two: ";
    cin >> m;
    cout << "Enter elements: ";
    
    for(j = 0; j < m; j++) {
         cin >> b[j];
    }

    k = j;
    for(j = 0; j < n; j++) {
         c[k] = b[j];
         k++;
    }

    cout << "Merged array: ";
    for(int k = 0; k < m + n; k++) {
        cout << c[k] << " ";
    }
    return 0;
}