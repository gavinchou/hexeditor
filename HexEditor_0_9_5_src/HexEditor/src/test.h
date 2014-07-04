
#include "WinDef.h"
#include <cmath>



int BytesToInt(BYTE* bch, int num)
{
	int retVal=0;
	for(int i=0; i<num; i++)
	{
		retVal += bch[i]*pow((double)256,i);
	}
	return retVal;
}



