//uva 10394_Twin Primes
/**
	 the number of pair (prime,prime+2)
	
				2018/12/16 StarCoral
**/
#include<iostream>
#include <string.h>
#include<vector>
#define SIZE 20000001

using namespace std;

struct twin
{
	int x,y;
	
	twin(){}
	twin(int xx,int yy)
		:x(xx),y(yy)
	{
	}
};

int main()
{
	bool prime[SIZE];
	memset(prime,true,sizeof(prime));
	prime[0] = prime[1]=false;
	
	int i,j;
	
	for(i = 2 ; i < SIZE ; i++)
	{
		if(prime[i])
		{
			for(j = i*i ; j < SIZE ; j+=i)
			{
				prime[j] = 0;
			}
		}
	}
	
	vector<twin>twinPrime;
	for(i = 3 ; i < SIZE-2 ; i++)
	{
		if(prime[i] && prime[i+2])
			twinPrime.push_back(twin(i,i+2));
	}
	
	int pair;
	
	while(cin>>pair)
	{
		cout<<"("<<twinPrime[pair-1].x<<", "<<twinPrime[pair-1].y<<")\n";
	}
	
	return 0;
}
