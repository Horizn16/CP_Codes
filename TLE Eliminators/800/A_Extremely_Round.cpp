#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

// This code actually counts the number of (digits-1)*9 + the last digit remaining, since the round numbers have only 1 digit, they are the multiples of 10. Its like the exponent of 10 is there.
void solve() {
    int n;
    cin >> n;
    
    int cnt=0;
    while(n>=10){// This ensures that the loop breaks when the n value is below the 10, the value's coefficient is found, this makes the rest of the stuff to be added, along with the exponent. Also this is made to ensure that the number once going less than 10, the remaining is added. If given to 0, the extra 9 is added. There is 9 good from 1-9; 10-99;100-999; and so on. So count from the 
        cnt+=9;
        n/=10;
    }
    cout<<cnt+n<<"\n";
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