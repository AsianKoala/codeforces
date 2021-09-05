#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, r, a, b;
    cin>>n>>k;
    r = 0;
    for(int i=0; i<k; i++) {
        cin>>a;
        if(a>0) {
            r++;
        }
    }
    b = a;
    for(int i=k; i<n; i++) {
        cin>>b;
        if(b==a && b>0) {
            r++;
        }
    }
    cout<<r<<endl;
}