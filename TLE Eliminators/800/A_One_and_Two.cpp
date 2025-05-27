#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int n ;
    cin >> n ;
    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool flag=false;
    int r_cnt= count(arr.begin(),arr.end(),2);// alt of for loop
    int l_cnt=0;
    for (int i=0; i<n ; i++){
        if (arr[i]==2){
            r_cnt--;
            l_cnt++;
        }
        if (r_cnt==l_cnt){
            cout<<i+1<<"\n";
            flag=true;
            break;
        }
    }
    if (!flag) cout<<-1<<"\n";
}
/*
This code ensures that if there is no 2s too ,it gives the answer.
void solve(){
    int n;
    cin >> n;
 
    vector<int> a(n);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 2) cnt++;
    }
 
    if(cnt % 2 == 1){
        cout << "-1\n";
        return;
    }
 
    int x = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 2) x++;
        if(x == cnt / 2){
            cout << i + 1 << "\n";
            return;
        }
    }
}
*/
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