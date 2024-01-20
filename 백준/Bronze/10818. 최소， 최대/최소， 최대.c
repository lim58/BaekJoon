#include <stdio.h>

int main() {

	int N, num, min=1000000, max=-1000000;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		if (num < min) min = num;
		if (num > max) max = num;
	}
	printf("%d %d", min, max);
	
	return 0;
}