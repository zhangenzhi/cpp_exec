#include<iostream>
#include "eigen.h"
#include "utils.h"

#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

int main(){

    cout<<"hello world"<<endl;
    cout<<"how to improve my cpp abilities?"<<endl;
    
    string s="how to using other source file?";
    print(s);

    Eigen::MatrixXd m = Eigen::MatrixXd::Random(2,2);
    print(m);

    auto n = random(2,2);
    print(n);

    return 0;
}