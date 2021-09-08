#include <bits/stdc++.h>
using namespace std;
int n,p,q,a;
int main() {
    cin>>n;
    while(n--) {
        cin>>p>>q;
        if(q-p>=2) {
            ++a;
        }
    }
    cout<<a;
}