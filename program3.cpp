// 3.	WAP to accept a String and Count number of Capital letters present in it.(eq- ComPuter - 2)

#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
     string str;
     int  count = 0;
    cout << "Enter string: ";
    getline(cin, str);
    for(int i = 0; i < str.length(); i++) {
        if(isupper(str[i])) {
            count++;
        }
    }
    cout << count;

    return 0;
}