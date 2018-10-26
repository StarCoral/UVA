//uva 10608_Friends
/**
	disjoint set
				2018/10/26 StarCoral
**/
#include<iostream>
#define Max_N 300002

using namespace std;

int set[Max_N] , people[Max_N];

void union_set(int a, int b, int N)
{
	if(set[a] != set[b])
	{
		int A = set[a]  , B = set[b] , i ; 
		
		people[set[b]] = 0;			
		
		for(i = 1; i <=N ; i++)
		{
			if(set[i] == B)
			{
				set[i] = A;
				people[set[a]]++;
			}
		}
	}
}

int main()
{
	int t,M,N,A,B,i, max = 0 ;
	
	cin>> t;
	
	while(t-- > 0)
	{
		cin>>N>>M;
		
		//initial: one people -> one set
		for(i = 0 ; i <= N ; i++)
		{
			set[i] = i;
			people[i] =1;
		}
		
		 
		for(i = 0 ; i < M ; i++)
		{
			cin>>A>>B;
			
			union_set(A,B,N);
		}
		
		max = 0;
		for(i = 1 ; i <= N ; i++)
		{
			if(people[i] > max)
				max = people[i];
		}
		
		cout<<max<<"\n";	
	}
	return 0;
}
