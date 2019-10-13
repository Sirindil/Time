//============================================================================
// Name        : main.cpp
// Author      : James Burns
// Version     : 0.1
// Copyright   : MIT License
// Description : Sample Timeline creation and manipulation in C++
//============================================================================

#include <iostream>
#include <string>
#include "timeline.h"
#include "event.h"

using namespace std;

int main()
{
	cout << "------------------------------------------" << endl;
	cout << "| Welcome to James's Timeline Simulator! |" << endl;
	cout << "------------------------------------------" << endl << endl;

	// initialize the timeline
	Timeline myTimeline;

	// create a new event
	string sampleEventType = "Speech";
	string sampleEventText = "This is a test!";
	int sampleEventInt = 42;
	Event event1(sampleEventType, sampleEventText, sampleEventInt);

	// create a new event
	sampleEventType = "Speech";
	sampleEventText = "This is another test!";
	sampleEventInt = 9001;
	Event event2(sampleEventType, sampleEventText, sampleEventInt);

	// create a new event
	sampleEventType = "DANGER!";
	sampleEventText = "RABID SQUIRREL!!!!";
	sampleEventInt = 314159;
	Event event3(sampleEventType, sampleEventText, sampleEventInt);

	// create a new event
	sampleEventType = "DANGER 2: ELECTRIC BOOGALOO!";
	sampleEventText = "ANOTHER RABID SQUIRREL!!!!";
	sampleEventInt = 1010010;
	Event event4(sampleEventType, sampleEventText, sampleEventInt);

	// add our first event
	myTimeline.addEvent(event1);
	// add our second event six moments into the future
	myTimeline.addEvent(event2, 6);
	// add our second event three moments into the future, at the same time as event2
	myTimeline.addEvent(event3, 3);
	myTimeline.addEvent(event4, 6);

	cout << "the timeline has: " << myTimeline.getTimelineLength() << " moments." << endl;

	//while there are events left in the timeline
	while(myTimeline.canHappen())
	{
		cout << "- - - - - - - - - - - - - -" << endl << "The moment begins! " << endl << endl;
		myTimeline.happen();
		cout << endl << "The moment has finished!" << endl;
	}
	cout << "- - - - - - - - - - - - - -" << endl;



	return 0;
}
