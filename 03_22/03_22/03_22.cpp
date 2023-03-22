// 03_22.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>     //iostream 헤더 사용 가능 ==> C++ 프로젝트
#include <stdio.h>      // stdio.h와 같은 C언어 헤더도 사용 가능! C++ 프로젝트

using namespace std;

// main 함수는 인수를 받아서 자신의 정보를 확인할 수 있다.
int main(int argc__, char** argv__)
{
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
