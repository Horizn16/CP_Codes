#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vi res;
    res.push_back(arr[0]);
    for (int i =1 ; i<n ; i++){
        if (arr[i]>=arr[i-1]){
            res.push_back(arr[i]);
        }
        else{
            res.push_back(arr[i]);
            res.push_back(arr[i]);
        }
    }
    cout<<res.size()<<"\n";
    for (auto i: res){
        cout<<i<<" ";
    }
    cout<<"\n";
    // Code here
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