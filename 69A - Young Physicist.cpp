#include <bits/stdc++.h>
using namespace std;
int n,x,y,z,a,b,c;
int main() {
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }
    if(x==0&&y==0&&z==0) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}