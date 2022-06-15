#include <iostream>
#include <vector>
#include <string>

#include "Point.h"

int main()
{

    Point *testPoint = new Point({1,2,3});

    testPoint->setVelocity({1,1,1});
    testPoint->setAcceleration({1.6,2.3,9.8});

    std::vector<double> currentPos = testPoint->getPosition();
    std::vector<double> currentVelo = testPoint->getVelocity();
    std::vector<double> currentAccel = testPoint->getAcceleration();


    std::cout << "The point position is: \n" << std::to_string(currentPos[0]) << ", " << std::to_string(currentPos[1])
        << ", " << std::to_string(currentPos[2]) << std::endl;
    
    std::cout << "The point velocity is: \n" << std::to_string(currentVelo[0]) << ", " << std::to_string(currentVelo[1])
        << ", " << std::to_string(currentVelo[2]) << std::endl;

    std::cout << "The point acceleration is: \n" << std::to_string(currentAccel[0]) << ", " << std::to_string(currentAccel[1])
        << ", " << std::to_string(currentAccel[2]) << std::endl;


    return 0;
}