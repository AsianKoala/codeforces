#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    string s;
    cin>>n;
    x = 0;
    for(int i=0; i<n; ++i) {
        cin>>s;
        if(s[0]=='+' || s[2]=='+') {
            ++x;
        } else {
            --x;
        }
    }
    cout<<x;
}