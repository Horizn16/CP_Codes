#include <bits/stdc++.h>

using namespace std;
using vi = vector<long long>;

void solve() {
    int n, k;
    cin>> n;
    vi arr(n);
    for (int i = 0; i < n; i++){
        cin>> arr[i];
    }
    // See, here the a[1]=a[3]... and even same, and if the n is odd then the odds are more than 1, and even then all same, also there has to be 2 unique elements.
    // Make a hashmap
    bool flag= true;
    unordered_map<int,int> mp;
    for (int i=0; i<n; i++){
        mp[arr[i]]++;
        if (mp.size()>2){
            flag=false;
            cout<<"No"<<"\n";

            break;
        }
    }
    if (mp.size()==2){
        int first=begin(mp)->second;
        if (first != n/2 && first !=(n+1)/2){
            flag=false;
            cout<<"No"<<"\n";

        }
    }
    if (flag) cout<<"Yes"<<"\n";
    // else cout<<"No"<<"\n";

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

