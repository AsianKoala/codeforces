#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r, a, b, c;
    cin>>n;
    r = 0;
    for(int i=0; i<n; ++i) {
        cin>>a>>b>>c;
        if(a+b+c>1) {
            ++r;
        }
    }
    cout<<r;
}