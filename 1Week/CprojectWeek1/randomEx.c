//#include <stdio.h>
//#include <time.h>
///*
//* ���������� �ʱ갪�� �������� ������ �����Ⱚ�� ���������,
//�ݸ鿡 ���������� �ڵ����� 0���� �ʱ�ȭ �ȴ�.
//*/
//
//// int sum; //0���� �ʱ�ȭ.
//void account(int money) {
//	static int sum=0; //��������, ������ ������ ��������
//	sum += money;
//	printf("%d ������ �հ�� %d �Դϴ�.\n", money, sum);
//}
//main() {
//	srand(time(NULL));
//	int random;
//	for (int i = 0; i < 5; i++) {
//		random = rand() % 10;
//		account(random);
//	}
//}