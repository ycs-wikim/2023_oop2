#include "CFestival.h"

// �������� : ��� �Լ��� ����ü�� ������ �ۼ�

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
