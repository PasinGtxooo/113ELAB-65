// ตารางหมากรุก
// หมากรุกสากลเป็นเกมส์กระดานแนววางแผนสองผู้เล่น ที่เล่นบนกระดานสลับสีซึ่งมีจัตุรัส 64 ช่อง จัดเรียงแบบ 8x8 ช่อง
// ประกอบด้วยตัวหมาก 6 ประเภท คือ King (ราชา), Queen (ราชินี), Knight (อัศวิน), Bishop (นักบวช), Rook (เรือ) และ Pawn (เบี้ย)

// ให้เขียนโปรแกรมเพื่อแสดงตำแหน่งของตัวหมากบนตารางหมากรุกสากลในเกมหนึ่ง
// โดย บรรทัดที่ 1 รับจำนวนเต็ม numPieces ที่แสดงจำนวนตัวหมากที่เหลืออยู่บนกระดาน
// บรรทัดที่ 2 ถึง บรรทัดที่ numPieces + 1 รับตัวอักษร pieceChar ที่แทนตัวหมากและพิกัด x, y บนกระดาน ในรูปแบบ pieceChar(x, y) (พิกัดมุมซ้ายบนของตารางคือ 0, 0 และ พิกัดมุมขวาล่างของตารางคือ 7, 7)

// ตัวอักษร pieceChar ที่แทนตัวหมากมีความหมายดังนี้

// K แทน King
// Q แทน Queen
// N แทน Knight
// B แทน Bishop
// R แทน Rook
// P แทน Pawn
// ตัวอักษรตัวใหญ่ แทน ตัวหมากของผู้เล่น 1 และ ตัวอักษรตัวเล็ก แทน ตัวหมากของผู้เล่น 2

// บรรทัดที่ numPieces + 2 เป็นต้นไป แสดงตำแหน่งของตัวหมากบนตาราง

// ตัวอย่างโปรแกรม

// 4
// k(4, 0)
// K(4, 7)
// b(3, 4)
// B(4, 5)
// ------------------
//   0 1 2 3 4 5 6 7
// 0| | | | |k| | | |
// 1| | | | | | | | |
// 2| | | | | | | | |
// 3| | | | | | | | |
// 4| | | |b| | | | |
// 5| | | | |B| | | |
// 6| | | | | | | | |
// 7| | | | |K| | | |
#include <stdio.h>
#define BOARD_SIZE 8
void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main(){
    int board[BOARD_SIZE][BOARD_SIZE],l;
    for(int i=0;i<BOARD_SIZE;i++){
        for(int o=0;o<BOARD_SIZE;o++){
            board[i][o]=0;
            }
        }
    scanf("%d",&l);
    for(int i=1;i<=l;i++){
        char piece;
        int xPos,yPos;
        scanf("\n%c(%d, %d)",&piece,&yPos,&xPos);
        setPieceOnTable(board,piece,yPos,xPos );
    }
    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");
    for(int i=0;i<BOARD_SIZE;i++){
        printf("%d|",i);
        for(int o=0;o<BOARD_SIZE;o++){
            if (board[i][o] == 0){printf(" |"); }
            else{printf("%c|",board[i][o]);}}
        printf("\n");}
}
void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos ){ 
    board[yPos][xPos]=piece;
}