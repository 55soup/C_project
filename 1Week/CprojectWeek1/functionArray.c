//#include <stdio.h>
//
//int arraySum(int score[], int size) {
//	int i, total = 0;
//	printf("ÃÑÁ¡°ú Æò±ÕÀ» ±¸ÇÕ´Ï´Ù\n");
//	for (i = 0; i < size; i++) {
//		total += score[i];
//	}
//	return total;
//}
//int main(void) {
//	int score[] = { 90, 82, 100, 85, 81 };
//	int sum = 0; 
//	double avg;
//	int size = sizeof(score) / sizeof(score[0]);
//	sum = arraySum(score, size);
//
//	avg = sum / (float)size;
//	printf("ÃÑÁ¡Àº %d Æò±ÕÀº %3.2f\n", sum, avg);
//	system("pause");
//}