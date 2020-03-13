#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int a,b,c,s;
    while(cin>>s>>a>>b>>c){
        if(a==0 && b==0 && c==0 && s==0)
            return 0;
        int ans = 1080;

        ans += ((s-a)+40)%40*9;
        ans += ((b-a)+40)%40*9;
        ans += ((b-c)+40)%40*9;
        cout<<ans<<'\n';
    }

}