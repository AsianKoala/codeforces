#include <bits/stdc++.h>
using namespace std;
int n,a,b;
int main() {
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>a;
        if(a==1) {
            b++;
        }
    }
    if(b==0) {
        cout<<"EASY";
    } else {
        cout<<"HARD";
    }
}