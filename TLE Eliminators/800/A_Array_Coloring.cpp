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
    // Since both the partitions are same in sum , the total sum is even, so the non even total sum array is  simply NO; OR can use the fact that the even dont change the parity from start, only odds do, so the total odds need to be even
    int odds=0;
    for (int i: arr){
        if (i%2==1) odds++;
    }
    if (odds%2==0) cout<<"YES"<<"\n";
    else cout <<"NO"<<"\n";
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