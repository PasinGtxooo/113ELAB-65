// พิมพ์สี่เหลี่ยมขนมเปียกปูน
// เขียนโปรแกรมภาษาซี ที่รับเลขจำนวนเต็ม 2 จำนวน เช่น x กับ y (โดย x และ y มีค่าอย่างต่ำเป็น 4) แล้วแสดงสี่เหลี่ยมขนมเปียกปูนที่ยาว x และสูง y ที่มีลักษณะเอียงตามรูป ตัวอย่างเช่น

// ตัวอย่างผลลัพธ์ที่ 1
// 6
// 4
// ******
//  *    *
//   *    *
//    ******
// ตัวอย่างผลลัพธ์ที่ 2
// 20
// 6
// ********************
//  *                  *
//   *                  *
//    *                  *
//     *                  *
//      ********************
// พิมพ์โปรแกรมของคุณลงในช่องว่างข้างล่างนี้
#include <stdio.h>

int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
     for(int i=0;i<y;i++){
        for(int c=0;c<i;c++){
            printf(" ");
        }
        if(i==0||i==y-1){
            for(int st=0;st<x;st++){
                printf("*");}
            printf("\n");
        }else{
            printf("*");
            for(int sp=1;sp<x-1;sp++){
                printf(" ");}
            printf("*\n");
        }
    }
}