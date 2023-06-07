#include "CBoard.h"

const char* CBoard::whowinSTR(int na, int you)
{
	int result = m_board[you][na];			// 0, 1, 2

	switch (result)
	{
	case 0:
		return "���";

	case 1:
		return "���� �̰��!";

	case 2:
		return "���� ����...";

	default:
		break;
	}

	return nullptr;
}


int CBoard::whowinValue(int na, int you)
{
	return m_board[you][na];
}


const char* CBoard::strSRP(int what)
{
	switch (what)
	{
	case 0:
		return "����";

	case 1:
		return "����";

	case 2:
		return "��";

	default:
		break;
	}

	//return nullptr;
}

