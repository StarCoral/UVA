//uva 10055_Hashmat the Brave Warrior
/**
	the input numbers <= 2^32
	
				2018/9/26 StarCoral
**/
#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	long long int a,b;
	
	while(cin>>a>>b)
	{
		cout<<abs(a-b)<<endl;
	}
	
	return 0;
}
