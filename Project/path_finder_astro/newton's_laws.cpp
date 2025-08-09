// C++ Code: Newton's Law of Gravitation
// Concepts used: F = G * (m1 * m2) / r^2, F = ma, Euler integration

#include <iostream>
#include <cmath>
#include <fstream> // For file output
using namespace std;

// Constants
const double G = 6.67430e-11;    // gravitational constant (m^3 kg^-1 s^-2)
const double M_sun = 1.989e30;   // mass of the sun (kg)
const double M_earth = 5.972e24; // mass of the earth (kg)
const double AU = 1.496e11;      // 1 astronomical unit in meters (distance from Earth to Sun)
const double dt = 60 * 60;       // 1 hour in seconds
const int steps = 8760;

// Structure to represent position and velocity
struct vector2D
{
    double x, y;
    vector2D operator+(const vector2D &other) const { return {x + other.x, y + other.y}; }
    vector2D operator-(const vector2D &other) const { return {x - other.x, y - other.y}; }
    vector2D operator*(double scalar) const { return {x * scalar, y * scalar}; }
    double magnitude() const { return sqrt(x * x + y * y); }
};

int main()
{
    // Initial conditions: Earth starts at (1 AU, 0) with orbital speed
    vector2D pos{AU, 0};
    vector2D vel = {0, 29.78e3}; // 29.78 km/s = 29780 m/s
    ofstream output("orbit.csv");
}