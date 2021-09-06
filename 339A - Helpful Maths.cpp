#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++) {
        if(s[i]!='+') {
            int c = s[i] - '0';
            v.push_back(c);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size()-1;i++) {
        cout<<v[i]<<"+";
    }
    cout<<v[v.size()-1]<<endl;
}