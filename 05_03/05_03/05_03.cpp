// 05_03.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;


typedef struct character
{
    int level;
    int str;
    int dex;
    int it;
    int hp;
    int mp;
    int money;
} CHAR, *PCHAR;


int calcMyAttack(PCHAR chr)
{
    int x;
    x = chr->level * 12 + chr->str * 4 + chr->hp * 10;
    return x;
}


void main()
{
    int att = 0;
    // 구조체 초기화 방법
    CHAR me = { 170, 2000, 176, 150, 30000, 2500, 3000000 };

    // 공격력
    att = calcMyAttack(&me);
    printf("ATT: %d\n", att);
}



#ifdef FUNC
// 함수 : 함수는 곧 기능. 정보저달 ==> 연산 ==> 결과
// 함수의 선언 : 반환값 함수이름(전달할 정보들){ 연산; return 결과; }
/**
* 함수 만드는 방법
* 1. 함수의 기능을 설정한다.
*   ==> 숫자 2개의 값을 받아서 큰 값을 알아내는 기능
* 2. 함수의 반환 값을 설정
*   ==> 2개의 값 중 큰 값
* 3. 함수의 이름을 만든다.
*   ==> ycs
* 4. 함수가 받을 정보를 설정
*   ==> int, int
* 5. 함수의 기능을 구현
*   ==> if(큰값 확인) 큰 값을 확인
* 6. 함수의 반환 값을 전달한다.
*   ==> return int;
*/


// 함수의 특징
// 1. 반환 값은 반드시 1개만 가능하다.

// 함수 호출 방식 3가지 : Call By Value, Address, Reference
// 호출 방식이 달라지는 원인 : 전달하는 정보의 자료형

// 1. Call by Value
// ycs( int x = 8, int y = 9 )
int ycs(int x, int y)
{
    if (x > y)
    {
        return x, y;
    }

    return y, x;
}

// 2. Call by Address(주소) : &a, &b
// ycs( int* x = &a, int* y = &b )
int ycsAddr(int* x, int* y, int *res, int* result)
{
    int i = 3;
    int* p = &i;
    // 둘을 더한 값과 뺀 값을 획득
    *res = *x + *y;
    *result = *x - *y;

    if (*x > *y)
    {
        return *x;
    }

    return *y;
}


// 3. call by reference
// ycs( int& x = a, int& y = b )
int ycsRef(int& x, int& y)
{
    if (x > y)
    {
        return x;
    }

    return y;
}


void main()
{
    int a = 8, b = 9;
    int result = 0, r = 0;

    result, r = ycs(a, b); // (8, 9)
    ycs(7, 9);
    printf("Call by value: %d %d\n", result, r);
    a = 238; b = 92347;
    //result = ycsAddr(&a, &b);
    ycsAddr(&a, &b, &r, &result);
    printf("Call by Address: %d %d\n", r, result);
    a = 23; b = 9237;
    result = ycsRef(a, b);
    printf("Call by Reference: %d\n", result);
}
#endif

#ifdef STR_EX
typedef struct STag
{
    int m;
    char str1[4];
    const char* str2;
} SType;


void main()
{
    SType s1;
    s1.m = 2017;
    memcpy(s1.str1, "C++", 4);
    s1.str2 = "World";

    SType s2;
    s2 = s1;
    cout << s2.m << " " << s2.str1 << " " << s2.str2 << endl;

}
#endif

#ifdef STRUCT_EX
// 구조체 : 서로 다른 자료형을 한번에 선언해서 사용
// 구조체 선언 방법 : 예약어 구조체이름 { 멤버 변수; ; ; };
struct asdf
{
    int x;      // 4
    int z;      // 4
    int y;      // 4
    char a;     // 1
    char b[5];  // 5
    int* p;     // 4
};

// 구조체 실제 사용 : typedef A B ==> A를 앞으로 B로 사용
typedef         // A 시작
struct abc
{
    int x;
    int y;
}
ABC,                // int
*PABC;            // B  ==> int*


int main()
{
    ABC k;      // 일반 구조체 변수 선언 : .(직접 멤버 연산자)
    PABC ptr1;  // 일반 구조체 포인터 변수 선언 : -> (간접 멤버 연산자)
    ptr1 = &k;  // 구조체 변수의 주소 획득
    k.x = 100;  // 일반 구조체 멤버 접근 방법
    k.y = 200;
    ptr1->x = 333;  // 구조체 포인터 멤버 접근 방법
    ptr1->y = 656;
    printf("K : %d %d\n", k.x, k.y);

    struct abc a1;
    struct abc* p1 = &a1;

    // 구조체 변수 선언 : 예약어 구조체이름 구조체변수;
    struct asdf a;          // int a[6]
    // 구조체 변수 사용 : 구조체변수.멤버변수
    a.a = 65;               // a[0]
    a.b[0] = 33;            // a[1]
    a.p = nullptr;          // a[2]
    a.x = 150;              // a[3]
    a.y = 220;              // a[4]
    a.z = 330;              // a[5]

    // 구조체 변수들의 주소 출력 : 위치 확인
    printf("Struct PTR : %p %p %p %p %p %p\n", &a.a, a.b, &a.p, &a.x, &a.y, &a.z);

    // 구조체 변수의 주소를 이용해서 값을 확인
    int* p = (int*) & a;        // 구조체 주소를 int*로 획득
    printf("XYZ: %d %d %d\n", a.x, a.y, a.z);
    printf("xyz: %d %d %d\n", *(p + 0), *(p + 1), *(p + 2));
    std::cout << "Hello World!\n";
}

#endif