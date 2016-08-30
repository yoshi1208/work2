#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define NULL 0



int main(){
	puts("hennkou");
	int i;
	char num[] ="0123456789";
	char alpha[] ="abcdefghijklmnopqrstuvwxyz";
	char Alpha[] ="ABCDEFGHIJKLMNOPSRSTUVWXYZ";
	char special[] = "!\"#%&'()*+,-./:;<=>?[\\]^_{|}~";

	char password[9];
	char s ;
	int c;
	int numflg = 0 ,alfflg = 0,Alfflg =0,splflg =0;

	srand(time(NULL));
	do{
		numflg=0,alfflg=0,Alfflg=0,splflg=0;

		for(i=0;i<8;i++){

			s = rand() % 4;
			switch(s){
				case 0:
					c = rand() % 26;
					password[i]=alpha[c];
					alfflg=1;
					break;
				case 1:
					c = rand() % 26;
					password[i]=Alpha[c];
					Alfflg=1;
					break;
				case 2:
					c=rand() % 29;
					password[i]=special[c];
					splflg=1;
					break;
				case 3:
					c = rand() % 10;
					password[i]=num[c];
					numflg=1;
					break;
			}
		}
	} while(alfflg == 0 || Alfflg == 0 || splflg == 0 || numflg == 0);

	password[8] = '\0';
	puts(password);
	return 0;

}


