
/**
 * ������ɫ����      �˺����ľ����ԣ�1��ֻ��Windowsϵͳ��ʹ��   2�����ܸı䱳����ɫ
 */
int color(int c)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);        //����������ɫ
    return 0;
}
