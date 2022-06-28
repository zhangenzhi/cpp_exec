#include<iostream>
#include "eigen.h"
#include "utils.h"

#include <Eigen/Dense>
#include <Eigen/Core>

using namespace std;
using namespace Eigen;

int main(){

    cout<<"hello world"<<endl;
    cout<<"how to improve my cpp abilities?"<<endl;
    
    string s="how to use other source file?";
    print(s);

    Eigen::MatrixXd m = Eigen::MatrixXd::Random(2,2);
    print(relu(m));

    auto n = random(2,2);
    print(sigmoid(n));

    auto b = Eigen::VectorXd::Ones(2,1);
    //  b(2,1) ;
    // b << 1.0,
    //     1.0;
    Eigen::MatrixXd o = Eigen::MatrixXd::Random(2,2);
    auto a = o.colwise() + b;
    cout << a << endl;
    // auto a = o + b;
    // print(a);
    // auto o = linear(m,n,b);
    // print(o);

    return 0;
}