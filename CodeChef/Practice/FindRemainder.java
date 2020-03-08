import java.util.Scanner;

class FindRemainder{
	public static void main(String[] args){
		int T;
		Scanner sc=new Scanner(System.in);
		T=sc.nextInt();
		int[] answer=new int[T];
		for(int i=0;i<T;i++){
			int x=sc.nextInt();
			int y=sc.nextInt();
			answer[i]=x%y;
		}
		for(int i=0;i<T;i++){
			System.out.println(answer[i]);
		}
	}
}