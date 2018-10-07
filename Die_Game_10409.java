//uva 10409_Die Game
/** 
	
				2018/10/5 StarCoral
**/
import java.util.*;
import java.lang.*;


class Die_Game_10409	//Main
{
	public static void main(String[] args)throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		
		
		int number,i;
		String way;
		
		while(sc.hasNext())
		{
			int c;
			int t = 1, n = 2, w = 3, e = 4 , s = 5, u =6;
			number = sc.nextInt();
			
			if(number == 0)
				break;
			
			for(i =0 ; i < number ; i++)
			{
				way = sc.next();
				
				switch(way)
				{
					case "north":
					{
						c = t;
						t = s;
						s = u;
						u = n;
						n = c;
						break;
					}
					case "south":
					{
						c = t;
						t = n;
						n = u;
						u = s;
						s = c;
						break;
					}
					case "east":
					{
						c = t;
						t = w;
						w = u;
						u = e;
						e = c;
						break;
					}
					case "west":
					{
						c = t;
						t = e;
						e = u;
						u = w;
						w = c;
						break;
					}
				}
			}
			System.out.println(t);
		}
	}
} 