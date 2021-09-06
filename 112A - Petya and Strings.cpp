#include <bits/stdc++.h>
using namespace std;

void tolower(string& s) {
    for(auto& c:s) {
        c = tolower(c);
    }
}

int main() {
    string a, b;
    cin>>a>>b;
    tolower(a);
    tolower(b);
    if(a>b) {
        cout<<1;
    } else if(a==b) {
        cout<<0;
    } else {
        cout<<-1;
    }
}