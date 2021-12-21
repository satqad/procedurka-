#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;
int main()
{
HWND hwnd = GetConsoleWindow();
HPEN Pen = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
HDC hdc = GetDC(hwnd);
SelectObject(hdc, Pen);
MoveToEx(hdc, 300, 0, NULL);
LineTo(hdc, 300, 250);
MoveToEx(hdc, 0, 125, NULL);
LineTo(hdc, 1000, 125);
for (double x = -10; x <= 20;x+=0.001) {
MoveToEx(hdc, 50 * x + 300, -50 * sin(x) + 125, NULL);
LineTo(hdc, 50 * x + 300, -50 * sin(x) + 125);
}
ReleaseDC(hwnd, hdc);
cin.get();
return 0;
}