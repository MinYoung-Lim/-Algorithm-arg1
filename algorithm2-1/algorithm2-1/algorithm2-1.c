#include <stdio.h>

int main() {

	int A[5][5] = { 0 };  //�迭 A �ʱ�ȭ
	int V = 1;  //1~25 ����ִ� ����
	int R = 0;  //��
	int C;  //��
	
	for (int i = 0; i < 4; i++) {  // �밢�� 4���� �� �־��ֱ�
		R = i; 
		for (C = 0; C < i+1; C++) {  //���� i����� ����, ���� ����
			A[R][C] = V;
			V++;
			R--;
		}
	}

	for (int i = 0; i < 5; i++) {  // ���� �밢�� 5�� �� �־��ֱ�
		R = 4;
		for (C = i; C < 5; C++) {  //���� 4����� ����, ���� ����
			A[R][C] = V;
			V++;
			R--;
		}
	}

	for (int i = 0; i < 5; i++) {  //�迭 ���
		for (int j = 0; j < 5; j++)
			printf("%d\t", A[i][j]);
		printf("\n\n");
	}
	return 0;
}