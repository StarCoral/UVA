//uva 10098_Generating Fast
/**
	Backtracking
				2018/10/27 StarCoral
**/
#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

void perm(int, int);

bool used[10] = {false}; //is used?
char alpha[10],ans[10];  //input ; possible anser

int main()
{
	int t,len,i;	
	
	cin>>t;
	getchar();
	
	while(t--)
	{
		gets(alpha);
		len = strlen(alpha);
			
		sort(alpha,alpha+len);
		
		perm(0,len);
		cout<<"\n";
	}
}

void perm(int start, int end)
{
	int i;
	
	if(start == end)	// it's a possible answer
	{
		for(i = 0 ; i < end ; i++)
		{
			cout<< ans[i];
		}
		cout<<"\n";
		return;
	}
	
	char last = '\0';
	
	for(i = 0; i < end ; i++)
	{
		if(!used[i] && alpha[i] != last)
		{
			last = alpha[i];
			used[i] = true;
			
			ans[start] = alpha[i];
			//cout<<"ans["<<start<<"]  = alpha["<<i<<"] = "<<alpha[i]<<"\n";
			perm(start+1,end);
			
			used[i] = false;	
		}
	}
}
