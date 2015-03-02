#include <limits.h>
#include "matrix.h"
#include "gtest/gtest.h"



TEST(matrix_Add_Test, Blah) {
	int matA [] = {10,10,10,10,10,10,10,10,10};
	int matB [] = {10,10,10,10,10,10,10,10,10};
	int matC [] = {20,20,20,20,20,20,20,20,20};

	Matrix a (matA);
	Matrix b (matB);

	int *res = a.add (b);

	for (int i = 0; i < 9 ; i ++) {
		EXPECT_EQ( res [i], matC [i]);
	}
}

TEST(matrix_Multiplication_Test, Blah) {
	int m_matA [] = {10,10,10,10,10,10,10,10,10};
	int m_matB [] = {10,10,10,10,10,10,10,10,10};
	int m_matC [] = {300,300,300,300,300,300,300,300,300};

	Matrix m_a (m_matA);
	Matrix m_b (m_matB);

	

	int *m_res = m_a.multiply (m_b);

	for (int i = 0; i < 9 ; i ++) {
		EXPECT_EQ( m_res [i], m_matC [i]);
	}
}

TEST(matrix_add_and_multiply_Test, Blah) {
	int m_matA [] = {10,10,10,10,10,10,10,10,10};
	int m_matB [] = {10,10,10,10,10,10,10,10,10};
	int m_matC [] = {310,310,310,310,310,310,310,310,310};

	Matrix m_a (m_matA);
	Matrix m_b (m_matB);

	int *m_res = m_a.multiply (m_b);
	Matrix final (m_res);

	m_res = final.add (m_b);

	for (int i = 0; i < 9 ; i ++) {
		EXPECT_EQ( m_res [i], m_matC [i]);
	}
}