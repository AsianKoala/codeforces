#include <bits/stdc++.h>
using namespace std;
int n,m,c;
int main() {
    vector<int> v;
    cin>>n;
    if(n==1) {
        cout<<"1";
        return 0;
    }
    for(int i=0;i<n;++i) {
        cin>>m;
        v.push_back(m);
    }
    m=1;
    for(int i=1;i<n;++i) {
        if(v[i]>=v[i-1]) {
            m++;
        } else {
            m=1;
        }
        c=max(m,c);
    }
    cout<<c<<endl;
}