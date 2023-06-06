#include <iostream>
using namespace std;

int main() {

	cout << "請輸入三個整數:" << endl;
int A, B, C;
		 
	cin >> A >> B >> C;
	cout << "A=" << A << ", B=" << B << ", C=" << C << endl;

	if (A > B && A > C && A != B && A != C && B != C)
		cout << "A+B+C=" << A + B + C << endl;

	else if (B > A && B > C && A != B && A != C && B != C)
		cout << "A-B-C=" << A - B - C << endl;

	else  if (C > A && C > B && A != B && A != C && B != C)
		cout << "A*B*C=" << A * B * C << endl;

	else if (A == B && A == C)
		cout << "A/3之餘數=" << A % 3 << endl;

	else if (A == B && B != C)
		cout << "(A+B)*C=" << (A + B) * C << endl;

	else if (A == C && B != C)
		cout << "(A+C)*B=" << (A + C) * B << endl;

	else
		cout << "A*(B+C)=" << A * (B + C) << endl;

	return 0;


}