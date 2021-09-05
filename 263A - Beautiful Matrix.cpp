#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, a;
    for(int i=0; i<5; ++i) {
        for(int j=0; j<5; ++j) {
            cin>>a;
            if(a==1) {
                x = j;
                y = i;
            }
        }
    }
    a = abs(2-x) + abs(2-y);
    cout<<a<<endl;
}