#include <iostream>
using namespace std;
int main ()
{
	enum colore {rosso,verde,nero,bianco};
	colore c;
	c=nero;
	if (c==rosso)
		cout << "\n Rosso\n";
	if (c ==nero)
		cout << "\n Nero\n";
	if (c==bianco)
		cout << "\n Bianco\n";
	return 0;
}
