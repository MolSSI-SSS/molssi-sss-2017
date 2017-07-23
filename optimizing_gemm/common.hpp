#ifndef COMMON_HPP_
#define COMMON_HPP_

#include <cstdio>
#include <limits>
#include <algorithm>

#include <omp.h>

#define EIGEN_USE_BLAS
#define EIGEN_NO_DEBUG
#include <Eigen/Dense>

using matrix = Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor>;

/*
 * Compute C = A*B
 */
void my_dgemm(int m, int n, int k, const matrix& A, const matrix& B, matrix& C);

#endif

