#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n, x;
    cin>>n>>x;
    vi arr(n);
    for (int i=0; i< n; i++){
        cin>>arr[i];
    }
    //This is a greedy kinda, since from one point to another , see what is the difference in the fuel, ensure from one station to other, the fuel gets finished.
    int res=0;
    int last=0;
    for (int j=0; j<n ; j++){
        res=max(res,arr[j]-last);
        last=arr[j]; // Here the first point of calculation is shifted, in earlier approach, the loop concludes the difference between the distance, so can initialize the res and last as 0 , instead of res being the distance from 0 , ie the arr[0], here the edge cases are managed.
    }
    res=max(res,2*(x-arr[n-1]));
    cout<<res<<"\n";
    /*int res=0;
    for (int j=1; j<n ; j++){
        res=max(res,arr[j]-arr[j-1]);
    }
    res=max(res,2*(x-arr[n-1]));
    cout<<res<<"\n";
    For a single case, this will not run, since the j=1 ensures the loop to not run*/
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
