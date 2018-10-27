//uva 10700_Camel trading 
/**
	min: First multiply , Last add 
	max: First add 		, Last multiply
				2018/10/26 StarCoral
**/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int t , i;
	char line[100];
	
	cin>>t;
	getchar();
	
	while(t-- >0 )
	{
		gets(line);
		//cout<< line;
		
		int num[12] = {0} , len = strlen(line) , opcount = 0;
		char op[12] ;
		long max = 1 , min = 0 , temp;
		
		opcount = 0;
		for(i = 0 ; i < len ; i++)
		{
			if(line[i] == '+' || line[i] == '*')
				op[++opcount] = line[i];
			else  //ex.12 = 1*10 + 2 ; ascii 0 -> 48
				num[opcount] = num[opcount] * 10 + line[i] - '0';	
		} 
		
		//max
		temp = num[0];
		for(i = 1 ; i <= opcount ; i++)
		{
			if(op[i]=='+')
				temp += num[i];
			else
			{
				max *= temp;
				temp = num[i];
			}
			
	
		}
		
		if(temp > 0)
			max *= temp;
			
		//min
		temp = num[0];
		for(i = 1 ; i <= opcount ; i++)
		{
			if(op[i] == '*')
				temp *= num[i];
			else
			{
				min += temp;
				temp = num[i];	
			}	
		
		}
		
		if(temp > 0)
			min += temp;
		
		cout<<"The maximum and minimum are "<<max<<" and "<<min<<".\n";	
	}
	
	return 0;
}
