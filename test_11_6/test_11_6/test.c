

//��ӡhello world!
//#include <stdio.h>
//int main()
//{
//
//	printf("hello world!\n");//���У�\n
//
//	printf("%d\n",100);//��ӡ����
//
//	return 0;
//}


////������������ʹ�С
//#include <stdio.h>
//int main()
//{
//
//	printf("size_char = %d\n", sizeof(char));//sizeof�������������ͻ��߱�����ռ�ռ��С����λ���ֽ�byte
//	printf("size_short = %d\n", sizeof(short));
//	printf("size_int = %d\n", sizeof(int));
//	printf("size_long = %d\n", sizeof(long));
//	printf("size_long long = %d\n", sizeof(long long));
//	printf("size_float = %d\n", sizeof(float));
//	printf("size_double = %d\n", sizeof(double));
//
//	return 0;
//}



////����
//#include <stdio.h>
//int main()
//{
//
//	//���������������ٷֱ������������ֵ
//	int age = 21;
//	float weight = 77.7;
//
//	//�ı������ֵ
//	age = age + 1;
//	weight = weight - 5;
//
//	printf("age = %d\n", age);
//	printf("weight = %f\n", weight);//float��Ӧ%f
//
//	return 0;
//}



////������ͻ
//#include <stdio.h>
//
//int a = 1;//ȫ�ֱ���
//
//int main()
//{
//	int a = 10;//�ֲ�����
//
//	printf("%d\n",a);
//
//	return 0;
//}



//���
#define _CRT_SECURE_NO_WARNINGS 1//���vs��Ϊscanf��������ȫ���޷����õĴ���
#include <stdio.h>

int main()
{

	int a = 0;
	int b = 0;
	int sum = 0;

	scanf("%d %d", &a, &b);//����a��b��ֵ
	sum = a + b;
	printf("sum = %d\n", sum);

	//gitee test1111111111111

	return 0;
}