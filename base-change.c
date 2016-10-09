#include <stdio.h>
#include <math.h>

int main() {

	int i, change_base, input_num, changed_num = 0, num_of_digits;

	printf("2~10進数変換プログラム\n");
	printf("数字を入力してください。＞");
	scanf("%d", &input_num);
	while(getchar() != '\n') { }
	printf("変換後の進数を入力してください。＞");
	scanf("%d", &change_base);
	while(getchar() != '\n') { }

	for(i = 0;;++i) {
		if(input_num % (int)pow(10, i) == input_num) {
			num_of_digits = i;
			break;
		}
	}

	for(i = 0;i < num_of_digits;i++) {
		changed_num += ((input_num % (int)pow(10, i + 1)) - (input_num % (int)pow(10, i))) * pow(change_base, i);
	}

	printf("変換後の数字：%d\n", changed_num);

	return 0;
}

