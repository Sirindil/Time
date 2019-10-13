/*
 * event.cpp
 *
 *  Created on: Oct 12, 2019
 *      Author: Sirindil
 */

/*
 * A singular action that takes place in a Moment in the Timeline
 * TEST MOCKUP
 *
 * @param givenType (string) the type of Event this is
 * @param eventText (string) the text associated with this Event
 * @param eventInteger (int) an integer associated with this Event
 */

#include <string>
#include <iostream>
#include "event.h"

using namespace std;

// initializer
Event::Event(string givenType, string givenText, int givenInteger):
	eventType(givenType), eventText(givenText), eventInteger(givenInteger)
{

}

std::string Event::getEventType()
{
	return eventType;
}

std::string Event::getEventText()
{
	return eventText;
}

int Event::getEventInteger()
{
	return eventInteger;
}

// makes this Event transpire
void Event::happen()
{
	cout << "This event is of type: " << eventType << endl;
	cout << eventText << endl;
	cout << eventInteger << "?!" << endl;
}
