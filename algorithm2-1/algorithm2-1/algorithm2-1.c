#include <stdio.h>

int main() {

	int A[5][5] = { 0 };  //배열 A 초기화
	int V = 1;  //1~25 담고있는 변수
	int R = 0;  //행
	int C;  //열
	
	for (int i = 0; i < 4; i++) {  // 대각선 4개에 값 넣어주기
		R = i; 
		for (C = 0; C < i+1; C++) {  //행은 i행부터 감소, 열은 증가
			A[R][C] = V;
			V++;
			R--;
		}
	}

	for (int i = 0; i < 5; i++) {  // 남은 대각선 5개 값 넣어주기
		R = 4;
		for (C = i; C < 5; C++) {  //행은 4행부터 감소, 열은 증가
			A[R][C] = V;
			V++;
			R--;
		}
	}

	for (int i = 0; i < 5; i++) {  //배열 출력
		for (int j = 0; j < 5; j++)
			printf("%d\t", A[i][j]);
		printf("\n\n");
	}
	return 0;
}