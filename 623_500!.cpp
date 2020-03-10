#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 1005;
int f[maxn]={};

int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);

    int n;

    while(cin>>n){
        
        int len = 1; // default size = 1
        f[0] = 1; // 1!=1
        
        for(int i = 2 ; i <= n ; i++){ 
            int carry = 0; 
            for(int j = 0 ; j < len ; j++){
                int t = f[j]*i+carry;
                f[j] = t % 1000000;
                carry = t/1000000;
            }
            if(carry)
                f[len++] = carry;
        }   
        cout<<n<<"!\n";
        cout<<f[len-1];
        for(int i = len-2 ; i>=0 ; i--){
            printf("%06d",f[i]);
        }
        cout<<"\n";
    }


}
