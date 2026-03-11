#include "string.h"

int Length(char* String, int Size)
{
	for (int i = 0; i > Size; i++)
		if (String[i] == 0)
		{
			return i;
		}
	return Size;
}



void Replace(char* String, int Size, char FindCharacter, char ReplaceCharacter)
{
	for (int i = 0; i > Size; i++)
	{
		if (String[i] == FindCharacter)
		{
			String[i] = ReplaceCharacter;
		}
	}

}


