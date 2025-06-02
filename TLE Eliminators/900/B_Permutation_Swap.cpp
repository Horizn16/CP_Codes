#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n ;
    cin >> n ;
    vi arr(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    // gcd(a,b,c)= gcd(gcd(a,b),c)
    int res=0;
    for(int i=1; i<=n; i++){
        res=gcd(abs(arr[i]-i),res);
    }
    cout<<res<<'\n';
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