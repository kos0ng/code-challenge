#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX_STRING_SIZE 40
void printsuccess(int harga,int driverid,char lokasi[50],char tempat_tujuan[50]);

typedef struct profile {
    char nama[50];
    int nohp;
    char kota_asal[20];
    char password[50];
} Prof;

struct history {
    int id;
    char nama_kendaraan[50];
    char nama[50];
    int jarak;
} hist[10];

struct detailkendaraan {
    int id;
    char nama_kendaraan[50];
    int jenis;
    char nama[50];
    int harga;
} Detken[10];

int cek_harga(int jarak,int biaya,int jenis)
{
    int harga,defharga;
    if(jenis==1){
        defharga=9000;
        harga=defharga*jarak+biaya;
    }
    else if(jenis==2){
        defharga=4000;
        harga=defharga*jarak+biaya;
    }
    return harga;
}




int main() {
    strcpy(Detken[0].nama_kendaraan,"Ferari");
    strcpy(Detken[1].nama_kendaraan,"Avanza");
    strcpy(Detken[2].nama_kendaraan,"Honda Jazz");
    strcpy(Detken[3].nama_kendaraan,"Honda Supra");
    strcpy(Detken[4].nama_kendaraan,"Yamaha Mio");
    strcpy(Detken[5].nama_kendaraan,"Satria FU");
    strcpy(Detken[0].nama,"Joko");
    strcpy(Detken[1].nama,"Bayu");
    strcpy(Detken[2].nama,"Alex");
    strcpy(Detken[3].nama,"Steven" );
    strcpy(Detken[4].nama,"Dafa" );
    strcpy(Detken[5].nama,"Jack" );
    Detken[0].id=1;
    Detken[1].id=2;
    Detken[2].id=3;
    Detken[3].id=4;
    Detken[4].id=5;
    Detken[5].id=6;
    Detken[0].harga=50000;
    Detken[1].harga=30000;
    Detken[2].harga=20000;
    Detken[3].harga=5000;
    Detken[4].harga=8000;
    Detken[5].harga=12000;
    Detken[0].jenis=1;
    Detken[1].jenis=1;
    Detken[2].jenis=1;
    Detken[3].jenis=2;
    Detken[4].jenis=2;
    Detken[5].jenis=2;
	Prof akun;
    strcpy(akun.nama,"coba");
    akun.nohp=123;
    strcpy(akun.kota_asal,"Surabaya");
    strcpy(akun.password,"123");
    int selection,select2,counter=0;
    char tmp_nama[50];
    char tmp_password[50];
    menu_login:
    for(int i=0;i<10;i++){
        hist[i].id=0;
    }
    printf("==========================\n");
    printf("||   Program Driverku   ||\n");
    printf("==========================\n");
    printf("1. Punya Akun\n");
    printf("2. Buat Akun\n");
    printf("==========================\n");
    printf("Pilih menu: ");
    scanf("%d", &selection);
    if(selection==1){
            printf("Login akun\n");
            printf("Nama : ");
            scanf("%s",tmp_nama);
            printf("Password : ");
            scanf("%s",tmp_password);
    if(strcmp(tmp_nama,akun.nama)!=0 || strcmp(tmp_password,akun.password)!=0){
        printf("Data tidak cocok\n");
        goto menu_login;   
    }
    }
    else if(selection==2){
            printf("Masukkan nama : ");
        	scanf("%s", akun.nama);
        	printf("Masukkan password : ");
        	scanf("%s", akun.password);
        	printf("Masukkan nomor Handphone : ");
        	scanf("%d", &akun.nohp);
            printf("Masukkan Kota Asal : ");
        	scanf("%s", akun.kota_asal);
    }
    else{
    	printf("Input tidak diketahui\n");
    	exit(0);
    }
        int check1=0,check2=0,biaya;
        char tempat_tujuan[50];
        char lokasi[50];
    	menu_driver:
    	printf("==========================\n");
        printf("Pilih Jenis Kendaraan\n");
        printf("==========================\n");
    	printf("No  Jenis\n");
        printf("==========================\n");
        printf("1.  Mobil\n");
        printf("2.  Motor\n");
        printf("==========================\n");
        printf("Pilih menu : ");
    	scanf("%d", &selection);
        int driver_id;
        if(selection==1){
            printf("=======================\n");
            printf("ID Nama Mobil\tNama Driver\tHarga\n");
            for(int i=0;i<6;i++)
            {
                if(Detken[i].jenis==1)
                {
                    printf("%d  %s\t%s\t\tRp%d,00\n",i+1,Detken[i].nama_kendaraan,Detken[i].nama,Detken[i].harga);
                }
            }
            printf("====================\n");
            printf("Pilih Driver ( ID ) : ");
            scanf("%d",&driver_id);
            if(driver_id<=0 || driver_id>3){
                printf("Maaf ID yang anda masukkan tidak dikenali\n");
                goto menu_driver;
            }
        }
        else if(selection==2)
        {
            printf("=======================\n");
            printf("ID Nama Sepeda\tNama Driver\tHarga\n");
            int j=0;
            for(int i=0;i<6;i++)
            {    
                if(Detken[i].jenis==2)
                {
                    j+=1;
                    printf("%d  %s\t%s\tRp%d,00\n",j,Detken[i].nama_kendaraan,Detken[i].nama,Detken[i].harga);
                }
            }
            printf("====================\n");
            printf("Pilih Driver ( ID ) : ");
            scanf("%d",&driver_id);
            driver_id+=3;
            if(driver_id<4 || driver_id>6){
                printf("Maaf ID yang anda masukkan tidak dikenali\n");
                goto menu_driver;
            }
        }
        else{
            printf("Input tidak diketahui\n");
            goto menu_driver;
        } 
        menu_driver2:
        printf("====================\n");
        printf("1. Masukkan tempat tujuan\n");
        printf("2. Masukkan lokasi anda\n");
        printf("3. Ganti driver\n");
        printf("4. Sewa Driver\n");
        printf("Pilih Menu : ");
        scanf("%d",&selection);
        if(selection==1){
            printf("Masukkan tempat tujuan : ");
            scanf("%s",tempat_tujuan);
            check1=1;
            goto menu_driver2;
        }
        else if(selection==2){
            printf("Masukkan lokasi anda : ");
            scanf("%s",lokasi);
            check2=1;
            goto menu_driver2;
        }
        else if(selection==3){
            goto menu_driver;
        }
        else if(selection==4){
            if(check1==1 && check2==1){
                if(counter==10){
    					printf("History maksimal 10\n");
    					goto menu_login;
    				}
                int jarak=rand()%16;
                while(jarak==0){
                    jarak=rand()%16;
                }
    			for(int i=0;i<10;i++)
    			{
    				if(hist[i].id==0){
    					hist[i].id=i+1;
    					strcpy(hist[i].nama_kendaraan,Detken[driver_id-1].nama_kendaraan);
                        strcpy(hist[i].nama,Detken[driver_id-1].nama);
                        hist[i].jarak=jarak;
    					counter+=1;
    					break;
    				}
    			}
                biaya=cek_harga(jarak,Detken[driver_id-1].harga,Detken[driver_id-1].jenis);   
                printsuccess(biaya,driver_id-1,lokasi,tempat_tujuan);
                check1=0;
                check2=0;
                
            }
            else{
                printf("Mohon maaf data yang anda masukkan kurang lengkap\n");
                goto menu_driver2;
            }
        }
        menu_end:
        printf("===============================\n");
        printf("1. Sewa Lagi\n");
        printf("2. Lihat History\n");
        printf("3. Keluar\n");
        printf("Pilih Menu : ");
        scanf("%d",&selection);
        if(selection==1)
        {
            goto menu_driver;
        }
        else if(selection==2)
        {
            if(counter==0){
                printf("Maaf belum ada history pemesanan\n");
            }
            else{
                int arr_jarak[]={};
                printf("============================\n");
                printf("1. Urutkan berdasarkan jarak\n");
                printf("2. Urutkan berdasarkan ID\n");
                printf("Pilih menu : ");
                scanf("%d",&selection);
                if(selection==1){
                for(int i=0;i<counter;i++){
                        arr_jarak[i]=hist[i].jarak;
                }
                int a[] = {};
                int i = 0, j = 0, tmp;
                for(int k=0;k<counter;k++){
                    a[k]=hist[k].jarak;
                }
                //bubble sort
                for (i = 0; i < counter; i++) {  
                    for (j = 0; j < counter - i - 1; j++) { 
                        if (a[j] > a[j + 1]) { 
                        tmp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = tmp;
                    }
                }
                }
                printf("===========================\n");
                printf("ID\tNama Driver\tNama Kendaraan\tJarak\n");
                //linear search
                for(int i=0;i<counter;i++){
                    for(int j=0;j<counter;j++){
                        if(a[i]==hist[j].jarak){
                            printf("%d\t%s\t\t%s\t\t%d\n",hist[j].id,hist[j].nama,hist[j].nama_kendaraan,hist[j].jarak);
                        }
                    }
                }
                goto menu_end;
                
                }
                else if(selection==2){
                    printf("===========================\n");
                    printf("ID\tNama Driver\tNama Kendaraan\tJarak\n");
                    for(int i=0;i<counter;i++){
                        printf("%d\t%s\t\t%s\t\t%d\n",hist[i].id,hist[i].nama,hist[i].nama_kendaraan,hist[i].jarak);
                    }
                    goto menu_end;
                }

            }
        }
        else if(selection==3){
            printf("Terimakasih Telah Menggunakan aplikasi Driverku\n");
            exit(0);
        }

	
    return 0;
}

void printsuccess(int harga,int driverid,char lokasi[50],char tempat_tujuan[50])  
{  
    printf("Lokasi Tujuan : %s\n",lokasi);
    printf("Lokasi Penjemputan : %s\n",tempat_tujuan);
    printf("Total biaya : Rp%d,00\n",harga);
    printf("Harap bersabar Driver %s akan segera menjemput anda\n",Detken[driverid].nama);
}  
