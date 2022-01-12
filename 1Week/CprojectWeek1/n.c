//#include <stdio.h>
//
////함수 바깥에 선언하면 전역변수 = 자바의 static 변수와 같음.
//void main() {
//	int count = 0; 
//	printf("count = %d\n", count); //0
//	int sub();
//	{
//		int count = 20; //지역변수
//		printf("count=%d\n", ++count); //21
//	}
//	printf("count=%d\n", ++count); //1
//	system("pause");
//}