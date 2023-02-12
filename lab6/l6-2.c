// เขียนโปรแกรมภาษาซี เพื่อคำนวณ GPA ในภาคการศึกษาหนึ่ง ของนิสิตหนึ่งคน โดยกำหนดให้ รับจำนวนวิชาที่เรียนทั้งหมดในภาคการศึกษาก่อน (จำนวนวิชาอย่างน้อย 1 วิชา) แล้วจึงรับ จำนวนหน่วยกิต และเกรด (เกรดที่โปรแกรมยอมรับ คือ A,a,B,b,C,c,D,d,F และ f เท่านั้น) ของแต่ละวิชา ในรูปแบบ credit,grade ให้ครบตามจำนวนวิชา แสดงผลดังรูปแบบในตัวอย่าง

// ให้น้ำหนักของเกรด A, B, C, D, F เป็น 4, 3, 2, 1, 0 ตามลำดับ

// ตัวอย่างที่ 1

// Enter number of subject(s): 1
// Enter credit,grade for subject #1: 4,b
// GPA = 3.00
// ตัวอย่างที่ 2

// Enter number of subject(s): 8
// Enter credit,grade for subject #1: 3,b
// Enter credit,grade for subject #2: 3,b
// Enter credit,grade for subject #3: 4,a
// Enter credit,grade for subject #4: 3,a
// Enter credit,grade for subject #5: 3,b
// Enter credit,grade for subject #6: 3,A
// Enter credit,grade for subject #7: 1,A
// Enter credit,grade for subject #8: 1,a
// GPA = 3.57
#include<stdio.h>
void main(){
    int s,cr,sg;
    float scr =0,an =0;
    
    char g;
    printf("Enter number of subject(s): ");
    scanf("%d",&s);
    for(int i =1; i<=s;i++){
        printf("Enter credit,grade for subject #%d: ",i);
        scanf("%d,%c",&cr,&g);
        scr += cr;
        sg =0;
        switch (g)
        {
        case 'A':
        case 'a':
            sg += 4;
            break;
        case 'B':
        case 'b':
            sg += 3;
            break;
        case 'C':
        case 'c':
            sg += 2;
            break;
        case 'D':
        case 'd':
            sg += 1;
            break;
        case 'F':
        case 'f':
            sg += 0;
            break;
        }
        an +=  sg*cr;
    }
    float GPA = an/scr;
    printf("GPA = %.2f",GPA);

}