#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int g_val = 2022;
//
//int main()
//
//{
//	printf("hello\n");
//
//	printf("1:%d\n", g_val);
//
//	{
//		//�ô��������Ǿֲ�����a��������	
//		int a = 10;
//
//		printf("a = %d\n", a);
//
//		printf("2:%d\n",g_val);
//		
//	}
//
//	printf("3:%d\n", g_val);
//
//	//printf("a = %d\n", a);----�ô���a��ֵ��ӡ����������Ϊ�����˾ֲ�����a��������
//
//	return 0;
//}


////���ڹ��̵�ĳԴ�ļ���ʹ������Դ�ļ������ȫ�ֱ���ʱ����Ҫ��`extern �������� ������`������������
//extern int g_val;//��������
//int main()
//{
//	printf("%d\n", g_val);
//
//
//	return 0;
//}



//int main()
//{
//	////1.���泣��
//	//3.14;
//	//2022;
//	//'a';
//	//'abcdefg';
//
//	////2. const���εĳ�����
//	//const int a = 10;//a��ʱΪ�������������޷��ı������
//	//
//	////a = 20;//�޷��ı�a������
//
//	//printf("a = %d\n", a);
//
//	////֤��n�����Ǳ���
//	//const int n = 10;
//	//int arr[n] = {0};//����Ԫ�ظ���ӦΪ���������������У��ᱨ��
//
//	return 0;
//}


////3. #define����ı�ʶ��������������޷�����
//#define MAX 2022;
//int main()
//{
//	int n = MAX;
//
//	printf("%d", n);
//
//	//int arr[MAX] = {0};//ͬ������
//	return 0;
//}


//4.ö�ٳ���
//��������ö�ٳ�������Щ�����Ǵ�����ö������δ������ȡ����ֵ
enum Sex//����һ����ΪSex��ö������
{
	MALE = 3,//���Զ�ö�ٳ�����ֵ����ֵ�󣬽�������ֵ��+1����
	FEMALE,
	SECRET
};

int main()
{
	//ö�ٳ�����ֵĬ�ϴ�0��ʼ+1����
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);

	return 0;
}