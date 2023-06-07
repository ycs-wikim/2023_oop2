#include "CBoard.h"

const char* CBoard::whowinSTR(int na, int you)
{
	int result = m_board[you][na];			// 0, 1, 2

	switch (result)
	{
	case 0:
		return "비김";

	case 1:
		return "내가 이겼소!";

	case 2:
		return "내가 졌소...";

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
		return "가위";

	case 1:
		return "바위";

	case 2:
		return "보";

	default:
		break;
	}

	//return nullptr;
}

