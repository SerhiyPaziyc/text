// Lab_02.cpp
// ����� ����� ���������
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 9
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double Pi = 4 * atan(1.); // ����� �
	double a; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	cout << "a = "; cin >> a;
	z1 = (sin(Pi / 2 + 3 * a)) / (1 - sin(3 * a - Pi));
	z2 = cos(5. / 4 * Pi + 3. / 2 * a) / sin(5. / 4 * Pi + 3. / 2 * a);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}