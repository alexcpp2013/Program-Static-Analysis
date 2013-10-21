#include<stdio.h>
#include<conio.h>
#include<math.h>

float	*mas;
float	n;
int	i,j;
float	S, k, Sqr;

int main(){
  clrscr();
  printf("Введiть кiлькiсть точок: n= ");
  scanf("%f", &n);
  if (n > (int) n){
    printf("\nКiлькiсть точок не може бути дробовою");
    getch();
    return 1;
  }
  if (n < 2){
    printf("\nКiлькiсть точок має бути бiльше нiж одна");
    getch();
    return 1;
  }

  mas = new float [2 * n];
  for(i = 0; i < n; i++){
    printf("\nВведiть координати %i-ї точки: \nx= ", i+1);
    scanf("%f", &mas[i * 2]);
    printf("y=");
    scanf("%f", &mas[i * 2 + 1]);
    for(j = 0; j < i; j++){
      if(mas[j * 2] == mas[i * 2] && mas[j * 2 + 1] == mas[i * 2 + 1]){
	  printf("\nВведiть iншi координати!!!\n");
	  i--;
      }
    }
  }
  for(i = 0; i < n; i++)
    for(int j = i + 1; j < n; j++){
      if(mas[i * 2 + 1] != 0 && mas[j * 2 + 1] == 0){
	S = fabs(mas[i * 2] * mas[j * 2 + 1]/2);
	Sqr+=S;
	printf("\nТочки (%f; %f) i (%f; %f) \nутворюють трикутник з площею: %f\n", mas[i * 2], mas[i * 2 + 1], mas[j * 2], mas[j * 2 + 1], S);
	break;
      }
      k = mas[i * 2 + 1] / mas[i * 2];
      if(mas[j * 2] * k != mas[j * 2 + 1]){
	S = fabs(((mas[i * 2] * mas[j * 2 + 1]) - mas[j * 2] * mas[i * 2 + 1])/2);
	Sqr+=S;
	printf("\nТочки (%f; %f) i (%f; %f) \nутворюють трикутник з площею: %f\n", mas[i * 2], mas[i * 2 + 1], mas[j * 2], mas[j * 2 + 1], S);

      }
    }

  delete[] mas;
  printf("\nСума всiх площ = %f", Sqr);
  getch();
  return 0;
}


