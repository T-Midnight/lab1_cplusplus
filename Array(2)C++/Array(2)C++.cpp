#include "stdafx.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	int a[5], min, max;
	string str;

	setlocale(LC_ALL,"RUS");

	for (int i = 0; i < 5; i++) {		
		cout << "������� "<< i + 1 <<" ������� �������:";
		cin >> a[i];
	}
	char ch = str.c_str()[i];
	if(!isdigit(ch)) {
		cerr << "������������ ����, ��������� �������:" << endl;                        
	} 
	a[i] = atoi(str.c_str());
	
	// ������ ������, ��� ���� ������� ��������� � ���� for, ������� ���� ���. � ��, ��� � ����� ������ ������ ������.

	max = a[0];							
	for (int i = 1; i < 5; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}

	// ���������� ������������ � ����������� ��������. ��� ��� ������ ������������ ������ ����������� � ��������
	// � ����� ��������� ����...

	// �� ��������� �����������, ������� ���� �������

	min = a[0];
	for (int i = 1; i < 5; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}

	cout << "����������� ������� = "<< min << endl;
	cout << "������������ ������� = "<< max << endl;

	system ("PAUSE");
}