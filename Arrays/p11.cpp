// 11.	WAP to accept N integers from user and Count how many of them are positive.
// (eq- 1, -3, 4, 7, -10)= 2


#include <iostream>
using namespace std;
int main()
{
    int a[10], i, n, pos = 0, neg = 0;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
     for(i = 0; i < n; i++)
        cin >> a[i];

    for(i = 0; i < n; i++) {
        if(a[i] > 0) {
            pos++;
        } else {
            neg++;
        }
    }

    cout << pos;

    return 0;
}