#include <iostream>
using namespace std;

#include <ctime>
//Eigen 核心部分
#include <Eigen/Core>
//稠密矩阵的代数运算（逆、特征值等）
#include <Eigen/Dense>
using namespace Eigen;

#define MATRIX_SIZE 50

/****************************************
 * 本程序演示了Eigen基本类型的使用
 * **************************************/

int main(int argc, char **argv){
    //Eigen中，所有的向量和矩阵都是Eigen::Matrix,是一个模板类。 它的前三个参数为数据类型、行、列
    //声明一个2*3的 矩阵
    //同时 Eigen通过typedef提供了很多内置类型，不过底层还是Eigen：：Matrix
    Matrix<float,2,3> matrix_23;
    Vector3d v_3d;
    Matrix<float,3,1> vd_3d;
    Matrix3d matrix33 = Matrix3d::Zero(); 
    
    Matrix<double,Dynamic,Dynamic> matrix_dynamic;
    
    MatrixXd matrix_x;
    
    
    //输入数据，初始化
    matrix_23 << 1,2,3,4,5,6;
    //输出
    cout << "matrix 2x3 from  1 to 6 : \n" << matrix_23 <<endl;
    
    cout << "print matrix 2x3:" << endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
            cout << matrix_23(i,j)<< "\t";
        cout << endl:
}

//Matrix<double,2,1> result_wrong_type = matrix_23 * v_3d;

//应该显式转换阿
