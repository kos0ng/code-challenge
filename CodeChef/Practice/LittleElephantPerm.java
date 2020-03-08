import java.util.Scanner;

public class LittleElephantPerm{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++){
			int N=sc.nextInt();
			int count1=0,count2=0;
			int[] tmp = new int[N];
			for(int j=0;j<N;j++){
				tmp[j]=sc.nextInt();
				if(j!=0){
					if(tmp[j-1]>tmp[j]){
						count1++;
					}
				}
			}
			for(int j=0;j<N;j++){
				for(int k=j+1;k<N;k++){
					if(tmp[j]>tmp[k]){
						count2++;
					}
				}
			}
			if(count1==count2){
				System.out.println("YES");
			}
			else{
				System.out.println("NO");
			}
		}
	}
}