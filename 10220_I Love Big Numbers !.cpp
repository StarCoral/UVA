#include<bits/stdc++.h>
using namespace std;

int f[1005] = {};
int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int n; 
    while(cin>>n){
        f[0]=1;
        int len = 1,ans = 0;
        for(int i = 2 ; i <= n ; i++){
            int c = 0;
            for(int j = 0 ; j < len ; j++){
                int tem = f[j]*i+c;
                f[j] = tem%1000000;
                c = tem/1000000;
            }
            if(c)
                f[len++] = c;
        }

        for(int i = len-1 ; i >=0 ; i--){
            int tem = f[i];
            while(tem){
                ans+=(tem%10);
                tem/=10;
            }
        }
        cout<<ans<<'\n';
    }
}