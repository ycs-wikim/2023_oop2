// 04_12.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;


// 전역 변수
int g_a;

int main()
{
    // 포인터 변수 : 변수는 선언과 사용. 가리키는 용도로만 사용!
    // 포인터 선언 : 자료형 *변수명;
    // 포인터 사용
    //      1. 변수명 - 주소로 사용
    //      2. *변수명 - 값으로 사용
    // 포인터의 연산자 ==> 사용 시점에 연산자
    //      1. *변수명 - 뒤에 붙은 변수의 값
    //      2. &변수명 - 뒤에 붙은 변수의 주소 값

    // 전역 변수의 선언과 사용
    printf("G : %d - 0x%p\n", g_a, &g_a);

    // 배열 변수의 선언과 사용
    int arr[3] = { 134, 256, 31243 };
    //printf("a : %d - %d - 0x%p\n", a, *a, &a);    // *a는 허용 X
    printf("A : %p - %d - 0x%p\n", arr, *arr, &arr);
    printf("A : %d - %d - %d\n", arr[0], arr[1], arr[2]);
    printf("A : %d - %d - %d\n", *(arr + 0), *(arr + 1), *(arr + 2));
    int* ptr = arr;
    printf("P : %d - %d - %d\n", *(ptr + 0), *(ptr + 1), *(ptr + 2));
    printf("A : %d - %d - %d\n", ptr[0], ptr[1], ptr[2]);


    // 일반 변수의 선언과 사용
    int a = 3;
    //printf("a : %d - %d - 0x%p\n", a, *a, &a);    // *a는 허용 X
    printf("a : %d - 0x%p\n", a, &a);

    // 포인터 변수의 선언과 사용
    int* p = &a;
    printf("p : %p - %d - %p\n", p, *p, &p);

    /*
    // 배열 : 동일한 자료형을 갖는 다수의 변수를 한번에 선언하는 방법
    // 배열의 선언 : 자료형 배열의이름[ 사용할 변수의 개수 ];
    // 배열의 이름으로 사용되는 문자열(변수)는 상수이다!
    int arr[3] = { 1, 2, 3 };
    int arr1[] = { 1, 2, 3 };       // 개수가 3
    int arr2[] = { 1, 2, 3, };      // 개수가 3 ==> 컴파일러가 판단할 수 없다!
    //int arr3[3] = { 1, 2, 3, 4, 5 };  // 선언 개수보다 많으면 오류!
    printf("%d - %d\n", sizeof(arr1), sizeof(arr2));

    // 배열의 사용
    // 배열의 이름으로 사용되는 문자열(변수) 뒤에 [ ]를 쓰고, 사이에 접근하는 위치를 작성
    arr[1];     // 이렇게 메모리에 접근(사용 또는 입력)

    return 0;



    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 4 - i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;


    for (int i = 2; i < 18; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    std::cout << "Hello World!\n";
    */
}
