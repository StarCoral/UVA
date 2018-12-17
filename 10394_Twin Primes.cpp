//uva 10394_Twin Primes
/**
	 the number of pair (prime,prime+2)
	
				2018/12/16 StarCoral
**/
#include<iostream>
#include<vector>
#define SIZE 20000000
using namespace std;

int main()
{
	vector<bool> prime(SIZE,true);
	vector<int> twinPrime;
	
	prime[0] = prime[1]=false;
	
	int i,j;
	
	for(i = 2 ; i <= SIZE ; i++)
	{
		if(prime[i])
		{
			for(j = i+i ; j < SIZE ; j+=i)
			{
				prime[j] = false;
			}
		}
		if(prime[i] && prime[i-2])
		{
			twinPrime.push_back(i-2);
		}
	}
	
	int pair;
	
	while(cin>>pair)
	{
		cout<<"("<<twinPrime[pair-1]<<", "<<twinPrime[pair-1]+2<<")\n";
	}
	
	return 0;
}
