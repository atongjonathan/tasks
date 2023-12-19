#include "task2-functions.h"

/////////////////////////////////////// DO NOT MODIFY THE FOLLOWING ///////////////////////////////////////

//This is a tested function to calculate and return the area of a polygon with corner coordinates in the array points.
// You may call this from within this file
// You cannot call this directly from other files
// Do NOT change this function
static double areaOfPolygon_v1(Point points[], int n) {
    double area = 0.0;
    int j = n - 1;
    for (int i = 0; i < n; i++) {
        area += (points[j].x + points[i].x) * (points[j].y - points[i].y);
        j = i;
    }
    return abs(area / 2.0);
}

//This is a tested function to calculates and return the length of a line between points p1 and p2
// You may call this from within this file
// You cannot call this directly from other files
// Do NOT change this function
static double distanceBetweenPoints(Point p1, Point p2)
{
    double xd = p1.x - p2.x;
    double yd = p1.y - p2.y;
    double d = sqrt(xd * xd + yd * yd); // Good ol' Pythogoras
    return d;
}

//Display a point in the terminal
// Do NOT change this function
void displayPoint(Point p)
{
    cout.precision(1);
    cout << std::fixed;
    cout << "(" << p.x << "," << p.y << ")" << endl;
}

  ////////////////////////////////////////////////////////////////////////////////////////////////////////
 ////////////////////////////////////// YOUR SOLUTION STARTS HERE ///////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////

//You need to complete this
//
// This accepts a vector of points (read from the file)
// You need to call the areaOfPolygon_v1 function. However, that accepts an array or points, not a vector
double areaOfPolygon(vector<Point> points) {

    // WRITE SOLUTION HERE

    //Change this
    return 0.0;
}

//You need to complete this
//
// The parameter is a vector of points for a shape.
// Calculate the circumference of this shape.
// Make use of the distanceBetweenPoints function to help you
double circumferenceOfPolygon(vector<Point> points)
{
    // WRITE SOLUTION HERE

    //Change this
    return 0.0;
}

//You need to complete this - it reads the file with name strFile, and returns a vector listing all the points
// 
// See the spec to undertsand what these points represent
vector<Point> readDataPoints(string strFile)
{
    //The vector where the final result will be stored
    vector<Point> points;

    //WRITE SOLUTION HERE
 
    return points;;
}
