#include<windows.h>
#include<random>
int main()
{
	HWND h;
	h=FindWindow("ConsoleWindowClass",0);
	ShowWindow(h,SW_HIDE);
	std::default_random_engine e;
	int x,y;
	x=GetSystemMetrics(SM_CXSCREEN);
	y=GetSystemMetrics(SM_CYSCREEN);
	for(;;)
	SetCursorPos(e()%x,e()%y);
} 
