#include <iostream>
using namespace std;
void somma(int a,int b, int& s)
{
	s=a+b;
	cout << "La somma �: "<< s << endl;
}
int main ()
{
	int n1,n2,tot;
	tot=0;
	cout << "\nInserisci i due numeri \t";
	cin >> n1 >> n2;
	somma(n1,n2,tot);
	cout << "\n La somma �: \t" << tot << endl;
	return 0;
}
