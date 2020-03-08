import java.util.Scanner;

public class WatScore{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++){
			int N=sc.nextInt();
			int[] tmp=new int[8];
			for(int j=0;j<N;j++){
				int x=sc.nextInt();
				if(x<9){
					int y=sc.nextInt();
					if(y>tmp[x-1]){
						tmp[x-1]=y;
					}
				}
				else{
					x=sc.nextInt();
				}
			}
			int result=0;
			for(int j=0;j<8;j++){
				result+=tmp[j];
			}
			System.out.println(result);
		}
	}
}