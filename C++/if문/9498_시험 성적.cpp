#include<cstdio>

int main() {
	int a;
	scanf("%d", &a);

	if (a >= 90 && a <= 100)
		printf("%c", 'A');
	else if (a >= 80 && a <= 90)
		printf("%c", 'B');
	else if (a >= 70 && a <= 80)
		printf("%c", 'C');
	else if (a >= 60 && a <= 70)
		printf("%c", 'D');
	else
		printf("%c", 'F');

	return 0;
}