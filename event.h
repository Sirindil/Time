/*
 * event.h
 *
 *  Created on: Oct 12, 2019
 *      Author: Sirindil
 */

#ifndef EVENT_H_
#define EVENT_H_

#include <string>

/*
 * A singular action that takes place in a Moment in the Timeline
 * TEST MOCKUP
 *
 * @param givenType (string) the type of Event this is
 * @param eventText (string) the text associated with this Event
 * @param eventInteger (int) an integer associated with this Event
 */
class Event
{
private:
	std::string eventType;
	std::string eventText;
	int eventInteger;

public:

	// initializer
	Event(std::string givenType, std::string givenText, int givenInteger);
	std::string getEventType();
	std::string getEventText();
	int getEventInteger();
	void happen();
};

#endif /* EVENT_H_ */
