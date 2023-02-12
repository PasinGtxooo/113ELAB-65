// ร้านขายพิซซา
// ให้ผู้เรียนเขียนโปรแกรมสำหรับร้านขายพิซซาซึ่งขายพิซซาสามขนาด ได้แก่ ขนาดเล็ก กลาง และใหญ่ ตามขนาดเส้นผ่านศูนย์กลาง (diameter) 10 (ขนาด s), 16 (ขนาด m), และ 20 (ขนาด l) นิ้ว ตามลำดับ โดยผู้ใช้สามารถเลือกเพิ่มเพิ่มเปปเปอโรนี (pepperoni) ชีส (cheese) และ/หรือเห็ด (mushroom) บนหน้าพิซซาได้ โดยทางร้านกำหนดราคาขาย (price) เป็น 1.5 เท่าของต้นทุน ดังสมการ
// price
// =
// 1.5
// ×
// cost
// โดยที่ต้นทุนของพิซซาแต่ละถาดจะคำนวณจากสูตร
// cost
// =
// fixedcost
// +
// (
// basecost
// ×
// area
// )
// +
// (
// extracost
// ×
// area
// )
// ร้านได้กำหนดให้ fixedcost และ basecost มีค่าเท่ากับ 5 และ 2 บาทตามลำดับ ส่วนค่า extracost จะมีค่าเป็น 0 หากผู้ใช้ไม่ต้องการเพิ่มเครื่องปรุงอะไรเลย แต่การเลือกเพิ่มเครื่องปรุงแต่ละชนิดจะทำให้ extracost มีความเปลี่ยนแปลงดังต่อไปนี้

// การเพิ่ม pepperoni จะทำให้ extracost เพิ่มขึ้น 0.5 บาท
// การเพิ่ม cheese จะทำให้ extracost เพิ่มขึ้น 0.25 บาท
// การเพิ่ม mushroom จะทำให้ extracost เพิ่มขึ้น 0.30 บาท
// ส่วนค่า area นั้นจะคำนวนจากสูตร
// a
// r
// e
// a
// =
// π
// ×
// (
// diameter
// )
// 2
// /
// 4
// ซึ่งเวลาเขียนโปรแกรมให้ส่ง #include \ แล้วใช้ค่าคงที่ M_PI แทนค่าพาย

// ตัวอย่างผลลัพธ์ที่ 1
// Welcome to My Pizza Shop!!
// ~~~~~~~~~~~~~~~~~~~~~~~~~~
// Enter pizza size (1=s, 2=m, or 3=l): 2
// Extra pepperoni? (1=yes, 0=no): 1
// Extra cheese? (1=yes, 0=no): 0
// Extra mushroom? (1=yes, 0=no): 0
// ~~~~~~~~~~~~~~~~~~~~~~~~~~
// Your order costs 761.48 baht.
// Thank you.
// ตัวอย่างผลลัพธ์ที่ 2
// Welcome to My Pizza Shop!!
// ~~~~~~~~~~~~~~~~~~~~~~~~~~
// Enter pizza size (1=s, 2=m, or 3=l): 1
// Extra pepperoni? (1=yes, 0=no): 0
// Extra cheese? (1=yes, 0=no): 1
// Extra mushroom? (1=yes, 0=no): 0
// ~~~~~~~~~~~~~~~~~~~~~~~~~~
// Your order costs 272.57 baht.
// Thank you.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    printf("Welcome to My Pizza Shop!!\n~~~~~~~~~~~~~~~~~~~~~~~~~~\nEnter pizza size (1=s, 2=m, or 3=l): ");
   	float price,size;
	float extracost = 0;
	float basecost = 2;
    float fixedcost = 5;
    char sizet = getchar();
    if (sizet=='1'){
        size = 5;}
    else if (sizet=='2'){
        size = 8;}
    else if (sizet=='3'){
        size = 10;}
    float area = M_PI* pow(size,2);
    printf("Extra pepperoni? (1=yes, 0=no): ");
    getchar();
    if (getchar()=='1'){
        extracost += 0.5;}
    printf("Extra cheese? (1=yes, 0=no): ");
    getchar();
    if (getchar()=='1'){
        extracost += 0.25;}
    printf("Extra mushroom? (1=yes, 0=no): ");
    getchar();
    if (getchar()=='1'){
        extracost += 0.3;}
    float cost = fixedcost+(basecost*area)+(extracost*area);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\nYour order costs %.2f baht.\nThank you.",cost*1.5);
}