#include <bits/stdc++.h>
 
using namespace std;
using vi = vector<int>;
 
void solve() {
    int n, k ,x;
    cin >> n >> k>>x;
    // vi arr(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }
    if (x != 1){
        cout<<"YES"<<"\n";
        cout<<n<<"\n";
        for (int i=0 ; i< n; i++){
            cout<< 1 << " ";
        }
        cout<<"\n";
    }else{// This is for the k vales >=2.
        if (k==1) cout << "NO" << "\n";//If for 6 1 1 this will lead to error , for the last decision, it is if x=1 and k>1, so the else is needed.
        else{if ( n%2==0){
                cout << "YES" <<"\n";
                cout << n/2 <<"\n";
                for (int i=0; i <n/2; i++){
                    cout<< 2 << " ";
                }
                cout<<"\n";
            }else{// This can be written as 2*(floor(n/2)-1)+3 any odd number
                if (k>=3){
                    cout <<"YES"<<"\n";
                    cout << n/2 <<"\n";// If 1 was allowed, it would give n/2+1 total numbers, since 3 is allowed, it gives n/2 as whole
                    for (int i=0; i <n/2-1; i++){
                        cout<< 2 << " ";
                    }
                    cout<<3<<"\n";
                }else{// When the k value is lesser than 3, since we use 1, so 3 is necessary
                    cout<<"NO"<<"\n";
                }
            }
        }
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