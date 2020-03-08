import java.util.Scanner;

public class LuckyFour{
	public static void main(String[] args){
		int T;
		Scanner sc = new Scanner(System.in);
		T=sc.nextInt();
		String[] numbers=new String[T];
		for(int i=0;i<T;i++){
			numbers[i]=sc.next();
		}
		for(int i=0;i<T;i++){
			int counter=0;
			for(int j=0;j<numbers[i].length();j++){
				if(numbers[i].charAt(j)=='4'){
					counter+=1;
				}
			}
		System.out.println(counter);
		}
	}
}