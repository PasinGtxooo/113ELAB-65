// ถักอักขระ (1)
// จงเติมโค้ดเพื่อให้โปรแกรมสามารถทำงานได้อย่างสมบูรณ์ โดยที่ฟังก์ชัน int charcount(char *s) จะนับจำนวนอักขระที่ปรากฏอยู่ในสายอักษรที่ส่งผ่านเข้ามาในฟังก์ชันตั้งแต่อักขระตัวแรกจนถึงอักขระตัวสุดท้ายก่อนหน้าอักขระนัลล์ (null character)

// ส่วนฟังก์ชัน void charweave(char *s,char *result) จะถักอักขระโดยเก็บผลลัพธ์ของการถักนี้ไว้ในตัวแปร result การถักอักขระมีลักษณะดังนี้ สมมติให้ตัวแปร s มีอักขระอยู่ n ตัวและรูปแบบการเรียงของอักขระเป็น C1C2C3C4...Cn ดังนั้นผลลัพธ์ที่ได้จากถักจะมีลักษณะเป็น C1CnC2Cn-1C3Cn-2C4Cn-3...Cn-1C2CnC1

// ตัวอย่างผลลัพธ์
// String: hello, world
// Output: hdellrloow,  ,woolrlledh
// String: 12345
// Output: 1524334251
#include <stdio.h>

int charcount(char *s)
{
    int len;
   for(len=0;len<100;len++){
    if (s[len]=='\0'){break;}}
    return len;

}

void charweave(char *s,char *result)
{
    int len = charcount(s);
    char mo0[len-1],mo1[len-1];
    for(int j=0;j<len;j++,*s++){
        mo0[j]=*s;}
    mo0[len]='\0';
    int y=0;
    for(int j=len-1;j>=0;j--){
        mo1[y]=mo0[j];y++;}
    mo1[len]='\0';
    int o=0,p=0;
    for(int i=0;i<len*2;i++,*result++){
       if(i%2==0){
        *result=mo0[o];
        o++;}
        else{
        *result=mo1[p];
        p++;}
    }

    *result='\0';
    return;
}

int main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}