// ลบสระออกจากสายอักขระ
// จงเขียนฟังก์ชันเพื่อลบสระที่ปรากฏในสายอักขระที่ส่งผ่านฟังก์ชันเข้ามาออกให้หมด

// ตัวอย่างผลลัพธ์ 1
//  Input: hello, world
// Output: hll, wrld
// ตัวอย่างผลลัพธ์ 2
//  Input: abcdef 123456
// Output: bcdf 123456
#include <stdio.h>

int remove_vowel(char *str){
    int i,j;
    for(i =0,j =0;i<80;i++){
        if (str[i]=='\0' ){break;}
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i]== 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ){}
        else{str[j++] = str[i];}}
    str[j] = '\0';}

int main(){  
  char str[80];
  printf(" Input: ");
  gets(str);
  remove_vowel(str);
  printf("Output: %s\n",str);
  return 0;}