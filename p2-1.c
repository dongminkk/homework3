#include <stdio.h>
#define MAX_SIZE 100 // 기호상수 정의 

float sum(float[], int); // 함수 호출
float input[MAX_SIZE], answer; //전역변수 선언 float형 배열 선언, float형 변수 answer 선언
int i; //int형 변수 i 선언

void main(void) {
	for (i = 0; i < MAX_SIZE; i++) //반복문 i가 0부터 99까지 반복 100번 
		input[i] = i; // 배열 input에 0~99 저장

    printf("[----- [kim dongmin] [2017038093] -----]\n");

	/* for checking call by reference */
	printf("address of input = %p\n", input); //input주소 출력 배열에서 이름은 주소을 뜻함

	answer = sum(input, MAX_SIZE); //반환값을 변수 answer에 저장 (함수 sum에 input의 주소와 100을 보네줌)
	printf("The sum is: %f\n", answer); //변수 answer 출력
}

float sum(float list[], int n) { //함수 반환형 sum 선언 매개 변수 배열float형 list, int형 n (input의 주소의 주소를 받아 input을 list를 통해 접근)
	printf("value of list = %p\n", list); //input의 주소 출력 list가 input를 참조하고 있음
	printf("address of list = %p\n\n", &list); //list의 주소 출력

	int i; //int형 변수 i 선언
	float tempsum = 0; //float형 변수 tempsum 선언 0으로 초기화
	for (i = 0; i < n; i++)
		tempsum += list[i]; //tempsum에 배열 list 값들을 더함
	return tempsum; // tempsum를 리턴 외부로 반환
}