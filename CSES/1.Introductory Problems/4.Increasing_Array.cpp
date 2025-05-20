#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    /*This is to make the next number if smaller , as equal to the just previous number*/
    int n;
    cin>> n;
    ll mx=0;
    ll res=0;
    for (int i=0 ; i<n; i++){
        ll a;
        cin>>a;
        mx=max(mx,a);
        res+=(mx-a);
    }
    cout<<res;
}