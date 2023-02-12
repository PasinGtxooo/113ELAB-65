// คำนวณเกรดโดยเก็บข้อมูลใน struct
// จงเขียนโปรแกรมคำนวณเกรด โดยให้นิยาม struct ที่ใช้เก็บคะแนนสอบของนิสิต และสร้าง array ของ struct นี้ขึ้นมาโดยมีขนาด 5 elements รับข้อมูลเข้าจากผู้ใช้ โดยจะมีข้อมูล ID ของนิสิต คะแนนสอบมิดเทอมและไฟนอล จากนั้นให้เรียกฟังก์ชัน calculateGrade ซึ่งจะคำนวณเกรดให้โดยมีหลักการดังนี้

// ถ้าคะแนนเท่ากับ 80 คะแนนหรือมากกว่า นิสิตจะได้เกรด A
// ถ้าคะแนนเท่ากับ 70 ถึง 79 คะแนนจะได้เกรด B
// ถ้าคะแนนเท่ากับ 60 ถึง 69 คะแนนจะได้เกรด C
// ถ้าคะแนนเท่ากับ 50 ถึง 59 คะแนนจะได้เกรด D
// ถ้าคะแนนต่ำกว่านั้นจะได้เกรด F
// จากนั้นให้พิมพ์ ID และเกรดของนิสิตทีละคนเรียงตามลำดับข้อมูลที่นำเข้า

// ตัวอย่างผลลัพธ์ที่ 1
// Enter Student ID: 5610456784
// Enter Student Midterm: 26
// Enter Student Final: 37
// Enter Student ID: 5610469821
// Enter Student Midterm: 40
// Enter Student Final: 37
// Enter Student ID: 5610457893
// Enter Student Midterm: 10
// Enter Student Final: 6
// Enter Student ID: 5610475947
// Enter Student Midterm: 26
// Enter Student Final: 35
// Enter Student ID: 5610438273
// Enter Student Midterm: 30
// Enter Student Final: 25
// Student ID 5610456784 receives grade C.
// Student ID 5610469821 receives grade B.
// Student ID 5610457893 receives grade F.
// Student ID 5610475947 receives grade C.
// Student ID 5610438273 receives grade D.
#include <stdio.h>

#define NUM_STUDENTS 5

struct Student {
  int id;
  int midterm;
  int final;
};

char calculateGrade(int score) {
  if (score >= 80) {
    return 'A';
  } else if (score >= 70) {
    return 'B';
  } else if (score >= 60) {
    return 'C';
  } else if (score >= 50) {
    return 'D';
  } else if (score < 50) {
    return 'F';
  }
}

int main() {
  struct Student students[NUM_STUDENTS];
  int i;

  for (i = 0; i < NUM_STUDENTS; i++) {
    printf("Enter Student ID: ");
    scanf("%d", &students[i].id);

    printf("Enter Student Midterm: ");
    scanf("%d", &students[i].midterm);

    printf("Enter Student Final: ");
    scanf("%d", &students[i].final);
  }

  for (i = 0; i < NUM_STUDENTS; i++) {
    int score = (students[i].midterm + students[i].final);
    char grade = calculateGrade(score);

    printf("Student ID %d receives grade %c.\n", students[i].id, grade);
  }

  return 0;
}
