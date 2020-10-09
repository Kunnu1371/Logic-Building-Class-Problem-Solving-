// 9.	WAP to assign 10 numbers in an array and Sort it is ascending  order using Bubble sort technique.

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

#include <iostream>
using namespace std;
int main()
{
    int a[10], i, j, n, temp;

    cout << "Enter size: ";
    cin >> n;

     for(i = 0; i < n; i++)
        cin >> a[i];

    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                swap(a[j], a[j+1]);
            }
        }
    }
    
    for(i = 0; i < n; i++)
        cout << a[i] << "\t";

    return 0;
}