//#include <stdio.h>
//#include <time.h>
//
////메뉴출력
//void meau() {
//	printf("랜덤함수로 하트를 그리는 프로그램\n");
//	printf("1. 프로그램실행\n");
//	printf("2. 프로그램종류\n");
//}
////하트출력
//void heart() {
//	//하트 찾기 사용자 정의 함수 : 
//	//2차원 배열(10*10), srand(), rand(), time() 함수 사용
//		//하트 비중
//		//하트 비중 : 난수 0~99ㅡㄹ 생성하여 20% 비주응로 하트 설정
//	   //그 외는 별로 그린다
//	int board[10][10] = { 0 };
//	srand((unsigned)time(NULL));
//	for (int x = 0; x < 10; x++) {
//		for (int y = 0; y < 10; y++) {
//			if (rand() % 100 < 20)  //20%의 비중으로 하트를 그린다.
//				printf("\t♡");
//			else printf("\t☆");
//		}
//		printf("\n");
//	}
//}
//main() {
//	//무한반복문, switch문, 키보드로 번호 선택
//	int op;
//	while (1) {
//		meau();
//		printf("번호를 선택하세요: ");
//		scanf_s("%d", &op);
//		switch (op) {
//		case 1:
//			heart();
//			break;
//		case 2:
//			printf("프로그램종료\n");
//			exit(0);
//		default :
//			printf("입력오류\n");
//			break;
//		}
//	}
//	system("pause");
//}