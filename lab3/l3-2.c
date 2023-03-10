// ให้เขียนโปรแกรมเพื่อรับค่าจำนวนเต็มบวก 2 จำนวน M, N จากผู้ใช้ บรรทัดละจำนวน
// จากนั้นแสดงจำนวนเต็มบวกที่มากที่สุดที่หาร M และ N ลงตัว (ห.ร.ม. - GCD) และจำนวนเต็มบวกที่น้อยที่สุดที่ M และ N หารลงตัว (ค.ร.น. - LCM)

// ตัวอย่างโปรแกรม 1

// 10
// 15
// GCD: 5
// LCM: 30
// ตัวอย่างโปรแกรม 2

// 1585
// 3261
// GCD: 1
// LCM: 5168685
// ตัวอย่างโปรแกรม 3

// 138583
// 262211
// GCD: 997
// LCM: 36447329
// หมายเหตุ

// ข้อมูลนำเข้าที่ใช้เป็นชุดทดสอบ มีค่าไม่เกิน 1,000,000,000
// LCM ในชุดทดสอบ มีค่าไม่เกิน 4,000,000,000
// Hint

// ใช้ atoll() ในการเปลี่ยน input เป็น long long
// GCD จะไม่เกินจำนวนเต็มบวก M หรือ N แต่ LCM จะไม่ต่ำกว่าจำนวนเต็มบวก M หรือ N ดังนั้น ไม่ควรให้โปรแกรมหา LCM ก่อน
// วิธีหา GCD ที่มีประสิทธิภาพ คือ Euclidean algorithm
// จาก Hint แรก ควรหา LCM จากความสัมพันธ์ M * N = GCD * LCM


#include <stdio.h>
#include <stdlib.h>
int main(){
	char mt[4000], nt[4000];
	fgets(mt, 4000, stdin);
	fgets(nt, 4000, stdin);
	long long m=atoll(mt);
	long long n=atoll(nt);
	long long i,min;
	if (m<n){
	min =m;
	}
	else{
	min = n;
	}
	for(i=min;i>=1;i--){
		if(n%i==0&&m%i==0){
		break;	}
	}
	printf("GCD: %lld\n",i);
	long long lcm = m*n/i;
	printf("LCM: %lld",lcm);
}