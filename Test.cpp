#include "Matrix.hpp"
#include "vector"
#include "doctest.h"

using namespace std;
using namespace zich;


TEST_CASE ("Check the Operators..") {
    vector<double> vec1;
    vector<double> vec2;

    for (int i = 1; i <= 25; ++i) {
        vec1.push_back(i);
        vec2.push_back(i + (i * i));
        Matrix matrix(vec1, 1, i);
        Matrix matrix2(vec2, 1, i);
        bool test = matrix <= matrix2;
        CHECK(test == true);
    }

    vec1.clear();
    vec2.clear();
    

    for (int i = 1; i <= 20; ++i) {
        vec1.push_back(i);
        vec2.push_back(i + (i * i));
        Matrix matrix(vec1, i, 1);
        Matrix matrix2(vec2, i, 1);
        bool test = matrix2 >= matrix;
        CHECK(test == true);
    }

    vec1.clear();
    vec2.clear();

    vec1.push_back(1);

    Matrix matrix(vec1, 1, 1);
    for (int i = 1; i < 30; ++i) {
        vec2.push_back(i);
        Matrix curr_matrix(vec2, 1, i);
        if (i != 1) {
            CHECK_THROWS(curr_matrix + matrix);
            CHECK_THROWS(curr_matrix - matrix);
            CHECK_THROWS(curr_matrix += matrix);
            CHECK_THROWS(curr_matrix -= matrix);
        }
    }
    matrix.clearMat();
}