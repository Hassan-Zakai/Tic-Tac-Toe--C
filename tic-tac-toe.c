#include<stdio.h>
int main(){
	char a[3][3];
	printf("Enter Characters (X/O) for playing Tic-Tac-Toe: \n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf(" %c",&a[i][j]);
			if(a[i][j] != 'X' && a[i][j] != 'O')
			printf("Invalid Character. Enter charater (X/O).\n");
			
			}
		
		printf("\n");
		
	}
	printf("\n");
	char winner = ' ';
	
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					printf("%c\t",a[i][j]);
				}
				printf("\n");
			}
			if(a[0][0] == a[1][0] && a[0][0] == a[2][0]) //c1
			winner = a[0][0];

			else if(a[0][1] == a[1][1] && a[0][1] == a[2][1]) //c2
			winner = a[0][1];
			
			else if(a[0][2] == a[1][2] && a[0][2] == a[2][2]) //c3
			winner = a[0][2];
			
			else if(a[0][0] == a[0][1] && a[0][0] == a[0][2]) //r1
			winner = a[0][0];
			
			else if(a[1][0] == a[1][1] && a[1][0] == a[1][2]) //r2
			winner = a[1][0];
			
			else if(a[2][0] == a[2][1] && a[2][0] == a[2][2]) //r3
			winner = a[2][0];
			
			else if(a[0][0] == a[1][1] && a[0][0] == a[2][2]) //d1
			winner = a[0][0];
			
			else if(a[0][2] == a[1][1] && a[0][2] == a[2][0]) //d2
			winner = a[0][2];
			if(winner == 'X' || winner == 'O')
				printf("\n%c is Winner!",winner);
			else
			printf("Draw!");
			
			
			return 0;
			}
			