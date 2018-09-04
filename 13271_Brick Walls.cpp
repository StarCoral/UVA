//uva 13271_Brick Walls @ACM-ICPC Dhaka Site Regional Contests :: 2017 - Dhaka 
/**  
	recursive
				2018/9/3 StarCoral
**/
#include<iostream>
#include<math.h>
using namespace std;

int path(int Sr,int Sc,int Dr,int Dc,int length=0)
{	
	if(Sr<Dr)
	{
		if((Sr%2) == (Sc%2))
			return path(++Sr,Sc,Dr,Dc,++length);
		else
		{
			if(Sc>Dc)	
				return path(Sr,--Sc,Dr,Dc,++length);
			else
				return path(Sr,++Sc,Dr,Dc,++length);	
		}
	}
	length += abs(Dc-Sc);
	return length;
}
int main()
{
	int Sr,Sc,Dr,Dc,temp;
	
	while(cin>>Sr>>Sc>>Dr>>Dc)
	{
		if(Sr == 0 && Sc ==0 && Dr == 0 & Dc == 0)
			break;
		else
		{		
			if(Sr > Dr)		 // Sr<=Dr
			{
				temp = Sr;
				Sr = Dr;
				Dr = temp;
				
				temp = Sc;
				Sc = Dc;
				Dc = temp;
			}
			cout<<path(Sr,Sc,Dr,Dc)<<"\n";
		}		
	}
	return 0;	
}
