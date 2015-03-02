
#include <iostream>
#include "matrix.h"

using namespace std;

int main () {
	//Matrix m, n;
	int matA [] = {10,10,10, 10,10,10,10,10,10};
	int matB [] = {10,10,10, 10,10,10,10,10,10};
	 
	//m.setValues ();
	Matrix m (matA);
	m.printMat ();
	
	Matrix n (matA);
	n.printMat ();
	
	int * res = m.add (n);
	Matrix r (res);
	
	r.printMat ();
	
	return 0;
}

