#include <stdio.h>

struct student1 { //student1 구조체 정의 
	char lastName;
	int studentId;
	char grade;
};

typedef struct { // student2 구조체 정의 typedef 써주면 변수 선언할때 struct를 안써주어도 됨
	char lastName;
	int studentId;
	char grade;
} student2;

int main() {

	struct student1 st1 = { 'A', 100, 'A' }; //구조체를 그냥 struct로 써주었기 때문에 앞에 struct를 써줌 st1 구조체 변수 선언 및 초기화
    
    printf("[----- [kim dongmin] [2017038093] -----]\n");
	printf("st1.lastName = %c\n", st1.lastName); //구조체 변수 st1 에 있는 맴버 lastName 출력 A가 출력됨
	printf("st1.studentId = %d\n", st1.studentId); //구조체 변수 st1 에 있는 맴버 studentId 출력 100이 출력됨
	printf("st1.grade = %c\n", st1.grade); // 구조체 변수 st1에 있는 맴버 grade 출력 A가 출력됨

	student2 st2 = { 'B', 200, 'B' }; //typedef를 써주었기 때문에 앞에 struct를 안써주어도 됨 st2 구조체 변수 선언 및 초기화

	printf("\nst2.lastName = %c\n", st2.lastName); //구조체 변수 st2에 있는 맴버 lastName 출력 B가 출력됨
	printf("st2.studentId = %d\n", st2.studentId); //구조체 변수 st2에 있는 맴버 studentId 출력 200가 출력됨
	printf("st2.grade = %c\n", st2.grade); //구조체 변수 st2에 있는 맴버 grade 출력 B가 출력됨

	student2 st3; //구조체 변수 선언 st3

	st3 = st2; // 구조체 변수st2 를 구조체 변수st3에 복사

	printf("\nst3.lastName = %c\n", st3.lastName); //구조체 변수 st3에 있는 맴버 lastName 출력 B가 출력됨
	printf("st3.studentId = %d\n", st3.studentId); //구조체 변수 st3에 있는 맴버 studentId 출력 200가 출력됨
	printf("st3.grade = %c\n", st3.grade); //구조체 변수 st3에 있는 맴버 grade 출력 B가 출력됨

	/* equality test */
	//if (st3 == st2)      /* not working */ // 컴하일 오류 구조체 변수와 구조체 변수를 서로 비교하는 것은 불가능하다.
	//	printf("equal\n");                   // 비교할려면 멤버마다 비교해주어야한다.
	//else
	//	printf("not equal\n");

	//return 0;
	if(st2.lastName == st3.lastName && st2.studentId == st3.studentId && st2.grade == st3.grade) //이렇게 비교 해야됨
		printf("equal\n");
	else
		printf("not equal\n");
}