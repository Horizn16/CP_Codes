#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

void solve() {
    int a , b , c , d;
    cin >> a >> b >> c >> d;
    
    if (b>d) cout<< -1 << "\n";
    else{
        if (a-b+d<c) cout<< -1 << "\n";// To check if the x coord is greater than the destination
        else{
            cout<<(d-b)+(a+d-c-b)<<"\n";//The moves required to go up and left
        }
    }    
    // if (b>d){
    //     cout<<-1<<"\n";
    //     return; // Without these, the function would execute and the 1 would be printed for the test case 3
    // }
    // int mov=d-b;
    // a+=mov;
    // if (a<c){
    //     cout<<-1<<"\n";
    //     return;
    // }
    // mov+=(a-c);
    // cout<<mov<<"\n";

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