// Lesson 1 - Points, vectors and distance

/*
1.1 Cartesion Coordinate System

In CP geometry, all objects are placed on a 2-dimensional Cartesion plane.
Each position on this plane is represented by a point, which is defined by two real numbers: an x-coordinate and a y-coordinate.
The x-coordinate represents horizontal movement (left or right), while the y-coordinate represents vertical movement (up or down).

For example, the point P(2,3) lies in 2 units to the right of the origin and 3 units above it.

1.2 Representing a Point in Code
A point in geometry contains only two pieces of information: its x and y coordinates.
Therefore, in C++, a point is best represented using a 'struct' or 'class' with two floating-point variables.

We usually use 'double' for coordinates because it provides enough precision for most problems. Later, when precision becomes critical, we may use 'long double'.
*/

struct Point {
    double x,y;
};

/*
1.3 Distance Between Two Points
The distance between two points is derived from the Pythagorean theorem.
If we have two points A(x1,y1) and B(x2,y2), the horizontal difference between them is x2-x1, and the vertical distance is y2-y1.

These differences form the legs of a right-angled triangle. The distance between the points is the length of the hypotenuse:

distance = sqrt((x2-x1)^2+(y2-y1)^2)

This formula is used constantly in geometry problems.

*/

double distance(Point a, Point b){
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx*dx+dy*dy);
}