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


	// DEAD_BLOCK, �� �ε���, ����̵�, invisible, #���ȸ��, #�߷�
	// �߷� �ذ��ؾ���(�밢������ �������°� ó��), �������� ���� �����ؾ���


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
					printf("��");
				}
				else if (map[loop_x][loop_y] == BLOCK)
				{
					printf("��");
				}
				else if (map[loop_x][loop_y] == DEAD_BLOCK){
					printf("��");
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
				// �� ��� ����, invisible ��
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
					_getch();//����Ű�� �ѹ� �� �Է� �޾ƾ� ��
					ch = _getch();
					//}
					// �߷�
					/*if (map[loop_x][loop_y] == BLOCK)
					{
					map[loop_x][loop_y] = NOTHING;

					}*/




					// ������ ������
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
						// �� loop_x+1�� �ȵǰ� loop_x+=1�� �Ǵ°�? ++loop_x �� �ǰ� �� -1�� �Ǵ°� +1�� ��->�� ��->�� �����ΰ�? ���� ���̿��µ� loop_y���� �����Ų ���� ���ԵǾ� +1�� �۵�
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
						// ������ ����
						if (map[loop_x][loop_y + 1] == BARRIER || map[loop_x][loop_y + 1] == DEAD_BLOCK){
							if (map[loop_x][loop_y] == BLOCK){	// ���ָ� �������� ������							
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