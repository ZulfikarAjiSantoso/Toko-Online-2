#include<stdio.h>
#include<conio.h>
#include<string.h>

char ulang;
int pilihan,i,sepatu,jaket,baju,menu,jumlahbeli,total,harga,diskon;

int main()
{
	printf("========tne=======\n");
	printf("----------------------------------------\n");
	printf("=======<<<selamat datang>>>=======\n");
	printf("|Berikut adalah barang yang tersedia di toko kami|<<<<<<<<\n");
	printf("1.Sepatu nike\n");
	printf("2.sepatu adidas\n");
	printf("3.jaket adidas\n");
	printf("4.jaket Gucci\n");
	printf("5.Baju supreme\n");
	printf("6.baju ahha");
	printf("masukkan pilihan barang(1-6) : ");
	scanf("%d",&pilihan);
	switch(menu){
		case 1 :
			printf("sepatu nike\n");
			printf("harga : Rp 250.000\n"); sepatu=250.000;
			printf("jumlah pembelian : \n"); scanf("%d",jumlahbeli);
			total=jumlahbeli*harga;
			printf("sepatu yang dibeli = %d\n,total");
			if(jumlahbeli>=2){
				diskon=0.3*total;
				total=total-diskon;
				printf("jumlah pembayaran = %d\n",total);
			}
			else{
				printf("maaf anda tidak mendapatkan diskon");
			}
			break;
		}	
	}
	
