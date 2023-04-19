// 04_19.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 구조체 : 서로 다른 자료형을 한꺼번에 선언할 수 있는 자료형
//  Vs. 배열 : 동일한 자료형을 한꺼번에 선언.
// 선언 : 예약어 구조체이름 { 자료형을 선언; };
struct asdf { int a; int b; int c; char u; int k; char arr[6]; };
// 구조체 변수 선언 : 예약어 구조체이름 구조체변수이름;
struct asdf k;
// 연산자 : 구조체변수. , 구조체-> :: 선언된 내부 변수에 접근 가능
//      . : 직접 멤버 연산자
//      -> : 간접 멤버 연산자


int main()
{
    // 레퍼런스 : 포인터와 기능은 동일하나 컴파일러가 처리
    // 변수 선언 : int &r
    int ycs = 8;
    int& r = ycs;   // 레퍼런스 변수 선언과 초기화
    printf("YCS1 : %d\n", ycs);
    r = 67;
    printf("YCS2 : %d\n", ycs);
    printf("REF : %d\n", r);
     
    // 다중 포인터의 정의
    int iv = 8;
    int* pv = &iv;      // int*에서 * 1개 제외하면 받을 수 있는 자료형
    int** pv2 = &pv;
    int*** pv3 = &pv2;
    int**** pv4 = &pv3;
    int***** pv5 = &pv4;
    printf("%d - %d - %d - %d - %d - %d\n",
        iv, *pv, **pv2, ***pv3, ****pv4, *****pv5);
    // 다중 포인터의 규칙
    // 1. 선언한 변수의 *의 개수보다 1개 작은 * 변수 주소를 받을 수 있다.
    // 2. 값에 접근하려면 자신의 *의 개수만큼 붙여주면 된다.
    // 3. 다음 주소로 이동할 때, *을 하나씩 제외하면 결국 일반 변수가 된다.
    /*
    iv == *pv;
    iv == *pv == **pv2;             ==> iv == **pv
    iv == *pv == **pv2 == ***pv3;   ==> iv == ***pv3
    iv == *pv == **pv2 == ***pv3 == ****pv4;
    iv == *pv == **pv2 == ***pv3 == ****pv4 == *****pv5;
    */


    int* ptr = NULL;    // NULL은 예약어, C에서는 0과 같다.
        // NULL이 굳이 0인 이유 : 0위치는 OS영역이므로 접근 불가
        // nullptr은 0이 아니고, 포인터의 초기화 값. C++에서 등장한 값
    int* p1 = nullptr;      // C++에서 포인터 초기화
    void* p2 = ptr;         // void*는 주소만! 보관하는 기능
    //p2++;                 // 산술 연산 불가능
    //*p = 765;             // 값에 대한 접근 불가능
    //printf("NULL : %d %d\n", *ptr, *p2);  // 값 접근 불가능
    int a = 3;
    int b = 7;
    int c = 10;
    int d = 88;
    int* p = &a;
    printf("L: %p %p %p %p\n", &a, &b, &c, &d);
    printf("V: %d [ %d : %p ]\n", a, *p, p);
    p+=8;    // p = p + 1;   --> int 크기만큼 위치를 변경한다.
    // p + 8 == p + 8 * sizoeof( int ) == p + 8 * 4 == p + 32(byte)
    printf("V: %d [ %d : %p ]\n", b, *p, p);
    p+=8;
    printf("V: %d [ %d : %p ]\n", c, *p, p);
    p+=8;
    printf("V: %d [ %d : %p ]\n", d, *p, p);

}
