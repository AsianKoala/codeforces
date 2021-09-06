#include <bits/stdc++.h>
using namespace std;
int n,a;
string s;
int main() {
    cin>>n>>s;
    for(int i=0; i<s.size()-1; i++) {
        if(s[i]==s[i+1]) {
            a++;
        }
    }
    cout<<a;
}