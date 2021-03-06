
#include "QualityFirstDeadlineEstimator.h"

QualityFirstDeadlineEstimator::QualityFirstDeadlineEstimator(TimeEstimator *_te)
{
	//save our time estimator
	te = _te;
	return;
}


int QualityFirstDeadlineEstimator::calcTimeToDeadline(int difficulty)
{
	//If we value quality, then we would like to publish deadline:
		//*with added time for difficulty (more difficult to implement - more debug)
		//*with removed a little time due high working capacity (better focused)
		//*with added some time for speed, because doing things fast, introduces errors

	int tToDeadline;
	tToDeadline = te->calcRequiredWorkingDays(difficulty);
	tToDeadline += difficulty * 4;
	tToDeadline += te->calcWorkingTime(difficulty) / 5;
	tToDeadline -= te->calcWorkingSpeed(difficulty) / 12;

	return tToDeadline;
}
