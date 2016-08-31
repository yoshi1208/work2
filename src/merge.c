#include <stdio.h>
void FncMerge(char *str1,char *str2){
	int count = 0;
	char mstr[20];

	while((*str1 != '\0') && ( *str2 != '\0')){
		if(count%2 ==0) {
			mstr[count]=*str1;
			str1++;
		}else{
			mstr[count]=*str2;
			str2++;
		}
		count++;
	}
	if(*str1 =='\0'){
		while(*str2 != '\0'){
			mstr[count++] = *str2;
			str2++;
		}
	}
	if(*str2 == '\0'){
		while(*str1 != '\0'){
			mstr[count++] = *str1;
			str1++;
		}
	}
	mstr[count] ='\0';
	printf("%s",mstr);
}
