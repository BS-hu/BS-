#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 114514//����
#define CPDD(nishi,weiyi) ((nishi)+(weiyi))//��




#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<time.h>




//�ṹ��
//struct student
//{
//	int age_1;
//	char name_1[10]; 
//	double score;
//	char sex[5];
//
//};
//
////����
////������ֵС��Ϸ_2   ǰ��
//int Add(int num1, int num2, int num3)
//{
//
//	int sum_1 = num1 + num2+ num3;
//
//	return sum_1;
//}
//
//
//
////�ؼ��� typedef  ǰ��
//typedef unsigned int uint_32;//��1+2���3
////          1     2    3
//
//
////�ؼ��� void  ǰ��
//void text_1()
//{
//	int suiji_1 = 1;
//	suiji_1++;
//	printf("%d\n", suiji_1);
//}
//
//void text_2()
//{
//	static int suiji_2 = 1;
//	suiji_2++;
//	printf("%d\n", suiji_2);
//}
//
//extern int suiji_3;//�����ⲿ����
//
//
//
//int age = 0;//ȫ�ֱ���
//
//int main()
//{
//	printf("hello world\n");
//
//
//	//ϰ��
//	{
//		
//		//����A�������ϼ�
//		{
//			int n4 = 0;
//			int n1, n2, n3,a,b;
//			scanf("%d", &a);
//			for (n1 = a; n1 <= a + 3; n1++)
//			{
//				for (n2 = a; n2 <= a + 3; n2++)
//				{
//					for (n3 = a; n3 <= a + 3; n3++)
//					{
//						if (n1 != n2 && n2 != n3 && n1 != n3)
//						{
//							n4++;
//							b = n4 % 6;
//							printf("%d%d%d", n1, n2, n3);
//							if ( b != 0)
//							{
//								printf(" ");
//
//							}
//
//							else
//							{
//
//								printf("\n");
//							}
//						}
//					}
//				}
//			}
//
//
//
//
//
//		}
//
//
//
		//ˮ�ɻ���
int main()
{

			
				int n, num_1, num_2, num_3, num_4, num_5,i, j, k, l;
				printf("��__λ��(n>=3)");
				scanf("%d", &n);
				for(k=3;k<=n;k++)
				{
					for (num_1 = 1, num_2 = 1; num_1 < n; num_1++)
					{
						num_2 * 10;
					}

					i = 100;



					for (num_4 = 0; i > 0; i %= 10)
					{
						num_3 = i / 10;
						num_4 += num_3;//��δʩ��

						if (num_4 == i)
						{
							printf("%d\n", i);
						}
					}
				}
					
}
//
//			
//
//
//
//
//		}
//
//		
//
//		//
//
//
//
//		//
//
//
//
//
//
//
//
//
//
//
//
//	}
//
//
//	//sizeof �󳤶�
//	{
//
//		//��ʶ��
//		printf("%d\n", sizeof(char));//�ַ���������
//		printf("%d\n", sizeof(short));//������
//		printf("%d\n", sizeof(int));//����
//		printf("%d\n", sizeof(long));//������
//		printf("%d\n", sizeof(long long));//����������
//		printf("%d\n", sizeof(float));//�����ȸ�����
//		printf("%d\n", sizeof(double));//˫���ȸ�����
//		printf("%d\n", sizeof(long double));
//
//		int a = 10;
//		printf("%d\n", sizeof(int));//�������Ų���ʡ��
//		printf("%d\n", sizeof(a));//������ʡ��
//		printf("%d\n", sizeof a);
//
//		int arr[10] = { 0 };
//		printf("%d\n", sizeof(arr[10]));
//		printf("%d\n", sizeof(arr));
//		int sz = sizeof(arr[10]) / sizeof(arr);
//		printf("%d\n", sz);
//
//	}
//
//
//
//	//������
//	{
//		//	����������
//		//		+   -  *  /   %
//		//      �� �� �� �� ȡ��
//		// 
//		//	��λ������-- > �ƶ����Ƕ�����λ
//		//		>> <<
//		//			int a = 2;
//		//			int b = a << 1;
//		//			-->b=4
//
//
//		//	λ������
//		//		& ��λ��   ^ ��λ��   |��λ���
//
//		//	��ֵ������
//		//		= += -= *= /= &= ^= |= >>= <<=
//
//		//	��Ŀ������
//		//		!	�߼�������
//		//		-	��ֵ
//		//		+	��ֵ
//		//		&	ȡ��ַ
//		//		sizeof      �����������ͳ��ȣ����ֽ�Ϊ��λ��
//		//		~	��һ�����Ķ����ư�λȡ��----->0��1��1��0,�ҷ���λ����
//		//		--  ǰ�á�����--
//		//		++	ǰ�á�����++
//		//		*	��ӷ��ʲ�����(�����ò�����)
//		//		(����)ǿ������ת��
//
//		//	��ϵ������
//		//		>
//		//		>=
//		//		<
//		//		<=
//		//		!=   ���ڲ��ԡ�����ȡ�
//		//		== ���ڲ��ԡ����
//
//		//	�߼�������
//		//		&& �߼���
//		//		|| �߼���
//
//		//	����������  (��Ŀ������)
//		//		exp1 ? exp2 : exp3
//
//		//	���ű��ʽ
//		//		exp1, exp2, exp3, ��expN
//
//		//	�±����á��������úͽṹ��Ա
//		//		[]() . ->
//	}
//
//
//	
//	//�����ؼ���
//	{
//		/*auto  break   case  char  const   continue  default  do   double else  enum
//			extern  float  for   goto  if   int   long  register    return   short  signed
//			sizeof   static struct  switch  typedef union  unsigned   void  volatile  while*/
//
//
//
//		//�ؼ��� typedef-->����˼�������Ͷ��壬����Ӧ�����Ϊ������������
//		{
//
//			//�۲�num1��num2,������������������һ����
//			unsigned int num1 = 0;
//			uint_32 num2 = 0;
//
//		}
//
//
//		//�ؼ���static
//		{
//			/*��C�����У�
//				static���������α����ͺ�����
//				1. ���ξֲ����� - ��Ϊ��̬�ֲ�����
//				2. ����ȫ�ֱ��� - ��Ϊ��̬ȫ�ֱ���
//				3. ���κ��� - ��Ϊ��̬����*/
//
//			//printf("%d\n", suiji_3);  �޷�ʹ�ã���Ϊ��static���Σ��ⲿ�������Ա���ڲ���������
//			//printf("%d\n", add_1(2,4));ͬ��
//		}
//		
//
//		//�ؼ���register
//		{
//			register int soooooooooo_suibianyige = 12;//����a��ֵ�ķ��ڼĴ�����
//
//		}
//
//
//		//�ؼ��� void
//		{
//			int i = 0;
//			while (i < 3);
//			{
//				text_1();
//				text_2();
//				i++;
//			}
//
//		}
//
//
//
//	}
//
//
//
//	//һЩ����
//	{
//		printf("age = %d\n", age);
//		printf("%d\n", 4 * CPDD(3, 4));
//
//		int age = 20;
//
//		printf("age = %d\n", age);
//
//		//age = age + 1;
//		//age = age - 1;
//
//		printf("age = %d\n", age);
//
//
//
//		printf("%d\n", 100);
//
//		char cn = 'a';
//
//		short num = 10;
//
//
//		printf("%d\n", num);
//
//		printf("%d\n", cn);
//
//
//
//		char ch = 'w';
//		float weight = 45.5f;
//
//
//
//		//ʹ��˳��
//		{
//			int k = 10;
//			int r = ++k;
//			printf("%d", k);//11
//			printf("%d", r);//11
//			int t = k++;
//			printf("%d", k);//12
//			printf("%d", t);//11
//		}
//
//		//ǿ������ת��
//		{
//			int t = (int)3.14;
//
//			printf("%d", t);
//
//		}
//
//		{
//			int ch = getchar();//��ȡ�ַ�
//			printf("%c\n", ch);
//
//			putchar(ch);//����ַ�
//		}
//		{
//			int ch = 0;
//			while ((ch = getchar()) != EOF)//EOF��end of file
//			{
//				putchar(ch);
//
//			}//��סCrlt + Z���������ȡ��EOF
//
//
//		}
//	}
//
//
//
//	//����
//	{
//
//		//const���峣��
//		{
//			const int num = 13;//�Ὣ���� ����Ϊ �����������ɸ���
//
//			int arr_1[10] = { 0 };
//			int arr_2[num] = { 0 };
//
//		}
//
//
//		//ö�ٳ���
//		{
//			enum NAME  //����һ������    NAMEֻ��������ֵ
//			{
//				BS,
//				happer,
//				happeriness = 1919810,//��ֵ
//
//			};
//
//			printf(" %d\n", BS);
//			printf(" %d\n", happer);
//			printf(" %d\n", happeriness);
//		}
//	}
//
//
//
//	//�ַ���
//	{
//		char arr_4[] = "YOU";
//		char arr_5[] = { 'Y', 'O', 'U' };
//		char arr_6[] = { 'Y', 'O', 'U' ,'\0'};
//
//		//�˴����� ����(����״̬f10 ���԰��� ���� ����) �۲������־-->\0  ���㳤��
//
//		printf(" % s\n", arr_4);
//		printf(" % s\n", arr_5);
//		printf(" % s\n", arr_6);
//
//
//		//strlen�����ַ�������
//		int long_1 = strlen("YOU");
//
//		printf("%d\n", arr_4);
//		printf("%d\n", arr_5);//���ӡ���ֵ
//		printf("%d\n", arr_6);
//
//	}
//
//	
//	//ת���ַ�-->�㳤��
//	{
//
//		//%d��ӡ����--int   %c��ӡ�ַ�--char  %s��ӡ�ַ���--
//		//%lf��ӡ������--double  %f��ӡ--float  %l��ӡ  --long
//				//��printf����%f��
//
//		printf("%s\n", 'YOU');
//		printf("%c\n", '\'');// \' ���ڱ�ʾ�ַ�����'
//		//printf("%c\n", ''');�����
//
//		printf("%c\n","\"");//\�� ���ڱ�ʾһ���ַ����ڲ���˫����
//		printf("%c\n", "'");
//
//		printf("c:\test\test.c");
//		printf("c:\\test\\test.c");//\\ ���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з���
//
//		printf("\a\a\a\a\a"); //  \a �����ַ�������
//
//		printf("\b\b\b");//\b �˸��
//
//		printf("\f\f\f");//\f ��ֽ��
//
//		printf("\r\r\r");//\r �س�
//
//		printf("\n\n\n");//\n ����
//
//		printf("\t\t\t"); //\t ˮƽ�Ʊ��
//
//		printf("a\?\?");//\? ����д��������ʺ�ʱʹ�ã���ֹ���Ǳ�����������ĸ��
//
//		printf("a??");
//
//		printf("\v\v\v");//\v ��ֱ�Ʊ��
//
//		printf("%c\n",'\130');
//		//\ddd ddd��ʾ1~3���˽��Ƶ����֡� �磺 \130 X
//		
//		printf("%c\n", '\x30');
//		//\xdd dd��ʾ2��ʮ���������֡� �磺 \x30 0
//	}
//
//
//
//	//ת������
//	{
//
//		//16����
//		{
//			int i, o, p, j;
//			printf("������:\n");
//			scanf("%d", &i);
//			printf("\n");
//
//			o = i / 16;
//			p = i % 16;
//			j = o * 10 + p;
//
//			printf("%d", j);
//		}
//
//
//
//
//	}
//
//
//
//	//������ֵС��Ϸ
//	{
//		//������ֵС��Ϸ_2
//		{
//
//			int num1 = 0;
//			int num2 = 0;
//			int num3 = 0;
//
//			int sum = 0;
//
//			printf("����3����:>");
//			scanf("%d %d %d", &num1, &num2, &num3);
//
//			sum = Add(num1, num2, num3);
//
//			printf("\n�� = % d\n", sum);
//
//
//
//		}
//
//
//		//������ֵС��Ϸ_1
//		{
//			int num1 = 0;
//			int num2 = 0;
//			int num3 = 0;
//
//			int sum = 0;
//
//			printf("����3����:>");
//
//			scanf("%d %d %d", &num1, &num2, &num3);
//
//			sum = num1 + num2 + num3;
//
//			printf("\n�� = % d\n", sum);
//
//		}
//	}
//
//
//
//	//ȡ���ֵС��Ϸ
//	{
//
//		
//		int time_3 = 0;
//		printf("����__������ȡ���ֵ");
//		scanf("%d", &time_3);
//		const int time_2 = time_3;
//		int arr_3[10] = { 0 };
//		
//		//ʩ��δ���
//		// 
//		// 
//		//int arr_3[time_2] = { 0 };
//		
//		//time_2 = time_2 -1;
//
//
//		//����
//		int time_1 = 0;
//		for (time_1 = 0; time_1 <= time_2; time_1++)
//		{
//			scanf("%d\n", &arr_3[time_1]);
//		}
//
//		//ȡֵ
//		int max_1 = arr_3[0];
//		for (time_1 = 0; time_1 < time_2; time_1++)
//		{
//			//�Ƚ�
//			if (arr_3[time_1] > max_1)
//			{
//				//����
//				max_1 = arr_3[time_1];
//			}
//
//		}
//
//		//��ӡ
//		printf("���ֵ%d\n", max_1);
//
//		int sum_1 = 0;
//		for (time_1 = 0; time_1 < time_2; time_1++)
//		{
//			sum_1 = sum_1 + arr_3[time_1];
//
//		}
//		int avg = sum_1 / time_2;
//		printf("ƽ��ֵ%d", arr_3[time_1]);
//
//	}
//
//
//
//	//ѡ�����
//	{
//		//BMIָ��
//		{
//			int high = 0;
//			int weight = 0;
//			int c = 0;
//
//			while (0 == c)
//			{
//				printf("������������(m)");
//				scanf("%lf\n", &high);
//
//				printf("�������������(m)");
//				scanf("%lf\n", &weight);
//
//				if (high / weight * 2 > 24.9)
//				{
//					printf("̫����\n");
//				}
//
//				else if (high / weight * 2 < 18.5)
//				{
//					printf("̫����\n");
//				}
//
//				else  /*if (high / weight * 2 <= 24.9 && high / weight * 2 = > 18.5)*/
//				{
//					printf("����\n");
//				}
//
//				printf("��������������0");
//				scanf("%d\n", &c);
//			}
//
//
//
//
//
//		}
//
////�ȼ۵Ĵ���
//	{
//	int a = 0;
//	int b = 0;
//	int bigger = 0;
//
//
//	//1
//	{
//		if (a > b)
//			bigger = a;
//
//		else//�ͽ�ԭ��
//			bigger = b;
//
//	}
//
//	//2
//	{
//		//	����������  (��Ŀ������)
//		bigger = a > b ? a : b;
//		// 0        1     2   3
//		//��1��������0=2������0=3
//	}
//
//
//
//		}
//
//
////switch���
//{
//	//���ڼ��ж�
//	{
//		//��switch����У�����û�취ֱ��ʵ�ַ�֧������breakʹ�ò���ʵ�������ķ�֧
//		int day = 0;
//		int KFC = 0;
//
//
//		printf("��������_\n");
//		scanf("%d\n", &day);
//
//		switch (day)
//		{
//		case 1:
//			printf("��������һ\n");
//			break;
//
//		case 2:
//			printf("�������ڶ�\n");
//			break;
//
//		case 3:
//			printf("����������\n");
//			break;
//
//		case 4:
//			printf("����������\n");
//
//			switch (KFC)
//			{
//			case 0:
//				printf("v��50\n");
//				KFC++;
//				break;
//
//			default:
//				printf("v��50\n");
//				KFC++;
//				break;
//
//			}
//
//
//		case 5:
//			printf("����������\n");
//			break;
//
//		case 6:
//		case 7:
//			printf("������ĩ\n");
//			break;
//
//		default:
//			printf("��");
//			break;
//
//		}
//		printf("����KFC%d��", KFC);
//
//	}
//}
//
//
//
//	}
//
//
//
//	//ѭ�����
//	{
//
//		//���100���ڵ�����
//		
//		{
//			int app = 0;
//			for (app = 0; app < 100; app++)
//			{
//				if (app % 2 == 1)
//				{
//					printf("%d\n", app);
//
//				}
//
//
//			}
//		}
//
//
//
//			
//		
//				
//			
//		
//		
//			//�������С��Ϸ	
//		{
//
//
//			//�������
//			srand(time(0));
//
//
//
//			srand(time(0));
//
//			int a = 0;
//			int b = 0;
//			int c = rand();
//
//
//
//
//
//			while (a != c)
//			{
//				printf("��������µ�ֵ");
//				b++;
//				scanf("%d\n", &a);
//
//				if (a < c)
//				{
//					printf("С��\n");
//
//				}
//				else if (a > c)
//				{
//					printf("����\n");
//
//				}
//
//				else
//				{
//					printf("�¶���,����%d��\n",b);
//
//				}
//
//			}
//			
//		}
//
//
//		//while���
//		{
//
//			{
//				int l = 0;
//				while (l <= 99)
//				{
//					if (l == 10)
//					{
//						printf("%d\n", l);
//						continue;
//
//					}
//					if (l = 15)
//					{
//						printf("%d\n", l);
//						break;
//					}
//					l++;
//
//				}
//
//				printf("%d\n", l);
//			}
//
//
//
//
//			//�žų˷���
//			{
//				int q = 1;
//				int o = 1;
//				int k = 0;
//
//
//				while (o <= 9)
//				{
//
//					while (q <= o)
//					{
//						k = q * o;
//						printf("%d*%d=%d ", q, o, k);
//						q++;
//
//
//					}
//					printf("\n");
//					o++;
//					q = 1;
//				}
//				printf("\a");
//			}
//
//
//		}
//
//
//		//do while���
//		{
//
//			//�žų˷���
//			{
//				int i = 1;
//				int o = 0;
//				int q = 0;
//				do
//				{
//
//					do
//					{
//						o++;
//						q = i * o;
//
//						printf("%d*%d=%d ", o, i, q);
//					} while (i > o);
//					i++;
//					o = 0;
//
//
//
//				} while (i <= 9);
//
//
//			}
//
//
//			//�׳�
//			{
//				//1
//				{
//
//
//					int i = 1;
//					int o = 1;
//					int k = 1;
//					int p = 0;
//					int u = 0;
//					int l = 2;
//
//
//
//					printf("����\n");
//					scanf("%d\n", &u);
//
//					do
//					{
//
//						do
//						{
//							o *= i;
//							i++;
//						} while (i <= k);
//
//
//						p += o;
//						o = 1;
//						i = 1;
//
//						printf("1!");
//
//						for (l = 2; l <= k;)
//						{
//							printf("+%d!", l);
//							l++;
//
//						}
//						printf("=%d\n", p);
//						l = 1;//������Ե���2��
//
//
//						k++;
//						o = 1;
//					} while (k <= u);
//
//
//				}
//
//
//				//2
//				{
//					int i;
//					int p = 1;
//					int o = 0;
//					scanf("%d", i);
//
//					for (; i >= o;)
//					{
//						o++;
//						p *= o;
//
//					}
//					printf("%d!=", p);
//				}
//				
//				//ָ���---��ʩ��
//			}
//
//
//
//
//
//
//
//
//
//
//		}
//
//		//��������
//		{
//			char password[20] = { 0 };
//			printf("���룻\n");
//			scanf("%s", password);
//			printf("��ȷ�����루Y/N����\n");
//			int mmp = 0;
//			while ((mmp = getchar())!='\n')
//			{
//				;
//			}//����  \n����ֹ��������
//			int ch = getchar();
//
//			if (ch == 'Y')
//			{
//				printf("�ɹ�\n");
//
//			}
//			else
//			{
//				printf("ʧ��\n");
//
//			}
//
//		}
//
//
//		//for���
//		{
//
//			//�žų˷���
//			{
//				int i = 1;
//				int o = 1;
//				int k = 0;
//
//				for (i = 1; i < 10; printf("\n"), o = 1, i++)
//				{
//
//
//					for (k != -1; o <= i; printf("%d*%d=%d ", o, i, k), o++)
//					{
//
//						k = i * o;
//						;
//						;
//					}
//					;
//					;
//
//				}
//
//
//				//�����ж�
//				{
//					int o = 1;
//					int i = 2;
//					int p = 0;
//					int k = 0;
//
//					printf("��������");
//					scanf("%d", &k);
//
//					//scanf("%d", &o);
//
//
//					for (; o <= k; o++)
//					{
//
//
//						for (; i < o;)
//						{
//
//							if (o % i == 0)
//							{
//								p = 1;
//								break;
//							}
//							else
//							{
//								p = 2;
//							}
//
//							i++;
//
//						}
//
//						i = 2;
//						if (p == 1)
//						{
//							printf("%d��������\n", o);
//						}
//						else
//						{
//
//							printf("%d������\n", o);
//						}
//
//
//					}
//				}
//
//
//
//
//				//��ӡ����
//				{
//					int i = 1;
//					int o = 0;
//					int p = 0;
//
//					printf("������\n");
//					scanf("%d\n",&o);
//
//
//
//
//					for (i = 1; i <= o; i++)
//					{
//						p = i % 2;  //ȡ�࣬δʩ����
//						if (p == 1)
//						{
//							break;
//						}
//
//						else if (p <= 0)
//						{
//							printf("��");
//							continue;
//
//						}
//						printf("%d\n",i);
//					}
//					
//
//
//				}
//
//
//
//
//
//
//
//			}
//
//
//
//		}
//
//
//
//
//
//
//
//
//
//
//
//	}
//
//
//
//	//����
//	{
//		//ʾ��
//		{
//			int arr[5] = { 1,2,3,4,5 };
//			char ch[5] = { 1,2,5 };
//
//			int i = 0;
//
//			while (i < 5);
//			{
//				printf("\n", arr[i], ch[i]);//�±����ò�����
//				//				^ ^   ^ ^
//				i++;
//			}
//		}
//
//
//		//��Ϸ��ʼ��Ļ
//		{
//			char arr_1[] = "welcome to GAME!";
//			char arr_2[] = "################";
//
//			int left = 0;
//			int right = strlen(arr_1 - 1);
//
//			
//
//
//			while (left < right)
//			{
//
//
//				arr_2[left] = arr_1[left];
//				arr_2[right] = arr_1[right];
//
//				printf("%s\n", arr_2);
//				left++;
//				right--;
//			}
//
//
//
//
//		}
//
//		
//	}
//
//	
//	//�۰����
//	{
//		//������
//		{
//			int COC[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//			//���������
//
//			int left = 0;
//			int right = sizeof(COC) / sizeof(COC[0] - 1);
//			int mid = 0;
//			int guest = 6;
//
//			while (left <= right)
//			{
//				mid = (left + right) / 2;
//
//
//				if (COC[mid] < guest)
//				{
//					left += 1;
//
//
//				}
//
//				else if (COC[mid] > guest)
//				{
//					right -= 1;
//
//				}
//
//				else
//				{
//
//					break;
//				}
//
//				if (left <= right)
//				{
//					printf("�ҵ���,%d\n", guest);
//				}
//				else
//				{
//					printf("�Ҳ�����");
//				}
//			}
//		}
//
//
//		//�Һ���---------��δʩ�����
//		{
//			int bin_search(int COC[], int left, int right, int guest);
//			int COC[] = { 0 };
//			//���������
//			int left = 0;
//			int right = sizeof(COC) / sizeof(COC[0]) - 1;
//			int mid = 0;
//			int guest = 6;
//
//			while (left <= right)
//			{
//				mid = (left + right) / 2;
//
//
//				if (COC[mid] < guest)
//				{
//					left += 1;
//
//
//				}
//
//				else if (COC[mid] > guest)
//				{
//					right -= 1;
//
//				}
//
//				else
//				{
//
//					break;
//				}
//
//				if (left <= right)
//				{
//					printf("�ҵ���,%d\n", guest);
//				}
//				else
//				{
//					printf("�Ҳ�����");
//				}
//			}
//		}
//
//
//
//
//	}
//
//
//
//	//goto���
//	{
//		//ʾ��
//		{
//			for (;;)
//			{
//				for (;;)
//				{
//					for (;;)
//					{
//						goto ok;
//
//					}
//					printf("error");
//
//				}
//
//			}
//
//		ok:
//			printf("ok");
//		}
//
//
//
//		
//	}
//
//
//
//	//��������
//	{
//
//		//��������
//		{
//			srand(time(0));
//			int a = rand();
//
//			int time_1 = 0;
//			int num_1 = 0;
//			int num_2 = 0;
//			int hap;
//
//			do {
//				num_1 = a % 10;
//				num_2 = num_2 * 10 + num_1;
//
//
//				printf("a=%d\nnum_1=%d\nnum_2=%d\n", a, num_1, num_2);
//
//				a /= 10;
//
//
//			} while (hap > 0);
//		}
//
//
//		//���Լ��--շת�����
//		{
//			srand(time(0));
//			int a = rand();
//			int b = rand();
//			int t;
//
//			while (b != 0)
//			{
//				t = a % b;
//				a = b; 
//				b = t;
//
//				printf("a=%d,b=%d,t=%d", a, b, t);
//			}
//			
//			printf("gcd=%d",a);
//
//
//		}
//
//
//		//��������_1
//		{
//			srand(time(0));
//			int a = rand();
//
//			//int num_1, num_2, num_3, num_4;
//
//			int num_1 = 0;
//			int num_2 = 0;
//			int num_3 = 0;
//			int num_4 = 0;
//
//			for(;a>0;a/=10)
//			{
//				num_1 = a % 10;
//				num_2 = num_2 * 10 + num_1;
//				
//				printf("a=%d\nnum_1=%d\nnum_2=%d\n", a, num_1, num_2);
//				
//			}
//
//			for (; num_2 > 0; a /= 10)
//			{
//				
//				num_3 = num_2 % 10;
//				num_4 = num_4 * 10 + num_3;
//				;
//				printf("num_2=%d\nnum_3=%d\nnum_4=%d\n", num_2, num_3, num_4);
//			}
//
//
//
//
//
//
//		}
//
//
//		//��������_2
//		{
//			srand(time(0));
//			int a = rand();
//
//			int num_1 = a;
//			int num_2 = 1;
//			int num_3 = 0;
//			int end = 0;
//
//			for (;a > 9;a /= 10)
//			{
//				num_2 *= 10;
//
//
//			}
//
//			
//
//			for (; num_2 > 0; num_2 /= 10)
//			{
//				num_3 = num_1 / 10;
//				printf("%d", num_3);
//
//				num_1 %= 10;
//				num_2 /= 10;
//
//				if (num_1 > 9)
//				{
//					printf(" ");
//
//				}
//
//			}
//			printf("\n");
//
//
//			
//		}
//
//
//
//
//	}
//
//
//
//	//���ű��ʽ
//	{
//		int a = 0;
//		int b = 6;
//		int c = 3;
//		printf("%d\n", a);
//		printf("%d\n", b);
//		printf("%d\n", c);
//
//		int d = (a = b - 3, c = a - 2, b = c + 2);//dΪ���һ�����ʽ���
//		printf("%d\n", a);
//		printf("%d\n", b);
//		printf("%d\n", c);
//		printf("%d\n", d);
//	}
//
//
//
//	//ָ��
//	{
//		
//		//����
//		{
//			int me = 0;
//			&me;//ȡ��me�ĵ�ַ
//			//ע������me��4���ֽڣ�ÿ���ֽڶ��е�ַ��ȡ�����ǵ�һ���ֽڵĵ�ַ����С�ĵ�ַ��
//			printf("%p\n", &me);//��ӡ��ַ��%p���Ե�ַ����ʽ��ӡ
//
//			printf("%d\n", sizeof(char*));
//			printf("%d\n", sizeof(short*));
//			printf("%d\n", sizeof(int*));
//			printf("%d\n", sizeof(double*));
//
//
//			//ָ���С��32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽ�
//		}
//
//
//		//��ʾ
//		{
//
//			//one
//			{
//
//				//�˴�������bug��
//				int pc = 0;
//				int pl = 0;
//
//				printf("�������뿴������");
//				scanf("%d\n", &pc);
//				printf("�������뿴�����ݵ�ַ");
//				scanf("%d\n", &pl);
//
//
//				int* kp = &pc;
//				*kp = pl;
//			}
//
//
//			//two
//			{
//				char coc = 'call';
//				char* Cthulhu = &coc;//��ŵ�ַ
//				*Cthulhu = 'HFL';//�˴�*�ǽ����ò���������������
//				printf("%c\n", &coc);
//
//				//�����coc�����ݱ����HFL
//			}
//		}
//
//
//	}
//
//
//
//	//�ṹ��
//	{
//		//�ṹ��ĳ�ʼ��
//		{
//			//��ӡ�ṹ����Ϣ
//			
//			struct student Stu = { 18,"����",87, "��"};
//			//.Ϊ�ṹ��Ա���ʲ�����
//
//
//			printf("1:������%d  ������%s  ������%lf  �Ա���%s\n", Stu.age_1, Stu.name_1, Stu.score, Stu.sex);
//
//			//->������
//			struct student* STU = &Stu;
//			printf("2:age=%d name=%s score=%lf sex=%s\n", STU->age_1,STU->name_1,STU->score,STU->sex);
//			printf("3:age=%d name=%s score=%lf sex=%s\n", (*STU).age_1, (*STU).name_1, (*STU).score, (*STU).sex);
//
//		};
//
//		
//	}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	return 0;
//}
//



