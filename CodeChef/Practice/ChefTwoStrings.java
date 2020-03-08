import java.util.Scanner;

class ChefTwoStrings{
	public static void main(String[] args){
		int T;
		Scanner sc = new Scanner(System.in);
		T=sc.nextInt();
		String[] result=new String[T];
		for(int i=0;i<T;i++){
			int min=0,max=0;
			String[] tmp= new String[2];
			tmp[0]=sc.next();
			tmp[1]=sc.next();
			for(int j=0;j<tmp[0].length();j++){
				if(tmp[0].charAt(j)=='?' || tmp[1].charAt(j)=='?'){
					max+=1;
				}
				else if(tmp[0].charAt(j)!=tmp[1].charAt(j)){
					min+=1;
				}
			}
			result[i]=Integer.toString(min)+" "+Integer.toString(min+max);
		}
		for(String res : result){
			System.out.println(res);
		}
	}
}