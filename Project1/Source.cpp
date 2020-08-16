#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x;
	scanf("%d", &x);
	if (x % 2 == 0 || x % 3 == 0 || x % 5 == 0) {
		if (x == 2 || x == 3 || x == 5) {
			printf("Yes");
		}
		else if (x == 1)
			printf("No");
		else printf("No");
	}
	else printf("Yes");
}