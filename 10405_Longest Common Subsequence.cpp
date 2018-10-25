//uva 10405_Longest Common Subsequence
/**
	Dynamic programing
				2018/10/25 StarCoral
**/
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	string s1,s2;
	int lcs[1001];
	int i,j;
	while(getline(cin,s1))
	{
		getline(cin,s2);	
		
		for(i = 0; i<1001;i++)
			lcs[i] = 0;
		
		for(i = 1 ; i<= s1.size() ; i++)
		{
			for(j = s2.size() ; j>=1 ; j--)
			{
				if(s1[i-1] == s2[j-1])
						lcs[j] = lcs[j-1]+1;
			}

			for(j = 1 ; j <= s2.size() ; j++)
			{
				if(s1[i-1] != s2[j-1])
					lcs[j] = max(lcs[j],lcs[j-1]);	
			}
			
		}
		
		cout<<lcs[s2.size()]<<"\n";
	}
	return 0;
}
