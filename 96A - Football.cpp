#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int a = 1;
    bool b = false;
    for(int i=0; i<s.size(); i++) {
        if(s[i]==s[i+1]) {
            a++;
            if(a==7) {
                b = true;
            }
        } else {
            a=1;
        }
    }
    if(b) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}