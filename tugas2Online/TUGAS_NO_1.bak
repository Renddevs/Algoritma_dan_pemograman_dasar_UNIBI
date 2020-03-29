#include <stdio>
#include <conio>
#include <iostream.h>
#include <ctype>
void main()
{
    char kalimat[100];
    bool toUpper;

    printf("Masukan data : ");
    cin.getline(kalimat,100);

    for (int i=0; kalimat[i] != '\0'; i++){
    		if(i == 0){
				putchar(toupper(kalimat[i]));
         }else{
    			if(isspace(kalimat[i])){
            	printf(" ");
               toUpper = true;
               continue;
         	}
            if(toUpper){
            	putchar(toupper(kalimat[i]));
               toUpper = false;
            }else{
             	putchar(tolower(kalimat[i]));
            }
         }
    }
    getch();
}
