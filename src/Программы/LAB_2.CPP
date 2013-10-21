#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream.h>




float A[10][10], B[100];
int i,j,R[100];
int n,m;
float Sum;

void main(){

	clrscr();
	printf("Введiть розмiри матрицi: \n");
	printf("\nn= ");
	scanf("%d", &n);
	printf("\nm= ");
	scanf("%d", &m);
	if(n>10 || m>10){
		printf("\nМатриця не може бути бiльшою нiж 10 на 10.");
		}
	else{
	//printf("%d", m);
	//printf("%d", n);
		//randomize();
		for(i=0;i<n;i++){

			for(j=0;j<m;j++){
				printf("\nA[%i][%i]= ", i, j);
				scanf("%f", &A[i][j]);
				//A[i][b]=random(10)+1;
				}
			}
		printf("\n");
		printf("\nВи ввели матрицю:\n\n");
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				printf("%f   ", A[i][j]);
				}
				printf("\n\n");
			}
		for(i=0;i<n;i++){
			Sum=0;
			for(j=0;j<m;j++){
				Sum+=A[i][j];
				}
			B[i]=Sum;

			}
		 printf("Сума елементiв рядкiв вiдповiдно дорiвнює:\n");
		 for(i=0;i<n;i++){
			printf("\n%f\n",B[i]);
			}

		 for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(A[i][j]>B[i]){
					R[i]+=1;
					}

				}
			}
			printf("\n");
		 printf("Кiлькiсть шуканих елементiв вiдповiдно дорiвнює:\n");
		 for(i=0;i<n;i++){
			printf("\n%i\n",R[i]);
			}


	}

getch();
}



