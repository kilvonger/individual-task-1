// binary search.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
  setlocale(LC_ALL, "rus");
 
  int arr[10]; // создали массив на 10 элементов
  int key; // создали переменную в которой будет находиться ключ
 
  cout << "Введите 10 чисел для заполнения массива: " << endl;
 
  for (int i = 0; i < 10; i++) {
    cin >> arr[i]; // считываем элементы массива
  }
 
  sort (arr, arr + 10); // сортируем с помощью функции sort (быстрая сортировка)
 
  cout << endl << "Введите ключ: ";
 
  cin >> key; // считываем ключ
 
  bool flag = false;

	int l = 0;
	int r = 10; 
	int mid;
 
	while (l < r) {
		mid = (l + r) / 2; // считываем срединный индекс отрезка [l,r]
 
		if (arr[mid] > key) r = mid; // проверяем, какую часть нужно отбросить с поиска
		else l = mid + 1;
	}
 
	r--; // уменьшаем на один 
 
	if (arr[r] == key) cout << "Индекс элемента " << key << " в массиве равен: " << r << endl; 
	else cout << "Извините, но такого элемента в массиве нет" << endl;
	system ("pause");
}