// พิมพ์สามเหลี่ยมไปทางขวาด้วยอักขระ 2 ตัว
// จงเขียนโปรแกรมเพื่อรับจํานวนเต็มบวกมาหนึ่งจํานวน และพิมพ์สามเหลี่ยมตามขนาดที่ผู้ใช้กําหนดดังตัวอย่างด้านล่าง

// ตัวอย่าง Input/Output 1
// Enter n: 1
// -
// ตัวอย่าง Input/Output 2
// Enter n: 2
// -
// -x
// - 
// ตัวอย่าง Input/Output 3
// Enter n: 10
// -
// -x
// -x-
// -x-x
// -x-x-
// -x-x-x
// -x-x-x-
// -x-x-x-x
// -x-x-x-x-
// -x-x-x-x-x
// -x-x-x-x-
// -x-x-x-x
// -x-x-x-
// -x-x-x
// -x-x-
// -x-x
// -x-
// -x
// -
// ตัวอย่าง Input/Output 4
// Enter n: 11
// -
// -x
// -x-
// -x-x
// -x-x-
// -x-x-x
// -x-x-x-
// -x-x-x-x
// -x-x-x-x-
// -x-x-x-x-x
// -x-x-x-x-x-
// -x-x-x-x-x
// -x-x-x-x-
// -x-x-x-x
// -x-x-x-
// -x-x-x
// -x-x-
// -x-x
// -x-
// -x
// -
#include <stdio.h>
int main(){
    int n=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int l=1;l<=i;l++){
            if (l%2==0){printf("x");}
            else{printf("-");}
        }
        printf("\n");
    }
    for(int j=n-1;j>=1;j--){
         for(int l=1;l<=j;l++){
            if (l%2==0){printf("x");}
            else{printf("-");}
        }
        printf("\n");
    }
}