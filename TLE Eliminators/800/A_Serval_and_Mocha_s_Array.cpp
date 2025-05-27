#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); } 

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool flag=false;
    for (int i=0; i<n; i++){
        for(int j=i; j<n; j++){//It is prefix, the subarrays from the start of the array, Also, since the gcd is symmetric, so the checking of the (i,j) if (j,i) is done is redundant.
            if (gcd(arr[i],arr[j])<=2){
                // cout<<"Yes"<<"\n";// This can be commented out , if printing is to be done later.
                flag=true;
                break;
            }
        }
        // if (flag) break;
    }
    if (!flag) cout<<"No"<<"\n";
    else cout<<"Yes"<<"\n";
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