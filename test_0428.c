#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_ROW 3
#define MAX_COL 3
//char chessBoard[3][3];
//这里的3称为magic number 魔幻数字/魔鬼数字
//解决办法：用常量来代替数字

void init(char chess[MAX_ROW][MAX_COL]) {
	for (int row = 0;row < MAX_ROW;row++) {
		for (int col = 0;col < MAX_COL;col++) {
			chess[row][col] = ' ';

		}
	}
}
void print(char chess[MAX_ROW][MAX_COL]) {
	printf("+---+---+---+\n");
	for (int row = 0;row < MAX_ROW;row++) {
		printf("|");
		for (int col = 0;col < MAX_COL;col++) {
			printf(" %c |", chess[row][col]);
		}
		printf("\n+---+---+---+\n");
	}
}

void playerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("玩家落子......\n");
	while (1) {
		printf("请输入坐标（row,col):");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//进行合法性校验，判定用户输入的内容是否合法
		//如果不合法，就让用户重新输入
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL) {
			//就是不合法，于是要让用户重新输入
			printf("您输入的坐标非法! 请重新输入!\n");
			continue;
		}
		//假设用户输入了1 1，但是1 1位置已经有子了
		if (chessBoard[row][col] != ' ') {
			//该位置已经有子了
			printf("您输入的位置已经有子了，请重新输入！\n");
			continue;
		}
		//进行落子
		chessBoard[row][col] = 'x ';
		break;
	}
}

void computerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') {
			//这个位置已经有子了
			continue;
		}
		chessBoard[row][col] = 'o';
		break;
    }
}

// 返回 1 表示满了, 返回 0 表示没满
int isFull(char chessBoard[MAX_ROW][MAX_COL]) {
	// 遍历棋盘, 看看有没有空格. 有空格就是没满~~
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}
//此处约定
//如果返回x，表示玩家获胜，
//如果返回o，表示电脑获胜
//如果返回' ',表示胜负未分，还要继续下棋
//如果返回去q，表示和棋
 char isGameOver(char chessBoard[MAX_ROW][MAX_COL]){
	 //扫描所有的行，所有的列，以及两个对角线
	 for (int row = 0;row < MAX_ROW;row++) {
		 if (chessBoard[row][0]!=' '
			 &&chessBoard[row][0] == chessBoard[row][1]
			 && chessBoard[row][0] == chessBoard[row][2]) {
			 return chessBoard[row][0];
		 }
	 }
	 for (int col = 0; col < MAX_COL; col++) {
		 if (chessBoard[0][col] != ' '
			 && chessBoard[0][col] == chessBoard[1][col]
			 && chessBoard[0][col] == chessBoard[2][col]) {
			 return chessBoard[0][col];
		 }
	 }
	 if (chessBoard[0][0] != ' '
		 && chessBoard[0][0] == chessBoard[1][1]
		 && chessBoard[0][0] == chessBoard[2][2]) {
		 return chessBoard[0][0];
	 }
	 if (chessBoard[0][2] != ' '
		 && chessBoard[0][2] == chessBoard[1][1]
		 && chessBoard[0][2] == chessBoard[2][0]) {
		 return chessBoard[0][2];
	 }
	 // 判定是否和棋
	 if (isFull(chessBoard)) {
		 return 'q';
	 }
	 // 胜负未分
	 return ' ';
}
int main() {
	//不建议使用全局变量
	//搜索树
	char chessBoard[MAX_ROW][MAX_COL];
	//1.对棋盘进行初始化
	init(chessBoard);
	char winner = ' ';
	while (1) {
		//2.打印棋盘
		print(chessBoard);
		//3.玩家落子
		playerMove(chessBoard);
		//4.判定胜负
		// TODO
		winner = isGameOver(chessBoard);
		if (winner != ' ') {
			// 游戏结束
			break;
		}
		//5.电脑落子
		computerMove(chessBoard);
		// 6. 判定胜负
		winner = isGameOver(chessBoard);
		if (winner != ' ') {
			// 游戏结束
			break;
		}
	}
	
	if (winner == 'x') {
		printf("恭喜你赢了!\n");
	}
	else if (winner == 'o') {
		printf("你咋连人工智障都下不过!\n");
	}
	else {
		printf("你和人工智障五五开!\n");
	}

		system("pause");
		return 0;
}