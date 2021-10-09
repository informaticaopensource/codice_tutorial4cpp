#include <iostream>
#include <string>
using namespace std;
	struct alunno
{
	string nome;
	string cognome;
	int age;
	float mediav;
};

void carica (struct alunno a[],int l);
void stampa (struct alunno a[],int l);
int main ()
{

	int n;
	struct alunno classe[32];
	cout << "\n Inserisci numero alunni\t";
	cin >> n;
	carica(classe,n);
	stampa(classe,n);
	return 0;
}
void carica (struct alunno a[],int l)
{
	int k;
	string temp;
	for (k=0;k<l;k++)
	{
		cout << "\n Inserici nell'ordine nome, cognome, età e media voti\n";
		getchar();
		getline(cin,a[k].nome);
		getline(cin,a[k].cognome);
		cin >> a[k].age;
		cin >> a[k].mediav;
	}
}
void stampa (struct alunno a[],int l)
{int k;
	cout << "\n Stampa Elenco alunni:";
	cout << "Nome\t"<< "Cognome\t"<< "Età\t"<< "Media dei Voti"<<endl;
	for (k=0;k<l;k++)
			cout <<	a[k].nome << "\t"<< a[k].cognome<< "\t"<< a[k].age << "\t"<< a[k].mediav << endl;
}
