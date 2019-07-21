#pragma once
//#ifndef GO_T_H
//#define GO_T_H

#include <go_straight_and_turn/GoCMD.h>

class GoTurn:public GoCMD
{
public:
    using GoCMD::GoCMD;//C++11 inherit constructor
    GoTurn(double,double);//constructor with 2 arguments
    geometry_msgs::Twist getCmdVel(const nav_msgs::Odometry::ConstPtr&) override;//obtain angular velocity
    virtual ~GoTurn(){}

private:
    double start{0.0},destination{0.0};//inicial yaw，goal yaw
};
//#endif