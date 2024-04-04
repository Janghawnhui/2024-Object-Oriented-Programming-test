#include <iostream>
using namespace std;    // 이름공간 std(standard)


int main()
{
	int i,j,k;
	int o=1;
	for (i = 0; i < 9; i++) {
		if (i < 5) {
			for (k=4-i; k > 0; k--) {
				printf(" ");
			}
			for (j = 0; j < o; j=j+1) {
				printf("*");
			}
			o = o + 2;
			printf("\n");
		}//o==11
		else {
			for (k = i; k > 4; k--) {
				printf(" ");
			}
			for (j = 0; j < o-4; j = j + 1) {
				printf("*");
			}
			o = o - 2;
			printf("\n");
		}
	}
	return 0;
}
