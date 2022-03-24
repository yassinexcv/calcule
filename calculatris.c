#include <stdio.h>
int main ()
{
	int menu ;
	
	float num1, num2;
	float num3 = (num1 > num2);
	float num4 = (num1 < num2);

	char choix ;

	printf ("menu\n");
	printf ("1 -> calcule\n");
	printf ("2 -> comparison\n");
	scanf("%d",&menu);
	
	if (menu==1)
{
	printf("entrer le premier chifre : \n");
	scanf("%f",&num1);
	getc(stdin);
	printf ("choisi ton opperateur:\n");
	scanf("%c",&choix);
	printf("entrer le deuxieme chifre : \n");
	scanf("%f",&num2);
	switch(choix)
	{
		case '+':
			printf("%.2f + %.2f = %.2f \n",num1,num2,num1+num2);
			break;
		case '-':
			printf("%.2f - %.2f = %.2f \n",num1,num2,num1-num2 );
			break;
		case '*':
			printf("%.2f * %.2f = %.2f \n",num1,num2,num1*num2 );
			break;
		case '/':
			if (num2!=0)
			printf("%.2f / %.2f = %.2f \n",num1,num2,num1/num2 );
			else
			printf("impossible de deviser par 0 \n");
			break;
			default :
			printf("operateur inconnu !! \n");
	}
		}
	
	else if(menu == 2) 
				{
					printf("entrer le premier chifre pour comparer : \n");
					scanf("%f",&num1);
					getc(stdin);
					printf ("choisi ton operateur de comparaison : \n");
					scanf("%c",&choix);
					printf("entrer le deuxieme chifre pour comparer : \n");
					scanf("%f",&num2);
					switch(choix)
				{
					case '>':
					printf("%.2f > %.2f = %d",num1,num2,num3);
					break;
					case '<':
					printf("%.2f < %.2f = %d",num1,num2,num4);
					break;
					case '=':
					printf("%.2f == %.2f = %d",num1,num2,num1==num2);
					break;
					default:
					printf("operateur inconnu !! \n");
						
				}
	}
	
			
	return 0;
}//soumaya
