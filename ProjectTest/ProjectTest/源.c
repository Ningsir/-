#include<stdio.h>
#define N 44
void HanoiTower(int n, char A, char B, char C);
int fibo(int n);
int main() {
	int num = fibo(N);
	printf("%d\n", num);
	//HanoiTower(8, 'A', 'B', 'C');
	//printf("%d",(1 << N) * (1 << N));
	getchar();
	return 0;
}

int fibo(int n) {
	if (1 == n || 2 == n) {
		return 1;
	}
	else {
		return fibo(n - 1) + fibo(n - 2);
	}
}

void HanoiTower(int n , char A, char B, char C) {
	if (1 == n) {
		printf("%c->%c\n", A, C);
	}
	else {
		HanoiTower(n - 1, A, C, B);
		printf("%c->%c\n", A, C);
		HanoiTower(n - 1, B, A, C);
	}
}