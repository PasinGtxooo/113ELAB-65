// ให้เขียนโปรแกรมจำลองการไต่ขั้นบันได โดยเริ่มแรก โปรแกรมจะถามจำนวนขั้นบันได (บรรทัดที 1)
// จากนั้น ในแต่ละรอบ โปรแกรมจะแสดงตำแหน่งปัจจุบันของคนบนขั้นบันได และโปรแกรมจะถาม step command

// step command สำหรับโปรแกรมนี้ คือ

// ถ้าเป็นจำนวนเต็มบวก x หมายถึง ให้ไต่บันไดขึ้นไป x ขั้น
// ถ้าเป็นจำนวนเต็มลบ -x หมายถึง ให้ไต่บันไดลงมา x ขั้น
// ถ้าเป็นจำนวนเต็มศูนย์ หมายถึง จบโปรแกรม
// เงื่อนไขเพิ่มเติมของโปรแกรมนี้ คือ

// คน ประกอบด้วย 2 ส่วน คือ ส่วนหัว (O) และส่วนขา (^)
// รอบที่หนึ่ง ขาของคนจะอยู่ที่ขั้นบันไดล่างสุด
// ขาของคนจะไม่อยู่ต่ำกว่าบันไดขั้นล่างสุด และหัวของคนจะไม่อยู่สูงกว่าบันไดขั้นบนสุด
// Sample Output 1
// Input number of stairs: 4
// ---- round 1 ----
// |---|
// |---|
// |-O-|
// |-^-|
// Input step command: 1
// ---- round 2 ----
// |---|
// |-O-|
// |-^-|
// |---|
// Input step command: 0
// Sample Output 2
// Input number of stairs: 4
// ---- round 1 ----
// |---|
// |---|
// |-O-|
// |-^-|
// Input step command: 2
// ---- round 2 ----
// |-O-|
// |-^-|
// |---|
// |---|
// Input step command: 2
// ---- round 3 ----
// |-O-|
// |-^-|
// |---|
// |---|
// Input step command: 0
// Sample Output 3
// Input number of stairs: 4
// ---- round 1 ----
// |---|
// |---|
// |-O-|
// |-∧-|
// Input step command: 2
// ---- round 2 ----
// |-O-|
// |-∧-|
// |---|
// |---|
// Input step command: -1
// ---- round 3 ----
// |---|
// |-O-|
// |-∧-|
// |---|
// Input step command: -2
// ---- round 4 ----
// |---|
// |---|
// |-O-|
// |-∧-|
// Input step command: -1
// ---- round 5 ----
// |---|
// |---|
// |-O-|
// |-∧-|
// Input step command: 0
#include<stdio.h>
int main(){

    printf("Input number of stairs: ");
    int sta,cm,ro=1,i;
    scanf("%d",&sta);
    int al=sta-2;
    
    while(1){
    printf("---- round %d ----\n",ro);
    ro++;
    if (al<0 || al >=sta-1){
        if (al<0){
            for(i=0;i<sta;i++){
            if(i==0 ){
                printf("|-O-|");}
            else if(i==1){
                printf("|-^-|");}
            else{
                printf("|---|");}
            printf("\n");}
            al = 0;
        }
        else{
            for(i=0;i<sta;i++){
            if(i==sta-2 ){
                printf("|-O-|");}
            else if(i==sta-1){
                printf("|-^-|");}
            else{
                printf("|---|");}
            printf("\n");}
            al = sta-2;
        }
    }
    else{
        for(i=0;i<sta;i++){
            if(al==i ){
                printf("|-O-|");}
            else if(al+1==i){
                printf("|-^-|");}
            else{
                printf("|---|");}
            printf("\n");}
    }
    printf("Input step command: ");
    scanf("%d",&cm);
    al -=cm;
    if (cm==0){break;}

}
}
