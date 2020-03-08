import java.util.Scanner;
public class FirstLast{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++){
			String N=sc.next();
			int sum=Integer.parseInt(String.valueOf(N.charAt(0)))+Integer.parseInt(String.valueOf(N.charAt(N.length()-1)));
			System.out.println(sum);
		}
	}
}