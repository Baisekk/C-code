#include<windows.h>
#include<stdio.h>
 int main()
 {
    int profit;
    int money;
    printf("�����뱾�µ���������\n");
    scanf("%d",&profit);
    switch((profit - 1 ) / 1000)
    {
	case 0:
		profit = 0;
		money = 1000 + profit;
		printf("���µ��ܹ���Ϊ%d\n",money);
		break;
	case 1:
		profit = 0.1*profit;
		money = 1000 + profit;
		printf("���µ��ܹ���Ϊ%d\n",money);
		break;
	case 2:	
	case 3:
	case 4:
	case 5:
		profit = 0.15*profit;
		money = 1000 + profit;
		printf("���µ��ܹ���Ϊ%d\n",money);
		break;
	case 6:
	case 7:
	case 8:
	case 9:
		profit = 0.2*profit;
		money = 1000 + profit;
		printf("���µ��ܹ���Ϊ%d\n",money);
		break;
	default:
		profit = 0.25*profit;
		money = 1000 + profit;
		printf("���µ��ܹ���Ϊ%d\n",money);
		break;			
	}
 	system("pause");
 	return 0;
 }
