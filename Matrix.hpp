#include <iostream>
#include "vector"
using namespace std;

namespace zich{
class Matrix {

    private:
    //vector like your in demo.cpp
        vector<double> matrix;
        int row;
        int col;
    public:

        //constructor that get matrix,row and col, the matrix is const cuse we
        // will not change it, we get it by reffernce cuse we get from another class
        Matrix(const std::vector<double> &matrix, int r, int c);

        //the firs operators(i had 4/6 and its worked..)
        Matrix operator+(const Matrix &other);
        Matrix operator+=(const Matrix &other);
        Matrix operator-(const Matrix &other);
        Matrix operator-=(const Matrix &other);
        
        //the seconde six operators
        bool operator>(const Matrix &other);
        bool operator<(const Matrix &other);
        bool operator==(const Matrix &other);
        bool operator!=(const Matrix &other);
        bool operator>=(const Matrix &other);
        bool operator<=(const Matrix &other);

        // * scalar
        friend Matrix operator*=(Matrix &other, double otherNumber);

        // +1,-1
        Matrix operator++();
        Matrix operator--();

        //used to decleare the muliply in -1 
        friend Matrix operator-(Matrix &matrix1);
        friend Matrix operator*(double num, Matrix &other);

        //output operator
        friend ostream &operator<<(ostream &os, const Matrix &mat);
        //input operator
        friend iostream &operator>>(iostream &os, const Matrix &mat);

        //check who is biggest,smallest than 
        double check(vector<double> currVec);

        //used to tests
        void clearMat();
};
}