#include <conio>
#include <stdio>
#include <iostream.h>

void main()
{
    char data[150];
    char vocal[5];
    int nonVocal;


    nonVocal = 0;
    for(int v = 0; v < sizeof(vocal)/sizeof(vocal[0]); v++){
    	vocal[v] = 0;
	}
	printf("Program Analisis Huruf\n");
    printf("Masukan data string : ");
    cin.getline(data, 150);
    for(int i = 0; data[i]!='\0'; ++i)
    {
    	if(data[i] == 'a' || data[i] == 'A'){
    		vocal[0] += 1;
		}else if(data[i] == 'i' || data[i] == 'I'){
			vocal[1] += 1;
		}else if(data[i] == 'u' || data[i] == 'U'){
			vocal[2] += 1;
		}else if(data[i] == 'e' || data[i] == 'E'){
			vocal[3] += 1;
		}else if(data[i] == 'o' || data[i] == 'O'){
			vocal[4] += 1;
		}
        else if((data[i]>='a'&& data[i]<='z') || (data[i]>='A'&& data[i]<='Z'))
        {
            nonVocal++;
        }
    }

	printf("Jumlah total huruf vocal : %i\n", vocal[0]+vocal[1]+vocal[2]+vocal[3]+vocal[4]);
	printf("Huruf A : %i\n", vocal[0]);
	printf("Huruf I : %i\n", vocal[1]);
	printf("Huruf U : %i\n", vocal[2]);
	printf("Huruf E : %i\n", vocal[3]);
	printf("Huruf O : %i\n", vocal[4]);
	printf("Jumlah total huruf non vocal : %i\n", nonVocal);
   getch();
}
