import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int depth[] = new int[n];
		for (int i = 0; i < n; i++) {
			depth[i] = in.nextInt();
		}
		Arrays.sort(depth);
		for (int i = 0; i < n / 2; i++) {
			if (n % 2 == 0) {
				System.out.print(depth[n / 2 - 1 - i] + " " + depth[n / 2 + i]);
			} else {
				System.out.print(depth[n / 2 - i] + " " + depth[n / 2 + 1 + i]);
			}
			if (i != n / 2 - 1) {
				System.out.print(" ");
			}
		}
		if (n % 2 == 1) {
			if (n != 1) {
				System.out.println(" ");
			}
			System.out.print(depth[0]);
		}
		System.out.print("\n");
	}
}
