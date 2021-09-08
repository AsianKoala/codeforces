#include <bits/stdc++.h>
using namespace std;
string s, t;
bool a=true;
int main() {
    cin>>s>>t;
    for(int i=0; i<s.size(); i++) {
        if(s[i]!=t[t.size()-1-i]) {
            a = false;
        }
    }
    if(a) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}