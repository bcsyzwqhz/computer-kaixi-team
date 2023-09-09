#include<bits/stdc++.h>
#include<windows.h> 
using namespace std;
void SetColor(int text,int back)
{
	WORD color=((back&0x0f)<<4)+(text&0x0f);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}
int main()
{
	srand(time(0));
	while(1)
	{
	char ch;
	if(rand()%2+1==1)
	ch=(rand()%128+1);
	else
	ch=(rand()%128+1)*-1;
	SetColor(rand()%14+1,0);
	putchar(ch);
	} 
}
