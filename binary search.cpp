// binary search.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
  setlocale(LC_ALL, "rus");
 
  int arr[10]; // ������� ������ �� 10 ���������
  int key; // ������� ���������� � ������� ����� ���������� ����
 
  cout << "������� 10 ����� ��� ���������� �������: " << endl;
 
  for (int i = 0; i < 10; i++) {
    cin >> arr[i]; // ��������� �������� �������
  }
 
  sort (arr, arr + 10); // ��������� � ������� ������� sort (������� ����������)
 
  cout << endl << "������� ����: ";
 
  cin >> key; // ��������� ����
 
  bool flag = false;

	int l = 0;
	int r = 10; 
	int mid;
 
	while (l < r) {
		mid = (l + r) / 2; // ��������� ��������� ������ ������� [l,r]
 
		if (arr[mid] > key) r = mid; // ���������, ����� ����� ����� ��������� � ������
		else l = mid + 1;
	}
 
	r--; // ��������� �� ���� 
 
	if (arr[r] == key) cout << "������ �������� " << key << " � ������� �����: " << r << endl; 
	else cout << "��������, �� ������ �������� � ������� ���" << endl;
	system ("pause");
}