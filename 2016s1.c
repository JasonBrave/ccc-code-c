#include <stdio.h>
#include <string.h>

int main() {
	char in_a[105], in_b[105];
	fgets(in_a, 105, stdin);
	fgets(in_b, 105, stdin);
	int letter_count[26];
	for (int i = 0; i < 26; i++) {
		letter_count[i] = 0;
	}
	for (unsigned long i = 0; i < strlen(in_a); i++) {
		letter_count[in_a[i] - 'a']++;
	}
	int asterisk = 0, rev = 0;
	for (unsigned long i = 0; i < strlen(in_b); i++) {
		if (in_b[i] == '*') {
			asterisk++;
		} else {
			letter_count[in_b[i] - 'a']--;
		}
	}
	for (unsigned long i = 0; i < 26; i++) {
		if (letter_count[i] < 0) {
			puts("N");
			return 0;
		} else if (letter_count[i] > 0) {
			rev += letter_count[i];
		}
	}
	if (rev == asterisk) {
		puts("A");
	} else {
		puts("N");
	}
	return 0;
}
