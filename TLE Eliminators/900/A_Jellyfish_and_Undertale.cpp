#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int a , b, n ;
    cin >> a >> b >> n ;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long res = b; 

    for (int i = 0; i < n; i++) {
        res += min(arr[i], a - 1);// For this either the time increases by x_i or a-1
    }
    
    cout << res << "\n";
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
