#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    int r=0;
    cin>>n;
    while(n>0) {
        if(n%10==7||n%10==4) {
            ++r;
        }
        n/=10;
    }
    if(r==4||r==7) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}