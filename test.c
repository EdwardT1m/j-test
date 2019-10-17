#include <stdio.h>

int someFunc() {
	int i[4];
	for (int j = 0; j < 4; ++j)
	{
		printf("%d\n", j);
	}
	return 0;
}

int main() {
	int a = 10;
	someFunc();
	return 0;
}
