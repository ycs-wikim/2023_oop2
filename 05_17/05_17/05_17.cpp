// 05_17.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class asdf
{
public:
    int Public;     // 누구나 ==> 인스턴스를 생성한 누구나
    void bbb()
    {
        this->Public = 9;   // this는 자기(객체) 자신을 가리키는 포인터
                            // 반드시 클래스 내부에서만 동작
    }
    static int s_int;   // 정적 멤버 변수. 객체/메모리에 적재가 되어야만 사용 가능
                        // 한번 생성되면, 모든 객체에서 동일한 값을 사용할 수 있다.
                        // 생성되는 모든 객체에 공유되는 것과 동일한 동작을 수행
                        // 정적 멤버 변수는 반드시! 전역 공간에서 초기화를 수행!
    // 정적 멤버 함수. 객체/메모리 적재와 관계 없이 사용 가능
    // 내부에서 정적 멤버 변수만 사용 가능! => 일반 변수는 누구인지 구별 불가능!
    // 별도의 처리를 통해 인스턴스(객체)가 없어도 호출할 수 있다!
    static void bb()
    {
        int x = 8;              // 정적 멤버 함수 내부에서 선언한 일반 변수
        //this->Public = 9;     // this는 객체 자신인데, 정적 멤버 함수에서는 자신을 구별 불가능!
        printf("BB : %d - %d\n", x, s_int); // 정적 멤버 변수 사용 가능!
    }
private:
    int Private;    // 나만 ==> 클래스 내부에서만 확인/접근 가능한 권한
protected:
    int Protected;  // 관계(상속)
};

class BBB
{};

// 클래스의 상속 : 클래스 간의 관계를 만드는 것.
// 상속 문법 : 예약어 클래스이름 : 상속할 클래스
class ABC : asdf, BBB
{
public:
    int kkk;
    void kkkk()
    {
        Public = 3;
        Protected = 90;     // asdf 클래스의 protected 멤버는 사용 가능
        //Private = 777;
    }
};

int asdf::s_int = 3;    // 전역 선언 및 할당으로 정적 멤버 메모리 적재
int s_kkk = 9;

class test
{
public:
    int x = 9;
private:
    int y = 1231;
protected:
    int z = 23487;
};


int main()
{
    
    /// 인스턴스(객체) 없는 상태에서 정적 멤버 접근
    asdf::s_int = 9;    // 적재된 이후에는 문제 없이 사용 가능
    asdf::bb();         // 적재와 관계 없이 사용

    std::cout << "Hello World-1 " << asdf::s_int << "\n";

    /// 인스턴스 생성 후 정적 멤버 접근
    //const asdf a, b;        // 인스턴스를 상수화하면 사용 불가!
    asdf a, b;
    const int k = 8;
    //k = 9;
    std::cout << "Hello World-2 " << a.s_int << "\n";
    b.s_int = 777;
    std::cout << "Hello World-3 " << a.s_int << "\n";
    // 
    printf("%p %p\n", &a.s_int, &b.s_int);

    // 클래스의 메모리 크기
    // 1. 일반 멤버 변수의 크기만 획득된다.
    // 2. 정적/const와 같은 멤버 변수는 크기에 포함되지 않는다.
    // 3. 멤버 함수는 메모리 크기에 포함되지 않는다.
    printf("ASDF: %lld\n", sizeof(test));

    test f;
    int* p = (int*)&f;
    printf("PPP: %d %d %d\n", p[0], p[1], p[2]);
}
