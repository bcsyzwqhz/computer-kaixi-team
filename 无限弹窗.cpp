#include<windows.h>
int main()
{
	HWND h;

	h=FindWindow("ConsoleWindowClass",0);
	ShowWindow(h,SW_HIDE);

}
