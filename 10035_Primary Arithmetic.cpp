//uva 10035_Primary Arithmetic
/**
	numbers are processed sequentially from right to left 
	
				2018/9/26 StarCoral
**/
#include<iostream>

using namespace std;

int main()
{
	int n1,n2,count,sum;
	
	while(cin>>n1>>n2)
	{
		if(n1 == 0 && n2 == 0)
			break;
		
		count = 0;
		sum = 0;
		
		while( n1 != 0 || n2 != 0 )
		{
			if(sum == 0)
				sum = (n1 % 10) + (n2 % 10);
			else
				sum += (n1 % 10) + (n2 % 10);
				
			if(sum >= 10)
			{
				count++;
				sum /= 10;
			}
			else 
				sum = 0;
			
			n1 /= 10;
			n2 /= 10;
			
		
		}
		
		if(count == 0)
			cout<<"No carry operation.\n";
		else if(count == 1)
			cout<<"1 carry operation.\n";	
		else
			cout<<count<<" carry operations.\n";	
	}
	return 0;
}
