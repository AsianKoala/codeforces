#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int a=1;
    string b,c;
    cin>>n;
    if(n==0) {
        cout<<0;
        return 0;
    }
    cin>>c;
    for(int i=1; i<n; i++) {
        cin>>b;
        if(b!=c) {
            ++a;
        }
        c=b;
    }
    cout<<a;
}