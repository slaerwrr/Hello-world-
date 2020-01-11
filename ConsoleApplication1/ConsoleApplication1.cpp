// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;


int main()
{

 #pragma region for,if
	//int a = 10;
	//int b = 20;
/*
	if (a == b)
	{
		cout << "ok" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	*/
	
	// 비교연산자는 항상 두개! 아닐수도 있다
	// a == b ::a와 b가 같으면
	// a != b :: a와b가 다르면
	// a <= b :: a와 b가 보다 작거나 같으면
	// a >= b :: a가 b 보다 크거나 같으면
	// a > b :: a가 b보다 작으면

	/*if (a == b)
		printf("OK!\n");
	else if (a != b)
		printf("no!\n");
	else
		printf("none!");
	*/

	//for (int i = 0; i < 10; i++)
	//{
		// c++에서 출력하는 방법
		//cout << i << endl;
		// c에서 출력하는 방법
		//이스케이프 문자를 알아야 한다.
		// % + 출력할 문자
		// int = %d
		// \n
		//F10 -> 해당 위치에서의 다음 줄
		// F11 -> 상세한 디버그

		// A와 B가 같다면 OK를 출력하고
		//다르면 NO! 라고 출력
		

	//}




	

	
	

	// 값을 받고 해당 값이 10000을 넘으면 종료시키는 프로그램 제작
	// input 에다가 입력된 값을 받고
	// input 값을 result 에다가 더해준다.
	// 만약 result 값이 10000보다 크면 종료해준다.(return 0)
	//아니라면 다시 1번으로 돌아간다.

	

		

#pragma endregion


	// switch ?

	/*int input = 0;
	cin >> input;

	switch (input)
	{

	case 0:
		cout << "해당값은 0입니다" << endl;
		break;

	case 1:

		cout << "해당값은 1입니다" << endl;
		break;

	case 2:

		cout << "해당 값은 2 입니다." << endl;

		break;
	default:
		cout << " 값을 확인 할 수 없습니다." << endl;
		break;
	}
	*/

#pragma region Array, Char
	// char == 1 byte

/*
int numbers[] = { 0,1 };

char c[] = "Hello World!";

for (int i = 0; i < 13; i++)
{
	if (i == 5)
	{
		continue;
	}

	printf("%c\n", c[i]);
}

int length = _countof(c);
*/
// c++
//cout << c << endl;
//cout << c[2] << endl;
// c
//printf("%s\n ", c);
//printf("%c\n", c[0]);

char str[256] = { 0 , };

//cin >> str

scanf_s("%s", str, 256);
printf("%s" , str[\0]);
#pragma endregion

	return 0;
}

