#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX_STRING_SIZE 20
void printDetailDriver(int selection,char *nama,double jarak);

struct profile {
    int check;
    char nama[50];
    int ktp;
    int nohp;
} prof;

struct history {
    int id;
    char nama_driver[20];
    double jarak[20];
    int harga[20];
} hist[10];

int * bubblesort() {
    static int return_arr[6];
    double def[6] = {3.1,2.2,4.1,5.6,7.1,10.8};
    double a[6] = {3.1,2.2,4.1,5.6,7.1,10.8};
    int n=6;
    int i = 0, j = 0, tmp;
    //bubble sort
    for (i = 0; i < n; i++) {  
        for (j = 0; j < n - i - 1; j++) { 
            if (a[j] > a[j + 1]) { 
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    //linear search
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		if(a[i]==def[j]){
    			return_arr[i]=j;	
    		}
    	}
    }
    return return_arr;
}

int cek_harga(double jarak)
{
    int harga,tmp_jarak;
    tmp_jarak=ceil(jarak);
    if(tmp_jarak<=2){
        harga=9000;
    }
    else{
        harga=(tmp_jarak-1)*9000;
    }
    return harga;
}

int main() {
	char nama_driver[][MAX_STRING_SIZE] =
	{ "Joko",
  	  "Putra",
  	  "Brian",
      "Daffa",
      "Dimas",
      "Arif"
    };
    double jarak[6] = {3.1,2.2,4.1,5.6,7.1,10.8};
    int selection,select2,counter=0;
    menu:
    printf("Program Gojek\n");
    printf("1. List Driver\n");
    printf("2. History Pemesanan\n");
    printf("3. Profile\n");
    printf("Pilih menu: ");
    scanf("%d", &selection);
    if (selection == 1) {
    	menu_driver:
    	printf("=====================\n");
    	printf("No  Nama Driver Jarak\n");
        for (int i = 0; i < 6; i++)
		{
			printf("%d.  %s\t%.1f KM\n", i+1,nama_driver[i],jarak[i]);
		}
		printf("======================\n7. Urutkan Driver berdasarkan jarak\n");
		printf("Piih Menu : ");
    	scanf("%d", &selection);
    if(selection<7){
        printDetailDriver(selection-1,nama_driver[selection-1],jarak[selection-1]);          
        printf("Pilih Driver \n1. Iya \n2. Tidak\nPilih Menu :");
        scanf("%d", &select2);
        if(select2==1){
            if(prof.check==0){
                 printf("Harap isi profil terlebih dahulu\n");
                 goto menu;
             }
            if(counter==10){
                     printf("History maksimal 10\n");
                     goto menu;
                 }
            for(int i=0;i<10;i++)
            {
                 if(hist[i].id==0){
                     hist[i].id=i+1;
                     strcpy(hist[i].nama_driver,nama_driver[selection-1]);
                     *hist[i].jarak=jarak[selection-1];
                     *hist[i].harga=cek_harga(jarak[selection-1]);
                     counter+=1;
                     goto menu;
                 }
            }
        }
        else{
            goto menu;
        }
    }
    else if(selection==7)
    {
         int *return_arr = bubblesort();
         printf("=====================\n");
         printf("No  Nama Driver Jarak\n");
         for(int i=0;i<6;i++){
             printf("%d.  %s\t%.1f KM\n",i+1,nama_driver[return_arr[i]],jarak[return_arr[i]]);
         }   
         printf("=====================\n");
         printf("Piih Menu : ");
         scanf("%d", &selection);
         printDetailDriver(return_arr[selection-1],nama_driver[return_arr[selection-1]],jarak[return_arr[selection-1]]);
         printf("Pilih Driver \n1. Iya \n2. Tidak\nPilih Menu :");
         scanf("%d", &select2);
         if(select2==1){
            if(prof.check==0){
                 printf("Harap isi profil terlebih dahulu\n");
                 goto menu;
             }
            if(counter==10){
                     printf("History maksimal 10\n");
                     goto menu;
                 }
            for(int i=0;i<10;i++)
            {
                 if(hist[i].id==0){
                     hist[i].id=i+1;
                     strcpy(hist[i].nama_driver,nama_driver[return_arr[selection-1]]);
                     *hist[i].jarak=jarak[return_arr[selection-1]];
                     *hist[i].harga=cek_harga(jarak[return_arr[selection-1]]);
                     counter+=1;
                     goto menu;
                 }
            }
        }
        else{
            goto menu;
        }
    }
    }
    else if(selection == 2){
    	if(hist[0].id==0){
    		printf("Maaf belum ada riwayat penyewaan\n");
    		goto menu;
    	}
    	else{
            printf("History Pemesanan\n====================================\n");
            printf("No\tNama\tJarak\tharga\n");
            printf("====================================\n");
    		for(int i=0;i<10;i++){
    			if(hist[i].id!=0){
    				printf("%d.\t%s\t%.1f\t%d\n",hist[i].id,hist[i].nama_driver,*hist[i].jarak,*hist[i].harga);
    			}
    		}
            printf("====================================\n");
    		goto menu;
    	}
    }
    else if(selection == 3){
    	if(prof.check==0){
        	printf("Masukkan nama : ");
        	scanf("%s", prof.nama);
        	printf("Masukkan nomor KTP : ");
        	scanf("%d", &prof.ktp);
        	printf("Masukkan nomor Handphone : ");
        	scanf("%d", &prof.nohp);
        	prof.check=1;
        	goto menu;
    	}
    	else{
    		printf("Nama: %s\n",prof.nama);
    		printf("Nomor KTP: %d\n", prof.ktp);
    		printf("Nomor HP: %d\n", prof.nohp);
    		goto menu;
    	}
    }
    else{
    	printf("Input tidak diketahui\n");
    	exit(0);
    }
    return 0;
}



void printDetailDriver(int selection,char *nama,double jarak)  
{  
	int harga;
    char detail_driver[6][2][20] = {
    {"Laki-Laki","L 1234 L" },
    {"Laki-Laki","L 1334 L" },
    {"Laki-Laki","L 1434 L" },
    {"Laki-Laki","L 1534 L" },
    {"Laki-Laki","L 1634 L" },
    {"Laki-Laki","L 1734 L" },
	};
    harga=cek_harga(jarak);
    printf("===================\nNama Driver : %s\n",nama);
    printf("===================\nJenis Kelamin :%s\n===================\nPlat Nomor : %s \n===================\nJarak : %.1f\n===================\nHarga : %d\n===================\n", detail_driver[selection][0],detail_driver[selection][1],jarak,harga);
}  
