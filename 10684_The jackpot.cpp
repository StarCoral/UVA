//uva 10684_The jackpot
/**

				2018/10/26 StarCoral
**/
#include<iostream>
using namespace std;

int main()
{
	int t;
	
	while(cin>>t && t != 0)
	{
		int number[t+1] , bet[t+1] , i , max = 0;
		
		number[0] = 0;
		bet[0] = 0;
		
		for(i = 1 ; i <= t ; i ++)
		{
			cin>>number[i];
		}
		
		for(i = 1 ; i <= t ; i++)
		{
			if(bet[i-1] >= 0)
				bet[i] = bet[i-1] + number[i];
			else
				bet[i] = number[i];	
				
			if(bet[i]>max)
				max = bet[i];	
		}
		if(max==0)
			cout<<"Losing streak.\n";
		else
			cout<<"The maximum winning streak is "<<max<<".\n";	
	}
	
	return 0;
}
