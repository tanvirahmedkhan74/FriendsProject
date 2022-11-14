#include <iostream>
#include "matrix.h"

int main()
{
    Matrix A = Matrix(2, 2);
    Matrix B = Matrix(2, 2);


    A.Insert(0, 0, 1);
    A.Insert(0, 1, 2);
    A.Insert(1, 0, 3);
    A.Insert(1, 1, 4);

    B.Insert(0, 0, 5);
    B.Insert(0, 1, 6);
    B.Insert(1, 0, 7);
    B.Insert(1, 1, 8);

    Matrix add  = matrix_addition(A, B);
    add.display();

    Matrix mult = matrix_multiplication(A, B);
    mult.display();

    return 0;
}
