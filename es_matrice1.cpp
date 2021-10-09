#include <iostream>
using namespace std;
void carica (int m[][10],int p);
int diagonali1 (int m[][10],int p);
int diagonali2 (int m[][10],int p);
int main ()
{
	int mat[10][10];
	int sd1, sd2;
	int p;
	cout << "\n Inserisci la dimensione della matrice quadrata:\t";
	cin >> p;
	carica(mat,p);
	sd1=diagonali1(mat,p);
	sd2=diagonali2(mat,p);
	cout << "\nLa somma degli elementi di diagonale principale è:\t"<< sd1;
	cout << "\nLa somma degli elementi di diagonale secondaria è:\t"<< sd2;
	return 0;
}
void carica (int m[][10],int p)
{
	int i,j;
	for (i=0;i<p;i++)
		for (j=0;j<p;j++)
			{
					cout << "inserisci elemento di matrice " << i+1 << ","<< j+1 << endl;
					cin >> m[i][j];
			}
}
int diagonali1 (int m[][10],int p)
{
	int s1,k;
	s1=0;
		for (k=0;k<p;k++)
			s1=s1+m[k][k];
	return s1;
}
int diagonali2 (int m[][10],int p)
{
	int s1,k,j;
	s1=0;
	for (k=0;k<p;k++)
		for (j=0;j<p;j++)
			if (k+j==p-1)
				s1=s1+m[k][j];
	return s1;
}

// 3x3 
//   1 2 3 
//   2 3 4
//   4 5 0



