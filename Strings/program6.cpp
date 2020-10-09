// 6.	WAP of Java String Comparison 2 String

#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    cout << str1.compare(str2);
    return 0;
}