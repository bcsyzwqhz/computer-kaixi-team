#include<windows.h>
using namespace std;
int main()
{
	HWND h=FindWindow("ConsoleWindowClass",0);
	ShowWindow(h,SW_HIDE);
	system("�޾�����.exe");
}
 
