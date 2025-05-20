#include <bits/stdc++.h>

using namespace std;
// using vi = vector<int>;

void solve() {
    int n,k;
    cin>>n>>k;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<long long> copy=a;
    sort(copy.begin(),copy.end());
    // Main idea is that if the k value ==1  then the stuff has to be sorted, else cannot be done, otherwise, the bubble sort stuff will be done perfectly
    if (k!=1 || a==copy){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    long long int t;// use them if the test cases are more than 1, else remove the while
    cin >> t;
    while (t--) solve();
}