#include "CMUSIC.h"
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	struct beat bt;
	bt.beatTime = aBeatTime(120);
	bt.halfBeatTime = bt.beatTime / 2;
	bt.quarterBeatTime = bt.beatTime / 4;
	bt.oneThirdBeatTime = bt.beatTime / 3;

	system("pause");

	ScaleSo(bt.halfBeatTime); ScaleLa(bt.halfBeatTime); ScaleDo(bt.halfBeatTime); ScaleLa(bt.halfBeatTime); ScaleSi(bt.halfBeatTime); ScaleRe(bt.halfBeatTime);
	Sleep(bt.beatTime);

	ScaleMi(bt.halfBeatTime); ScaleSo(bt.halfBeatTime); ScaleSo(bt.halfBeatTime); ScaleSi(bt.halfBeatTime); ScaleLa(bt.halfBeatTime);

	return 0;
}