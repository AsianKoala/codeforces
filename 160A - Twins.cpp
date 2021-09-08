#include <bits/stdc++.h>
using namespace std;
int b,c,d,n;
int main() {
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>b;
        a.push_back(b);
        c+=b;
    }
    b=0
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for(int i=0; i<n; i++) {
        if(d <= c/2) {
            d+=a[i];
            b++;
        }
    }
    cout<<e;
}