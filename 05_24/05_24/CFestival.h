#pragma once	// 헤더 파일이 중복으로 include 되어 있을때, 한번만 include 시키는 전처리기

#include <iostream>

// 헤더파일 : 클래스 설계
class CFestival
{
public:
	int m_man;
	int m_booth;

	/// 생성자
	CFestival();
	CFestival(int booth);

	/// m_man, m_booth 정보를 출력
	void print_info();
	void set_man(int k);
};

