/****************************************************
最后修改 2017.8.25 版本 V1.0.0 未完工
****************************************************/

#include"core.cpp"
#include <iostream>
#include <conio.h>

using namespace std;

int map[9][9] = {
	{ 1,1,1,1,1,0,0,0,0 },
	{ 1,0,0,4,1,0,0,0,0 },
	{ 1,0,2,2,1,0,1,1,1 },
	{ 1,0,2,0,1,0,1,3,1 },
	{ 1,1,1,0,1,1,1,3,1 },
	{ 0,1,1,0,0,0,0,3,1 },
	{ 0,1,0,0,0,1,0,0,1 },
	{ 0,1,0,0,0,1,1,1,1 },
	{ 0,1,1,1,1,1,0,0,0 }
};

/********************
0为空地 1为墙■ 2为箱子☆ 3为目的地※ 4为人◇ 5为推好的箱子★ 6为站在目的地的人◆
********************/

//画地图
void Drawmap ()
{
	//画地图
	int i, j;
	for (i = 0; i < 9; i = i++)
	{
		for (j = 0; j < 9; j = j++)
		{
			switch (map[i][j])
			{
				case 0:
					cout << "  ";
					break;
				case 1:
					cout << "■";
					break;
				case 2:
					cout << "☆";
					break;
				case 3:
					cout << "※";
					break;
				case 4:
					cout << "◇";
					break;
				case 5:
					cout << "★";
					break;
				case 6:
					cout << "◆";
					break;
			}
		}
		cout << endl;
	}
}

void move(char input)
{
	//ASCII>> w:87 s:83 a:65 d:68
	//遍历数组找出人的坐标 Position_y为人物纵坐标 Position_x为人物横坐标
	int LoopPosition_y, LoopPosition_x, Position_y, Position_x;
	for (LoopPosition_y = 0; LoopPosition_y < 9; LoopPosition_y = LoopPosition_y++)

	{
		for (LoopPosition_x = 0; LoopPosition_x < 9; LoopPosition_x = LoopPosition_x++)
		{
			if (map[LoopPosition_y][LoopPosition_x] == 4)
			{
				Position_y = LoopPosition_y;
				Position_x = LoopPosition_x;
			}
		}
	}

	/********************
	0为空地 1为墙■ 2为箱子☆ 3为目的地※ 4为人◇ 5为推好的箱子★ 6为站在目的地的人◆
	********************/
	switch (input)
	{
		case 'w':
			{
				switch (map[Position_y + 1][Position_x])
				{
					case 0://空地
						{
							map[Position_y + 1][Position_x] = 4;
							map[Position_y][Position_x] = 0;
							break;
						}
					case 1://墙
						break;
					case 2://箱子
						{
							switch (map[Position_y + 2][Position_x])
							{
								case 0://箱子前是空地
									{
										map[Position_y][Position_x] = 0;
										map[Position_y + 1][Position_x] = 4;
										map[Position_y + 2][Position_x] = 2;
										break;
									}
								case 1://箱子前是墙
									break;
								case 2://箱子前面是推好的箱子
									break;
								case 3://箱子前是目的地
									{
										map[Position_y][Position_x] = 0;
										map[Position_y + 2][Position_x] = 5;
										map[Position_y + 1][Position_x] = 4;
										break;
									}
								case 5://箱子前是推好的箱子
									break;
							}
							break;
						}
					case 3://目的地
						{
							map[Position_y][Position_x] = 0;
							map[Position_y + 1][Position_x] = 6;
							break;
						}
					case 5://推好的箱子
						{
							map[Position_y][Position_x] = 0;
							map[Position_y + 1][Position_x] = 6;
							map[Position_y + 2][Position_x] = 2;
							break;
						}
					default:
						break;
				}
				break;
			}
		case 's':
			{
				switch (map[Position_y - 1][Position_x])
				{
					case 0://空地
						{
							map[Position_y - 1][Position_x] = 4;
							map[Position_y][Position_x] = 0;
							break;
						}
					case 1://墙
						break;
					case 2://箱子
						{
							switch (map[Position_y - 2][Position_x])
							{
								case 0://箱子前是空地
									{
										map[Position_y][Position_x] = 0;
										map[Position_y - 1][Position_x] = 4;
										map[Position_y - 2][Position_x] = 2;
										break;
									}
								case 1://箱子前是墙
									break;
								case 2://箱子前面是推好的箱子
									break;
								case 3://箱子前是目的地
									{
										map[Position_y][Position_x] = 0;
										map[Position_y - 2][Position_x] = 5;
										map[Position_y - 1][Position_x] = 4;
										break;
									}
								case 5://箱子前是推好的箱子
									break;
							}
							break;
						}
					case 3://目的地
						{
							map[Position_y][Position_x] = 0;
							map[Position_y - 1][Position_x] = 6;
							break;
						}
					case 5://推好的箱子
						{
							map[Position_y][Position_x] = 0;
							map[Position_y - 1][Position_x] = 6;
							map[Position_y - 2][Position_x] = 2;
							break;
						}
					default:
						break;
				}
				break;
			}
		case 'a':
			{
				switch (map[Position_y][Position_x - 1])
				{
					case 0://空地
						{
							map[Position_y][Position_x - 1] = 4;
							map[Position_y][Position_x - 1] = 0;
							break;
						}
					case 1://墙
						break;
					case 2://箱子
						{
							switch (map[Position_y][Position_x - 2])
							{
								case 0://箱子前是空地
									{
										map[Position_y][Position_x - 1] = 0;
										map[Position_y][Position_x - 1] = 4;
										map[Position_y][Position_x - 2] = 2;
										break;
									}
								case 1://箱子前是墙
									break;
								case 2://箱子前面是推好的箱子
									break;
								case 3://箱子前是目的地
									{
										map[Position_y][Position_x - 1] = 0;
										map[Position_y][Position_x - 2] = 5;
										map[Position_y][Position_x - 1] = 4;
										break;
									}
								case 5://箱子前是推好的箱子
									break;
							}
							break;
						}
					case 3://目的地
						{
							map[Position_y][Position_x - 1] = 0;
							map[Position_y][Position_x - 1] = 6;
							break;
						}
					case 5://推好的箱子
						{
							map[Position_y][Position_x - 1] = 0;
							map[Position_y][Position_x - 1] = 6;
							map[Position_y][Position_x - 2] = 2;
							break;
						}
					default:
						break;
				}
				break;
			}
		case 'd':
			{
				switch (map[Position_y][Position_x + 1])
				{
					case 0://空地
						{
							map[Position_y][Position_x + 1] = 4;
							map[Position_y][Position_x + 1] = 0;
							break;
						}
					case 1://墙
						break;
					case 2://箱子
						{
							switch (map[Position_y][Position_x + 2])
							{
								case 0://箱子前是空地
									{
										map[Position_y][Position_x + 1] = 0;
										map[Position_y][Position_x + 1] = 4;
										map[Position_y][Position_x + 2] = 2;
										break;
									}
								case 1://箱子前是墙
									break;
								case 2://箱子前面是推好的箱子
									break;
								case 3://箱子前是目的地
									{
										map[Position_y][Position_x + 1] = 0;
										map[Position_y][Position_x + 2] = 5;
										map[Position_y][Position_x + 1] = 4;
										break;
									}
								case 5://箱子前是推好的箱子
									break;
							}
							break;
						}
					case 3://目的地
						{
							map[Position_y][Position_x + 1] = 0;
							map[Position_y][Position_x + 1] = 6;
							break;
						}
					case 5://推好的箱子
						{
							map[Position_y][Position_x + 1] = 0;
							map[Position_y][Position_x + 1] = 6;
							map[Position_y][Position_x + 2] = 2;
							break;
						}
					default:
						break;
				}
				break;
			}
		default:
			break;

	}

	/*本函数根据输入的input，对加载好的地图做出移动，但不会打印出来*/
}

char Input;

int main() 
{
	
    while (1)
	{
		Drawmap();
		Input = getch();
		move(Input);
		system("cls");
		Drawmap();
	}
	return 0;
}

