//uva 902_Password Search
/**
	String processing 
	by map
				2018/8/27 StarCoral
**/
#include<iostream>
#include<string.h>
#include<map>
using namespace std;

int main()
{
	int N;
	string text;

	
	while(cin>>N>>text)
	{
		map<string,int> password;
	    int max = 0;
	    
		for(int i = 0 ; i+N <= text.size() ; i++)
		{
			string temp = text.substr(i,N);	     //string processing
			
			if(!password[temp])		     //count the number of equal passwords
				password[temp] = 1;
			else
				password[temp]++;	
		}
	
		for(auto &m: password)			     //m is pair structure of map
		{
			if(m.second > max)	
			{
				max = m.second;		     // map<string,int> password;
				text= m.first;		     // map<first,second>
			}
		}
	
		/**	
		map<string,int>::iterator iter;
		
		for(iter = password.begin(); iter != password.end() ; iter++)
		{
			if(iter->second > max)
			{
				max = iter->second;	
				text= iter->first;
			}
					
		}
		**/	
		
		cout <<text<<"\n";
	}	
	return 0;
}
