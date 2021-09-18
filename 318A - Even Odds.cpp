#include <bits/stdc++.h>
using namespace std;
long long k,n,i,a;
int main() {
    cin>>n>>k;
    if(k<=(n+1)/2) {
        cout<<k*2-1<<endl;
    } else {
        cout<<(k-(n+1)/2)*2<<endl;
    }
}
