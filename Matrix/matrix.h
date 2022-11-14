#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include <vector>

class Matrix{
public:
    Matrix(int, int);
    Matrix();

    int get_row();
    int get_coloumn();
    void Insert(int, int, int);
    void display();

    friend Matrix matrix_addition(Matrix &, Matrix &);
    friend Matrix matrix_multiplication(Matrix &, Matrix &);

private:
    int row, coloumn;
    std::vector<std::vector<int>> matrix;
};

#endif // MATRIX_H_INCLUDED
