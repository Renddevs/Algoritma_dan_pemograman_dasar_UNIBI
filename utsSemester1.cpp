#include <conio.h>
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main(){
	int kd_nasabah,simpanan,pinjaman,lama_pinjam;
	float bunga,setoran;
	string nama;
	printf("Kode Nasabah : ");
	cin >> kd_nasabah;
	printf("Nama : ");
	cin >> nama;
	printf("Jumlah Simpanan : ");
	cin >> simpanan;
	
	if( simpanan < 1000000){
		printf("Anda tidak bisa melakukan peminjaman");
		goto endProcces;
	}else{
	    printf("Jumlah Pinjaman : ");
	    cin >> pinjaman;
	    if(simpanan >= 1000000 && simpanan < 2000000 && pinjaman <= 4000000){
		    printf("Lama Peminjaman [1-3]thn: ");
		    scanf("%i",&lama_pinjam);
	    }else if(simpanan >= 2000000 && simpanan < 3000000 && pinjaman <= 6000000){
		    printf("Lama Peminjaman [1-3]thn: ");
		    scanf("%i",&lama_pinjam);
	    }else if(simpanan >= 3000000 && simpanan < 4000000 && pinjaman <= 8000000){
		    printf("Lama Peminjaman [1-3]thn: ");
		    scanf("%i",&lama_pinjam);
	    }else{
	    	printf("Peminjaman melebihi batas maksimum");
	    	goto endProcces;
	    }
	    bunga = pinjaman*0.025;
	    if(lama_pinjam == 1){
	    	setoran = (pinjaman+bunga)/12;
		}else if(lama_pinjam == 2){
			setoran = (pinjaman+bunga)/24;
		}else if(lama_pinjam == 3){
			setoran = (pinjaman+bunga)/36;
		}
	}
	
	cout << "Nama nasabah : " << nama;
	printf("\n Peminjaman : %i", pinjaman);
	printf("\nLama Peminjaman : %i thn",lama_pinjam);
	printf("\nSetoran : %f", setoran);
	endProcces:
	getch();
}
