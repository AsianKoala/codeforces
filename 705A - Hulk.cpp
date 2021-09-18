#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin>>a;
    string s;
    for(int i=0; i<a; ++i) {
        if(i%2==0) {
            s+="I hate";
        } else {
            s+="I love";
        }
        if(i<a-1) {
            s+=" that ";
        } else {
            s+=" it ";
        }
    }
    cout<<s<<endl;
}