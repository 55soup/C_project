//#include <stdio.h>
//#include <time.h>
///*
//* 지역변수는 초깃값을 지정하지 않으면 쓰레기값이 저장되지만,
//반면에 전역변수는 자동으로 0으로 초기화 된다.
//*/
//
//// int sum; //0으로 초기화.
//void account(int money) {
//	static int sum=0; //정적변수, 엄밀히 따지면 지역변수
//	sum += money;
//	printf("%d 현재의 합계는 %d 입니다.\n", money, sum);
//}
//main() {
//	srand(time(NULL));
//	int random;
//	for (int i = 0; i < 5; i++) {
//		random = rand() % 10;
//		account(random);
//	}
//}