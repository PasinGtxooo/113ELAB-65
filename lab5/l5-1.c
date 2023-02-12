// Automorphic numbers

// Automorphic numbers คือตัวเลขใด ๆ ที่เมื่อนำมายกกำลังสองแล้วยังคงได้ตัวเลขที่ลงท้ายด้วยตัวเลขที่เอามายกกำลัง

// ตัวอย่างเช่น
// 1
// 2
// =
// 1
// 5
// 2
// =
// 25
// 6
// 2
// =
// 36
// 25
// 2
// =
// 625
// 76
// 2
// =
// 5776
// จากตัวอย่างข้างต้นจะได้ว่า 1, 5, 6, 25 และ 76 ต่างก็เป็น Automorphic numbers

// จงเขียนโปรแกรมที่รับค่า input เป็นเลขจำนวนเต็มบวกใด ๆ โดยโปรแกรมจะทำการตรวจสอบว่าตัวเลขดังกว่าเป็น Automorphic numbers หรือไม่ดังตัวอย่าง

// หมายเหตุ input ในชุดทดสอบ มีค่าไม่เกิน 100,000,000

// sample output
// Input n = 25
// n^2 = 625
// Yes. 25 is automorphic number.
// sample output2
// Input n = 13
// n^2 = 169
// No. 13 is not automorphic number.
// โปรแกรมที่เขียนได้คือ
#include <stdio.h>
 void main(){
    long n,n2,le=0,an=0;
    printf("Input n = ");
    scanf("%ld",&n);
    long n1 =n;
    n2 = n*n;
    printf("n^2 = %ld\n",n2);
    for(int i = 1;i<=n1;i*=10){
        if (n2%10==n%10){
            n2 /=10;
            n /=10;
            an+=1;}
        le +=1;}
    if (an==le){
        printf("Yes. %ld is automorphic number.",n1);}
    else{
        printf("No. %ld is not automorphic number.",n1);}
}