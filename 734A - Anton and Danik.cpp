#include <bits/stdc++.h>
using namespace std;
int n,a,d;
string s;
int main() {
    cin>>n>>s;
    for(int i=0; i<s.size(); i++) {
        if(s[i]=='A') {
            ++a;
        } else {
            ++d;
        }
    }
    if(a>d) {
        cout<<"Anton";
    } else if(d>a) {
        cout<<"Danik";
    } else {
        cout<<"Friendship";
    }
}