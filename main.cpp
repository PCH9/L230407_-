#include <iostream>
#include <ctime>

using namespace std;

// �ָӴϿ� ���� 1~45�� ����ְ�, 6���� ���� �������� ������ ���α׷� / ���ڰ� �ߺ����� �ʰ� ���;� ��

int main()
{
	int BallNumber[45];
	int Ball, Number;

	for (int i = 0; i < 45; ++i) // �迭 �ʱ�ȭ
	{
		BallNumber[i] = i + 1;
	}

	srand(time(NULL));

	for (int i = 0; i < 6; ++i)
	{
		Number = rand() % (45 - i) + 1;
	}
	cout << Number;

	return 0;
}