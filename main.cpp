#include <iostream>
#include "StringUtil.h"


using namespace std;

////------------------------------------------
//int main()
//{
//	int A = 10; 
//	//P는 별명, 정수형 변수의 주소를 기억하는 숫자 공간을 요청
//	int* P = &A; //A변수에 주소를 주세요, 정수형 변수 A의 주소를 주세요
//
//	//P2는 별명, 정수형 변수의 주소를 기억하는 숫자공간을 요청
//	int* P2 = P;
//	*P = A + 10; //A에 10을 더한값인 20을 저장하고 
//
//	cout << *P2 << endl;
//	
//
//	return 0;
//}
////P가 A의 주소위치를 갖고 있고, int* P2 = P를 통해 P2의 주소와
////P의주소가 같음을 알 수 있다. 
////*P ->P라는 변수는 뭔지 모르지만 다른 변수의 위치를 기억하는 변수, 값을 가져오는 변수
//// 
//----------------------------------------

//int main()
//{
//	int Number[5] = { 1,2,3,4,5 };
//	
//
//
//	cout << Number[1] << endl; //2
//
//	int* P = Number;
//	cout << *(P+1) << endl; //2
//	cout << *(Number + 1) << endl;
//
//
//
//	return 0;
//}
//---------------------------------

//int main()
//{
	//int A = 10;
	//int* P = &A;//A의 주소를 가리킬게요. 

	//*P = 20; //간접적으로 A를 접근한다. 왜? 이유가 없오ㅁ
	//cout << A << endl; 



//그러면  이 아래는 어떻게 출력이 될까?



	/*int A[3] = { 1,2,3 };
	int* P = A;
	*(P + 0) = 20;

	cout << A[0] << endl;
	cout << P[0] << endl;
	cout << *(P+0) << endl;*/
	//순서대로 20,20,20 이 나온다.
	//왜냐 
	//A값을 가리킬게요 라고 포인터 선언을하고, 그 밑에 *(P+0)=20; 이라고
	//첫번째 값이 20이라고 재선언을 함. 그러면 자동으로 P는 A를 가리키니까 A의 첫 숫자도 20으로
	//바뀜. 


	//----------------------------------------------------


	//char Hello[6] = { 'H','e','l','l','o','\0' };

	//char* C = Hello;

	//*(C + 1) = 'W';

	//Hello[4] = 'i';
	////C[2] = 'A';

	//cout << C << endl;
	//cout << Hello[0] << endl;
	//cout << *(C + 2) << endl;


//	return 0;
//}




//----------------------------------------------------------


////문자열 갯수 세기
//
//int CountLength(char* HAPPY)
//{
//	int count = 0;
//
//	for (;;)
//	{
//		if (HAPPY[count] == 0)
//		{
//			return count;
//		}
//		count++;
//	}
//}
//
//
//
////문자열 중에서 특정 문자 위치 찾기
//
//int FindPosition(char* HAPPY, char target)
//{
//	int i = 0;
//	while (HAPPY[i] != '\0')
//	{
//		if (HAPPY[i] == target)
//		{
//			return i; 
//		}
//		i++;
//	}
//	return -1;
//}
//
////문자열 중에서 특정 문자를 특정문 바꾸기
//
//
//void Change(char* HAPPY, int index, char newChar)
//{
//	
//	if (index < CountLength(HAPPY)&&index >=0)
//	{
//		HAPPY[index] = newChar;
//	}
//}
//
//
//
//
//int main()
//{
//
//	char HAPPY[6] = { 'H','A','P','P','Y','\0' };
//	char* S = HAPPY;
//
//
//
//	//문자열 갯수
//	cout << S << endl;
//	cout << "문자열 갯수: " << CountLength(HAPPY) << endl;
//
//
//	//문자열 찾기
//
//
//	char target;
//	cout << "찾을 문자를 입력하세요: ";
//	cin >> target;
//
//	int Pos = FindPosition(S, target);
//
//	if (Pos != -1)
//	{
//		cout << "'" << target << "' 문자는 " << Pos << "번 인덱스" << endl;
//	}
//	else
//	{
//		cout << "찾을 수 없음" << endl;
//	}
//
//	//문자열 바꾸기
//
//	Change(S, 2, 'A');
//	cout << S << endl;
//
//
//	return 0;
//}













//----------------------------
//강사님 코드

//
//void Allocate()
//{
//	for (;;)
//	{
//		int* P = new int;
//	}
//}


int main()
{
	//int A = 10;
	//char Temp[100] = "Hello World";

	//int StringLength = Length(Temp, 100);
	//cout << StringLength << endl;

	//Replace(Temp, 100, 'l', 'f');

	//cout << Temp << endl;
	//------------------------------
	//int* P= new int;//새로운공간을 만들어달라
	////이렇게 하면 주소가 저장이된다. 

	//delete P;
	//P = nullptr; //유효하지 않으니까 가리키는게 없다고 적어주는 것,



	//---------------
	//이게 중요하다!!!
	////computer memory unmanaged language
	////heap 동적으로 int
	////사이즈 만들고 주소 반환
	//int* MyTexture = new int;

	////포인터 변수의 주소의 heap 영역 반환
	//delete MyTexture;
	//if (MyTexture) //뭐가 연결 되어있으면 사용해라.
	//{

	//}

	//int Size = 100;
	////heap 동적으로 int100개짜리 배열 사이즈 만들고 주소반환
	//int* MyStaticMeshes = new int[Size];

	//MyStaticMeshes[3] = 10;

	////포인터 변수의 주소부터 할당받은 배열 크기 만큼의 heap 영역
	////delete MyStaticMeshes; 첫번째만 반환하고 나머지는 잊어버린다는것. 그러니 [ ] 꼭 붙이기
	//delete[] MyStaticMeshes;
	//MyStaticMeshes = nullptr;
	//if (MyStaticMeshes)
	//{

	//}
	//---------------
	//ctrl rr 누르면 똑같은 단어 다 대문자로 만들 수 있음!
	//과제 ----------------------------------------------------------
	// 숫자 입력 받아서 그걸 (SIZE)크기로 숫자배열을 만들어서
	// 1부터 크기까지 초기화하고 출력하는 프로그램 만들어 보세요.
	int Size = 0;

	//숫자 입력 받기
	cout << "숫자를 입력하세요: " << Size << endl;
	cin >> Size;

	//숫자 배열 만들기
	int* Arr = new int[Size];


	for (int i = 0; i < Size; i++)
	{
		Arr[i] = i + 1;
	}

	for (int i = 0; i < Size; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;


	delete[] Arr;
	Arr = nullptr;

	return 0;
}





