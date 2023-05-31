// 05_31.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

#include "CBoard.h"
#include "CRandom.h"

class CGameInfo
{
private:
    int m_win;      // 이긴 횟수
    int m_draw;     // 비긴 횟수
    int m_lose;     // 진 횟수
public:
    CGameInfo() { m_win = 0; m_lose = 0; m_draw = 0; }
    // 이긴/비긴/진 횟수 증가 인터페이스
    void IWin() { m_win++; }
    void IDraw() { m_draw++; }
    void ILose() { m_lose++; }
    // 이긴/비긴/진 횟수 반환 인터페이스
    int winCnt() { return m_win; }
    int drawCnt() { return m_draw; }
    int loseCnt() { return m_lose; }
};


int main()
{
    int na = -1, you = -1;      // 나와 상대의 입력 값을 저장할 변수 선언
    CBoard board;
    CRandom rnd;        // 자동적으로 생성자가 호출
    CGameInfo gi;
    
    std::cout << "나의 가위(0), 바위(1), 보(2)를 입력하세요 :";
    std::cin >> na;

    // 상대의 값을 랜덤 생성
    you = rnd.ComRand(3);

    std::cout << "na[" << board.strSRP(na) << "] " << "you[" << board.strSRP(you) << "]\n";
    int res = board.whowinValue(na, you);
    switch (res)
    {
    case 0:
        gi.IDraw();
        break;
    case 1:
        gi.IWin();
        break;
    case 2:
        gi.ILose();
        break;
    default:
        break;
    }
    std::cout << "결과 : " << board.whowinSTR(na, you) << "\n";
    std::cout << "상태 정보 : " << gi.drawCnt() << " " << gi.winCnt() << " " << gi.loseCnt() << "\n";

}



/*
class CTest
{
public:
    int m_Value;
    // 연산자 재정의 : 반드시 객체가 + 연산자 앞에 있어야만 정상적으로 동작한다.
    CTest operator + (int arg)
    {
        CTest t;
        t.m_Value = m_Value - arg;
        return t;
    }
    CTest operator - (int arg);
    CTest operator ++ (int arg);
    CTest operator -- (int arg);
    CTest operator ^ (int arg);
    CTest operator & (int arg);
    CTest operator && (int arg);
    CTest operator * (int arg);
    CTest operator / (int arg);
    CTest operator < (int arg);
    CTest operator <= (int arg);
    CTest operator == (int arg);
    //CTest operator . (int arg);     // 직접 멤버 연산자는 재정의가 불가능
    //CTest operator -> (int arg);    // 간접 멤버 연산자는 재정의가 불가능
};


int main()
{
    CTest t;
    t.m_Value = 1;

    CTest s1 = t + 2;       // 객체 + 상수
    //'CTest s2 = 2 + t;       // 상수 + 객체
    std::cout << "Hello World!\n" << s1.m_Value;
}
*/