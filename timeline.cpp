/*
 * timeline.cpp
 *
 *  Created on: Oct 12, 2019
 *      Author: Sirindil
 */

#include <vector>
#include <iostream>
//#include "event.h"
#include "timeline.h"

/*
 * Adds an Event to the timeline.
 *
 * @param newEvent the Event to be added.
 * @param future specifies how far into the future the Event is to be added, relative to the present Moment.
 *
 * If the Event is specified to be created at a Moment in time that currently does not exist,
 * Moments will be added until the Event can be added within the specified Moment.
 *
 */
void Timeline::addEvent(Event newEvent, unsigned int future)
{
	// stores the point in the timeline where the Event is to be added
	unsigned int specifiedMoment = presentMoment + future;

	// if the Event is not within the current bounds of the timeline
	if (specifiedMoment >= timelineLength)
	{
		unsigned int momentsToAdd = specifiedMoment - timelineLength;

		// add moments until the timeline is extended to accommodate the new Event
		for (unsigned int i = 0; i <= momentsToAdd; i++)
		{
			addMoment();
			updateTimeline();
		}
	}
	// the timeline is capable of adding an event to the specified moment
	timeline.at(specifiedMoment).addEvent(newEvent);
}

/*
 * Adds an event to the timeline.
 * overloaded variant where the event occurs at one Moment in the future.
 *
 * @overload
 */
void Timeline::addEvent(Event newEvent)
{
	addEvent(newEvent, 1);
}

/*
 * Adds an event to the timeline.
 * overloaded variant where user requests debug info.
 *
 * @overload
 */
void Timeline::addEvent(Event newEvent, unsigned int future, unsigned int debug)
{
	addEvent(newEvent, future);
}

/*
 * updates the timeline after a Moment is added.
 */
void Timeline::updateTimeline()
{
	timelineLength += 1;
}

/*
 * advances the timeline after a Moment transpires.
 */
void Timeline::advanceTimeline()
{
	presentMoment += 1;
}

/*
 * makes the current Moment in the timeline transpire.
 * Moves the timeline one Moment into the future when complete.
 */
void Timeline::happen()
{
	if (!timeline.at(presentMoment).empty())
		timeline.at(presentMoment).happen();
	else
		std::cout << "Nothing happens." << std::endl;
	advanceTimeline();
}

/*
 * true if there are moments in the future waiting to occur.
 */
bool Timeline::canHappen()
{
	if (presentMoment != timelineLength)
		return true;
	return false;
}

unsigned int Timeline::getTimelineLength()
{
	return timelineLength;
}

unsigned int Timeline::getTimelineMoment()
{
	return presentMoment;
}

// initializer
Timeline::Timeline(): presentMoment(0), timelineLength(0)
{

}

