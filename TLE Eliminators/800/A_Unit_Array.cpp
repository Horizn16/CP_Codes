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
    int pos =0, neg=0;
    for (int i: arr){
        if (i==1) pos++;
        else neg++;
    }
    int sum = pos-neg;
    int ops=0;
    while (sum <0 || neg&1){
        pos++;
        neg--;
        ops++;
        sum+=2;
    }
    cout<< ops <<"\n";
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