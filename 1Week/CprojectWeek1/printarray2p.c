//#include <stdio.h>
//#include <time.h>
//
////�޴����
//void meau() {
//	printf("�����Լ��� ��Ʈ�� �׸��� ���α׷�\n");
//	printf("1. ���α׷�����\n");
//	printf("2. ���α׷�����\n");
//}
////��Ʈ���
//void heart() {
//	//��Ʈ ã�� ����� ���� �Լ� : 
//	//2���� �迭(10*10), srand(), rand(), time() �Լ� ���
//		//��Ʈ ����
//		//��Ʈ ���� : ���� 0~99�Ѥ� �����Ͽ� 20% �������� ��Ʈ ����
//	   //�� �ܴ� ���� �׸���
//	int board[10][10] = { 0 };
//	srand((unsigned)time(NULL));
//	for (int x = 0; x < 10; x++) {
//		for (int y = 0; y < 10; y++) {
//			if (rand() % 100 < 20)  //20%�� �������� ��Ʈ�� �׸���.
//				printf("\t��");
//			else printf("\t��");
//		}
//		printf("\n");
//	}
//}
//main() {
//	//���ѹݺ���, switch��, Ű����� ��ȣ ����
//	int op;
//	while (1) {
//		meau();
//		printf("��ȣ�� �����ϼ���: ");
//		scanf_s("%d", &op);
//		switch (op) {
//		case 1:
//			heart();
//			break;
//		case 2:
//			printf("���α׷�����\n");
//			exit(0);
//		default :
//			printf("�Է¿���\n");
//			break;
//		}
//	}
//	system("pause");
//}