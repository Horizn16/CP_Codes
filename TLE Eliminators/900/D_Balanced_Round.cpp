#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n ,k;
    cin >> n >>k;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int temp=1;// This is to ensure that the longest size starts with 1 element.
    int res=1;// And at the end, will try to save one element in the end
    for (int i=1; i<n; i++){
        if ((arr[i]-arr[i-1])<=k){
            res++;
            temp=max(res, temp);
        }else{
            res=1;
        }
    }
    cout<<n-temp<<"\n";// Since atleast 1 element is needed for making a question.
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