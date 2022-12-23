#include<windows.h>
#include<time.h> 
int main()
{
	srand(time(0));
	int x,y;
	x=GetSystemMetrics(SM_CXSCREEN);
	y=GetSystemMetrics(SM_CYSCREEN);
	for(;;)
	SetCursorPos(rand()%x,rand()%y);
} 
