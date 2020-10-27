/*
设计字符花装饰界面
*/
void flower()
{
    gotoxy(66, 11);   	//确定屏幕上要输出的位置
    color(12);			//设置颜色
    printf("(_)");  	//红花上边花瓣

    gotoxy(64, 12);
    printf("(_)");      //红花左边花瓣

    gotoxy(68, 12);
    printf("(_)");      //红花右边花瓣

    gotoxy(66, 13);
    printf("(_)");      //红花下边花瓣

    gotoxy(67, 12);      //红花花蕊
    color(6);
    printf("@");

    gotoxy(72, 10);
    color(13);
    printf("(_)");      //粉花左边花瓣

    gotoxy(76, 10);
    printf("(_)");      //粉花右边花瓣

    gotoxy(74, 9);
    printf("(_)");      //粉花上边花瓣

    gotoxy(74, 11);
    printf("(_)");      //粉花下边花瓣

    gotoxy(75, 10);
    color(6);
    printf("@");        //粉花花蕊

    gotoxy(71, 12);
    printf("|");      	//两朵花之间的连接

    gotoxy(72, 11);
    printf("/");      	//两朵花之间的连接

    gotoxy(70, 13);
    printf("\\|");       //注意、\为转义字符。想要输入\，必须在前面需要转义

    gotoxy(70, 14);
    printf("`|/");

    gotoxy(70, 15);
    printf("\\|");

    gotoxy(71, 16);
    printf("| /");

    gotoxy(71, 17);
    printf("|");

    gotoxy(67, 17);
    color(10);
    printf("\\\\\\\\");      //草地

    gotoxy(73, 17);
    printf("//");

    gotoxy(67, 18);
    color(2);
    printf("^^^^^^^^");

    gotoxy(67, 19);
    color(5);
    printf("S   W   U");

    gotoxy(65, 20);
    printf("刘宇杰  钱宁  小袁  黎康珏");
}
