#include <bits/stdc++.h>
using namespace std;
int main() {
    vector <pair<string,int> > v(3);
    v[0].first="srijon";
    v[0].second=25;
    v[1].first="mahdin";
    v[1].second=23;
    v[2].first="moon";
    v[2].second=24;
    
    for(int i=0;i<v.size();i++) {
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
    return 0;
}