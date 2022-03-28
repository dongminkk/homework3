#include <stdio.h>
#include <stdlib.h>

void main() {
    int list[5]; //int형 배열 list 선언
    int *plist[5]; // 배열 포인터 plist 선언 

    list[0] = 10; //list[0]에 10를 넣음
    list[1] = 11; //list[1]에 11를 넣음

    plist[0] = (int*)malloc(sizeof(int)); //plist[0]에 동적메모리할당
    
    printf("[----- [kim dongmin] [2017038093] -----]\n");
    printf("list[0] \t= %d\n", list[0]); //list[0]의 값 출력 10이 출력됨
    printf("address of list \t= %p\n", list); //list의 주소 출력 배열에서 이름은 주소을 뜻함
    printf("address of list[0] \t= %p\n", &list[0]); //list[0]의 주소 출력
    printf("address of list + 0 \t= %p\n", list+0); //배열에서 이름은 주소을 뜻함거기에 0을 더하니 list[0]의 주소 출력
    printf("address of list + 1 \t= %p\n", list+1); //list[1]의 주소 출력 타입이 int이기때문에 4바이트 더하면 list[1]의 주소
    printf("address of list + 2 \t= %p\n", list+2); //list[2]의 주소 출력 타입이 int이기때문에 8바이트 더하면 list[2]의 주소
    printf("address of list + 3 \t= %p\n", list+3); //list[3]의 주소 출력 타입이 int이기때문에 12바이트 더하면 list[3]의 주소
    printf("address of list + 4 \t= %p\n", list+4); //list[4]의 주소 출력 타입이 int이기때문에 16바이트 더하면 list[4]의 주소 ((4*4)+기본주소)
    printf("address of list[4] \t= %p\n", &list[4]); //list[0]의 주소 출력

    free(plist[0]); //plist[0] 동적 메모리 해제 하지 않으면 메모리의 누수가 발생한다 동적메모리는 함수를 벗어나도 유지됨
}