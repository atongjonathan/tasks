#include "task3_functions.h"

using namespace std;

string findCorners(std::string filePath)
{
    // Open the file
    ifstream file(filePath);
    if (!file.is_open()) {
        throw runtime_error("Error opening file");
    }

    // Read the file line by line
    string line;
    int row = 0;
    bool found = false;
    int topLeftRow = -1, topLeftCol = -1, bottomRightRow = -1, bottomRightCol = -1;

    while (getline(file, line) && !found) {
        istringstream iss(line);
        int col = 0;
        char ch;

        // Scan across the columns
        while (iss >> ch) {
            if (ch == '*') {
                // Found the top left corner
                if (topLeftRow == -1) {
                    topLeftRow = row;
                    topLeftCol = col;
                }
                // Update the bottom right corner
                bottomRightRow = row;
                bottomRightCol = col;
                found = true;
            }
            col++;
        }

        row++;
    }

    // Close the file
    file.close();

    // Check if a rectangle was found
    if (topLeftRow == -1 || bottomRightRow == -1) {
        return "{}";
    }

    // Build the result string
    stringstream result;
    result << "{ \"topLeft\" : [" << topLeftRow << "," << topLeftCol << "], \"bottomRight\" : ["
           << bottomRightRow << "," << bottomRightCol << "] }";

    return result.str();
}
