#include <bits/stdc++.h>
using namespace std;
int k,w,a;
long long n;
int main() {
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++) {
        a = i * k;
        n-=a;
    }
    if(n<0) {
        cout<<abs(n);
    } else {
        cout<<0;
    }
}