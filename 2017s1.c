#include <stdio.h>
int main() {
	int n, k = 0;
	int sw = 0, se = 0;
	scanf("%d\n", &n);
	int score[n][2];
	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i][0]);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i][1]);
	}
	for (int i = 0; i < n; i++) {
		sw += score[i][0];
		se += score[i][1];
		if (sw == se) {
			k = i + 1;
		}
	}
	printf("%d\n", k);
	return 0;
}
