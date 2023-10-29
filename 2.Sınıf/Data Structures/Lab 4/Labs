#include <stdio.h>
#include <stdlib.h>

// Ogrenci dugumu
struct Student {
	char name[50];
    int stNo;
    int age;
    struct Student* next;
};

// Yeni bir ogrenci dugumu olusturan islev
struct Student* yeniOgrenci(int ogrenciNo, char ad[], int yas) {
    struct Student* yeniOgrenci = (struct Student*)malloc(sizeof(struct Student));
    yeniOgrenci->stNo = ogrenciNo;
    snprintf(yeniOgrenci->name, sizeof(yeniOgrenci->name), "%s", ad); 
	/*Bu islev(snprintf), karakter dizisi hedefine bir bicim belirleyici kullanarak veriyi yazmak için kullaniyor
	ve hedef karakter dizisinin belirli bir boyutunu almayi garanti eder.*/
    yeniOgrenci->age = yas;
    yeniOgrenci->next = NULL;
    return yeniOgrenci;
}

// Yeni bir ogrenci dugumunu listenin sonuna ekleyen islev
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

// Ogrenci bilgilerini ekrana yazdiran ve ogrenci sayisini hesaplayan islev
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

    //Ogrenci bilgilerini ve ogrenci sayisini ekrana yazdirma.
    ogrenciBilgileriniYazdir(ogrenciListesi);
 

    // Bellegi serbest birakma
    struct Student* mevcut = ogrenciListesi;
    while (mevcut != NULL) {
        struct Student* gecici = mevcut;
        mevcut = mevcut->next;
        free(gecici);
    }

    return 0;
}
