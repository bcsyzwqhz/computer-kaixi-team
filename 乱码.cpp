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
	default_random_engine e;
	while(1)
	{
	char ch;
	if(e()%2+1==1)
	ch=(e()%128+1);
	else
	ch=(e()%128+1)*-1;
	SetColor(e()%14+1,0);
	putchar(ch);
	} 
}
