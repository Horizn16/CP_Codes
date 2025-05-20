#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int n;
    cin >> n;
    
    vector<ll> arr(n);
    ll sum = 0;
    ll best = numeric_limits<ll>::min(); 
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum = max(arr[i], sum + arr[i]);
        best = max(best, sum);
    }
    
    cout << best << endl;
    return 0;
}
