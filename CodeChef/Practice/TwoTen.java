import java.util.Scanner;
public class TwoTen{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++){
			int N=sc.nextInt();
			int counter=0;
			if(N%5!=0){
				System.out.println("-1");
			}
			else{
				while(N%10!=0){
					N*=2;
					counter++;
				}
				System.out.println(counter);
			}
		}
	}
}