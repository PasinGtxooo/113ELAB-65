// นับสระในสายอักขระ
// เขียนโปรแกรมภาษาซี รับ string เข้ามาหนึ่ง string ด้วย scanf() แล้วแสดงสระที่มีทั้งหมดใน string ดังกล่าวออกมา พร้อมกับแสดงจำนวนตัวอักขระที่เป็นสระด้วย ดังตัวอย่าง

// ตัวอย่างผลลัพธ์ที่ 1
// String (without a space): hello
// e o 
// This string contains 2 vowels.
// ตัวอย่างผลลัพธ์ที่ 2
// String (without a space): string
// i 
// This string contains 1 vowel.
// ตัวอย่างผลลัพธ์ที่ 3
// String (without a space): zzzZZ!

// This string contains 0 vowel.

#include <stdio.h>

int main() {
    int i=0,an=0;
    char ao[100];
    printf("String (without a space): ");
    for(i=0;i<100;i++){
        scanf("%c",&ao[i]);
        if(ao[i]=='\n'){break;}
    }
    for(int j=0;j<i;j++){
         if (ao[j] == 'a' || ao[j] == 'e' || ao[j] == 'i' || ao[j] == 'o' || ao[j] == 'u' ||
       ao[j] == 'A' || ao[j] == 'E' || ao[j] == 'I' || ao[j] == 'O' || ao[j] == 'U') {
    printf("%c ",ao[j]);
    an++;}}
if (an>=2){
printf("\nThis string contains %d vowels.",an);}
else{printf("\nThis string contains %d vowel.",an);}
}
