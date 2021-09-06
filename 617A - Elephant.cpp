#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, a;
    cin>>x;
    a = x/5;
    if(x%5!=0) {
        a++;
    }
    cout<<a;
}