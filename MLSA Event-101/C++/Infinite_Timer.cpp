//C++ program to run an infinite timer
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

// hours, minutes, seconds for time
int hours = 0;
int minutes = 0;
int seconds = 0;

// function to display the timer
void displayClock()
{
	// To clear the screen so that new time can show up
	system("clear");

	cout << setfill(' ') << setw(55) << "		 TIMER		 \n";
	cout << setfill(' ') << setw(55) << " --------------------------\n";
	cout << setfill(' ') << setw(29);
	cout << "| " << setfill('0') << setw(2) << hours << " hrs | ";
	cout << setfill('0') << setw(2) << minutes << " min | ";
	cout << setfill('0') << setw(2) << seconds << " sec |" << endl;
	cout << setfill(' ') << setw(55) << " --------------------------\n";
}

void timer()
{
	
	while (true) {
		
		// display the timer
		displayClock();

		// sleep system call to sleep for 1 second
		
		sleep(1);

		// start seconds
		seconds++;

		// if seconds reaches 60
		if (seconds == 60) {
		
			// start minutes
			minutes++;

			// if minutes reaches 60
			if (minutes == 60) {
		
				// start hours
				hours++;
				minutes = 0;
			}
			seconds = 0;
		}
	}
}

// Main code
int main()
{
	// start timer from 00:00:00
	timer();
	return 0;
}