#include<stdio.h>

void main(){
	char array[3][3];
	int i;
	int j;
	int word = 0x41;
	for (j=0;j<3;j++){
		for(i=0;i<3;i++){				
			array[j][i]=(char)(word);
			printf("%c",array[j][i]);
			word++;
				
		}		

	}

	
}
