#include "task1-functions.h"
#include <iostream>
#include <math.h>
using namespace std;

#define KM_PER_MILE 1.609344

// setEngineMode - outputs the engine mode based on speed S (mph) and battery level B (%)
// Returns 0 for battery mode and 1 for petrol
int setEngineMode(int S, int B)
{
    // Convert speed from mph to km/h and round to the nearest integer
    int speedInKmPerHour = lround(S * KM_PER_MILE);

    // Display speed in km/h on a separate line
    std::cout << speedInKmPerHour << std::endl;

    // Determine engine mode based on speed and battery level
    if (0 <= S && S < 10)
    {
        if (B >= 25)
        {
            // Display "Battery" on a separate line
            std::cout << "Battery" << std::endl;
            return 0;
        }
        else
        {
            // Display "Petrol" on a separate line
            std::cout << "Petrol" << std::endl;
            return 1;
        }
    }
    else
		if (10 <= S && S < 30)
		{
			if (B >= 45)
				{
					// Display "Battery" on a separate line
					std::cout << "Battery" << std::endl;
					return 0;
				}
			else
				{
					// Display "Petrol" on a separate line
					std::cout << "Petrol" << std::endl;
					return 1;
				}
		}

		else
		{
			// Display "Petrol" on a separate line
			std::cout << "Petrol" << std::endl;
			return 1;
		}
}


