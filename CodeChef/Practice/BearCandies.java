import java.util.Scanner;
public class BearCandies{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++){
			int limak=sc.nextInt();
			int bob=sc.nextInt();
			int j=1,tmpLimak=0,tmpBob=0;
			while(true){
				tmpLimak+=j;
				++j;
				if(tmpLimak>limak){
					System.out.println("Bob");
					break;
				}
				tmpBob+=j;
				++j;
				if(tmpBob>bob){
					System.out.println("Limak");
					break;
				}
			}
		}
	}
}