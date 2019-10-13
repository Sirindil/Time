/*
 * timeline.h
 *
 *  Created on: Oct 12, 2019
 *      Author: Sirindil
 */

#ifndef TIMELINE_H_
#define TIMELINE_H_

#include <vector>
#include "moment.h"
#include "event.h"

/* the Timeline for the game consists of a series of Moments. Within each Moment will contain a series of Events.
 * Events within a Timeline will be added at a specified Moment in the future, relative to the present Moment.
 * The distance in the future will be specified at the creation of each Event.
 * Within each Moment, all Events will occur simultaneously.
 */
class Timeline
{
private:
	std::vector<Moment> timeline;
	unsigned int presentMoment;
	unsigned int timelineLength;

	/*
	 * Adds a Moment to the timeline.
	 */
	void addMoment()
	{
		timeline.push_back(Moment());
	}

public:
	void addEvent(Event newEvent, unsigned int future);
	void addEvent(Event newEvent);
	void addEvent(Event newEvent, unsigned int future, unsigned int debug);
	void updateTimeline();
	void advanceTimeline();
	void happen();
	bool canHappen();
	unsigned int getTimelineLength();
	unsigned int getTimelineMoment();
	Timeline();
};


#endif /* TIMELINE_H_ */
