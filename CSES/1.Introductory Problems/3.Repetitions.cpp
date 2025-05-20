#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin>> s; 
    ll res=0, maxi=1;
    char l = 'A';
    for (char d :s){
        if (d==l){
            ++res;
            maxi=max (maxi,res);
        }
        else{
            l=d;
            res=1;
        }
    }
    cout<<maxi;
}