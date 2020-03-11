//10000以內，5^5 = 3125最多可以影響後5位，故保留後5位就好
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);

    int n;
    while(cin>>n){
        int ans=1;
        for(int i = 1; i <=n ; i++){
            ans *=i;
            while(ans%10 == 0){
                ans/=10;
            }
            ans %= 100000;
        }
        printf("%5d -> %d\n",n,ans%10);
    }
}