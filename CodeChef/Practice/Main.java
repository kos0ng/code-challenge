import java.util.Scanner;
import java.lang.Math;

class Main{
	public static void main(String[] args){
		int T;
		Scanner sc = new Scanner(System.in);
		T=sc.nextInt();
		int[] answer= new int[T];
		for(int i=0;i<T;i++){
			int tmp,tmp2,counter=0;
			tmp=sc.nextInt();
			while(tmp!=0){
				tmp2=(int)Math.floor(Math.sqrt(tmp));
				tmp2=(int)Math.pow(tmp2,2);
				tmp-=tmp2;	
				counter+=1;
			}
			answer[i]=counter;
		}
		for(int res: answer){
			System.out.println(res);
		}
	}
}