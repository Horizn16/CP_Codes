#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    long long int n;
    cin >> n;
    cout<< -1*(n-1) << " " << n << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long int t;// use them if the test cases are more than 1, else remove the while
    cin >> t;
    while (t--) solve();
}