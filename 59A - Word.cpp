#include <bits/stdc++.h>
using namespace std;
int u, l;
int main() {
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++) {
        if(s[i] < 91) {
            u++;
        } else {
            l++;
        }
    }
    if(l>=u) {
        for(auto& c:s) {
            c = tolower(c);
        }
    } else {
        for(auto& c:s) {
            c = toupper(c);
        }
    }
    cout<<s<<endl;
}