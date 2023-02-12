// เขียนโปรแกรมเพื่อรับจำนวนเต็มบวก N (N <= 26) เพื่อแสดงรูปแบบสะท้อนขนาด N ของชุดตัวอักษร

// รูปแบบสะท้อนมีลักษณะดังนี้

// #size N = 3
// c-b-a-b-c

// #size N = 5
// e-d-c-b-a-b-c-d-e

// #size N = 10
// j-i-h-g-f-e-d-c-b-a-b-c-d-e-f-g-h-i-j

// หมายเหตุ

// หากไม่สามารถสร้างรูปแบบสะท้อนขนาด N ของชุดตัวอักษรได้ ให้พิมพ์ -
// ให้ใช้ Loop ในการแสดงรูปแบบสะท้อนดังกล่าว
// ตัวอย่างโปรแกรม 1

// 3
// c-b-a-b-c
// ตัวอย่างโปรแกรม 2

// 5
// e-d-c-b-a-b-c-d-e
// ตัวอย่างโปรแกรม 3

// 0
// -
// Hint

// ในภาษาซี สามารถแปลง character เป็น ascii code ด้วยวิธีนี้

// int code;
// code = (int)'a'; // code = 97
// code = 'a'; // code = 97
// printf("%d", 'a'); // 97
// ในทำนองเดียวกัน สามารถแปลง ascii code เป็น character ด้วยวิธีนี้
// char c;
// c = (char)97; // c = 'a'
// c = 97; // c = 'a'
// printf("%c", 97); // a
// Online C compiler to run C pintrogram online
#include <stdio.h>
main(void){
    int x,xt ,i,j;
    scanf("%d",&x);
    char a ='a';
    if (x <= 0 || x>=27){printf("-");}
    else if (x>=1 && x<=26){
    for (i= x;i>=1;i--){
        if (i==1){
            xt = a+i-1;
            char as = xt;
            printf("%c",xt);}
        else{
        xt = a+i-1;
        char as = xt;
        printf("%c",xt);
        printf("-");}
    }
    for (j=2;j<=x;j++){
         xt = a+j-1;
        char as = xt;
        printf("-");
        printf("%c",xt);
    }
    }
}
