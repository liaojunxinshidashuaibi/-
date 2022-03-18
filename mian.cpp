#include <stdio.h>
#include <windows.h>
#include <conio.h>



char map[9][12]={
		{"*#*********"},
		{"***###*###*"},
		{"###**#****#"},	
		{"*#**###**#*"},
		{"***********"},
		{"#####*##*##"},
		{"**#*****#*E"},
		{"***#*###**#"},
		{"*#*********"},	
	};

void pos(int a,int b)
{
	COORD pos;
	pos.X=b;
	pos.Y=a;	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void cycle()
{	
	int x=0,y=0;
	char move;
	while((x==6&&y==10)==0)
	{
		pos(x,y);
		move=getch();
		if(move=='s')
		{
			if(map[x+1][y]=='*')
			{
				x++;
			}
		}
		if(move=='w')
		{
			if(map[x-1][y]=='*')
			{
				x--;
			}
		}
		if(move=='a')
		{
			if(map[x][y-1]=='*')
			{
				y--;
			}
		}
		if(move=='d')
		{
			if(map[x][y+1]=='*'||map[x][y+1]=='E')
			{
				y++;
			}
		}
	}
	putchar('\n');putchar('\n');putchar('\n');
}


int main()
{
	for(int Q=0;Q<9;Q++)
	{
		printf("%s\n",map[Q]);
	}
	cycle();
	printf("¹§Ï²Äã,Äã×ß³öÁËÃÔ¹¬!\n");
}
