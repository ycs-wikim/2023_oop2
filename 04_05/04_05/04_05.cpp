// 04_05.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

// 매크로 함수 : 전처리기이기 때문에 먼저 처리
#define SWAP(a, b)  { a ^= b; b ^= a; a ^= b; }

//#define EX_1
//#define EX_2
#define EX_3

#ifdef EX_2
int Add(int a, int b)
{
    return a + b;
}
#endif

int main()
{
#ifdef EX_1
    int a = 0;
    int b = 1;

    // if( ) 다음 문장만 if의 참인 경우에 실행
    if (0)      // 항상 거짓
    {
        SWAP(a, b); // 컴파일러에 전달되기 전에 a ^= b; b ^= a; a ^= b; 변경
                    // a ^= b; 문장만 if(0)가 참인 경우에 실행
                    // b ^= a; a ^= b; 문장은 항상 실행
    }

    cout << a << " " << b << endl;
#endif

#ifdef EX_2
    int a, b;


    /**
    * switch( 변수, 값 )
    * {     // 반드시 사용
    *   case 상수:
    *       break;  // 제어문을 벗어난다.
    *   default:    // case 상수: 에 해당하지 않는 경우 실행
    *       break;
    * }     // 반드시 사용
    */
    // switch( )도 뒤의 한 문장만 자기 소유
    switch (Add(1, 3))  // 참, 거짓X ==> 값 : 변수
    {
    case 4:
        a = 30;
        b = 70;
        if (1)
            printf("ADD: %d\n", Add(a, b));
        break;
    //case 4:   // 동일 라벨 사용 불가!
    case 0:     // == if(변수 == 0)
    //case a:   // case 뒤에 변수 사용 불가!
    case 1:     // case 값 : ==> 라벨
    case 2:     // break;가 없으면 무조건 절차적 실행
    case 3:
        a = 3;
        b = 7;
        if (1)
            printf("ADD: %d\n", Add(a, b));
        break;  // ==> 가장 가까운 제어문을 벗어난다.
    
    default:            // else
        printf("Default!!!!!!!!!!!!!\n");
    }
#endif

#ifdef EX_3
    int Sum = 0;
    // 반복문의 구성요소 : 초기값, 조건식, 제어식(증감식)
    // for(초기값 ; 조건식 ; 제어식 ) 뒤의 한문장만 for 소유
    for (int i = 0; i < 11; i++)
        Sum += i;                   // 반복할 문장, for의 소유된 문장
    /*
        위의 for문 동작 순서
        int i = 0;      // 초기값: 단 한번만 실행!
        i < 11;         // 조건식: i = 0이므로 참 ==> 반복할 문장을 실행
        Sum += i;       // 반복문: Sum = 0, i = 0
        i++             // 제어문: Sum = 0, i = 1
        i < 11;         // 조건식: i = 1이므로 참
        Sum += i;       // 반복문: Sum = 1, i = 1
        i++             // 제어문: Sum = 1, i = 2
        i < 11;         // 조건식: i = 2 이므로 참
        Sum += i;       // 반복문: Sum = 3, i = 2
        i++             // 제어문: Sum = 1, i = 2
        i < 11;         // 조건식: i = 2 이므로 참
        Sum += i;       // 반복문: Sum = 3, i = 2
        i++             // 제어문: Sum = 1, i = 2
        i < 11;         // 조건식: i = 2 이므로 참
        Sum += i;       // 반복문: Sum = 3, i = 2
        i++             // 제어문: Sum = 1, i = 2
        i < 11;         // 조건식: i = 2 이므로 참
        Sum += i;       // 반복문: Sum = 3, i = 2
        i++             // 제어문: Sum = 1, i = 2
        i < 11;         // 조건식: i = 2 이므로 참
        Sum += i;       // 반복문: Sum = 3, i = 2

    */

    printf("SUM: %d\n", Sum);

    int a[5] = { 1, 1, 1, 1, 1 };   // 3번째 작업을 수행하지 않은 상태

    do
    {
        if (1 != a[0])       // 조건식 코딩 : 상수 연산자 변수
            break;
        if (1 != a[1])
            break;
        if (1 != a[2])
            break;
        if (1 != a[3])
            break;
        if (1 != a[4])
            break;

        printf("조건을 모두 만족하였습니다.\n");
        return 0;
    } while (false);
    printf("조건이 만족되지 않았습니다.\n");

#endif



}

