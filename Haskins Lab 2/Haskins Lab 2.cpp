//Convert Seconds to Days, Minutes, Hours, and Seconds. 

#include "stdafx.h"
#include <iostream>
using namespace std;
void convertToDaysHoursMinutesSeconds(unsigned long); 
unsigned long seconds; 
 
int main()
{
	
	cout << " Enter the number of seconds: ";  
	cin >> seconds;
	cin.get(); 
	convertToDaysHoursMinutesSeconds(seconds); 
    return 0;
}

void convertToDaysHoursMinutesSeconds(unsigned long)  
{
	const long SECONDS_PER_MINUTE = 60;						
	const long SECONDS_PER_HOUR = SECONDS_PER_MINUTE * 60;
	const long SECONDS_PER_DAY = 24 * SECONDS_PER_HOUR;							
	
	unsigned long days = seconds / SECONDS_PER_DAY;					
	unsigned long rSeconds = seconds % SECONDS_PER_DAY;				
	unsigned long hours = rSeconds / SECONDS_PER_HOUR;				 
	unsigned long rSeconds1= rSeconds % SECONDS_PER_HOUR;
	unsigned long minutes = rSeconds1 / SECONDS_PER_MINUTE;
	unsigned long rSeconds2 = rSeconds1 % SECONDS_PER_MINUTE;
	
	cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << rSeconds2 << " seconds " << endl; 
}