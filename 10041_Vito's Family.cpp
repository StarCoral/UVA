//uva 10041_Vito's Family
/**
	sort and find the median
	
				2018/9/25 StarCoral
**/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n,r,s,mid,sum,i;
	vector<int> num;
		
	cin>>n;
	
	while(n--)
	{
		cin>>r;
		num.clear();
		
		for(i = 0 ; i < r ; i++)
		{
			cin>>s;
			num.push_back(s);
		}
		
		sort(num.begin(),num.end());
	
		mid = num[r/2]; 
		sum = 0;
	
		for(i = 0; i<r ;i++)
		{
			sum +=abs(num[i]-mid);
		}
		
		cout<<sum<<"\n";
	}
	return 0;
}
