// Algorytmy.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

void f1(int& a) {
	a = 15;
}


int main()
{
	cout << "Algorytmy" << endl;
	int a = 5;
	cout << a << endl;
	f1(a);
	cout << a;
}



