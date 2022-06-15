#include "Point.h"

// Overload Constructors
Point::Point(){

}

Point::Point(std::vector<double> pos)
{
    this->setPosition(pos);
}

Point::Point(std::vector<double> pos, std::vector<double> velo)
{
    this->setPosition(pos);
    this->setVelocity(velo);
}

Point::Point(std::vector<double> pos, std::vector<double> velo, std::vector<double> accel)
{
    this->setPosition(pos);
    this->setVelocity(velo);
    this->setAcceleration(accel);
}


// Setters
void Point::setPosition(std::vector<double> pos){
    if(pos.size() == 3){
        x = pos[0];
        y = pos[1];
        z = pos[2];
    }
}

void Point::setVelocity(std::vector<double> velo){
    if(velo.size() == 3){
        x_dot = velo[0];
        y_dot = velo[1];
        z_dot = velo[2];
    }
}

void Point::setAcceleration(std::vector<double> accel){
    if(accel.size() == 3){
        x_dotdot = accel[0];
        y_dotdot = accel[1];
        z_dotdot = accel[2];
    }
}

//Getters
std::vector<double> Point::getPosition(){
    return std::vector<double> {x, y, z};
}

std::vector<double> Point::getVelocity(){
    return std::vector<double> {x_dot, y_dot, z_dot};
}

std::vector<double> Point::getAcceleration(){
    return std::vector<double> {x_dotdot, y_dotdot, z_dotdot};
}


Point::~Point()
{

}