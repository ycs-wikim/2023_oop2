// 05_10.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;


// 클래스 : 정보 구현체에 기능(함수)를 포함하고 있는 정보 처리 집합체
// 구성 : 변수(==> 멤버 변수)와 함수(==> 멤버 함수, Methods)
// 선언 : 예약어 클래스이름{ 멤버; ... } ;
class ycs
{
public:         // 다음 private, public, protected 만나기 전까지 모두 public
    int x;
    int x1;
    int x2;
    int x3;
private:        // 다음 private, public, protected 만나기 전까지 모두 private
    int y;
public:         // 다음 private, public, protected 만나기 전까지 모두 public
    void func(int x)
    {
        printf("X: %d\n", x);
    }
};



#ifdef FUNCTION
// 함수의 원형(prototype) 선언 => { 전의 함수 시그니처를 가져오는 선언 방법
//void attack(int default_attack, int buf1 = 0, int buf2 = 0);
void attack1(int x);
void attack1(char x);
void attack1(int y, int z);
void attack1();
float max(float x, float y);
char max(char x, char y);
int max(int x, int y);


int main()
{
    printf("MAX: (567, 876) : %d\n", max(567, 876));
    printf("MAX: (567.9, 876.4) : %f\n", max(567.9, 876.4));
    printf("MAX: ('5', '8') : %c\n", max('5', '8'));

    attack1();
    attack1('A');
    attack1(77);
    attack1(77, 88);
    //attack(3, 5);     // y 값도 전달되기 때문에 y = 9 문장이 무시
    //attack(4);        // y 값이 전달되지 않으므로 y = 9 문장이 실행
    //attack();         // x, y 값이 전달되지 않아도 디폴드 값으로 변수 초기화가 이루어진다.
    //attack(1, 3, 5);
    std::cout << "Hello World!\n";
}

// C언어의 함수 : 기능 ==> 설계 ==> 구현 ==> 사용 ==> 결과 값 반환
// C++언어의 함수 : 함수의 인수, 함수의 이름 중복을 허용

// 1. 함수의 인수 : 디폴드 인수 ==> 함수 호출 시, 값을 주지 않을 경우 기본 값으로 인수 값이 설정
//  ==> 함수 선언 시 기본 값을 할당하는 형태로 구현
//  ==> 디폴트 인수의 위치! : 반드시 인수 순서 중에 가장 마지막에만 존재해야 함!
void attack(int default_attack, int buf1 = 0, int buf2 = 0)
{
    printf("Attack[ %d ]  buf1[ %d ]  buf2[ %d ] : %d\n", default_attack, buf1, buf2, default_attack + buf1 * 3 + buf2 * 5);
}

// 2. 함수의 이름 중복을 허용! 주의점
// 1) 함수의 인수의 개수가 다르면 다른 함수로 인식
// 2) 함수 인수의 개수가 같더라도 자료형이 다르면 다른 함수로 인식
void attack1(int x)
{
    printf("X: %d\n", x);
}

void attack1(char x)
{
    printf("C: %c\n", x);
}

void attack1(int y, int z)
{
    printf("Y: %d Z: %d\n", y, z);
}

void attack1()
{
    printf("NO: 8\n");
}


float max(float x, float y)
{
    if (x > y)
    {
        return x;
    }

    return y;
}
char max(char x, char y)
{
    if (x > y)
    {
        return x;
    }

    return y;
}
int max(int x, int y)
{
    if (x > y)
    {
        return x;
    }

    return y;
}

#endif