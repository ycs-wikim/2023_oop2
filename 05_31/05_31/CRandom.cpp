#include "CRandom.h"
#include <stdlib.h>     // ���� �Լ� ����� ���� �ʿ�
#include <time.h>       // ���� �Լ� ����� ���� �ʿ�

int CRandom::ComRand(int value)
{
    return rand() % value;   // 0, 1, 2;
}

CRandom::CRandom()
{
    // ���� ���� �õ� ���� �������ִ� �Լ�. ���α׷� ���� �� �ݵ�� �ѹ��� ����.
    // ���� ���� �ð� ���� �̿��ؼ� �õ带 ����
    srand((unsigned int)time(NULL));
}
