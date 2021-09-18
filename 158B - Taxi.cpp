#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,taxi=0;
    cin>>n;
    vector<int> v;

    for(int i=0; i<n; i++) {
        cin>>taxi;
        v.push_back(taxi);
    }
    taxi = 1;
    sort(v.begin(),v.end());
    int i=v.size()-1;
    int k=0;
    while(k!= i){
        if(v[i]+v[k]<=4) {
            v[i]+=v[k];
            k++;
        } else {
            taxi++;
            i--;
        }
    }
    cout<<taxi<<endl;
}