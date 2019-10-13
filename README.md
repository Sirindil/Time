# Time
A simple C++ program for creating a timeline suitable for a text-based adventure
* Contains three classes: 
  - Timeline
  - Moment
  - Event

Here's a simple rundown of these three classes:

## class Event
* A single thing that can happen in the game.
* Examples include:
  - A statement by an NPC
  - A game state flag change
  - A cue to play a sound effect or music
  - A location discription
  - Result of a player interaction
  - Result of an NPC interaction
  - Some other creative usage

## class Moment
* A vector of Events
* All Events in a Moment occur at the same instant
* Events can be added to a Moment at any point in the game.

## class Timeline
* A vector of Moments
* Has an internal method of keeping track of what "Moment" the game is in
* Events are added to the Timeline relative to which Moment is the present Moment

# License
This project is licensed under the MIT License - see the LICENSE.md file for details
