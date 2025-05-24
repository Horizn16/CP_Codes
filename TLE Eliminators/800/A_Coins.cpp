#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    long long n, k;
    cin >> n >> k;
    if (n%2 == 0 || (n-k)%2==0){// 2x=n-ky, so the RHS has to be even, so comes n being even OR odd., and smartly choosing the values of y to give the best results.
    // This was the earlier one (n%k)%2 == 0 || (n%2)%k==0, not correct, i guess the % makes the most use of the k and 2, so this is not always correct, so the division and the substraction, may be the best ones, I guess.
    // Now, if n is not even, it is odd, so for the RHS to be even, the k has to be odd, so the stuff; for even, y=0, else y=1.
        cout<<"YES"<<"\n";
    }else cout<<"NO"<<"\n";
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