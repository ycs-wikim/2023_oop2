#pragma once

/**
* @brief	게임의 승패를 결정하는 클래스
*/
class CBoard
{
private:    // 정보를 외부에 노출할 필요가 없음
    /// 나와 상대의 승패를 확인하기 위한 보드 설정
    /// 가위(0), 바위(1), 보(2)
    /// 승패 : 0(비김), 1(내가 이김), 2(내가 짐)
    int m_board[3][3] = {
        // 나
        { 0, 1, 2 },    // 상대
        { 2, 0, 1 },
        { 1, 2, 0 }
    };
public:     // 외부에 노출할 인터페이스
    // 입력 값에 의해 승패를 결정하는 인터페이스
    const char* whowinSTR(int, int);       // 함수 원형 선언 시에는 변수 이름이 없어도 됨!
    int whowinValue(int, int);
    // 입력 값에 따라 가위, 바위, 보를 반환 인터페이스
    const char* strSRP(int);            //
};

