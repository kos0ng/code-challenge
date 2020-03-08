import java.util.Scanner;

public class TouristTrans{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int T=sc.nextInt();
		String cipher=sc.next();
		for(int i=0;i<T;i++){
			String n=sc.next();
			char[] ch = new char[n.length()];
			for(int j=0;j<n.length();j++){
				char ch2=n.charAt(j);
				int tmp=122-(int)Character.toLowerCase(ch2);
				if(tmp==27){
					ch[j]=' ';
				}
				else if(tmp<0 || tmp>25){
					ch[j]=ch2;
				}
				else{
				tmp=25-tmp;
				if(Character.isUpperCase(ch2)){
					ch[j]=Character.toUpperCase(cipher.charAt(tmp));		
				}
				else{
					ch[j]=cipher.charAt(tmp);		
				}
				
				}
			}
		String str = String.valueOf(ch);
		System.out.println(str);
		}
	}
}