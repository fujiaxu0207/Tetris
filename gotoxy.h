
/**
 * 获取屏幕光标位置
 */
void gotoxy(int x, int y)
{
    COORD pos;
    pos.X = x;  //横坐标
    pos.Y = y;  //纵坐标
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}