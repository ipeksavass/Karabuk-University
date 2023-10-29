#include <stdio.h>
#include <stdlib.h>

// Öðrenci yapýsý
struct Student {
	char name[50];
    int stNo;
    int age;
    struct Student* next;
};

// Yeni bir öðrenci düðümü oluþturan iþlev
struct Student* yeniOgrenci(int ogrenciNo, char ad[], int yas) {
    struct Student* yeniOgrenci = (struct Student*)malloc(sizeof(struct Student));
    yeniOgrenci->stNo = ogrenciNo;
    snprintf(yeniOgrenci->name, sizeof(yeniOgrenci->name), "%s", ad); 
	/*Bu iþlev(snprintf), karakter dizisi hedefine bir biçim belirleyici kullanarak veriyi yazmak için kullanýlýr
	ve hedef karakter dizisinin belirli bir boyutunu aþmamayý garanti eder.*/
    yeniOgrenci->age = yas;
    yeniOgrenci->next = NULL;
    return yeniOgrenci;
}

// Yeni bir öðrenci düðümünü listenin sonuna ekleyen iþlev
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

// Öðrenci bilgilerini ekrana yazdýran ve öðrenci sayýsýný hesaplayan iþlev
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

    
    // Öðrenci bilgilerini ekrana yazdýrma ve öðrenci sayýsýný sayma
    ogrenciBilgileriniYazdir(ogrenciListesi);

    // Belleði serbest býrakma
    struct Student* mevcut = ogrenciListesi;
    while (mevcut != NULL) {
        struct Student* gecici = mevcut;
        mevcut = mevcut->next;
        free(gecici);
    }

    return 0;
}
