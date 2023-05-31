#include "CRandom.h"
#include <stdlib.h>     // 랜덤 함수 사용을 위해 필요
#include <time.h>       // 랜덤 함수 사용을 위해 필요

int CRandom::ComRand(int value)
{
    return rand() % value;   // 0, 1, 2;
}

CRandom::CRandom()
{
    // 랜덤 값의 시드 값을 변경해주는 함수. 프로그램 시작 시 반드시 한번만 수행.
    // 보통 현재 시간 값을 이용해서 시드를 변경
    srand((unsigned int)time(NULL));
}
