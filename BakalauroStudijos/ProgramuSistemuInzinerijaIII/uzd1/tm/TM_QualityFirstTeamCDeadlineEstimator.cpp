
#include "TM_QualityFirstTeamCDeadlineEstimator.h"

int TM_QualityFirstTeamCDeadlineEstimator::calcWorkingTime(int difficulty)
{
	//Lets say, that this is the formula to calculate actual working time from difficulty
	return difficulty * 16 + 4;
}


int TM_QualityFirstTeamCDeadlineEstimator::calcWorkingSpeed(int difficulty)
{
	//Lets say, that this team working speed depends hardly on difficulty
	return 2 + difficulty * 6;
}


int TM_QualityFirstTeamCDeadlineEstimator::calcRequiredWorkingDays(int difficulty)
{
	//this team works every day

	//NOTE: multiplying by one is to illustrate that this team is working every day
	//	compiler will optimize this out anyway
	return calcWorkingTime(difficulty) * 2;
}



