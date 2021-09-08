#include <bits/stdc++.h>
using namespace std;
string a, b = "hello";
int j, k = 0;
int main() {
    cin>>a;
    for(int i=0; i<a.size()&&k!=5; i++) {
        if(a[i] == b[j]) {
            j++;
            k++;
        }
    }
    if(k==5) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}