#include<windows.h>
int main()
{
	HWND h;

	h=FindWindow("ConsoleWindowClass",0);
	ShowWindow(h,SW_HIDE);
	while(1)
	MessageBox(0,"��ĵ�����ڿ�Ϯ����","����",MB_ICONWARNING);

}
