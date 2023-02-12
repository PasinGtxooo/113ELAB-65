// เปลี่ยนเลขโรมันให้เป็นเลขอารบิก
// จงเขียนฟังก์ชันเพื่อเปลี่ยนเลขโรมันที่มีค่าอยู่ในช่วงเพียง 1 ถึง 9 (ซึ่งก็คือ I,II,III,IV,V,VI,VII,VIII,IX ตามลำดับ) ทั้งหมดที่ปรากฏในสตริงที่รับผ่านฟังก์ชันเข้ามา ให้กลายเป็นเลขอารบิก 1 หลัก แล้วบันทึกผลที่ได้ลงในตัวแปรอีกตัวที่ถูกส่งเข้ามาด้วยในฟังก์ชัน

// ตัวอย่างผลลัพธ์
//  Input: There are III eggs on the table.
// Output: There are 3 eggs on the table.
//  Input: II + III = V
// Output: 2 + 3 = 5

#include <stdio.h>

void roman2arabic(char input[],char output[])
{
    int len,am=0,sp=0;
    for(len =0;len<80;len++){
        if(input[len]=='\0'){break;}}
    for(int i=0;i<len;i++){
        if (input[i] == 'I'||input[i] == 'V'||input[i] == 'X'){
            if(input[i]=='I' && (input[i+1]!='V' )){am+= 1;sp++;}
            else if(input[i]=='I'){am-= 1;sp++;}
            else if(input[i]=='V'){am+= 5;sp++;}
            else if(input[i]=='X'){am+= 8;sp++;}
        if (input[i+1] !='I'&& input[i+1] != 'V'&&input[i+1] != 'X'){
            sp--;
            char add= am+48;
            output[i-sp]=add;
            am=0;}}
        else{
        output[i-sp]=input[i];}
    }
     output[len-sp]='\0';
}

int main()
{  char input[80],output[80];

   printf(" Input: ");
   gets(input);  /* read a line of characters from the input to "input" variable */

   roman2arabic(input,output);
   printf("Output: %s\n",output);

   return 0;
}