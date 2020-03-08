import java.util.*;
import java.lang.*;

public class Medel{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++){
			int N=sc.nextInt();
			int[] array = new int[N];
			ArrayList<Integer> array2=new ArrayList<Integer>();
			for(int j=0;j<N;j++){
				array[j]=sc.nextInt();
				array2.add(array[j]);
			}
			Arrays.sort(array);
			int min=array[0];
			int max=array[N-1];
			if(array2.indexOf(min)<array2.indexOf(max)){
				System.out.println(min+" "+max);
			}
			else{
				System.out.println(max+" "+min);	
			}
		}
	}
}