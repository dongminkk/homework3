#include <stdio.h>
#include <stdlib.h> // malloc, free

void main() {
    int list[5]; //int형 배열 list 선언
    int *plist[5] = {NULL,}; // 배열 포인터 plist 선언 NULL로 배열 초기화

    plist[0] = (int *)malloc(sizeof(int)); //동적 메모리 할당 plist[0]에 malloc로 int 크기만큼 주소를 넘겨줌

    list[0] = 1; //list[0]에 1를 넣음
    list[1] = 100; // list[1]에 100을 넣음

    *plist[0] = 200; //배열 포인터 plist[0]이 가르키는 곳에 가서 200을 넣음

    printf("[----- [kim dongmin] [2017038093] -----]\n");

    printf("value of list[0] = %d\n", list[0]); //list[0]의 값 출력 1이 출력됨
    printf("address of list[0] = %p\n", &list[0]); //list[0]의 주소 출력
    printf("value of list = %p\n", list); //배열 list의 시작 주소 출력 &list[0]과 같음 배열에서 이름은 주소을 뜻함
    printf("address of list (&list) = %p\n", &list); //list의 주소 출력 &list[0]과 같음 0번부터 시작하기때문에

    printf("----------------------------------------\n\n");

    printf("value of list[1] = %d\n", list[1]); //list[1]의 값 출력 100 출력
    printf("address of list[1] = %p\n", &list[1]); //list[1]의 주소 출력
    printf("value of *(list+1) = %d\n", *(list + 1)); // 주소 list에 4바이트 더하면 list[1]주소가 나온다. 거기에 값은 100이기에 100 출력
    printf("address of list+1 = %p\n", list+1); //주소 list에다가 타입이 int이기때문에 4바이트 더하면 list[1]의 주소가나옴 list[1] 주소출력

    printf("----------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]); //plist[0]가 가르키는 곳으로 가서 값 출력 200이출력됨
    printf("&plist[0] = %p\n", &plist[0]); //plist[0]의 주소 출력
    printf("&plist = %p\n", &plist); //plist의 주소 출력 plist[0]과 같음 
    printf("plist = %p\n", plist); //plist의 시작 주소 출력 plist[0]과 같음 배열에서 이름은 주소을 뜻함
    printf("plist[0] = %p\n", plist[0]); //plist[0]의 값 출력 plist[0]이 가르키는 곳의 주소가 저장되어있음
    printf("plist[1] = %p\n", plist[1]); // NULL로 배열 초기화했기때문에 없음
    printf("plist[2] = %p\n", plist[2]); // NULL로 배열 초기화했기때문에 없음
    printf("plist[3] = %p\n", plist[3]); // NULL로 배열 초기화했기때문에 없음
    printf("plist[4] = %p\n", plist[4]); // NULL로 배열 초기화했기때문에 없음

    free(plist[0]); //동적 메모리 해제 하지 않으면 메모리의 누수가 발생한다 동적메모리는 함수를 벗어나도 유지됨

}