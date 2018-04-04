#include <iostream>
#include <graphics.h>
#include <math.h>
#include<conio.h>
using namespace std;

#define PI 3.142
#define box_x 400
#define box_y 300
#define box_z 200
#define WINmid_x 500
#define WINmid_y 500

int main()
{
	int posA_x, posB_x, posC_x, posD_x, posE_x, posF_x, posG_x, posH_x;
	int posA_y, posB_y, posC_y, posD_y, posE_y, posF_y, posG_y, posH_y;

	int degree_x = 90, degree_y = 0;
	int mid_x, mid_y, mid_z;
	double tmp_x, tmp_y;

	mid_x = box_x / 2;
	mid_y = box_y / 2;
	mid_z = box_z / 2;

	posA_x = WINmid_x - mid_x;
	posB_x = WINmid_x - mid_x;
	posE_x = WINmid_x - mid_x;
	posF_x = WINmid_x - mid_x;
	posC_x = WINmid_x + mid_x;
	posD_x = WINmid_x + mid_x;
	posG_x = WINmid_x + mid_x;
	posH_x = WINmid_x + mid_x;
	posA_y = WINmid_y - mid_y;
	posD_y = WINmid_y - mid_y;
	posE_y = WINmid_y - mid_y;
	posH_y = WINmid_y - mid_y;
	posB_y = WINmid_y + mid_y;
	posC_y = WINmid_y + mid_y;
	posG_y = WINmid_y + mid_y;
	posF_y = WINmid_y + mid_y;

	tmp_x = abs(box_x / 2 * cos(PI / 180 * 89)); //x轴旋转一度长度变化量
	tmp_y = abs(box_y / 2 * cos(PI / 180 * 89)); //y轴旋转一度长度变化量

	initgraph(800, 800);
	char input;

	setlinecolor(GREEN);
	line(posA_x, posA_y, posB_x, posB_y);
	line(posA_x, posA_y, posE_x, posE_y);
	line(posF_x, posF_y, posE_x, posE_y);
	line(posF_x, posF_y, posB_x, posB_y);
	line(posD_x, posD_y, posC_x, posC_y);
	line(posD_x, posD_y, posH_x, posH_y);
	line(posG_x, posG_y, posH_x, posH_y);
	line(posG_x, posG_y, posC_x, posC_y);
	line(posG_x, posG_y, posF_x, posF_y);
	line(posC_x, posC_y, posB_x, posB_y);
	line(posD_x, posD_y, posA_x, posA_y);
	line(posH_x, posH_y, posE_x, posE_y);

	while (1)
	{
		input = _getch();

		setlinecolor(BLACK);
		line(posA_x, posA_y, posB_x, posB_y);
		line(posA_x, posA_y, posE_x, posE_y);
		line(posF_x, posF_y, posE_x, posE_y);
		line(posF_x, posF_y, posB_x, posB_y);
		line(posD_x, posD_y, posC_x, posC_y);
		line(posD_x, posD_y, posH_x, posH_y);
		line(posG_x, posG_y, posH_x, posH_y);
		line(posG_x, posG_y, posC_x, posC_y);
		line(posG_x, posG_y, posF_x, posF_y);
		line(posC_x, posC_y, posB_x, posB_y);
		line(posD_x, posD_y, posA_x, posA_y);
		line(posH_x, posH_y, posE_x, posE_y);

		switch (input)
		{
			case 'w':
				{
					if (degree_y = 360)
						degree_y = 0;
					degree_y += 1;
					if (degree_y <= 90)
					{
						posE_y = posE_y + tmp_y;
						posF_y = posF_y + tmp_y;
						posA_y = posA_y - tmp_y;
						posB_y = posB_y - tmp_y;
						posH_y = posH_y + tmp_y;
						posG_y = posG_y + tmp_y;
						posD_y = posD_y - tmp_y;
						posC_y = posC_y - tmp_y;
					}
					else if (degree_y > 90 && degree_y <= 180)
					{
						posE_y = posE_y - tmp_y;
						posF_y = posF_y - tmp_y;
						posA_y = posA_y + tmp_y;
						posB_y = posB_y + tmp_y;
						posH_y = posH_y - tmp_y;
						posG_y = posG_y - tmp_y;
						posD_y = posD_y + tmp_y;
						posC_y = posC_y + tmp_y;
					}
					else if (degree_y > 180 && degree_y <= 270)
					{
						posE_y = posE_y + tmp_y;
						posF_y = posF_y + tmp_y;
						posA_y = posA_y - tmp_y;
						posB_y = posB_y - tmp_y;
						posH_y = posH_y + tmp_y;
						posG_y = posG_y + tmp_y;
						posD_y = posD_y - tmp_y;
						posC_y = posC_y - tmp_y;
					}
					else if (degree_y > 270)
					{
							posE_y = posE_y - tmp_y;
							posF_y = posF_y - tmp_y;
							posA_y = posA_y + tmp_y;
							posB_y = posB_y + tmp_y;
							posH_y = posH_y - tmp_y;
							posG_y = posG_y - tmp_y;
							posD_y = posD_y + tmp_y;
							posC_y = posC_y + tmp_y;
					}

				}
			case 's':
				{
					if (degree_y = 0)
						degree_y = 360;
					degree_y -= 1;
					if (degree_y <= 90)
					{
						posE_y = posE_y - tmp_y;
						posF_y = posF_y - tmp_y;
						posA_y = posA_y + tmp_y;
						posB_y = posB_y + tmp_y;
						posH_y = posH_y - tmp_y;
						posG_y = posG_y - tmp_y;
						posD_y = posD_y + tmp_y;
						posC_y = posC_y + tmp_y;
					}
					else if (degree_y > 90 && degree_y <= 180)
					{
						posE_y = posE_y + tmp_y;
						posF_y = posF_y + tmp_y;
						posA_y = posA_y - tmp_y;
						posB_y = posB_y - tmp_y;
						posH_y = posH_y + tmp_y;
						posG_y = posG_y + tmp_y;
						posD_y = posD_y - tmp_y;
						posC_y = posC_y - tmp_y;
					}
					else if (degree_y > 180 && degree_y <= 270)
					{
						posE_y = posE_y - tmp_y;
						posF_y = posF_y - tmp_y;
						posA_y = posA_y + tmp_y;
						posB_y = posB_y + tmp_y;
						posH_y = posH_y - tmp_y;
						posG_y = posG_y - tmp_y;
						posD_y = posD_y + tmp_y;
						posC_y = posC_y + tmp_y;
					}
					else if (degree_y > 270)
					{
						posE_y = posE_y + tmp_y;
						posF_y = posF_y + tmp_y;
						posA_y = posA_y - tmp_y;
						posB_y = posB_y - tmp_y;
						posH_y = posH_y + tmp_y;
						posG_y = posG_y + tmp_y;
						posD_y = posD_y - tmp_y;
						posC_y = posC_y - tmp_y;
					}
				}
			case 'a':
				{
					if (degree_x = 0)
						degree_x = 360;
					degree_x -= 1;
					if (degree_x < 90)
					{
						posE_x = posE_x - tmp_x;
						posH_x = posH_x - tmp_x;
						posD_x = posD_x + tmp_x;
						posA_x = posA_x + tmp_x;
						posB_x = posB_x + tmp_x;
						posC_x = posC_x + tmp_x;
						posF_x = posF_x - tmp_x;
						posG_x = posG_x - tmp_x;
					}
					else if (degree_x > 90 && degree_x <= 180)
					{
						posE_x = posE_x + tmp_x;
						posH_x = posH_x + tmp_x;
						posA_x = posA_x - tmp_x;
						posD_x = posD_x - tmp_x;
						posG_x = posG_x + tmp_x;
						posF_x = posF_x + tmp_x;
						posB_x = posB_x - tmp_x;
						posC_x = posC_x - tmp_x;
					}
					else if (degree_x > 180 && degree_x <= 270)
					{
						posE_x = posE_x - tmp_x;
						posH_x = posH_x - tmp_x;
						posD_x = posD_x + tmp_x;
						posA_x = posA_x + tmp_x;
						posB_x = posB_x + tmp_x;
						posC_x = posC_x + tmp_x;
						posF_x = posF_x - tmp_x;
						posG_x = posG_x - tmp_x;
					}
					else if (degree_x>270)
					{
						posE_x = posE_x - tmp_x;
						posH_x = posH_x - tmp_x;
						posD_x = posD_x + tmp_x;
						posA_x = posA_x + tmp_x;
						posB_x = posB_x + tmp_x;
						posC_x = posC_x + tmp_x;
						posF_x = posF_x - tmp_x;
						posG_x = posG_x - tmp_x;
					}
				}
			case 'd':
				{
					if (degree_x = 360)
						degree_x = 0;
					degree_x += 1;
					if (degree_x < 90)
					{
						posE_x = posE_x + tmp_x;
						posH_x = posH_x + tmp_x;
						posD_x = posD_x - tmp_x;
						posA_x = posA_x - tmp_x;
						posB_x = posB_x - tmp_x;
						posC_x = posC_x - tmp_x;
						posF_x = posF_x + tmp_x;
						posG_x = posG_x + tmp_x;
					}
					else if (degree_x > 90 && degree_x <= 180)
					{
						posE_x = posE_x - tmp_x;
						posH_x = posH_x - tmp_x;
						posA_x = posA_x + tmp_x;
						posD_x = posD_x + tmp_x;
						posG_x = posG_x - tmp_x;
						posF_x = posF_x - tmp_x;
						posB_x = posB_x + tmp_x;
						posC_x = posC_x + tmp_x;
					}
					else if (degree_x > 180 && degree_x <= 270)
					{
						posE_x = posE_x + tmp_x;
						posH_x = posH_x + tmp_x;
						posD_x = posD_x - tmp_x;
						posA_x = posA_x - tmp_x;
						posB_x = posB_x - tmp_x;
						posC_x = posC_x - tmp_x;
						posF_x = posF_x + tmp_x;
						posG_x = posG_x + tmp_x;
					}
					else if (degree_x>270)
					{
						posE_x = posE_x + tmp_x;
						posH_x = posH_x + tmp_x;
						posD_x = posD_x - tmp_x;
						posA_x = posA_x - tmp_x;
						posB_x = posB_x - tmp_x;
						posC_x = posC_x - tmp_x;
						posF_x = posF_x + tmp_x;
						posG_x = posG_x + tmp_x;
					}
				}
		}

		setlinecolor(GREEN);
		line(posA_x, posA_y, posB_x, posB_y);
		line(posA_x, posA_y, posE_x, posE_y);
		line(posF_x, posF_y, posE_x, posE_y);
		line(posF_x, posF_y, posB_x, posB_y);
		line(posD_x, posD_y, posC_x, posC_y);
		line(posD_x, posD_y, posH_x, posH_y);
		line(posG_x, posG_y, posH_x, posH_y);
		line(posG_x, posG_y, posC_x, posC_y);
		line(posG_x, posG_y, posF_x, posF_y);
		line(posC_x, posC_y, posB_x, posB_y);
		line(posD_x, posD_y, posA_x, posA_y);
		line(posH_x, posH_y, posE_x, posE_y);
	}
	closegraph();

getchar();
	return 0;
}
