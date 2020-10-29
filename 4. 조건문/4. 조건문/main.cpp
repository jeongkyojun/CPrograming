#ifdef _MSC_VER
	#define _CRT_SECURE_NO_WARNINGS
#endif

#include<stdio.h>

int main()
{
	// 조건문
	int number;

#pragma region if문
	printf("if 문을 이용해 홀수, 짝수 구분하기");
	printf("숫자를 입력 >> ");
	scanf("%d",&number);

	/*
	 * if 문
	 * 조건을 적고 조건이 만족하면 지정된 구문을 실행하는 조건문
	 * 해당 조건이 만족하지 않을때 쓰는 else 와 함께 사용하며,
	 * else if 와 같이 두 구문을 함께 사용하여 여러개의 조건으로 나눌수도 있다.
	 */

	if (number % 2)
	{
		// 홀수인 경우 number % 2 = 1 이 되므로 참이된다.
		printf("홀수 입니다.\n");
	}
	else
	{
		// 짝수인경우 number % 2 = 0 이 되어 거짓이 된다.
		printf("짝수 입니다.\n");
	}

	// 연속된 조건구문 사용
	int score = 85;
	/*
	 * 점수를 입력받아 점수를 매기고자 할 때, 단순히 if를 연속해서 사용하게 되면 문제가 발생하게 된다.
	 */
	printf("\nif를 연속해서 사용한뒤 else를 사용한 경우\n");
	printf("점수 : ");
	if (score >= 80)
	{
		printf("B\n");
	}
	if (score >= 70)
	{
		printf("C\n");
	}
	if (score >= 60)
	{
		printf("D\n");
	}
	else
	{
		printf("F\n");
	}

	/*
	 * 위처럼 else를 이용해 이전 조건에 대한 예외처리를 하지 않는다면 모든 조건을 만족하게 되어 모든 조건구문이 실행되게 된다.
	 * 따라서 else를 이용해서 조건이 만족하지 않을 때 조건문을 확인하는 방식을 사용해야 한다.
	 */
	printf("\nelse를 사용해 예외처리를 한 경우\n");
	printf("점수 : ");
	if (score>=80)
	{
		printf("B\n");
	}
	else
	{
		if (score >= 70)
		{
			printf("C\n");
		}
		else
		{
			if (score >= 60)
			{
				printf("D\n");
			}
			else
			{
				printf("F\n");
			}
		}
	}

	/*
	 * 위의 코드처럼 조건을 건 뒤, 조건을 제외한 값인 else 내부에서 조건을 걸 수 있다.
	 * 하지만, 위의 경우보다 더 많은 조건이 들어간다면, 가독성 부분이 떨어지게 된다.
	 * 
	 * 예를 들어 점수간격을 5점 간격으로 0점에서 100점까지 20단계로 나눈다면, else 20개, if 20개를 써야한다.
	 * 이러한 경우 코드도 복잡해지게 되어 작성에 어려움이 생기고, 결국 오류가 날 확률 또한 증가하게 된다.
	 * 
	 * 이러한 경우에서 대부분의 경우에는 위와 같이 작성할 필요 없이 else if 를 이용해 간단하게 바꿀 수 있다.
	 */
	printf("\nelse if를 사용해 표현한 경우\n");
	printf("점수 : ");
	if (score >= 80)
	{
		printf("B\n");
	}
	else if(score >= 70)
	{
		printf("C\n");
	}
	else if (score >= 60)
	{
		printf("D\n");
	}
	else
	{
		printf("F\n");
	}
	/*
	 * 위와 같이 else if 를 이용해 작성하면 if와 else를 이용해 계속 나눌 필요 없이 한번에 작성이 가능하다.
	 * 이전 주석에서 제시한 사례인 0에서 100점까지 5점간격으로 20단계로 나눌경우에서도, 이전사례는 else 20개와 if문 20개 총 40개를 작성해야 했다면,
	 * else if 를 이용하면 21개의 조건문만 작성하면 된다.
	 */
#pragma endregion
}