/>home>workspace>L1_Project>src
DESKTOP
#ifndef STREET_H
#define STREET_H
​
#include "TrafficObject.h"
​
// forward declaration to avoid include cycle
class Intersection;
​
class Street : public TrafficObject, public std::enable_shared_from_this<Street>
{
public:
    // constructor / desctructor
    Street();
​
    // getters / setters
    double getLength() { return _length; }
    void setInIntersection(std::shared_ptr<Intersection> in);
    void setOutIntersection(std::shared_ptr<Intersection> out);
    std::shared_ptr<Intersection> getOutIntersection() { return _interOut; }
    std::shared_ptr<Intersection> getInIntersection() { return _interIn; }
​
    // typical behaviour methods
+
BASH
×
No Open Terminals
NEW TERMINAL
