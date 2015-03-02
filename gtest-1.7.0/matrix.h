/*
		MATRIX HEADER FILE
*/

// #define 	N	3
int const N = 3;

class Matrix {
	int * mat;
	
	public: 
	
	Matrix () {
		mat = new int [N * N];
	}
	
	Matrix (int * arr) {
		mat = arr;
	}
	
	void setValues (); 
	void printMat ();
	int * getMat ();	
	int * add (Matrix B);
	int * subtract (Matrix B);
	int * multiply (Matrix B);
};
