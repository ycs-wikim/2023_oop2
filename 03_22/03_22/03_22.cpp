// 03_22.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// 전처리기 : 해당 파일을 내 소스코드로 그대로 가져온다.
#include <iostream>     //iostream 헤더 사용 가능 ==> C++ 프로젝트
#include <stdio.h>      // stdio.h와 같은 C언어 헤더도 사용 가능! C++ 프로젝트

using namespace std;

// 전처리기 : 매크로 상수나 함수를 정의한다.
// #define A B      ==> A는 앞으로 B로 사용된다.
#define PI 3.141592             // 매크로 상수 : PI가 사용되면 3.141592로 사용한다.
#define ADD(x,y)    x + y       // 매크로 함수
#define AD(x,y)     printf("%d", x + y);

// main 함수는 인수를 받아서 자신의 정보를 확인할 수 있다.
int main(int argc__, char** argv__)
{
    printf("%d\n", sizeof(int));

#ifdef PI       // PI가 define 되어 있다면!
    printf("PI가 선언되어 있습니다.\n");
#else           // PI가 define 되어 있지 않다면!
    printf("PI가 선언되어 있지 않습니다.\n");
#endif // PI 선언에 대한 if 종료

#ifdef _M_X64
    printf("64bit 윈도우 입니다.\n");
#else
    printf("64bit 윈도우가 아닙니다.\n");
#endif

    /* 주석
    printf("File : %s\n", __FILE__);
    printf("LINE : %d\n", __LINE__);
    printf("FUNCTION : %s\n", __FUNCTION__);
    */
    printf("Error: %s %s [ %d ]\n", __FILE__, __FUNCTION__, __LINE__);

    // 책 예제.
    int year = 2023;
    cout << "Welcome to " << year << " C++" << endl;    // end line == \n
    printf("Welcome to %d C++ %f - %d\n", year, PI, ADD(15, 98));
    AD(3, 5);
    printf("\n");
    //printf("Welcome to %d C++ %f - %d\n", year, PI, AD(15, 98));
                                                //, 15 + 98 );

    // argc : 인수의 개수, argv : 인수의 실제 문자열
    printf("%d - %s\n", argc__, argv__[0]);
    //std::cin >> ;
    cout << "Hello World!\n";  // C++에서 printf( ) 와 같은 기능
    cout << "asdfg";
    // std : standard namespace
    // :: -> 범위 지정 연산자
    // cout -> console output
    // cin -> console input
    
}
