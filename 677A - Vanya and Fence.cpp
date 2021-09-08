#include <bits/stdc++.h>
using namespace std;
int n, h, a, b;
int main() {
    cin>>n>>h;
    for(int i=0; i<n; i++) {
        cin>>a;
        ++b;
        if(a>h) {
            ++b;
        }
    }
    cout<<b;
}