import java.util.Scanner;

public class ChangeIt{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++){
			int max=0;
			int N = sc.nextInt();
			int[] tmp=new int[N];
			for(int j=0;j<N;j++){
				tmp[j]=sc.nextInt();
			}
			for(int j=0;j<N;j++){
				int counter=0;
				for(int k=0;k<N;k++){
					if(tmp[k]==tmp[j]){
						counter+=1;
					}
				}
				if(counter>max){
					max=counter;
				}
			}
		System.out.println(N-max);
		}
	}
}