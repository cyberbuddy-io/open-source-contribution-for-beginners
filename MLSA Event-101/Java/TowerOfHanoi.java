package recursion;

public class TowerOfHanoi {
	static int p=1;
	
	static void toh(int n, String src, String dest, String helper) {
		if(n==0) {
			return;
		}
		toh(n-1, src, helper, dest);
		System.out.println(p++ +") Move Disc "+n+" from "+src+" to "+dest);
		toh(n-1, helper, dest, src);
	}

	public static void main(String[] args) {
		int n = 3;
		toh(n,"src","dest","helper");
	}

}
