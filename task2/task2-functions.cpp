#include "task2-functions.h"
#include <cmath>
// This is a tested function to calculate and return the area of a polygon with corner coordinates in the array points.
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

// This is a tested function to calculate and return the length of a line between points p1 and p2
// You may call this from within this file
// You cannot call this directly from other files
// Do NOT change this function
static double distanceBetweenPoints(Point p1, Point p2) {
    double xd = p1.x - p2.x;
    double yd = p1.y - p2.y;
    double d = sqrt(xd * xd + yd * yd); // Good ol' Pythogoras
    return d;
}

// Display a point in the terminal
// Do NOT change this function
void displayPoint(Point p) {
    cout.precision(1);
    cout << std::fixed;
    cout << "(" << p.x << "," << p.y << ")" << endl;
}

double areaOfPolygon(vector<Point> points) {
    // Convert vector<Point> to an array of Point
    Point *pointArray = &points[0];

    // Call the provided areaOfPolygon_v1 function
    return areaOfPolygon_v1(pointArray, points.size());
}

double circumferenceOfPolygon(vector<Point> points) {
    double circumference = 0.0;
    for (size_t i = 0; i < points.size(); ++i) {
        // Calculate distance between consecutive points and add to circumference
        circumference += distanceBetweenPoints(points[i], points[(i + 1) % points.size()]);
    }
    return circumference;
}

vector<Point> readDataPoints(string strFile) {
    // The vector where the final result will be stored
    vector<Point> points;

    // Open the file
    ifstream inputFile(strFile);

    // Check if the file is opened successfully
    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open file " << strFile << endl;
        return points; // Return an empty vector in case of an error
    }

    // Temporary variables to store x and y coordinates
    double x, y;

    // Ignore characters until '{' is encountered
    char ch;
    while (inputFile >> ch && ch != '{');

    // Read points from the file until '}' is encountered
    while (inputFile >> x >> y) {
        // Create a Point and add it to the vector
        points.push_back({x, y});
    }

    // Close the file
    inputFile.close();

    return points;
}
