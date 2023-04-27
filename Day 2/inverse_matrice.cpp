#include <iostream>
#include <Eigen/Dense>
 
int main()
{
   Eigen::Matrix3f A;
   A << 3, 21, 9,
        7, -5, 10,
        9, 49, 22;
   std::cout << "Here is the matrix A:\n" << A << std::endl;
   std::cout << "The determinant of A is " << A.determinant() << std::endl;
   std::cout << "The inverse of A is:\n" << A.inverse() << std::endl;
   std::cout << "The  multiplicative identity of A is:\n" << A*A.inverse() << std::endl;
   
}