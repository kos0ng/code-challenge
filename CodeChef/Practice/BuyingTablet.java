import java.util.Scanner;
public class BuyingTablet{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++){
			int max=0;
			int N=sc.nextInt();
			int B=sc.nextInt();
			for(int j=0;j<N;j++){
				int W=sc.nextInt();
				int H=sc.nextInt();
				int P=sc.nextInt();
				int area=W*H;
				if(area>max && P<=B){
					max=area;
				}
			}
			if(max==0){
				System.out.println("no tablet");
			}
			else{
				System.out.println(max);
			}
		}
	}
}