import java.util.*;

public class Main {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int loc[] = new int[n];
		float neighbour[] = new float[n - 2];
		for (int i = 0; i < n; i++) {
			loc[i] = in.nextInt();
		}
		Arrays.sort(loc);
		for (int i = 1; i < n - 1; i++) {
			neighbour[i - 1] = (loc[i] - loc[i - 1]) / (float)2 + (loc[i + 1] - loc[i]) / (float)2;
		}
		Arrays.sort(neighbour);
		System.out.printf("%.1f\n", neighbour[0]);
	}
}
