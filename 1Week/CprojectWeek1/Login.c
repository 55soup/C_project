//#include <stdio.h>
//#include <Windows.h>
//
//#define SUCCESS 1
//#define FAIL 5
//
//int check(int id, int password) {
//	static int super_id = 1234;
//	static int super_password = 5678;
//	static int try_count = 0;
//
//	try_count++;
//	if (try_count > 5) {
//		printf("Ƚ�� �ʰ�\n");
//		exit(1);
//	}
//	if (id == super_id && password == super_password) return SUCCESS;
//	else return FAIL;
//}
//void main(void) {
//	int id, password, result;
//
//	while (1) {
//		printf("id:");
//		scanf_s("%d", &id);
//		printf("pass");
//		scanf_s("%d", &password);
//		result = check(id, password);
//		if (result == SUCCESS) break;
//	}
//	printf("�α��� ����\n");
//	system("pause");
//}