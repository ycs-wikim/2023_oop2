#pragma once	// ��� ������ �ߺ����� include �Ǿ� ������, �ѹ��� include ��Ű�� ��ó����

#include <iostream>

// ������� : Ŭ���� ����
class CFestival
{
public:
	int m_man;
	int m_booth;

	/// ������
	CFestival();
	CFestival(int booth);

	/// m_man, m_booth ������ ���
	void print_info();
	void set_man(int k);
};

