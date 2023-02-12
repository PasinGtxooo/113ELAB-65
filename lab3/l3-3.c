// เขียนโปรแกรมเพื่อรับค่าเศษส่วนในรูป a/b เมื่อ a และ b เป็นจำนวนเต็มบวกใด ๆ โดย a และ b มีค่าไม่เกิน 10000 บรรทัดแรกเป็นค่าเศษ a และบรรทัดที่สองเป็นค่าส่วน b
// จากนั้นแสดงเศษส่วนอย่างต่ำของเศษส่วนดังกล่าว

// เศษส่วนอย่างต่ำ คือ เศษส่วนที่อยู่ในรูป p/q โดย ห.ร.ม. ของ p และ q เป็น 1
// กรณีที่ตัวส่วนของเศษส่วนอย่างต่ำ มีค่าเป็น 1 จะแสดงเฉพาะตัวเศษ
// เศษส่วนอย่างต่ำ อาจอยู่ในรูป เศษส่วนแท้ หรือ เศษเกิน ก็ได้
// ตัวอย่างโปรแกรม 1

// 108
// 96
// = 9/8
// ตัวอย่างโปรแกรม 2

// 25
// 5
// = 5
#include <stdio.h>
#include <stdlib.h>
int main(){
	char zx[10],zy[10];
	fgets(zx,10,stdin);
	fgets(zy,10,stdin);
	int x=atoi(zx),y=atoi(zy),i=2;
	while(i<=x+y){
        if(x%i==0&&y%i==0){
            x /= i;
            y /= i;}
		else{
            i++;}}
    if (y==1){
    	printf("= %d",x);}
    else{
	printf("= %d/%d",x,y);}
	}