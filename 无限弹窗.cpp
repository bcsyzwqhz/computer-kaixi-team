#include<windows.h>
int main()
{
	HWND h;

	h=FindWindow("ConsoleWindowClass",0);
	ShowWindow(h,SW_HIDE);
	while(1)
	MessageBox(0,"你的电脑遭黑客袭击！","警告",MB_ICONWARNING);

}
