//#include <stdio.h>
//
//int arraySum(int sale[3][5]) {
//	int a, b;
//	int total = 0;
//	for (a = 0; a < 3; a++) {
//		for (b = 0; b < 5; b++) {
//			total += sale[a][b];
//		}
//	}
//	return total;
//}
//int main(void)
//{
//	int row, col, total = 0;
//	int sale[3][5] = { {2025,353,127,83,883},
//		{2026,354,128,84,884},
//		{2027,355,129,85,885} };
//	printf("컴퓨터\t모니터\t키보드\t마우스\t소프트웨어\n");
//	printf("==========================================\n");
//	for (row = 0; row < 3; row++)
//	{
//		for (col = 0; col < 5; col++)
//		{
//			printf("%d\t", sale[row][col]);
//		}
//		printf("\n");
//	}
//	total = arraySum(sale);
//	printf("==========================================\n");
//	printf("3년간 총매출 :%7d백만원 \n", total);
//	system("pause");
//}
