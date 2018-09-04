//uva 13271_Brick Walls @ACM-ICPC Dhaka Site Regional Contests :: 2017 - Dhaka 
/**  
	2 while-Loop
				2018/9/3 StarCoral
**/
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int Sr,Sc,Dr,Dc,temp;
	
	while(cin>>Sr>>Sc>>Dr>>Dc)
	{
		if(Sr == 0 && Sc ==0 && Dr == 0 & Dc == 0)
			break;
		else
		{
			int length = 0;
			
			if(Sr > Dr)		 // Sr<=Dr
			{
				temp = Sr;
				Sr = Dr;
				Dr = temp;
				
				temp = Sc;
				Sc = Dc;
				Dc = temp;
			}
			
			while(Sr<Dr)
			{
				if( (Sr%2) == (Sc%2) )
				{
					Sr++;
					length++;
				}
				else
				{
					if(Sc>Dc)
						Sc--;
					else	
						Sc++;
					length++;
				}	
				
				//cout<<"Sr: "<<Sr<<"Sc: "<<Sc<<"Dr: "<<Dr<<"Dc: "<<Dc<<"\n";
			}
			length += abs(Dc-Sc);
			cout<<length<<"\n";
		}		
	}
	return 0;	
}
