#include <bits/stdc++.h>
using namespace std;
int n,a,s;
int main() {
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a;
        s+=a;
    }
    cout<<s/(1.0*n)<<endl;
}