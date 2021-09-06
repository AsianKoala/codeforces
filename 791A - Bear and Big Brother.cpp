#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main() {
    cin>>a>>b;
    while(a<=b) {
        a*=3;
        b*=2;
        c++;
    }
    cout<<c;
}