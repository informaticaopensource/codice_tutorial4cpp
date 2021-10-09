#include <iostream>
#include <string>
using namespace std;
void carica (string p[],int l);
void ordina (string p[],int l);
void stampa (string p[],int l);
int main ()
{
	string parola1[200]; 
	int n;
	cout << "Inserisci il numero delle parole dell'array' \n";
	cin >> n;
	carica(parola1,n);
	ordina(parola1,n);
	stampa(parola1,n);
	return 0;
}
void carica (string p[],int l)
{
	int k;
	cout << "\n Caricamento array in corso ..";
	for (k=0;k<l;k++)
	{
		cout << "\n Inserisci una parola\n";
		cin >> p[k];
	}
}
void ordina (string p[],int l)
{
	int k,k1;
	string temp;
	for (k=0;k<l-1;k++)
		for (k1=k+1;k1<l;k1++)
		{
			if (p[k]>p[k1])
			{	temp=p[k];
				p[k]=p[k1];
				p[k1]=temp;		}	
		}
		
}
void stampa (string p[],int l)
{
	int k;
	cout << "\n Stampa degli elementi dell'array in corso...\n";
	for (k=0;k<l;k++)
	{
		cout << "Parola dell'array:\t"<< p[k];
		cout << endl;
	}
}

