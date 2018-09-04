//uva 902_Password Search
/**
	String processing 
	by vector
				2018/8/21 StarCoral
**/
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int main()
{
	int N;
	string text;

	while(cin>>N>>text)
	{
		int text_length = text.length();	
		vector<string> password;         //Possible passwords		
		int f[text_length]={0};          //The frequency of possible passwords
		int max = 0;					 //max frequency
		int i;
		
		for(i = 0 ; i+N <= text_length ; i++)
		{
			password.push_back(text.substr(i,N));     //string processing 
			
			for(int j = 0 ; j < i ; j++)
			{
				if(password[j]==password[i])         //count the number of equal passwords
					f[j]++;			
			}	
		}
		
		for(int j = 0; j < i ; j++)
		{
			if(f[j]>max)
					max = j;	
		}
		
		cout<<password[max]<<"\n";		
	}	
}
 
