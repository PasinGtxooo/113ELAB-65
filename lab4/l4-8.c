// แปลงเลขฐาน (recursion)
// ให้เขียนโปรแกรม เพื่อแปลงเลขฐานสิบ เป็นเลขฐานสอง โดยใช้ Recursion

// ตัวอย่าง
// 10
// 1010
// 123
// 1111011
#include <stdio.h>
void con(int x){
    if (x==0)
        return;
        
    con(x/2);
    printf("%d",x%2);
}
int main(){
    int x;
    scanf("%d", &x);
    if (x==0){
        printf("0");
    }
    else{
     con(x);   
    }

}


