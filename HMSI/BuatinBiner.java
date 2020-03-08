import java.util.Scanner;
public class BuatinBiner{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		// int T=sc.nextInt();
		int a=sc.nextInt();
		int b=sc.nextInt();
		int c=sc.nextInt();
		int sum=a+b;
		int[] tmp=new int[a+b];
		for(int i=0;i<a;i++){
			tmp[i]=0;
		}
		for(int i=a;i<a+b;i++){
			tmp[i]=1;
		}
		System.out.print(a+" ");
		for(int el:tmp){
				System.out.print(el);
			}
			System.out.println();
		int[] tmp2=tmp.clone();
		int counter=0;
		for(int i=0;i<c;i++){
			if(counter==b){
				System.out.print(a+" "+b+" ");
				tmp=tmp2.clone();
				System.out.print("ini ");
				for(int el:tmp){
					System.out.print(el);
				}
					System.out.println();
				tmp[sum-a]=1;
				tmp[a]=0;
				b=b-1;
				counter=0;
				a=a+1;
				tmp2=tmp.clone();
				System.out.print(a+" "+b+" ");
				for(int el:tmp){
					System.out.print(el);
				}
					System.out.println();
			}
			if(a+counter<sum){
				tmp[a+counter]=0;
			}
			if(a-1+counter>=0){
				tmp[a-1+counter]=1;	
			}
			System.out.print(a+" "+b+" "+counter+" ");
			for(int el:tmp){
				System.out.print(el);

			}
			counter++;
			System.out.println();
		}
	}
}