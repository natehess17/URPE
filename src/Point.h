
#include <vector>

#ifndef POINT_H
#define POINT_H

#pragma once

class Point
{
public:
    //constructors
    Point();
    Point(std::vector<double> pos);
    Point(std::vector<double> pos, std::vector<double> velo);
    Point(std::vector<double> pos, std::vector<double> velo, std::vector<double> accel);

    // setters
    void setPosition(std::vector<double> pos);
    void setVelocity(std::vector<double> velo);
    void setAcceleration(std::vector<double> accel);

    //getters
    std::vector<double> getPosition();
    std::vector<double> getVelocity();
    std::vector<double> getAcceleration();

    ~Point();

private:

double x = 0;
double x_dot = 0;
double x_dotdot = 0;
double y = 0;
double y_dot = 0;
double y_dotdot = 0;
double z = 0;
double z_dot = 0;
double z_dotdot = 0;

};

#endif