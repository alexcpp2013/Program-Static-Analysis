#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<iostream.h>



double A[10][10], B[100];
int i,b,c,k;
int n;

void main(){
        clrscr();
	printf("Введiть розмiр матрицi: ");
	printf("\nn= ");
	scanf("%d", &n);
	if(n>10){
		printf("\nМатриця не може бути бiльшою за 10 на 10.");
		}
	else{
	//printf("%d", m);
	//printf("%d", n);
		for(i=0;i<n;i++){
			for(b=0;b<n;b++){
				printf("\nA[%i][%i]= ", i, b);
				scanf("%d", &A[i][b]);
				}
			}
		printf("\n");
		for(i=0;i<n;i++){
			for(b=0;b<n;b++){
				printf("%d ", A[i][b]);
				}
				printf("\n\n");
			}

				for(i=0;i<n;i++){
					for(b=0;b<n;b++){
						if(A[i][b]!=0){
							B[k]=A[i][b];
							k++;

						}
					}
				}
				printf("\n");
				for(i=0;i<k;i++){
					printf("%d ", B[i]);
				}

			}

getch();
}



