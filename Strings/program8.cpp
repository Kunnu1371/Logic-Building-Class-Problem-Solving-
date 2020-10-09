// 8.	WAP to accept a String and Convert the case of each alphabet present in it.(eq- JaVa---jAvA)

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    for(int i = 0; i < str.length(); i++) {
        if(isupper(str[i])) {
            str[i] = ::tolower(str[i]);
        }
        else if(islower(str[i])) {
            str[i] = ::toupper(str[i]);
        }
    }
    for(int i = 0; i < str.length(); i++) {
        cout << str[i];
    }
}