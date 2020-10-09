// 18.	WAP to accept a String count the frequency of each alphabet in the String.
// banana => a = 3, b = 1, n = 2


#include<iostream>
#include<ctype.h>
using namespace std;
int main(){
    string s;
    int count = 0;
    int repeated = 0;
    cout << "Enter string: ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++) {
        if(s[i] ==  && repeated[i] == 0) {
           count++;
        }
    }
    
    return 0;
}