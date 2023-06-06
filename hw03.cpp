#include<iostream>
#include<fstream>

using namespace std;

int main() {

	ifstream fcin = ifstream("hw3.txt");

	int data[150];
	int count = 0;
	float sum = 0.0;
	int m[10] = { 0,0,0,0,0,0,0,0,0,0 };


	while (fcin >> data[count])
		count++;

	int max = data[0];
	int min = data[0];
	int closeAve = data[0];
	int i;

	for (i = 0; i < count; i++)
	{
		//cout << data[i] << ",";

		sum = sum + data[i];

		if (data[i] > max)
			max = data[i];

		if (data[i] < min)
			min = data[i];

		switch (data[i] / 10)
		{
		case 10:
			m[9]++;
			break;

		case 9:
			m[9]++;
			break;

		case 8:
			m[8]++;
			break;

		case 7:
			m[7]++;
			break;

		case 6:
			m[6]++;
			break;

		case 5:
			m[5]++;
			break;

		case 4:
			m[4]++;
			break;

		case 3:
			m[3]++;
			break;

		case 2:
			m[2]++;
			break;

		case 1:
			m[1]++;
			break;

		case 0:
			m[0]++;
			break;
		
		}

	}

	float ave = sum / count;
	float closeD = -1 * (data[0] - ave);

	for (int i = 0; i < count; i++)
	{
		float d = data[i] - ave;

		if (d < 0)
			d = -1 * d;

		if (d < closeD)
		{
			closeD = d;
			closeAve = data[i];
		}
	}

	cout << "�`�@��" << count << "�����Z" << endl;
	cout << "������:" << ave << "��" << endl;
	cout << "�̱��񥭧������Ƭ�:" << closeAve << "��" << endl;
	cout << "�̰�����:" << max << "��" << endl;
	cout << "�̧C����:" << min << "��" << endl;
	cout << "���ƲնZ:" << endl;
	cout << "100~90��:" << m[9] << "��" << endl;
	cout << "89~80��:" << m[8] << "��" << endl;
	cout << "79~70��:" << m[7] << "��" << endl;
	cout << "69~60��:" << m[6] << "��" << endl;
	cout << "59~50��:" << m[5] << "��" << endl;
	cout << "49~40��:" << m[4] << "��" << endl;
	cout << "39~30��:" << m[3] << "��" << endl;
	cout << "29~20��:" << m[2] << "��" << endl;
	cout << "19~10��:" << m[1] << "��" << endl;
	cout << "9~0��:" << m[0] << "��" << endl;

	cout << "�d�ߦ��Z�A�п�J�y��:" << endl;

	int id;
	do
	{
		cin >> id;

		if (id >= 1 && id <= 40)
			break;

		cout << "��J�y�����~�A�Э��s��J:" << endl;
	} while (id < 1 || id >40);

		cout << "�y��" << id << "�����Z��:" << data[id - 1] << "��" << endl;

	return 0;
}