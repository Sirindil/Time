/*
 * moment.cpp
 *
 *  Created on: Oct 12, 2019
 *      Author: Sirindil
 */

#include "moment.h"
//#include "event.h"

/*
 * adds a new event to this Moment
 *
 * @param newEvent the event to be added
 */
void Moment::addEvent(Event newEvent)
{
	events.push_back(newEvent);
}

/*
 * Makes the current Event transpire in a Moment.
 */
void Moment::happen()
{
	// iterate over this Moment
	for (unsigned int i = 0; i < events.size(); i++)
	{
		events.at(i).happen();
	}
}

/*
 * true if the Moment size is 0, false otherwise.
 */
bool Moment::empty() const
{
	return events.empty();
}

// initializer
Moment::Moment()
{

}
