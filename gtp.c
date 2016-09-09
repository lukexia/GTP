#include <stdio.h>
#include <stdlib.h>

int get_int(void)
{
	int input;
	char ch;

	while (scanf("%d", &input) != 1) {
		while ((ch = getchar()) != '\n') putchar(ch);
		printf(" is not an integer.\n");
	}
	return input;
}

int main(int argc, char* argv[])
{
	int P = 0, T = 0, G = 0;
	int total, feet, tails;
	int _;

	printf("%d\n", argc);
	for (int i = 1; i < argc; i++) printf("argv[%d] = %s\n", i, argv[i]);
	if ((argc != 4) || 
		((total = atoi(argv[1])) < 0) ||
		((feet = atoi(argv[2])) < 0) ||
		((tails = atoi(argv[3])) < 0)) {
		printf("total: ");
	   	total = get_int();
		printf("feet: ");
	   	feet = get_int();
		printf("tails: ");
	   	tails = get_int();
	}

	_ = feet - 2 * tails - 2 * total;

	if ((_ >= 0) && ((_ % 6)) == 0) {
		P = _ / 6;
		T = tails;
		G = total - T - P;
	}
	printf("%d\n%d\n%d\n", P, T, G);

	return 0;
}
