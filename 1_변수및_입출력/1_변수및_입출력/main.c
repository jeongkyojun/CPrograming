#include<stdio.h>

int main()
{
	/*
	* 이것은 주석이다.
	* 주석은 코드에 대한 설명을 적을때 사용하는 일종의 메모이며,
	* 주석을 하는 이유는 크게 두가지로
	* 
	* 1. 협업을 할때 다른 작업자를 위해 남기는 경우와
	* 
	* 2. 본인이 혼자 프로젝트를 할때 기억하기 쉽게 하기 위해 메모할때 사용하는 경우이다.
	* 
	* 보통 한줄은 // 를 사용하고 여러줄을 사용할 때는 지금과 같이 / 와 *을 이용해 열고, *와 /를 이용해 닫으면 된다.
	*/

	
	printf("- 변수와 입출력\n");
	// 1.1 정수형 변수
	short num_short = 13;
	int num_int = 135;
	long num_long = 13579;
	long long num_long_long = 1357911;
	// short, int, long, long long : 정수형, 음수와 양수 둘다 되며, 양수만 사용할 경우 unsigned를 붙여서 사용한다.
	/* 
	 * 각자 -2의 15제곱 ~ 2의 15제곱-1, 
	 * -2의 31제곱 ~ 2의 31제곱-1, 
	 * -2의 31제곱 ~ 2의 31제곱-1, 
	 * -2의 63제곱 ~ 2의 63제곱-1의 범위를 가진다.
	 */
	// 출력 서식은 각자 %d,%d,%ld,%lld이며, 
	/*
	 * unsigned를 붙일경우 음수의 범위가 모두 양수로 이동하여
	 * 0 ~ 2의 16제곱-1
	 * 0 ~ 2의 32제곱-1
	 * 0 ~ 2의 32제곱-1
	 * 0 ~ 2의 64제곱-1 의 범위를 갖게되며
	 */
	// 출력서식은 d대신 u를 쓰는 %u, %u, %lu, %llu 이다.
	
	printf("1-1. 정수형\n short : %d (2바이트, +-2의 15제곱)\n int : %d (4바이트, +-2의 31제곱)\n long : %ld (4바이트, +-2의 31제곱)\n long long : %lld (8바이트, +-2의 63제곱)\n\n", num_short, num_int, num_long, num_long_long);
	//이는 sizeof 를 통해서도 확인할 수 있다.
	
	/*
	* 출력
	* 
	* 표준출력은 printf를 사용하며, 큰 따옴표("") 내에 원하는 문구를 적으면 되며, 
	* 변수를 출력하려면 위와같이
	* 원하는 위치에 서식을 사용한뒤, 순서에 맞게 따옴표 이후 콤마(,) 를 찍은뒤 입력하면 된다.
	* 
	* 서식이 맞지 않거나 서식만 있는경우 오류가 생길수 있으므로 주의해야 한다.
	*/

	// 정수형의 특징 : 실수를 입력해도 정수만 나온다. -> 소수점이 잘려 나온다.
	num_int = 3.14;
	printf("소수점이 잘려나간 정수값 : 3.14 -> %d\n", num_int);
	// 정수형의 특징2: 범위 밖의 값을 입력한경우 최대/최소값으로 돌아온다 = 오버/언더플로우
	unsigned int num_uint = -35;//0 - 1 = 최댓값이므로 -> 4294967295 - 35 + 1 =  4294967261이 출력된다
	printf("unsigned int에 0 - 35 넣었을때(언더플로우) : %u\n", num_uint);

	num_uint = 4294967295 + 35; // 오버플로우 = 최댓값 + 1 = 0 이므로 35-1 = 34출력
	printf("unsigned int에 최댓값 + 35 넣었을때(오버플로우) : %u\n", num_uint);
}
