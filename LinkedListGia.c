#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct node *head;

void awal()
{
    struct node *ptr;
    int item;

    ptr = (struct node*) malloc(sizeof(struct node*));
    if (ptr==NULL)
    {
        printf("Overflow!");
    }
    else
    {
        printf("Masukan data : ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nData berhasil disimpan di NODE awal!\n");
    }
}

void akhir()
{
    struct node *ptr, *temp;
    int item;

    ptr = (struct node*) malloc(sizeof(struct node*));
    if (ptr==NULL)
    {
        printf("Overflow!");
    }
    else
    {
        printf("Masukan data : ");
        scanf("%d", &item);
        ptr->data = item;
        if(head==NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("Berhasil simpan NODE!\n");
        }
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("Berhasil simpan NODE akhir !\n");
        }
    }

}

void sembarang()
{
    struct node *ptr, *temp;
    int item, loc;

    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("Masukkan data : ");
        scanf("%d", &item);
        ptr->data = item;
        printf("Mau simpan dilokasi berapa? ");
        scanf("%d", &loc);
        temp = head;
        for (int i = 0; i < loc; i++)
        {
            if (temp == NULL)
            {
                printf("Tidak bisa simpan datamu!");
                return;
            }
            temp = temp->next;
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("Berhasil ditambahkan");
    }
}

void hapusAwal()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nList kosong bro!\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nNODE awal berhasil dihapus!\n");
    }
}

void hapusAkhir()
{
    struct node *ptr, *temp;

    if (head==NULL)
        printf("Data masih kosong");
    else
    {
        if (head->next==NULL)
        {
            head=NULL;
        }
        else
        {
            ptr=head;
            while (ptr->next!=NULL)
            {
                temp=ptr;
                ptr=ptr->next;
            }
            temp->next=NULL;
            free(ptr);
        }
        printf("Data paling akhir sudah berhasil dihapus");
    }

}


void hapusSembarang()
{
 struct node *ptr, *temp;
    int loc;

    if (head==NULL)
        printf("Data masih kosong");

    else
    {
        printf("Mau hapus dilokasi berapa? ");
        scanf("%d", &loc);
        if (loc==0)
        {
         printf("Lokasi tidak sesuai");
         return;
        }
        temp = head;
        ptr=head;
        for (int i = 0; i < loc; i++)
        {
            if (temp == NULL)
            {
                printf("Tidak bisa menghapus datamu!");
                return;
            }
            ptr=temp;
            temp = temp->next;
        }
        ptr->next = temp->next;
        free(temp);
        printf("Berhasil dihapus");
    }
}


void cetak()
{
    struct node *ptr;
    ptr = head;
    if(ptr==NULL)
    {
        printf("Listnya kosong wehhh!!!");
    }
    else
    {
        printf("Cetak isi list .... ");
        while(ptr != NULL)
        {
            printf("\n%d", ptr->data);
            ptr = ptr->next;
        }
    }
}

int main()
{
    int pilihan = 0;

    while(pilihan != 8 )
    {
        system("cls");
        printf("\n***** Menu latihan LINKED LIST *****");
        printf("\n========================================");
        printf("\n1. Input Data Awal \n2. Input Data Akhir \n3. Input Data Sembarang \n4. Hapus Data Awal \n5. Hapus Data Akhir\n6. Hapus Data Sembarang\n7. Lihat Data Linked List \n8. Keluar\n");
        printf("\nPilihanmu?: ");
        scanf("%d", &pilihan);

        switch(pilihan)
        {
        case 1 :
            system("cls");
            awal();
            break;

        case 2 :
            akhir();
            break;

        case 3 :
            sembarang();
            break;

        case 4 :
            system("cls");
            hapusAwal();
            break;

        case 5 :
            system("cls");
            hapusAkhir(0);
            break;

        case 6 :
            system("cls");
            hapusSembarang(0);
            break;

        case 7 :
            cetak(0);
            break;

        case 8 :
            exit(0);
            break;

        default:
            printf("Silahkan pilih yang benar");
        }
        getch();
    }
}
