import java.util.*;

public class Main {
	public static void main(String args[]) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int table[][] = new int[n][n];
		boolean table_correct = true;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				table[i][j] = in.nextInt();
			}
		}
		while (true) {
			table_correct = true;
			table = rotate_array(table, n);
			for (int i = 0; i < n - 1; i++) {
				if (!(table[0][i] < table[0][i + 1])) {
					table_correct = false;
				}
			}
			for (int i = 0; i < n - 1; i++) {
				if (!(table[i][0] < table[i + 1][0])) {
					table_correct = false;
				}
			}
			if (table_correct) {
				// print table
				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n - 1; j++) {
						System.out.print(table[i][j] + " ");
					}
					System.out.println(table[i][n - 1]);
				}
				break;
			}
		}
	}

	// rotate array clockwise
	public static int[][] rotate_array(int[][] t, int n) {
		int new_t[][] = new int[n][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				new_t[n - 1 - j][i] = t[i][j];
			}
		}
		return new_t;
	}
}
