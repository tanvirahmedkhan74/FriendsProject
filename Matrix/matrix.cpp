#include "matrix.h"
#include<iostream>
#include<vector>

Matrix::Matrix(){
    row = 0;
    coloumn = 0;
}

Matrix::Matrix(int r, int c){
    row = r;
    coloumn = c;

    matrix = std::vector<std::vector<int>>( r , std::vector<int> (c, 0));
}

int Matrix::get_row(){
    return row;
}

int Matrix::get_coloumn(){
    return coloumn;
}

void Matrix::Insert(int p, int q, int val){
    if(p < row && q < coloumn){
        matrix[p][q] = val;
    }else std::cout << "Index Out of Bound!\n";
}

void Matrix::display(){
    for(int i=0;i<row;i++){
        for(int j=0;j<coloumn;j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}
Matrix matrix_addition(Matrix & A, Matrix & B){
    Matrix ans = Matrix(A.row, A.coloumn);

    if(A.row == B.row && A.coloumn == A.coloumn){
        for(int i=0;i<A.row;i++){
            for(int j=0;j<A.coloumn;j++){
                ans.matrix[i][j] = A.matrix[i][j] + B.matrix[i][j];
            }
        }

    }else std::cout << "Dimensions Must be Same!\n";

    return ans;
}

Matrix matrix_multiplication(Matrix &A, Matrix &B){
    Matrix ans = Matrix(A.row, B.coloumn);

    for(int i=0;i<A.row;i++){
        for(int j=0;j<B.coloumn;j++){
            for(int k=0;k<A.coloumn;k++){
                ans.matrix[i][j] += A.matrix[i][k] * B.matrix[k][j];
            }
        }
    }

    return ans;
}

