#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n ;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    map<int, int> mp;
    for (auto a: arr){
        mp[a]++;
    }
    if (mp.size()==1){
        cout<<-1<<"\n";
    }else{
        int ele= begin(mp)->first;
        int freq= begin(mp)->second;
        
        // Now print lb and lc
        cout<< freq<<" "<<n-freq<<"\n";
        for (int i =0; i< freq ; i++){
            cout<<ele<<" ";
        }
        cout<<"\n";
        mp.erase(ele);// This is to remove the element that is in the b
        for (auto [k,v]:mp){
            for (int i=0 ;i <v; i++){
                cout<< k<<" ";
            }
        }
        cout<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    long long int t; // use them if the test cases are more than 1, else remove the while
    cin >> t;
    while (t--) solve();
}