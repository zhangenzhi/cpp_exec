#include "eigen.h"
#include <Eigen/Dense>

Eigen::MatrixXd relu(Eigen::MatrixXd  &m){
    return m;
}

Eigen::MatrixXd random(int m, int n){
    return Eigen::MatrixXd::Random(m,n);
}
