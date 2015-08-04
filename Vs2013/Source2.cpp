/* 2015. 4. 22. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

#define NOTHING	0
#define BARRIER	1
#define	BLOCK	2
#define	DEAD_BLOCK	3

#define B	BLOCK
#define	N	NOTHING

#define	MAP_X	12
#define MAP_Y	22

#define true	1
#define false	0

#define RIGHT   77
#define LEFT    75
#define DOWN    80
#define UP      72
#define LEFT_SPIN	'z'
#define RIGHT_SPIN	'x'
#define FLIP		'c'

int main(){
	int loop_x, loop_y, sector = 0;
	int map[MAP_X][MAP_Y] = { 0, };
	char ch = 0, invisible = false;


	// DEAD_BLOCK, 벽 부딪힘, 블록이동, invisible, #블록회전, #중력
	// 중력 해결해야함(대각선으로 내려오는것 처리), 데드위의 데드 구현해야함


	map[7][2] = BLOCK;

	while (true){
		system("cls");
		// display
		for (loop_y = 0; loop_y < MAP_Y; loop_y++)
		{
			for (loop_x = 0; loop_x < MAP_X; loop_x++)
			{
				if (loop_x == 0 || loop_x == MAP_X - 1)
				{
					map[loop_x][loop_y] = BARRIER;
				}
				else if (loop_y == 0 || loop_y == MAP_Y - 1)
				{
					map[loop_x][loop_y + 1 / 4] = BARRIER;
				}

				if (map[loop_x][loop_y] == NOTHING)
				{
					printf("  ");
				}
				else if (map[loop_x][loop_y] == BARRIER)
				{
					printf("▩");
				}
				else if (map[loop_x][loop_y] == BLOCK)
				{
					printf("□");
				}
				else if (map[loop_x][loop_y] == DEAD_BLOCK){
					printf("▣");
				}
			}
			putchar('\n');
		}

		//Sleep(800);

		// process 
		for (loop_y = 0; loop_y < MAP_Y; loop_y++)
		{
			for (loop_x = 0; loop_x < MAP_X; loop_x++)
			{
				// 새 블록 생성, invisible 끔
				if (invisible){
					map[2][2] = BLOCK;//[loop_x][loop_y+1]
					invisible = false;
				}
				if (map[loop_x][loop_y] == BLOCK)
				{
					map[loop_x][loop_y] = NOTHING;
					map[loop_x][loop_y += 1] = BLOCK;
					if (map[loop_x][loop_y] = NOTHING){
						map[loop_x][loop_y += 1] = BLOCK;
					}



					//if (_kbhit())
					//{
					_getch();//방향키는 한번 더 입력 받아야 함
					ch = _getch();
					//}
					// 중력
					/*if (map[loop_x][loop_y] == BLOCK)
					{
					map[loop_x][loop_y] = NOTHING;

					}*/




					// 데드후 블럭삭제
					switch (ch){

					case LEFT:
						//printf("%d %d\n", loop_x, loop_y);	
						if (map[loop_x - 1][loop_y] == BARRIER){
							map[loop_x][loop_y] = BLOCK;
						}
						//printf("%d %d\n", loop_x, loop_y);
						if (map[loop_x - 1][loop_y] == NOTHING){
							map[loop_x -= 1][loop_y] = BLOCK;
						}
						break;
					case UP:
						//printf("%d",map[loop_x][loop_y-1]);
						if (map[loop_x][loop_y - 1] == BARRIER){
							map[loop_x][loop_y] = BLOCK;
						}
						if (map[loop_x][loop_y - 1] == NOTHING){
							map[loop_x][loop_y -= 1] = BLOCK;
						}
						break;
					case RIGHT:
						// 왜 loop_x+1은 안되고 loop_x+=1은 되는가? ++loop_x 도 되고 왜 -1도 되는가 +1은 왼->오 위->밑 때문인가? 대충 감이오는데 loop_y값에 연산시킨 값이 대입되야 +1이 작동
						if (map[loop_x + 1][loop_y] == BARRIER){
							map[loop_x][loop_y] = BLOCK;
						}
						if (map[loop_x + 1][loop_y] == NOTHING){
							map[loop_x += 1][loop_y] = BLOCK;
						}
						break;
					case DOWN:
						if (map[loop_x][loop_y + 1] == BARRIER){
							map[loop_x][loop_y] = BLOCK;
						}
						if (map[loop_x][loop_y + 1] == NOTHING){
							map[loop_x][loop_y += 1] = BLOCK;
						}
						// 데드블록 구간
						if (map[loop_x][loop_y + 1] == BARRIER || map[loop_x][loop_y + 1] == DEAD_BLOCK){
							if (map[loop_x][loop_y] == BLOCK){	// 없애면 깜빡임이 빨라짐							
								map[loop_x][loop_y] = NOTHING;
								map[loop_x][loop_y] = DEAD_BLOCK;
								invisible = true; // invisible act
							}
						}
						break;
					}
				}
			}
		}
	}
}