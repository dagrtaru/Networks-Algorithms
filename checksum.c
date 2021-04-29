#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

void compute(int one[], int two[])
{
	char result[SIZE + 1];
	int temp = 0, count = 0, carry = 0;
	result[SIZE] = '\0';
	for(count =  SIZE - 1; count >= 0; count--){
		temp = one[count] + two[count] + carry;
		result[count] = (temp % 2) + '0';
		carry = (temp > 1) ? 1 : 0;
	}
	printf("The sum is = %s\n", result);
	for(int i = 0; i < SIZE; i++){
		result[i] = (result[i] == '0') ? '1' : '0';
	}
	printf("The checksum is = %s\n", result);
}

int main(void *)
{
	char one[SIZE + 1];
	char two[SIZE + 1];
	int binary_one[SIZE];
	int binary_two[SIZE];
	int i;
	printf("Enter the parts given by sender:\n");
	scanf("%s", one);
	scanf("%s", two);
	for(i = 0; i < SIZE; i++){
		binary_one[i] = one[i] - '0';
		binary_two[i] = two[i] - '0';
	}
	compute(binary_one, binary_two);
	return 0;
}