#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a;
    long long x, y, r;
    cin>>n>>m>>a;
    x = n / a;
    y = m / a;
    if(n%a != 0) {
        ++x;
    }
    if(m%a != 0) {
        ++y;
    }
    r = x * y;
    cout<<r<<endl;
}