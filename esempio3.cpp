#include <iostream>
using namespace std;
void carica (int x[],int d);
float media (int x[],int d);
int main ()
{
	int vet[100];
	int n;
	float m;
	cout << "\n Inserisci dimensione dell'array\n";
	cin >> n;
	carica(vet,n);
	m=media(vet,n);
	cout  << "La media dei numeri è:\t"<< m << endl;
	return 0;
}
void carica (int x[],int d)
{
	int k;
	for (k=0;k<d;k++)
	{
		cout << "Inserisci l'elemento "<< k+1 << endl;
		cin >> x[k];
	}
}
float media (int x[],int d)
{ 	float m=0;
	int k;
	int s=0;
		for (k=0;k<d;k++)
			s=s+x[k];
	m=(float)s/d;
	return m;
}

