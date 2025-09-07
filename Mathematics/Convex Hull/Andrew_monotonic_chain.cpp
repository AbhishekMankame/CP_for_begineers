// Convex Hull: It is a classic computational geometry problem:
// Given a set of points in the 2D plane, find the smallest convex polygon (convex hull) that contains all the points.

/*Note: There are several algorithms to compute the convex hull:
- Graham's Scan - O(n log n), uses angle sorting
- Andrew's Monotonic Chain Algorithm - O(n log n), more straightforward to implement

*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct Point {
    long long x,y;
    
    // for sorting
    bool operator < (const Point& p) const {
        return x < p.x || (x == p.x && y < p.y);
    }
};

// cross product of (b-a) x (c-a)
long long cross(const Points& a, const Point& b, const Point& c){
    return (b.x - a.x)*(c.y - a.y) - (b.y - a.y)*(c.x - a.x);
}

// Convex Hull - Andrew's Monotonic Chain Algorithm
vector<Point> convexHull(Vector<Point>& points){
    int n = points.size();
    if(n<=1) return points;

    sort(points.begin(), points.end());

    vector<Point> lower, upper;

    // Lower hull
    for(const auto& p: points){
        while(lower.size()>=2 && cross(lower[lower.size()-2],lower[lower.size()-1],p<=0)){
            lower.pop_back();
        }
        lower.push_back(p);
    }

    // Upper hull
    for (int i = n - 1; i >= 0; i--) {
        const auto& p = points[i];
        while (upper.size() >= 2 && 
               cross(upper[upper.size()-2], upper[upper.size()-1], p) <= 0) {
            upper.pop_back();
        }
        upper.push_back(p);
    }

    // Remove the last point of each half (it’s duplicated)
    lower.pop_back();
    upper.pop_back();

    // Concatenate lower and upper hulls
    lower.insert(lower.end(), upper.begin(), upper.end());
    return lower;
}