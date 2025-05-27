#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve(){
    int n ;
    cin >> n ;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (arr[0]==arr[n-1]){
        cout<<"NO"<<"\n";
    }else{
        //Atleast 2 distinct elements
        cout<<"YES"<<"\n";
        cout<<arr[n-1]<<" "<<arr[0]<<" ";
        for (int i=1; i<n-1; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
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