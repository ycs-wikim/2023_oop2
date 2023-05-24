#include "CFestival.h"

// 구현파일 : 멤버 함수의 구현체를 실제로 작성

CFestival::CFestival()
{

}

CFestival::CFestival(int booth)
{
	m_booth = booth;
}

void CFestival::print_info()
{
	printf("%d %d\n", m_man, m_booth);
}


void CFestival::set_man(int kkk)
{
	m_man = kkk;
}
