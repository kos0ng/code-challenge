import java.util.Scanner;
public class PeakFinding{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++){
			int max=0;
			int N=sc.nextInt();
			for(int j=0;j<N;j++){
				int tmp=sc.nextInt();
				if(tmp>max){
					max=tmp;
				}
			}
			System.out.println(max);
		}
	}
}