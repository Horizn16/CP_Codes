#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n;
    cin>>n;
    vi arr(n);
    for (int i = 0; i < n; i++){
        cin>> arr[i];
    }
    // This is like the bring the largest elemnt to the end and then can reason that the n-1 is the permutation for the rest of the elements, so the same can be applied again and again,
    if (arr[0]!=1){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
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
