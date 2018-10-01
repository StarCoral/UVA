//uva 10222_Decode the Mad man
/**
	the key point is "throws java.lang.Exception"
	
				2018/10/2 StarCoral
**/
import java.util.*;
import java.lang.*;

class Decode_the_Mad_man_10222
{
	public static void main(String[] args)throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		
		
		String keyboard="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
		int i,k;
		
		while(sc.hasNext())
		{
			String code;
			code = sc.nextLine().toLowerCase();
			
			
			for(i = 0 ; i < code.length() ; i++)
			{
				k = keyboard.indexOf(code.charAt(i));
				
				if( k != -1 )
					System.out.print(keyboard.charAt(k-2));
				else
					System.out.print(code.charAt(i));
			}
			System.out.println();
		}
		
	}
}
