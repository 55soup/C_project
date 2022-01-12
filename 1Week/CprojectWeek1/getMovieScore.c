//#include <stdio.h>
//main() {
//	int ratings[3][4] = {
//		{4,6,2,9},
//		{7,8,3,7},
//		{6,9,7,6} };
//	int sum = 0;
//	//평론가 1이 영화에 대한 평점 출력
//	for (int i = 0; i < 4; i++) {
//		printf("%d \t", ratings[0][i]);
//	}
//	//영화1이 대한 각 평론가들의 평점을 출력
//	printf("\n");
//	for (int i = 0; i < 3; i++) {
//		printf("%d \t", ratings[i][0]);
//	}
//	printf("\n\n");
//	//전체 출력
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%d \t", ratings[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");
//	//평론가2 총점 평균
//	for (int i = 0; i < 4; i++) {
//		sum += ratings[1][i];
//	}
//	printf("총점:  %d\n", sum);
//	printf("평균:  %.2f\n\n\n", sum/4.0); 
//	//영화 4에대한 총점과 평균 구하기
//	sum = 0;
//	for (int i = 0; i < 3; i++) {
//		sum += ratings[i][3];
//	}
//	printf("총점: %d \n평균: %4.2f\n", sum, sum/3.0);
//	system("pause");
// }