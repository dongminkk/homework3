#include<stdio.h>
#include<stdlib.h>

void main() {

	int** x;  //int형 이중포인터 x 선언
    
    printf("[----- [kim dongmin] [2017038093] -----]\n");

	printf("sizeof(x) = %lu\n", sizeof(x)); //주소를 저장하는 크기
	printf("sizeof(*x) = %lu\n", sizeof(*x)); // 주소를 저장하는크기 이중포인터이때문에
	printf("sizeof(**x) = %lu\n", sizeof(**x)); // 이중포인터가 두번 가르켜서간 자료형의 int 크기
}