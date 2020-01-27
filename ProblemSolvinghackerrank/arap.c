#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX_STRING_SIZE 40
void printDetailKapal(int selection,char *nama);

struct profile {
    int check;
    char nama[50];
    int ktp;
    int nohp;
} prof;

struct history {
    int id;
    char nama_kapal[40];
} hist[10];

int * bubblesort() {
    static int return_arr[6];
    int def[6] = {10,6,14,24,18,20};
    int a[6] = {10,6,14,24,18,20};
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



int main() {
	char nama_kapal[][MAX_STRING_SIZE] =
	{ "MICHAEL",
  	  "LITTLE STAR",
  	  "STYNGRAY",
      "PREDATOR",
      "VINCENT",
      "COLUMBUS"
    };
    int selection,select2,counter=0;
    menu:
    printf("Program Sewa Speedboat\n");
    printf("1. List Speedboat\n");
    printf("2. History Penyewaan\n");
    printf("3. Profile\n");
    printf("Pilih menu: ");
    scanf("%d", &selection);
    if (selection == 1) {
    	menu_kapal:
    	printf("=====================\n");
    	printf("No  Nama Kapal\n");
        for (int i = 0; i < 6; i++)
		{
			printf("%d.  %s\n", i+1,nama_kapal[i]);
		}
		printf("======================\n7. Urutkan kapal berdasarkan seat\n");
		printf("Lihat detail kapal nomor : ");
    	scanf("%d", &selection);
		if(selection<7){
    		printDetailKapal(selection-1,nama_kapal[selection-1]);	
    		printf("Sewa kapal \n1. Sewa \n2. Tidak\nPilih Menu :");
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
    					strcpy(hist[i].nama_kapal,nama_kapal[selection-1]);
    					counter+=1;
    					goto menu;
    				}
    			}
    		}
    		else{
    			goto menu;
    		}
		}
		else{
			int *return_arr = bubblesort();
			printf("=====================\n");
    		printf("No  Nama Kapal\n");
			for(int i=0;i<6;i++){
    			printf("%d.  %s\n",i+1,nama_kapal[return_arr[i]]);
    		}	
    		printf("=====================\n");
    		printf("Lihat detail kapal nomor : ");
    		scanf("%d", &selection);
    		printDetailKapal(return_arr[selection-1],nama_kapal[return_arr[selection-1]]);
    		printf("Sewa kapal \n1. Sewa \n2. Tidak\nPilih Menu :");
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
    					strcpy(hist[i].nama_kapal,nama_kapal[return_arr[selection-1]]);
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
    		for(int i=0;i<10;i++){
    			if(hist[i].id!=0){
    				printf("%d. %s\n",hist[i].id,hist[i].nama_kapal);
    			}
    		}
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



void printDetailKapal(int selection,char *nama)  
{  
	int seat[6] = {10,6,14,24,18,20};
	char detail_kapal[6][3][100] = {
    {"1. Ayer / Bidadari\n2. Putri / Sepa\n3. Pulau Pantara\n4. Tidung / Pramuka\n5. Harapan / Kelapa", "1. Rp. 1.780.000\n2. Rp. 4.510.000\n3. Rp. 5.880.000\n4. Rp. 4.300.000\n5. Rp. 4.400.000","Ac, Televisi, 2×150 hp Suzuki, Toilet, Living Room" },
    {"1. Ayer / Bidadari", "1. Rp. 2.200.000","2×115 hp Yamaha" },
    {"1. Ayer / Bidadari\n2. Putri / Sepa\n3. Pulau Pantara\n4. Tidung / Pramuka\n5. Harapan / Kelapa", "1. Rp. 3.675.000\n2. Rp. 6.400.000\n3. Rp. 8.500.000\n4. Rp. 5.875.000\n5. Rp. 6.100.000","Ac, Televisi, 2×250 hp Suzuki, Toilet, Living Room" },
    {"1. Ayer / Bidadari\n2. Putri / Sepa\n3. Pulau Pari\n4. Larung", "1. Rp. 11.000.000\n2. Rp. 25.000.000\n3. Rp. 17.000.000\n4. Rp. 3.000.000","Ac, Televisi, 3×250 hp Suzuki, Toilet, Living RoomKamar Tidur, Pantry, Cukup nyaman untuk Party" },
    {"1. Ayer / Bidadari\n2. Putri / Sepa\n3. Pulau Pantara\n4. Tidung / Pramuka\n5. Fishing", "1. Rp. 2.875.000\n2. Rp. 9.450.000\n3. Rp. 12.600.000\n4. Rp. 8.475.000\n5. Rp. 14.700.000","Non AC, 4×250 hp Suzuki, Longboat, Fiber Glass, Toilet" },
    {"1. Ayer / Bidadari\n2. Putri / Sepa\n3. Pulau Pantara\n4. Tidung / Pramuka\n5. Harapan / Kelapa", "1. Rp.7.100.000\n2. Rp. 24.100.000\n3. Rp. 29.100.000\n4. Rp.22.600.000\n5. Rp. 22.600.000","AC, Televisi, 2×250 hp Suzuki, Toilet, Passanger" },
	};
    printf("===================\nKapal %s\n",nama);
    printf("===================\nJumlah Seat:\n%d seat \n===================\nList Destinasi :\n%s\n===================\nList Harga:\n%s\n===================\nFitur:\n%s\n===================\n", seat[selection],detail_kapal[selection][0],detail_kapal[selection][1],detail_kapal[selection][2]);
}  
