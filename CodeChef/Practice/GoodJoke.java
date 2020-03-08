import java.util.Scanner;
public class GoodJoke{
	public static void main(String args[]){
		int T;
		Scanner sc = new Scanner(System.in);
		T=sc.nextInt();
		int[] answer = new int[T];
		for(int i=0;i<T;i++){
			int tmp=0;
			int N=sc.nextInt();
			for(int j=1;j<N+1;j++){
				sc.nextInt();
				sc.nextInt();
				tmp^=j;
			}
			answer[i]=tmp;
		}
		for(int i=0;i<T;i++){
			System.out.println(answer[i]);
		}
	}
}