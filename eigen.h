#ifndef _EIGEN_H_
#define _EIGEN_H_

#include <Eigen/Dense>

Eigen::MatrixXd random(int m, int n);

Eigen::MatrixXd relu(Eigen::MatrixXd &m);

Eigen::MatrixXd sigmoid(Eigen::MatrixXd &m);

Eigen::MatrixXd linear(Eigen::MatrixXd &w, Eigen::MatrixXd &x, const Eigen::MatrixXd &b);

#endif // _EIGEN_H_
