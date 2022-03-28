#include <stdio.h>

struct student {  // student 구조체 정의
	char lastName[13]; /* 13 bytes */
	int studentId; /* 4 bytes */
	short grade; /* 2 bytes */
};

int main() {
	struct student pst; //구조체를 그냥 struct로 써주었기 때문에 앞에 struct를 써줌 pst 구조체 변수 선언
    
    printf("[----- [kim dongmin] [2017038093] -----]\n");
	printf("size of student = %ld\n", sizeof(struct student)); //구조체의 크기 출력 19바이트이지만 padding을 하기때문에 나머지 크기를 더해 24가 출력된다.
	//lastName에서 3바이트 grade에서 2바이트
	printf("size of int = %ld\n", sizeof(int)); // int 자료형의 크기를 출력한다.
	printf("size of short = %ld\n", sizeof(short)); //short 자료형의 크기를 출력한다.
    
	return 0;
}