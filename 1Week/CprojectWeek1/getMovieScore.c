//#include <stdio.h>
//main() {
//	int ratings[3][4] = {
//		{4,6,2,9},
//		{7,8,3,7},
//		{6,9,7,6} };
//	int sum = 0;
//	//��а� 1�� ��ȭ�� ���� ���� ���
//	for (int i = 0; i < 4; i++) {
//		printf("%d \t", ratings[0][i]);
//	}
//	//��ȭ1�� ���� �� ��а����� ������ ���
//	printf("\n");
//	for (int i = 0; i < 3; i++) {
//		printf("%d \t", ratings[i][0]);
//	}
//	printf("\n\n");
//	//��ü ���
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%d \t", ratings[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");
//	//��а�2 ���� ���
//	for (int i = 0; i < 4; i++) {
//		sum += ratings[1][i];
//	}
//	printf("����:  %d\n", sum);
//	printf("���:  %.2f\n\n\n", sum/4.0); 
//	//��ȭ 4������ ������ ��� ���ϱ�
//	sum = 0;
//	for (int i = 0; i < 3; i++) {
//		sum += ratings[i][3];
//	}
//	printf("����: %d \n���: %4.2f\n", sum, sum/3.0);
//	system("pause");
// }