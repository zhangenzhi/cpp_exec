#include "eigen.h"
#include <Eigen/Dense>
#include <math.h>

Eigen::MatrixXd relu(Eigen::MatrixXd  &m){
    for (auto &x: m.reshaped())
        x>=0?x=x:x=0;
    return m;
}

Eigen::MatrixXd sigmoid(Eigen::MatrixXd &m){
    for (auto &x: m.reshaped())
        x = 1/(1 + exp(-x));
    return m;
}

Eigen::MatrixXd random(int m, int n){
    return Eigen::MatrixXd::Random(m,n);
}
Eigen::MatrixXd linear(Eigen::MatrixXd &w, Eigen::MatrixXd &x, Eigen::MatrixXd &b){
    Eigen::MatrixXd output = w * x + b;
    return output;
}
