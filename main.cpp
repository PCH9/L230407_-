#include <iostream>
#include <ctime>

using namespace std;

// �ָӴϿ� ���� 1~45�� ����ְ�, 6���� ���� �������� ������ ���α׷� / ���ڰ� �ߺ����� �ʰ� ���;� ��

int main()
{
	int BallNumber[45];
	int Catch, Number;

	for (int i = 0; i < 45; ++i) // �迭 �ʱ�ȭ
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