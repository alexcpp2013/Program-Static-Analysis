#include<stdio.h>
#include<conio.h>
#include<math.h>

float	*mas;
float	n;
int	i,j;
float	S, k, Sqr;

int main(){
  clrscr();
  printf("����i�� �i��i��� �箪: n= ");
  scanf("%f", &n);
  if (n > (int) n){
    printf("\n�i��i��� �箪 �� ���� ��� �஡����");
    getch();
    return 1;
  }
  if (n < 2){
    printf("\n�i��i��� �箪 ��� ��� �i��� �i� ����");
    getch();
    return 1;
  }

  mas = new float [2 * n];
  for(i = 0; i < n; i++){
    printf("\n����i�� ���न��� %i-� �窨: \nx= ", i+1);
    scanf("%f", &mas[i * 2]);
    printf("y=");
    scanf("%f", &mas[i * 2 + 1]);
    for(j = 0; j < i; j++){
      if(mas[j * 2] == mas[i * 2] && mas[j * 2 + 1] == mas[i * 2 + 1]){
	  printf("\n����i�� i��i ���न���!!!\n");
	  i--;
      }
    }
  }
  for(i = 0; i < n; i++)
    for(int j = i + 1; j < n; j++){
      if(mas[i * 2 + 1] != 0 && mas[j * 2 + 1] == 0){
	S = fabs(mas[i * 2] * mas[j * 2 + 1]/2);
	Sqr+=S;
	printf("\n��窨 (%f; %f) i (%f; %f) \n�⢮����� �ਪ�⭨� � �����: %f\n", mas[i * 2], mas[i * 2 + 1], mas[j * 2], mas[j * 2 + 1], S);
	break;
      }
      k = mas[i * 2 + 1] / mas[i * 2];
      if(mas[j * 2] * k != mas[j * 2 + 1]){
	S = fabs(((mas[i * 2] * mas[j * 2 + 1]) - mas[j * 2] * mas[i * 2 + 1])/2);
	Sqr+=S;
	printf("\n��窨 (%f; %f) i (%f; %f) \n�⢮����� �ਪ�⭨� � �����: %f\n", mas[i * 2], mas[i * 2 + 1], mas[j * 2], mas[j * 2 + 1], S);

      }
    }

  delete[] mas;
  printf("\n�㬠 ��i� ���� = %f", Sqr);
  getch();
  return 0;
}


