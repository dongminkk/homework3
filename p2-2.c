#include <stdio.h>

void print1(int* ptr, int rows); // 함수 호출

int main() {
	int one[] = { 0, 1, 2, 3, 4 }; //배열 one 선언 { 0, 1, 2, 3, 4 }로 초기화
    
    printf("[----- [kim dongmin] [2017038093] -----]\n");

	printf("one = %p\n", one); //배열 one의 주소 출력 배열에서 이름은 주소을 뜻함
	printf("&one = %p\n", &one); //one의 주소 출력 시작주소
	printf("&one[0] = %p\n", &one[0]); //one의 주소 출력 &one와 같음 one[0]가 시작이기때문에

	print1(&one[0], 5); //함수 print1에 &one[0]의 주소 5보네줌

	return 0;
}

void print1(int* ptr, int rows) { //함수 print1선언 포인터 ptr int형 rows
	/* print out a one-dimensional array using a pointer */

	int i; //int형 변수 i 선언

	printf("Address \t Contents\n");
	for (i = 0; i < rows; i++) //반복문
		printf("%p \t %5d\n", ptr + i, *(ptr + i)); //int 형이기 때문에 4바이트씩 더해져 주소가 이동됨 (배열들의 주소출력, 값출력)
	printf("\n");
}