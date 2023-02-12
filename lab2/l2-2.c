// โปรโมชั่นสะสมสติกเกอร์
// ห้างสรรพสินค้าแห่งหนึ่งจัดโปรโมชั่นแจกสติกเกอร์ให้ลูกค้าสะสมเพื่อใช้เป็นส่วนลดได้ โดยจำนวนสติกเกอร์ที่สะสมได้จะให้ส่วนลดที่แตกต่างกันไป ตามตารางต่อไปนี้

// สะสมครบ 1 ดวง	รับส่วนลด 10%
// สะสมครบ 2 ดวง	รับส่วนลด 15%
// สะสมครบ 3 ดวง	รับส่วนลด 20%
// สะสมครบ 6 ดวง	รับส่วนลด 30%
// สะสมครบ 9 ดวง	รับส่วนลด 40%
// พิจารณากรณีที่ลูกค้ามีสติกเกอร์ 5 ดวง ลูกค้าจะได้รับส่วนลดเพียง 20% เท่านั้น เนื่องจากสติกเกอร์ไม่เพียงพอที่จะได้ลด 30%

// จงเขียนโปรแกรมเพื่อรับจำนวนสติกเกอร์ที่ลูกค้าสะสมได้ (บรรทัดแรก) และราคาสินค้าที่ลูกค้าต้องการซื้อ (บรรทัดที่สอง) แล้วคำนวณส่วนลดที่ลูกค้าได้รับ (บรรทัดที่สาม) จำนวนเงินหลังหักส่วนลดที่ลูกค้าต้องชำระ (บรรทัดที่สี่) และ จำนวนสติกเกอร์คงเหลือ (บรรทัดที่ห้า)

// ตัวอย่าง Input/Output 1
// 5
// 1000.00 
// You get 20 percents discount.
// Total amount due is 800.00 Baht.
// And you have 2 stickers left.
// ตัวอย่าง Input/Output 2
// 0
// 1000.0 
// You get 0 percents discount.
// Total amount due is 1000.00 Baht.
// And you have 0 stickers left.
// ตัวอย่าง Input/Output 3
// 20
// 1000.0 
// You get 40 percents discount.
// Total amount due is 600.00 Baht.
// And you have 11 stickers left.
#include <stdio.h>
#include <stdlib.h>
int main(){
char xt[5], yt[10];
    int st, dt;
	fgets(xt, 5, stdin);
    fgets(yt, 10, stdin);

	int x =atoi(xt);
	float y =atof(yt);
	int in;
		if (x>=9){
			in = 40;
			x -= 9;}
		else if(x>=6){
			in = 30;
			x -= 6;}
		else if (x>=3){
			in = 20;
			x -= 3;}
		else if (x>=2){
			in = 15;
			x -= 2;}
		else if(x>=1){
			in = 10;
			x -= 1;}
		else{
			in =0 ;}
		float sm = y-(y*(in/100.0));
		printf("You get %d percents discount.\n",in);
		printf("Total amount due is %.2f Baht.\n",sm);
		printf("And you have %d stickers left.\n",x);	
		
		
}