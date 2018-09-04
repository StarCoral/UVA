//uva 900_Brick Wall Patterns
/**
	if n == 0 : stop
	if n <  2 : count == count[n]
	if n >  2 : count == count[n-1]+count[n-2]
	by  Fibonacci
	
				2018/8/14 StarCoral
**/
#include<iostream> 
using namespace std;


int main()
{
	int N;
	int count[51]={0,1,2};
	
	for(int i=3;i<=50;i++)
		count[i] = count[i-1]+count[i-2];
	
	while(cin>>N)
	{
		if(N == 0)
			break;
		else
			cout<<count[N]<<"\n";	
	}
	
	return 0;
}

