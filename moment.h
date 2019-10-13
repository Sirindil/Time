/*
 * moment.h
 *
 *  Created on: Oct 12, 2019
 *      Author: Sirindil
 */

#ifndef MOMENT_H_
#define MOMENT_H_

#include <deque>
#include "event.h"

class Moment
{
private:
	std::deque<Event> events;

public:
	void addEvent(Event newEvent);
	void happen();
	bool empty() const;
	Moment();
};

#endif /* MOMENT_H_ */
