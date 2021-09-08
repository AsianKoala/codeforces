#include <bits/stdc++.h>
using namespace std;
int n,a,b,c,m;
int main() {
    cin>>n;
    for(int i=0; i<n; ++i) {
        cin>>a>>b;
        c+=(b-a);
        m = max(m, c);
    }
    cout<<m;
}