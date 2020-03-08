import java.util.Scanner;
public class CountingPretty{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=0;i<T;i++){
			int L=sc.nextInt();
			int R=sc.nextInt();
			int counter=0;
			for(int j=L;j<R+1;j++){
				String tmp=Integer.toString(j);
				if(tmp.charAt(tmp.length()-1)=='2' || tmp.charAt(tmp.length()-1)=='3' || tmp.charAt(tmp.length()-1)=='9'){
				counter++;
				}
			}
			System.out.println(counter);
		}
	}
}