// 06_07.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

#include <queue>
#include <deque>
#include <stack>        // stack STL 표준
#include <vector>       // vector STL 표준

class CClass
{
public:
    int x;
    int y;
    int z;
    ~CClass()
    {
        printf("this : %p\n", this);
    }
};

vector<CClass*> g_vec;      // vector 컨테이너(동적 배열) 선언
                        // vector에 입력할 자료형은 int 형

int main()
{
    CClass *c1, *c2, *c3;
    c1 = new CClass();
    c2 = new CClass();
    c3 = new CClass();
    c1->x = 2387;    c2->x = c1->x + 2398;     c3->x = c2->x + 38;
    c1->y = 2389;    c2->y = c1->y + 2398;     c3->y = c2->y + 38;
    c1->z = 3879;    c2->z = c1->z + 2398;     c3->z = c2->z + 38;
    g_vec.push_back(c1);
    g_vec.push_back(c2);
    g_vec.push_back(c3);

    for (int k = 0; k < g_vec.size(); k++)
    {
        printf("VEC[ %d ] : %d - %d - %d\n", k, g_vec[k]->x, g_vec[k]->y, g_vec[k]->z );
    }

    for (int k = 0; k < g_vec.size(); k++)
    {
        CClass* ptr = g_vec[k];
        delete ptr;
    }
    g_vec.clear();

    std::cout << "Hello World!\n";
}
