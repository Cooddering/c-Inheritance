#include <iostream>
#include "kare.h"
using namespace std;

int kare::alanHesapla()
{
	//Kare alan bir kenarin karesi
	cout << "Lutfen kare kenari giriniz.: ";
	cin >> kenar;
	alan = sqrt(kenar);

	cout << "Lutfen kare kenar sayisini giriniz.: ";
	cin >> kenarSayisi;
}
