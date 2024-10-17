#include <cmath>
#include <Eigen/Core>
#include <Eigen/Dense>
#include <iostream>

int main()
{
    Eigen::Vector2d P(2.0, 1.0);
    Eigen::Affine2d A;

    A.setIdentity();
    A.translate(Eigen::Vector2d(1.0, 2.0));
    A.rotate(-45 * M_PI / 180);

    std::cout << (A * P);
}