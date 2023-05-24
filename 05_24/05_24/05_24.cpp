// 05_24.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//#include <CFestival.h>
#include "CFestival.h"


void main()
{
    CFestival cf(666);
    cf.set_man(777);
    cf.print_info();
}

// 멤버 함수의 외부 선언
class MyClass
{
public:
    int m_x;
    void print_mx();        // 함수의 원형
};

// 외부에서 원형만 있는 함수의 구현
// 반환값 클래스이름::구현할함수이름( 인수 ) { }
void MyClass::print_mx()
{
}



#ifdef CD
/// 생성자와 소멸자 : 특정 시점에 프로그래머가 호출하지 않아도 자동으로 호출되는 멤버 함수
///     외부에서 호출할 수 있으려면 반드시 생성자와 소멸자의 권한이 public 이어야 한다.
class asdf
{
public:
    /// 생성자: 함수의 반환 타입이 없다. 함수 이름이 반드시 클래스 이름과 동일해야 한다.
    /// 내부에서 멤버 변수들을 초기화하는 코드를 입력
    /// 생성자는 함수의 중복이 허용되기 때문에 다수의 생성자를 만들어서 사용할 수 있다.
    asdf()
    {
        x = 0;
        y = 0;
        z = 0;
        printf("생성자-1: %p 호출\n", this);
    }
    asdf(int x__, int y__)
    {
        x = x__;
        y = y__;
        z = x + y;
        printf("생성자-2: %p 호출\n", this);
    }
    asdf(int k)
    {
        x = k;
        y = k;
        z = k;
        printf("생성자-3: %p 호출\n", this);
    }

    /// 소멸자 : 함수의 반환 타입이 없다. 함수 이름이 반드시 클래스 이름과 동일해야 한다.
    ///     단, 함수 이름 앞에 ~(틸드)를 붙여 준다.
    ///     인수를 받을 수 없는 구조이기 때문에 함수 중복을 허용하지 않는다.
    ///     따라서 소멸자는 클래스 내부에 반드시 단 1개만 존재한다.
    ~asdf()
    {
        printf("소멸자를 호출함. : %p\n", this);
    }

public:
    int x;
    int y;
private:
    int z;
    
};

class bbb : asdf
{
public:
    /// 상수 멤버는 즉시 초기화해야 하지만 생성자의 선처리 영역에서 초기화할 수 있음
    const int m_kkk;

    bbb(int kkk)
        : m_kkk(kkk)            // 생성자의 선처리 영역 처리 방법
                                // 초기화필요변수(입력값) : 입력값은 인수를 사용해도 무방
                                // 일반 변수와 상수 등 모두 초기화 가능
    {
        printf("bbb c called %d\n", m_kkk);
    }
    bbb()
        : m_kkk(0)
    {}

    ~bbb()
    {
        printf("bbb d called : %d\n", m_kkk);
    }
};

int main()
{
    /*
    asdf asd;                       // 일반 변수처럼 인스턴스 생성 : 메모리 위치가 stack이 된다.
    asdf* a = new asdf();           // 동적으로 인스턴스 생성 : 메모리 위치가 heap이 된다.
    asdf* b = new asdf(78, 89);
    asdf* c = new asdf(88);
    printf("instance: %p // New : %p\n", &asd, a);
    delete a;                       // 동적으로 생성한 인스턴스의 소멸자 호출
    delete b;
    delete c;
    asdf kkk(asd);
    */
    bbb bk;
    bbb bk1(789);
    printf("BK: %p\n", &bk);
}
#endif

#ifdef DUP
// 최상위 클래스
class CGrandParent
{
public:
    int gp;
};

// 부모 클래스 : 최상위 클래스를 상속
class CParent : CGrandParent
{
public:
    int parent;
};

// 메인 클래스 : 부모 클래스를 상속
class Cmain : CParent
{
public:
    int main;
};

// 다중 상속 클래스
class cdup : CGrandParent, Cmain
{
public:
    int kkk;
};


int main()
{
    printf("GP : %lld\n", sizeof(CGrandParent));
    printf("P : %lld\n", sizeof(CParent));
    printf("M : %lld\n", sizeof(Cmain));
    printf("D : %lld\n", sizeof(cdup));
    std::cout << "Hello World!\n";
}
#endif