#include<iostream>
#include<fstream>

using namespace std;

int main() {
	
	ifstream ans = ifstream("data.txt");

	int ansData[10];
	int num[10];
	int m, n, o, p ;
	int count =0;
	int a, b;

	
	
	while (ans >> ansData[count])
		count++;

		do
		{
			a = 0, b = 0;

			cout << "�вq�|��0~99�������P���:" << endl;
			cin >> m >> n >> o >> p;

			num[0] = m;
			num[1] = n;
			num[2] = o;
			num[3] = p;

		if (m != n && n != o && o != p && m >= 0 && m <= 99 && n >= 0 && n <= 99 && o >= 0 && o <= 99 && p >= 0 && p <= 99 && m != n && m != o && m != p && n != o && n != p && o != p)
		{
			

			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j <4; j++)
				{ 
					if (num[i] == ansData[j])
					{
						if (i == j)
							a++;
						else
							b++;
					}
				}
			}

			cout << a << "A" << b << "B" << endl;
			continue;
		}
			
		for (int i = 0; i < 4; i++)
		{
			for (int j = i+1; j < 4; j++)
			{
				if (num[i] == num[j] && i != j)
					cout << "***��J��" << num[i] << "����!" << endl;
			}
			if (num[i] < 0 || num[i] >99)
				cout << "***��J��" << num[i] << "�W�X�d��!" << endl;
		}

		cout << "�ЦA�q�@���C" << endl;
	
	} while (m == n || m == o || m == p || n == o || n == p || o == p || m < 0 || m > 99 || n < 0 || n > 99 || o < 0 || o > 99 || p < 0 || p > 99 || a<4 );

	
	return 0;

}