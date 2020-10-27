
/*******函  数  声  明 *******/
void gotoxy(int x, int y);			//光标移到指定位置
void DrwaGameframe();				//绘制游戏边框
void Flag(struct Tetris*);			//随机产生方块类型的序号
void MakeTetris(struct Tetris*);	//制作俄罗斯方块
void PrintTetris(struct Tetris*);	//打印俄罗斯方块
void CleanTetris(struct Tetris*);	//清除俄罗斯方块的痕迹
int  ifMove(struct Tetris*);		//判断是否能移动，返回值为1，能移动，否则，不能移动
void Del_Fullline(struct Tetris*);	//判断是否满行，并删除满行的俄罗斯方块
void Gameplay();					//开始游戏
void regulation();                  //游戏规则
void explation();                   //按键说明
void welcom();                      //欢迎界面
void Replay(struct Tetris*);  		//重新开始游戏
void title();                       //欢迎界面上方的标题
void flower();                      //欢迎界面上的字符装饰花
void close();                       //关闭游戏
int main();