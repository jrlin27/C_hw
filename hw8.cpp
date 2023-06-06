// hw8.cpp

#include <iostream>

using namespace std;

void typeCheck(int x) {
	cout << x << " is int type" << endl;
}

void typeCheck(double x) {
	cout << x << " is double type" << endl;
}

void typeCheck(char x) {
	cout << x << " is char type" << endl;

}

void typeCheck(char x[]) {
	cout << x << " is string(array of char) type" << endl;
}

void typeCheck(int x[][2]) {
	cout << "Input data is a 2D array of int" << endl;
}
void typeCheck(int x[][2][2]){
	cout << "Input data is a 2D array of int" << endl;
}

void main()  //main之內容不可改
{
	int a = 2;
	double b = 3.14;
	char c = 'a';
	char s[] = "This is a test.";
	int t[][2] = {1,2,3,4,5,6};
	int r[][2][2] = {1,2,3,4,5,6,7,8};


	typeCheck(a);
	typeCheck(b);
	typeCheck(c);
	typeCheck(s);
	typeCheck(t);
	typeCheck(r);

	system("pause");
}

