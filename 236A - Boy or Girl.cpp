#include <bits/stdc++.h>
using namespace std;
string s;
int c, b;
int a[26];
int main() {
    cin>>s;
    for(int i=0; i<s.size(); i++) {
        a[((int)s[i])-97]=1;
    }
    for(int i=0; i<26;i++) {
        if(a[i]==1) {
            b++;
        }
    }
    if(b%2==0) {
        cout<<"CHAT WITH HER!";
    } else {
        cout<<"IGNORE HIM!";
    }
}