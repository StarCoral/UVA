#include<bits/stdc++.h>
using namespace std;
#define ll long long

char v[256][256];

void init( int n, int m){
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            v[i][j] = 'O';
}

void fill(int n , int m, int y, int x, char s , char t){
    if(y < 1 || y > n || x < 1 || x > m || v[y][x] != s) 
		return;
    v[y][x] = t;
    fill(n, m, y, x+1, s, t);
	fill(n, m, y, x-1, s, t);
	fill(n, m, y+1, x, s, t);
	fill(n, m, y-1, x, s, t);

}
int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    char c;
    while(cin>>c){
        int m,n,x,y,x2,y2;
        char color;
        string Name;
        
        if(c == 'X'){
            return 0;
        }else if(c == 'I'){
            cin>>m>>n;
            init(n,m);
        }else if(c == 'C'){
            init(n,m);
        }else if(c == 'L'){
            cin>>x>>y>>color;
            v[y][x] = color;
        }else if(c == 'V'){
            cin>>x>>y>>y2>>color;
            if(y > y2) swap(y,y2);
            for(int i = y ; i <= y2 ; i++){
                v[i][x] = color;
            }
        }else if(c == 'H'){
            cin>>x>>x2>>y>>color;
            if(x > x2) swap(x,x2);
            for(int i = x ; i <= x2 ; i++){
                v[y][i] = color;
            }
        }else if(c == 'K'){
            cin>>x>>y>>x2>>y2>>color;
            if(y > y2) swap(y,y2);
            if(x > x2) swap(x,x2);

            for(int i = y ; i <= y2 ; i++){
                for(int j = x ; j <= x2 ; j++){
                    v[i][j] = color;
                }
            }

        }else if(c == 'F'){
            cin>>x>>y>>color;
            if(v[y][x] != color)
                fill(n,m,y,x,v[y][x],color);
        }else if(c == 'S'){
            cin>>Name;
            cout<<Name<<'\n';
            for(int i = 1 ; i <= n ; i++){
                for(int j = 1 ; j <= m ; j++){
                    cout<<v[i][j];
                }
                cout<<'\n';
            }
        }else{

        }

    }

}