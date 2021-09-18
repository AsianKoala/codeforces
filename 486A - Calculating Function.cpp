#include <bits/stdc++.h>
using namespace std;
long long n,a;
int main() {
    cin>>n;
    if(n%2==0) {
        cout<<n/2<<endl;
    } else {
        cout<<(n+1)/-2<<endl;
    }
}