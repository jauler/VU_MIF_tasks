
#include "TM_SpeedFirstTeamADeadlineEstimator.h"

int TM_SpeedFirstTeamADeadlineEstimator::calcWorkingTime(int difficulty)
{
	//Lets say, that this is the formula to calculate actual working time from difficulty
	return te.calcWorkingTime(difficulty);
}


int TM_SpeedFirstTeamADeadlineEstimator::calcWorkingSpeed(int difficulty)
{
	//Lets say, that this team working speed depends only a little on difficulty
	return te.calcWorkingSpeed(difficulty);
}


int TM_SpeedFirstTeamADeadlineEstimator::calcRequiredWorkingDays(int difficulty)
{
	//this team only works every second day, and 8 hours a day
	return te.calcRequiredWorkingDays(difficulty);
}
