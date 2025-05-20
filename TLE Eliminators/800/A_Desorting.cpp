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
    // Code here
    if (!is_sorted(arr.begin(), arr.end())){
        cout<<0<<"\n";
    }else{
        int res=INT_MAX;
        for (int i=1; i<n ;i++){
            res=min(res,(arr[i]-arr[i-1]));
        }
        cout<<(res)/2+1<<"\n";// This is done so that for odd numbers it rounds to the upper and for the even, it stays same
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