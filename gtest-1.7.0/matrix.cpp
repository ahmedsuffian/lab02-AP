#include "matrix.h"
#include <iostream>

using namespace std;

void Matrix :: setValues () {
	int i, j;

	for (i = 0; i < N; i ++) {
		for (j = 0; j < N; j ++) {
			cout << "["<< i <<"][" << j <<"] ?";
			cin >> this -> mat [i*3 + j];
		}
	}
}


void Matrix :: printMat () {
	int i, j;

	for (i = 0; i < N; i ++) {
		for (j = 0; j < N; j ++) {
			cout << this -> mat [i*3 + j] << "\t";
		}
		cout <<endl;
	}
	cout << endl;
}

int * Matrix :: getMat () {
	return this -> mat;
}

int * Matrix :: add (Matrix B) {
	int * res, * matB;
	int i,j;

	matB = B.getMat ();
	res = new int [9];
	for  (i = 0; i < N* N; i++) {
		res [i] = this -> mat [i] + matB [i];	
	}
	
	return res;
}

int * Matrix :: subtract (Matrix B) {
	int * res, * matB;
	int i,j;

	matB = B.getMat ();
	res = new int [9];
	for  (i = 0; i < N* N; i++) {
		res [i] = this -> mat [i] - matB [i];	
	}
	
	return res;
}

int * Matrix :: multiply (Matrix B){
	int n = N, m = N;

	//Dynamically allocation 2D array using 1D array
	int *mC = new int[n*m]; //mC is result matrix
	int *MatrixA = this -> mat;
	int *MatrixB = B.getMat ();
	
	
	//Multiplying
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			mC[m*i+j] = 0;
			for (int k = 0; k < N; k++){
				mC[m*i+j] += MatrixA[N*i+k] * MatrixB[N*k+j];
			}
		}

	}
	return mC;
}
