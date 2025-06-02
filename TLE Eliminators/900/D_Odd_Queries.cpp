#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n ,q ;
    cin >> n >>q;
    vi arr(n+1);
    for (int i = 1;  i <= n; i++) {
        cin >> arr[i];
    }

    vi psum(n+1, 0);
    for (int i=1; i<=n; i++){
        psum[i]=psum[i-1]+arr[i];
    }
    while (q>0){
        int l,r,k;
        cin>> l >> r >> k;
        int res=psum[l-1]+psum[n]-psum[r]+k*(r-l+1);
        if (res&1) cout<< "YES"<<"\n";
        else cout<<"NO"<<"\n";
        q--;
    }
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