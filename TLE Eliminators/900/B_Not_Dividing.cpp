#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n ;
    cin >> n ;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if (arr[i]==1) arr[i]++;
    }
    for (int i=0; i< n-1; i++){
        if (arr[i+1]%arr[i] == 0){
            arr[i+1]++;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
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