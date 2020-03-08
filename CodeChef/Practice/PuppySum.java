import java.util.Scanner;

public class PuppySum{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int T= sc.nextInt();
		for(int i=0;i<T;i++){
			int D=sc.nextInt();
			int N=sc.nextInt();
			for(int j=0;j<D;j++){
				N=jum(N);
			}
			System.out.println(N);
		}
	}
	public static int jum(int N){
		int res=0;
		for(int i=1;i<=N;i++){
			res+=i;
		}
		return res;
	}
}