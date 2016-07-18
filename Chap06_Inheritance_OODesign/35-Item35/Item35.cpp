#include "GameCharacter4.h"

int main()
{
	MyHealthCalcFunc mhcf;
	GameCharacter* gc = new GameCharacter(&mhcf);
	int h = gc->healthValue();
	delete gc;
	return 0;
}