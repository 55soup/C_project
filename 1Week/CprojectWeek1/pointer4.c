#include <stdio.h>
#include <time.h>

main() {
	/*char *pc;
	char aa = 'a';
	pc = &aa;
	printf("pc=%c\n", *pc);
	pc = (char*)10000;
	printf("pc=%d\n", pc);
	pc++;
	printf("pc=%d\n", pc);
*/

	int* pi;
	pi = (int*)10000;
	printf("%d\n", pi); //10000
	pi++;
	printf("%d\n", pi); //10004

	system("pause");
}