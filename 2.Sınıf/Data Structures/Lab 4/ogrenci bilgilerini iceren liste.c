#include <stdio.h>
#include <stdlib.h>

// ��renci yap�s�
struct Student {
	char name[50];
    int stNo;
    int age;
    struct Student* next;
};

// Yeni bir ��renci d���m� olu�turan i�lev
struct Student* yeniOgrenci(int ogrenciNo, char ad[], int yas) {
    struct Student* yeniOgrenci = (struct Student*)malloc(sizeof(struct Student));
    yeniOgrenci->stNo = ogrenciNo;
    snprintf(yeniOgrenci->name, sizeof(yeniOgrenci->name), "%s", ad); 
	/*Bu i�lev(snprintf), karakter dizisi hedefine bir bi�im belirleyici kullanarak veriyi yazmak i�in kullan�l�r
	ve hedef karakter dizisinin belirli bir boyutunu a�mamay� garanti eder.*/
    yeniOgrenci->age = yas;
    yeniOgrenci->next = NULL;
    return yeniOgrenci;
}

// Yeni bir ��renci d���m�n� listenin sonuna ekleyen i�lev
void ogrenciEkle(struct Student** head, struct Student* yeniOgrenci) {
    if (*head == NULL) {
        *head = yeniOgrenci;
    } else {
        struct Student* mevcut = *head;
        while (mevcut->next != NULL) {
            mevcut = mevcut->next;
        }
        mevcut->next = yeniOgrenci;
    }
}

// ��renci bilgilerini ekrana yazd�ran ve ��renci say�s�n� hesaplayan i�lev
void ogrenciBilgileriniYazdir(struct Student* head) {
    struct Student* mevcut = head;
    int sayac = 1;
    
    while (mevcut != NULL) {
        printf("%d- %s %d %d\n", sayac, mevcut->name, mevcut->age, mevcut->stNo);
        mevcut = mevcut->next;
        sayac++;
    }
    
    printf("Toplam ogrenci sayisi: %d\n", sayac - 1);
}

int main() {
    struct Student* ogrenciListesi = NULL;

    
    // ��renci bilgilerini ekrana yazd�rma ve ��renci say�s�n� sayma
    ogrenciBilgileriniYazdir(ogrenciListesi);

    // Belle�i serbest b�rakma
    struct Student* mevcut = ogrenciListesi;
    while (mevcut != NULL) {
        struct Student* gecici = mevcut;
        mevcut = mevcut->next;
        free(gecici);
    }

    return 0;
}
