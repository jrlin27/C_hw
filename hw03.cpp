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

	cout << "總共有" << count << "筆成績" << endl;
	cout << "平均為:" << ave << "分" << endl;
	cout << "最接近平均的分數為:" << closeAve << "分" << endl;
	cout << "最高分為:" << max << "分" << endl;
	cout << "最低分為:" << min << "分" << endl;
	cout << "分數組距:" << endl;
	cout << "100~90分:" << m[9] << "個" << endl;
	cout << "89~80分:" << m[8] << "個" << endl;
	cout << "79~70分:" << m[7] << "個" << endl;
	cout << "69~60分:" << m[6] << "個" << endl;
	cout << "59~50分:" << m[5] << "個" << endl;
	cout << "49~40分:" << m[4] << "個" << endl;
	cout << "39~30分:" << m[3] << "個" << endl;
	cout << "29~20分:" << m[2] << "個" << endl;
	cout << "19~10分:" << m[1] << "個" << endl;
	cout << "9~0分:" << m[0] << "個" << endl;

	cout << "查詢成績，請輸入座號:" << endl;

	int id;
	do
	{
		cin >> id;

		if (id >= 1 && id <= 40)
			break;

		cout << "輸入座號錯誤，請重新輸入:" << endl;
	} while (id < 1 || id >40);

		cout << "座號" << id << "的成績為:" << data[id - 1] << "分" << endl;

	return 0;
}