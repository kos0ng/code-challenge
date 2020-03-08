import java.lang.Math;
import java.util.Scanner;
class FindSquareRoot{
	public static void main(String[] args){
		int T;
		Scanner sc=new Scanner(System.in);
		T=sc.nextInt();
		int[] answer = new int[T];
		for(int i=0;i<T;i++){
			double tmp=sc.nextDouble();
			answer[i]=(int)Math.floor(Math.sqrt(tmp));
		}
		for(int i=0;i<T;i++){
			System.out.println(answer[i]);
		}
	}
}