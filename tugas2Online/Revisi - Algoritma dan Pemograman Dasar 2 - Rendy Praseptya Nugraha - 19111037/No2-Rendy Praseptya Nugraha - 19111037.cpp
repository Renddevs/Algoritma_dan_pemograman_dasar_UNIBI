#include <stdio>
#include <conio>
#include <iostream.h>
#include <ctype>
#include <string>
using namespace std;
void main()
{
    char arrayKarakter[100];
    int indeksArray = 0;
    char karakter;
    char updateKarakter;
    bool find = false;
    int indeks;
    int menu;
    daftarMenu:
    printf("Menu : \n");
    printf("1. Input Karakter\n");
    printf("2. Cari karakter\n");
	 printf("3. Hapus Karakter\n");
    printf("4. Ubah  Karakter tertentu\n");
    printf("5. Tampilkan Karakter-karakter tersebut\n");
    printf("Pilih Menu : ");
    scanf("%i", &menu);
    clrscr();
    if(menu == 1){
		printf("Masukan Karakter : ");
        cin >> karakter;
        if(sizeof(arrayKarakter)/sizeof(arrayKarakter[0]) == 0){
        	arrayKarakter[0] = karakter;
		}else{
			arrayKarakter[(sizeof(arrayKarakter)/sizeof(arrayKarakter[0]))-((sizeof(arrayKarakter)/sizeof(arrayKarakter[0]))-indeksArray)] = karakter;
		}
		indeksArray++;
		goto daftarMenu;
    }else if(menu == 2){
    	printf("Masukan karakter yang akan dicari : ");
      cin >> karakter;
      for(int i=0; arrayKarakter[i] != '\0'; i++){
    		if(karakter == arrayKarakter[i]){
         	printf("Karakter %c ada di indeks ke-%i",karakter,i);
            find = true;
            break;
         }
		}

      if(find == false){
      	printf("Karakter tidak ditemukan");
      }
    getch();
    goto daftarMenu;
    }else if(menu == 3){
    	printf("Masukan indeks karakter yang akan dihapus : ");
      cin >> karakter;
      for(int k = 0; arrayKarakter[k] != '\0'; k++){
          if(arrayKarakter[k] == karakter){
          	indeks = k;
            break;
          }
		}

      for(int i=indeks; arrayKarakter[i] != '\0'; i++){
          arrayKarakter[i] = arrayKarakter[i+1];
		}
		goto daftarMenu;
    }else if(menu == 4){
      printf("Masukan karakter yang akan diubah : ");
      scanf(" %c", &karakter);
      printf("Masukan karakter baru : ");
      scanf(" %c", &updateKarakter);
    	for(int i=0; arrayKarakter[i] != '\0'; i++){
      	if(arrayKarakter[i] == karakter){
         	arrayKarakter[i] = updateKarakter;
         }
		}
      goto daftarMenu;
    }else if(menu == 5){
    	for(int i=0; arrayKarakter[i] != '\0'; i++){
    		printf("Karakter-%i : %c\n",i+1,arrayKarakter[i]);
		}
    	getch();
    	goto daftarMenu;
    }else{
    	goto daftarMenu;
    }

    getch();
}
