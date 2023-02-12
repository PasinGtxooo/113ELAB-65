// แปลงเลขฐานสิบเป็นเลขฐานสอง (ขนาด 4 บิต)
// ให้นิสิตเขียนโปรแกรมรับเลขจำนวนเต็มฐานสิบซึ่งมีค่าตั้งแต่ 0 ถึง 15 และแปลงค่าเป็นเลขฐานสองขนาด 4 บิต แล้วพิมพ์ออกมา

// ให้นิสิตเขียนโปรแกรมโดยใช้ bitwise operator และไม่ใช้ if statement

// ตัวอย่างข้อมูลส่งออก
// 7
// Binary number of 7 is 0111.


#include <stdio.h>
#include <stdlib.h>
int nannam(int x){
    int i,z,g,ans;
     for(i=3;i>-1;i--){
        z = x>>(i);
        g = z%2;
        printf("%d",g);
}}
int main(){
    char xt[4];
    fgets(xt,4,stdin);
    int x =atoi(xt);
    printf("Binary number of %d is ",x);
    nannam(x);printf(".");
    
} 