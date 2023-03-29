// 03_29.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include<stdio.h>
#include <string.h>


using namespace std;

// 문자열 : 문자들의 배열을 줄여서 문자열
int main()
{
    char str[8];        // 비어있고, 쓰레기 값이 들어있는 문자 배열 선언
    char str1[8] = "asdf";  // "asdf" + NULL 문자까지 포함된 문자 배열 선언
    char str2[8] = "";      // 비어있는 문자 배열 선언 : 좋은 방법 X
    char str3[8] = { 0, };  // 문자열을 초기화하는 가장 좋은 방법
    char str4[8] = { 65, }; // A0000000 으로 문자열이 초기화
    char str5[8] = { };
    char str6[8] = { 0 };

    // 문자열의 사용
    // 1. str6에 "asdf" 문자열 입력
    // //  3 = 6;      // 상수에는 값을 입력할 수 없음!
    //str6 = "asdf";  // str6는 상수이므로 값 입력이 되지 않는다!
    str6[0] = 'k';
    str6[1] = 'b';
    // 문자열에 값을 변경할 때는 배열 문법을 이용해서 하나씩 입력해야 함!
    
    // 2. str3에 "asdf" 문자열 입력
    memcpy(str3, "asdf", 4);    // 복사할 주소, 복사할 내용, 복사할 길이

    // %s의 특징 : NULL을 만날때까지 화면에 모두 출력
    printf("%s - %s - %s - %s - %s\n", str, str1, str2, str3, str6);

    memset(str3, 0x00, 8);      // 세팅할 메모리 주소, 값, 길이
    printf("str3 : %s\n", str3);    // 아무것도 출력되지 않음!

    memcpy(str3, "111222", 7);          // 11122200
    printf("str3 - 1 : %s\n", str3);    // 11122200
    memset(str3, 0x00, 8);              // 00000000
    memcpy(str3, "333", 3);             // 33300000
    printf("str3 - 2 : %s\n", str3);

    // C++에서는 변수를 아무 위치에서나 선언할 수 있다!
    // 1. wchar_t에 한문자를 입력하여 출력하는 예제
    wchar_t wstr = 'A';
    //cout << wstr << endl;             // 숫자 출력이므로 보기 좋지 않음
    printf("wstr : %c\n", wstr);

    // 2. wchar_t에 문자열을 입력하여 출력하는 예제
    wchar_t wstr1[8] = L"asdf";
    wchar_t wstr2[8] = L"아이쿠";
    //printf("%s - %ws\n", wstr1, wstr2);
    wcout << "wstr2 : " << wstr2 << endl;

    cout << "Hello World!\n";
}

