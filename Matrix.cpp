#include "Matrix.hpp"
#include "vector"
#include "stdexcept"

using namespace std;
using namespace zich;

Matrix::Matrix(const std::vector<double> &matrix, int r, int c) {
    this->matrix = matrix;
    this->row = r;
    this->col = c;
}

Matrix Matrix::operator+(const Matrix &other) {
    return Matrix(this->matrix, this->row, this->col);
}

Matrix Matrix::operator+=(const Matrix &other) {
    return Matrix(this->matrix, this->row, this->col);
}

Matrix Matrix::operator++() {
    return Matrix(this->matrix, this->row, this->col);

}

Matrix Matrix::operator-(const Matrix &other) {
    return Matrix(this->matrix, this->row, this->col);
}

Matrix Matrix::operator--() {
    return Matrix(this->matrix, this->row, this->col);
}

Matrix Matrix::operator-=(const Matrix &other) {
    return Matrix(this->matrix, this->row, this->col);

}

bool Matrix::operator<(const Matrix &other) {
    //in check func i will compare the sums of the two matrixes
    return (check(this->matrix)) < (check(other.matrix));
}

bool Matrix::operator>(const Matrix &other) {
    //in check func i will compare the sums of the two matrixes
    return (check(this->matrix)) > (check(other.matrix));
}

bool Matrix::operator==(const Matrix &other) {
    //i will check after..
    bool flag = false;
    return flag;
}

bool Matrix::operator!=(const Matrix &other) {
    //i will check after..
    bool flag = false;
    return flag;
}

bool Matrix::operator>=(const Matrix &other) {
    //in check func i will compare the sums of the two matrixes
    return (check(this->matrix)) >= (check(other.matrix));
}

bool Matrix::operator<=(const Matrix &other) {
    //in check func i will compare the sums of the two matrixes
    return (check(this->matrix)) <= (check(other.matrix));
}


Matrix zich::operator*(double otherNumber, Matrix &other) {
    return Matrix(other.matrix, other.row, other.col);
}


Matrix zich::operator-(Matrix &mat) {
    return -1 * mat;
}

ostream &zich::operator<<(ostream &os, const Matrix &mat) {
    return os;
}

iostream &zich::operator>>(iostream &os, const Matrix &matrix1) {
    return os;
}

Matrix zich::operator*=(Matrix &other, double otherNumber) {
    return Matrix(other.matrix, other.row,other.col);
}

double Matrix::check(vector<double> currVec) {
    //here i will compare the sums of the two matrixes
    return -1;
}
// i will clean the vector (remove all the elements from it)
void Matrix::clearMat(){}