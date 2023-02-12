// ให้เขียนโปรแกรมสำหรับตรวจสอบว่าตัวอักษรที่พิมพ์เข้ามาเป็นอักษรชนิด ตัวพิมพ์เล็ก (lower case), ตัวพิมพ์ใหญ่ (upper case), ตัวเลข (digit), หรือเป็นอักษรประเภทอื่น (others)

// ตัวอย่างผลลัพธ์
// b
// Output: lower case 
// 7
// Output: digit
// W
// Output: upper case
// +
// Output: others

#include <stdio.h>
int main(){
    char xt;
    scanf("%c",&xt);
    int x=xt; 
    if (x>=48 && x<=57){
        printf("Output: digit");}
    else if(x>=65 && x<=90 ){
        printf("Output: upper case");}
    else if(x>=97 && x<=122){
        printf("Output: lower case");}
    else {
        printf("Output: others");}
}