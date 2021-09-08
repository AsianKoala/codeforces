#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    bool a=false;
    cin>>s;
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9') {
            a = true;
        }
    }
    if(a) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}