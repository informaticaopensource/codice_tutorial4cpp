/* Codice di esempi di sotto programmi che richiedonjo il passaggio di parametri per indirizzo o per valore */
#include <iostream>
using namespace std;
void somma(int a,int b, int& s)
{
	s=a+b;
	cout << "La somma è: "<< s << endl;
}
int main ()
{
	int n1,n2,tot;
	tot=0;
	cout << "\nInserisci i due numeri \t";
	cin >> n1 >> n2;
	somma(n1,n2,tot);
	cout << "\n La somma è: \t" << tot << endl;
	return 0;
}
