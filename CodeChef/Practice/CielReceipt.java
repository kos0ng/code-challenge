import java.util.Scanner;
public class CielReceipt{
	public static void main(String[] args){
		int[] prices=new int[]{2048,1024,512,256,128,64,32,16,8,4,2,1};
		Scanner sc = new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++){
			int N=sc.nextInt();
			int counter=0;
			while(N!=0){
				for(int j=0;j<prices.length;j++){
					if(prices[j]<=N){
						N-=prices[j];
						counter++;
						break;
					}
				}
			}
			System.out.println(counter);
		}
	}
}