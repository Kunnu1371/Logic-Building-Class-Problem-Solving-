// 3.	WAP to accept an Array to accept a Month number and Display the numbr of days that months has.(Eq- March- 31)

#include <iostream>
using namespace std;
int main()
{
    int flag, n ;
    char month[12][10] = {
                        "January",
                        "February", 
                        "March", 
                        "April", 
                        "May", 
                        "June", 
                        "July" , 
                        "August",
                        "September", 
                        "October", 
                        "November", 
                        "December"
                        };

    int days[] = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};
    cout << "Enter month number: ";
    cin >> n;

    for(int i = 0; i < 12; i++) {
        if(n == i + 1) {
            cout << month[i] << " - " << days[i];
            flag = 1;
        }
    }
        if( flag != 1) {
            cout << "Entered wrong choice.";
        }
}