//ntnu_40923111L_林菁容

#include<iostream>

using namespace std;

int main() {
	int shap;
	int siz;

	//輸入圖形
	cout << "請選擇繪製圖形(1.正方形, 2.正三角形, 3.倒三角形), 4.結束程式" << endl;
	do {
		cin >> shap;

		if (shap >= 1 && shap <= 4)
			break;

		cout << "輸入錯誤，請重新輸入圖形:" << endl;

	} while (shap < 1 || shap >4);

	//輸入4時，結束程式
	if (shap == 4)
		exit(0);

	//輸入大小
	cout << "請輸入圖形大小:" << endl;
	do
	{
		cin >> siz;

		if (siz >= 1 && siz <= 9)
			break;

		cout << "輸入錯誤，請重新輸入大小:" << endl;
	} while (siz < 1 || siz >9);

	//畫圖
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