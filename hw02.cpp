//ntnu_40923111L_�L�׮e

#include<iostream>

using namespace std;

int main() {
	int shap;
	int siz;

	//��J�ϧ�
	cout << "�п��ø�s�ϧ�(1.�����, 2.���T����, 3.�ˤT����), 4.�����{��" << endl;
	do {
		cin >> shap;

		if (shap >= 1 && shap <= 4)
			break;

		cout << "��J���~�A�Э��s��J�ϧ�:" << endl;

	} while (shap < 1 || shap >4);

	//��J4�ɡA�����{��
	if (shap == 4)
		exit(0);

	//��J�j�p
	cout << "�п�J�ϧΤj�p:" << endl;
	do
	{
		cin >> siz;

		if (siz >= 1 && siz <= 9)
			break;

		cout << "��J���~�A�Э��s��J�j�p:" << endl;
	} while (siz < 1 || siz >9);

	//�e��
	switch (shap)
	{
	case 1:
		for (int a=1; a<=siz; a++)
		{
			for (int b = siz; b >0; b++)
			{
				cout << a;
			}
			cout << endl;
		}
		break;

	case 2:
		for (int a = 1; a <= siz; a++)
		{
			for (int b=1; b<=a; b++)
			{
				cout << a;
			}
			cout << endl;
		}
		break;

	case 3:
		for (int a = siz; a > 0; a--)
		{
			for (int b = 1; b <= a; b++)
			{
				cout << a;
			}
			cout << endl;
		}
		break;
	}

	return 0;

}