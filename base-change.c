#include <stdio.h>
#include <math.h>

int main() {

	int i, base_of_num, input_num, decimal = 0, num_of_digits;

	printf("2~10進数→10進数変換プログラム\n");
	printf("数字を入力してください。＞");
	scanf("%d", &input_num);
	while(getchar() != '\n') { }
	printf("変換する数字の進数を入力してください。＞");
	scanf("%d", &base_of_num);
	while(getchar() != '\n') { }

	for(i = 0;;++i) {
		if(input_num % (int)pow(10, i) == input_num) {
			num_of_digits = i;
			break;
		}
	}

	for(i = 0;i < num_of_digits;i++) {
		decimal += (((input_num % (int)pow(10, i + 1)) - (input_num % (int)pow(10, i))) / pow(10, i)) * pow(base_of_num, i);
	}

	printf("変換後の10進数の数字：%d\n", decimal);

	return 0;
}

