#include <iostream>
#include <ctime>

using namespace std;

// 주머니에 공이 1~45개 들어있고, 6개의 공을 꺼냈을때 나오는 프로그램 / 숫자가 중복되지 않게 나와야 함

int main()
{
	int BallNumber[45];
	int Catch, Number;

	for (int i = 0; i < 45; ++i) // 배열 초기화
	{
		BallNumber[i] = i + 1;
	}

	srand(time(NULL));

	for (int i = 0; i < 6; ++i)
	{
		Number = rand() % (45 - i) + 1;
		Catch = BallNumber[i];
		BallNumber[i] = BallNumber[Catch];
		BallNumber[Catch] = Number;
		cout << BallNumber[i] << " ";

	}

	return 0;
}