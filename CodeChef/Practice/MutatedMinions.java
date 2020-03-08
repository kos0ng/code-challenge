import java.util.Scanner;
public class MutatedMinions{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++){
			int N=sc.nextInt();
			int K=sc.nextInt();
			int counter=0;
			for(int j=0;j<N;j++){
				int tmp=sc.nextInt();
				tmp+=K;
				if(tmp%7==0){
					counter++;
				}
			}
			System.out.println(counter);
		}
	}
}