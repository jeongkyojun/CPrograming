#include<stdio.h>

int main()
{
	/*
	 * 변수를 만들면, 컴퓨터는 일정한 공간에 저장한다.
	 *
	 * 저장하는 공간을 컴퓨터 메모리라고 한다.
	 * 메모리는 각자 일정한 번호가 있다.
	 * 
	 * 그것이 메모리 주소이다.
	 *
	 * 비유를 하자면,
	 * 어떠한 관리자에게 12라는 값을 넘긴다고 하자.
	 * 관리자는 여러개의 창고를 가지고 있는데, 그중 하나에 이 값을 보관한다.
	 * 예를 들어 방금 맡긴 값 12는 23번 창고에 맡겼다고 가정을 하겠다.
	 * 
	 * 우리는 관리자와 합의하여 그 창고의 별명을 a 라고 정했으며, 값을 가져오고 싶을때 a 를 달라고 하면 된다.
	 * 
	 * 그렇다면, 우리는 23번 창고에 있는 물건을 달라고 할수 있지도 않을까?
	 * 
	 * 여기서 관리자는 컴퓨터이고, 창고는 컴퓨터 메모리이다.
	 * 그리고 별명은 변수명이고, 창고의 번호가 메모리 주소인 것이다.
	 * 
	 * 그렇다면, 우리가 왜 메모리 주소를 알아야 할까?
	 * 
	 * 1. 메모리에 대한 직접 접근이 가능해진다.
	 * 2. 우리가 메모리 주소를 알게 되면 이후에 배울 개념을 더 잘 알수있게 된다.
	 *	  (배열, 구조체, 동적할당 등...)
	 * 
	 */

	printf("- 메모리 주소에 대해 알아보자\n");
	int warehouse = 123; // 123을 관리자에게 지정하고, 그 별명(변수명)을 warehouse라고 지정했다.
	printf("창고에 들어있는것 : %d\n", warehouse); // warehouse를 출력해보았다.

	// 창고의 번호를 확인해보자.
	printf("창고의 번호(메모리주소(10진법)) : %d\n", &warehouse);
	printf("창고의 번호(메모리주소(16진법)) : %p\n", &warehouse);
	//메모리주소는 16진수로 표현된다. ( %p 는 16진법으로 출력하는 서식 지정자 )

	
	// 여기서, 변수의 값을 다른 변수에 저장한다고 해도, 값을 다른 메모리주소로 옮기는 것이며, 메모리주소는 이동하지 않는다.
	// Ex
	int number_a = 12;
	int number_b;
	printf("number_a의 값 : %d, number_a의 메모리 주소 : %d ( %p )\n", number_a, &number_a, &number_a);
	
	// 메모리주소는 변수를 할당했을 때 바로 지정된다. 이는 값이 없어도 마찬가지이다.
	printf("number_b의 주소 : %d( %p )\n", &number_b,&number_b);

	number_b = number_a;
	printf("number_b = number_a 실행\n-> number_b의 값 : %d, number_b의 주소 : %d( %p )\n\n", number_b, &number_b, &number_b);

	printf("number_b에 number_a의 값을 넣어도 메모리 주소까지 옮겨지지는 않는다.");
}