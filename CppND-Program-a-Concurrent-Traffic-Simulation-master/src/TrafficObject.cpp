#include <iostream>
#include <chrono>
#include <thread>   // defines ".join()"
#include <algorithm>    // defines "for_each()"
#include "TrafficObject.h"

using namespace std;

// init static variable
int TrafficObject::_idCnt = 0;

void TrafficObject::setPosition(double x, double y)
{
    _posX = x;
    _posY = y;
}

void TrafficObject::getPosition(double &x, double &y)
{
    x = _posX;
    y = _posY;
}

TrafficObject::TrafficObject()
{
    _type = ObjectType::noObject;
    _id = _idCnt++;
}

TrafficObject::~TrafficObject()
{
    // Task L1.1 : Set up a thread barrier that ensures that all the thread objects in the member vector _threads are joined.
    for_each(threads.begin(), threads.end(), [](thread &t))
    {
        t.join();
    }
}
