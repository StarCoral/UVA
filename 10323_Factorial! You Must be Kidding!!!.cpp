// f(n)/n = f(n-1)
// ex: f(0)/0 = f(-1) : +無限大
//    f(-1)/-1 = f(-2): -無限大

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    while(cin>>n){
       if(n<0){
           n*=-1;
           if(n&1)
              cout<<"Overflow!\n";
           else
              cout<<"Underflow!\n";
           continue; 
       } 
       if(n<=7){
           cout<<"Underflow!\n";
           continue;
       }
       if(n>13){
           cout<<"Overflow!\n";
           continue;
       }
        ll ans = 1;
        for(int i = 2 ; i <= n ; i++){
            ans *=i;
        }
        cout<<ans<<'\n';
    }
}