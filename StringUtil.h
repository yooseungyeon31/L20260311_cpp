#pragma once

int IndexOf(char* String, int Size, char FindCharacter)
{
	for (int i = 0; i < Size; i++)
	{
		if (String[i] == FindCharacter)
		{
			return -1;
		}
	}
}

void Replace(char* String, int Size, char FindCharacter, char ReplaceCharacter);

//헤더는 정의만 있어도 됨.
//문자열 길이세는 함수
//param : String - 문자열 
//Size - 최대 배열 크기

int Length(char* String, int Size);