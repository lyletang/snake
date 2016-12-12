//2016校程序设计大赛第一名
//Name: 奔跑吧贪吃蛇
//Team: Victors
//Headman: Jiahui Tang
//Team_member: Xinguang Guo, Pengyue Zhao, Zhanhang Tan

#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<string.h>
#include<easyx.h>
#include<math.h>
#include<time.h>
#include<fstream.h>
#include<stdlib.h>
#include<ctype.h>
#pragma comment(lib,"Winmm.lib") //开启音频头文件

void main_menu1();
void main_menu2();
void main_menu3();
void main_menu4();
void main_menu5();
void pass1();
void pass2();
void pass3();
void pass4();
void pass5();
void menu();
void set();
void back_pass1();
void back_pass2();
void back_pass3();
void back_pass4();
void back_pass5();
void hello();
void Game_instruction();
void set_choose();

#define UNIT 20

int  Snake_judge1_1();//蛇判断
int  Snake_judge1_2();
int  Snake_judge1_3();
int  Snake_judge1_4();
int  Snake_judge1_5();
int  Snake_judge2_1();
int  Snake_judge2_2();
int  Snake_judge2_3();
int  Snake_judge2_4();
int  Snake_judge2_5();
int  Snake_judge3_1();
int  Snake_judge3_2();
int  Snake_judge3_3();
int  Snake_judge3_4();
int  Snake_judge3_5();
int  Snake_judge4_1();
int  Snake_judge4_2();
int  Snake_judge4_3();
int  Snake_judge4_4();
int  Snake_judge4_5();
int  Snake_judge5_1();
int  Snake_judge5_2();
int  Snake_judge5_3();
int  Snake_judge5_4();
int  Snake_judge5_5();
void Add_food_1_1_1();//食物添加
void Add_food_1_1_2();
void Add_food_1_1_3();
void Add_food_1_1_4();
void Add_food_1_1_5();
void Add_food_1_2_1();
void Add_food_1_2_2();
void Add_food_1_2_3();
void Add_food_1_2_4();
void Add_food_1_2_5();
void Add_food_1_3_1();
void Add_food_1_3_2();
void Add_food_1_3_3();
void Add_food_1_3_4();
void Add_food_1_3_5();
void Add_food_1_4_1();
void Add_food_1_4_2();
void Add_food_1_4_3();
void Add_food_1_4_4();
void Add_food_1_4_5();
void Add_food_1_5_1();
void Add_food_1_5_2();
void Add_food_1_5_3();
void Add_food_1_5_4();
void Add_food_1_5_5();
void Add_food_2_1_1();//食物添加
void Add_food_2_1_2();
void Add_food_2_1_3();
void Add_food_2_1_4();
void Add_food_2_1_5();
void Add_food_2_2_1();
void Add_food_2_2_2();
void Add_food_2_2_3();
void Add_food_2_2_4();
void Add_food_2_2_5();
void Add_food_2_3_1();
void Add_food_2_3_2();
void Add_food_2_3_3();
void Add_food_2_3_4();
void Add_food_2_3_5();
void Add_food_2_4_1();
void Add_food_2_4_2();
void Add_food_2_4_3();
void Add_food_2_4_4();
void Add_food_2_4_5();
void Add_food_2_5_1();
void Add_food_2_5_2();
void Add_food_2_5_3();
void Add_food_2_5_4();
void Add_food_2_5_5();
void Add_food_3_1_1();//食物添加
void Add_food_3_1_2();
void Add_food_3_1_3();
void Add_food_3_1_4();
void Add_food_3_1_5();
void Add_food_3_2_1();
void Add_food_3_2_2();
void Add_food_3_2_3();
void Add_food_3_2_4();
void Add_food_3_2_5();
void Add_food_3_3_1();
void Add_food_3_3_2();
void Add_food_3_3_3();
void Add_food_3_3_4();
void Add_food_3_3_5();
void Add_food_3_4_1();
void Add_food_3_4_2();
void Add_food_3_4_3();
void Add_food_3_4_4();
void Add_food_3_4_5();
void Add_food_3_5_1();
void Add_food_3_5_2();
void Add_food_3_5_3();
void Add_food_3_5_4();
void Add_food_3_5_5();
int food_decide1_1(int,int,int);//食物判断
int food_decide1_2(int,int,int);
int food_decide1_3(int,int,int);
int food_decide1_4(int,int,int);
int food_decide1_5(int,int,int);
int food_decide2_1(int,int,int);
int food_decide2_2(int,int,int);
int food_decide2_3(int,int,int);
int food_decide2_4(int,int,int);
int food_decide2_5(int,int,int);
int food_decide3_1(int,int,int);
int food_decide3_2(int,int,int);
int food_decide3_3(int,int,int);
int food_decide3_4(int,int,int);
int food_decide3_5(int,int,int);
int food_decide4_1(int,int,int);
int food_decide4_2(int,int,int);
int food_decide4_3(int,int,int);
int food_decide4_4(int,int,int);
int food_decide4_5(int,int,int);
int food_decide5_1(int,int,int);
int food_decide5_2(int,int,int);
int food_decide5_3(int,int,int);
int food_decide5_4(int,int,int);
int food_decide5_5(int,int,int);
void Game1_1();
void Game1_2();
void Game1_3();
void Game1_4();
void Game1_5();
void Game2_1();
void Game2_2();
void Game2_3();
void Game2_4();
void Game2_5();
void Game3_1();
void Game3_2();
void Game3_3();
void Game3_4();
void Game3_5();
void Game4_1();
void Game4_2();
void Game4_3();
void Game4_4();
void Game4_5();
void Game5_1();
void Game5_2();
void Game5_3();
void Game5_4();
void Game5_5();
void Black1_1();
void Black1_2();
void Black1_3();
void Black1_4();
void Black1_5();
void Black2_1();
void Black2_2();
void Black2_3();
void Black2_4();
void Black2_5();
void Black3_1();
void Black3_2();
void Black3_3();
void Black3_3();
void Black3_4();
void Black3_5();
void Black4_1();
void Black4_2();
void Black4_3();
void Black4_4();
void Black4_5();
void Black5_1();
void Black5_2();
void Black5_3();
void Black5_4();
void Black5_5();
int N=5;//蛇身长
int snake_move_speed=200;//蛇身移动速度
const int snake_miss_speed=100;//蛇身消失速度
int direction=4;//蛇头当前方向
int old_direction=4;//蛇头上一方向
IMAGE img;//地图
IMAGE img1;//蛇位图
IMAGE img3,img5;//爆炸效果图
IMAGE img4,img6,img7;//game over图
IMAGE img8;
IMAGE img8_1;
IMAGE p0,p1_1,p1_2,p2_1,p2_2,p3_1,p3_2;
IMAGE snake[15][2];//蛇位图存放
IMAGE foods[3][2];//食物位图存放
IMAGE props[3][2];//道具存放
void Snakemove();//蛇移动
void Gainpicture();//位图读取
void Explode(int,int);//爆炸效果
void Snake_head();//蛇头修改
void Snake_second();//蛇第二节修改
void Snake_tail();//蛇尾修改
//mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL);//胜利音效
void product_props2_1();//道具随机添加
void product_props2_2();
void product_props2_3();
void product_props2_4();
void product_props2_5();
void product_props4_1();
void product_props4_2();
void product_props4_3();
void product_props4_4();
void product_props4_5();
void product_props5_1();
void product_props5_2();
void product_props5_3();
void product_props5_4();
void product_props5_5();
void Energy3_1();//能量
void Energy3_2();
void Energy3_3();
void Energy3_4();
void Energy3_5();
void Energy4_1();
void Energy4_2();
void Energy4_3();
void Energy4_4();
void Energy4_5();
void Energy5_1();
void Energy5_2();
void Energy5_3();
void Energy5_4();
void Energy5_5();
void Add_snake();//蛇长添加
void Cut_down_snake();//蛇身减短
void not_add_snake();//蛇长度不变函数
void Speed_add();//速度增加
void Speed_down();//速度减少
int random_landmine4_1();//随机地雷
int random_landmine4_2();
int random_landmine4_3();
int random_landmine4_4();
int random_landmine4_5();
int random_landmine5_1();
int random_landmine5_2();
int random_landmine5_3();
int random_landmine5_4();
int random_landmine5_5();
int customs_pass_1_1();//关卡//需要写25关
int customs_pass_1_2();
int customs_pass_1_3();
int customs_pass_1_4();
int customs_pass_1_5();
int customs_pass_2_1();
int customs_pass_2_2();
int customs_pass_2_3();
int customs_pass_2_4();
int customs_pass_2_5();
int customs_pass_3_1();
int customs_pass_3_2();
int customs_pass_3_3();
int customs_pass_3_4();
int customs_pass_3_5();
int customs_pass_4_1();
int customs_pass_4_2();
int customs_pass_4_3();
int customs_pass_4_4();
int customs_pass_4_5();
int customs_pass_5_1();
int customs_pass_5_2();
int customs_pass_5_3();
int customs_pass_5_4();
int customs_pass_5_5();
int local_snake[100][3]={{7,1,2},{6,1,12},{5,1,12},{4,1,12},{3,1,8}};//蛇身初始化
int old_local_snake[50][3]={{7,1,2},{6,1,12},{5,1,12},{4,1,12},{3,1,8}};
int chushi_snake[100][3]={{7,1,2},{6,1,12},{5,1,12},{4,1,12},{3,1,8}};
int food_x1=10,food_y1=10;
int food_x2=12,food_y2=19;
int food_x3=13,food_y3=20;
int door_x,door_y;
int props_x=15,props_y=7;
int landmine_x=10,landmine_y=20;
int count1;
int count2;
int count3;
int count;//食物总数
int count_1;
int count1_1;
int count2_1;
int bool_p;//判断是否为第一次调用关卡函数
int bool_q;//标记洞是否输出
int boolw;//标记道具是否输出
int count1_2;
int count1_3;
int count2_2;
int count3_2;
int bool_t;
int bool2;
int bool3;//判断用户是否按下r键
int bool4;//判断能量槽是否集满
int bool5;
int bool6;
int bool7;
int bool_k; 
int bgmusic;//音乐设置，默认开启
int bgmusic_effect;//音效设置，默认开启

int food1_1,food1_2,food1_3;//草莓
int food2_1,food2_2,food2_3;//梨
int food3_1,food3_2,food3_3;//苹果
//
time_t t0;//洞出现初始时间
time_t t2;//道具出现时间
time_t t4;
time_t t6;
time_t t8;//不增长时间
time_t t12;//减短
time_t t13;//增加
time_t t15;//设置障碍时间

int bool8;//随机第一把钥匙
int bool9;//门状态
int bool10;//随机第二把钥匙
int bool11;//随机第三把钥匙
int bool12;//第一把钥匙状态
int bool13;//第二把钥匙状态
int bool14;//第三把钥匙状态
int key_x1=20,key_y1=20;//钥匙1虚拟值
int key_x2=20,key_y2=20;//钥匙2虚拟值
int key_x3=20,key_y3=20;//钥匙3虚拟值
int door_x1=0,door_y1=27;
int door_x2=0,door_y2=28;
int key[5][2];
IMAGE img9,img9_1,img10,img10_1;



int pass[5][5];
int star[25];
int temp_music[2];
FILE * fstar;
FILE * fset;
//点结构
struct Point{
	int x;
	int y;
};

//矩形结构
struct Rect{
	int x;
	int y;
	int w;
	int h;
};

int mouseX;						//鼠标位置坐标X
int mouseY;	     				//鼠标位置坐标Y
MOUSEMSG mmsg;

bool isMouseDown;				//鼠标按下
//Point	GetMouseLocal(int x, int y);	//获取鼠标所在坐标
bool	IsInRect(int x, int y, Rect r);	//是否在矩形内

//是否在矩形内
bool IsInRect(int x, int y, Rect r)
{
	return ((x >= r.x && x <= r.w) && (y >= r.y && y <= r.h));
}

void main_menu1()
{	
//	cleardevice ();
//	initgraph(900,600);
    int temp=0;
	int a;
	for (a=0;a<5;a++)
	{
	    temp++;
		if (pass[0][a]==0)
			break;
	}
	IMAGE img0,img1,img2,img3,img4,img5,i1,i2,i3,i4,i5,im1,im2,im3,im4,im5;
	loadimage(&img0,"界面\\000.jpg");
	loadimage(&img1,"界面\\第一关\\1.s.jpg");	
	loadimage(&img2,"界面\\第二关\\2.s.jpg");
	loadimage(&img3,"界面\\第三关\\3.s.jpg");
	loadimage(&img4,"界面\\第四关\\4.s.jpg");
	loadimage(&img5,"界面\\第五关\\5.s.jpg");
	putimage(0,0,&img0);
	getimage(&i1,535,92,309,96);
	saveimage("界面\\1.bmp",&i1);
	getimage(&i2,535,186,309,96);
	saveimage("界面\\2.bmp",&i2);
	getimage(&i3,535,280,309,96);
	saveimage("界面\\3.bmp",&i3);
	getimage(&i4,535,374,309,96);
	saveimage("界面\\4.bmp",&i4);
	getimage(&i5,535,468,309,96);
	saveimage("界面\\5.bmp",&i5);
	putimage(530,92,&img1);
	putimage(530,186,&img2);
	putimage(530,280,&img3);
	putimage(530,374,&img4);
	putimage(530,468,&img5);
	if (0<temp)
	{
	    if (pass[0][0]==0)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.0.jpg");	
	        putimage(535,92,&im1);
		}
	    if (pass[0][0]==1)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.1.jpg");	
            putimage(535,92,&im1);
		}
	    if (pass[0][0]==2)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.2.jpg");	
	        putimage(535,92,&im1);
		}
	    if (pass[0][0]==3)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.3.jpg");	
	        putimage(535,92,&im1);
		}
	}
	if (1<temp)
	{
	    if (pass[0][1]==0)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.0.jpg");	
	        putimage(535,186,&im2);
		}
	    if (pass[0][1]==1)
		{
	        loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.1.jpg");	
            putimage(535,186,&im2);
		}
	    if (pass[0][1]==2)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.2.jpg");	
	        putimage(535,186,&im2);
		}
	    if (pass[0][1]==3)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.3.jpg");	
	        putimage(535,186,&im2);
		}
	}
	if (2<temp)
	{
	    if (pass[0][2]==0)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.0.jpg");	
	        putimage(535,280,&im3);
		}
	    if (pass[0][2]==1)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.1.jpg");	
            putimage(535,280,&im3);
		}
	    if (pass[0][2]==2)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.2.jpg");	
	        putimage(535,280,&im3);
		}
	    if (pass[0][2]==3)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.3.jpg");	
	        putimage(535,280,&im3);
		}
	}
	if (3<temp)
	{
	    if (pass[0][3]==0)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.0.jpg");	
	        putimage(535,374,&im4);
		}
	    if (pass[0][3]==1)
		{
			loadimage(&i4,"界面\\4.bmp");
	    	putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.1.jpg");	
            putimage(535,374,&im4);
		}
	    if (pass[0][3]==2)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.2.jpg");	
	        putimage(535,374,&im4);
		}
	    if (pass[0][3]==3)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.3.jpg");	
	        putimage(535,374,&im4);
		}
	}
	if (4<temp)
	{
	    if (pass[0][4]==0)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.0.jpg");	
	        putimage(535,468,&im5);
		}
	    if (pass[0][4]==1)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.1.jpg");	
            putimage(535,468,&im5);
		}
	    if (pass[0][4]==2)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.2.jpg");	
	        putimage(535,468,&im5);
		}
	    if (pass[0][4]==3)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.3.jpg");	
	        putimage(535,468,&im5);
		}
	}
}
void main_menu2()
{	
    int temp=0;
	int a;
	for (a=0;a<5;a++)
	{
	    temp++;
		if (pass[1][a]==0)
			break;
	}
	IMAGE img0,img1,img2,img3,img4,img5,i1,i2,i3,i4,i5,im1,im2,im3,im4,im5;
	loadimage(&img0,"界面\\000.jpg");
	loadimage(&img1,"界面\\第一关\\1.s.jpg");	
	loadimage(&img2,"界面\\第二关\\2.s.jpg");
	loadimage(&img3,"界面\\第三关\\3.s.jpg");
	loadimage(&img4,"界面\\第四关\\4.s.jpg");
	loadimage(&img5,"界面\\第五关\\5.s.jpg");
	putimage(0,0,&img0);
	putimage(530,92,&img1);
	putimage(530,186,&img2);
	putimage(530,280,&img3);
	putimage(530,374,&img4);
	putimage(530,468,&img5);
    if (0<temp&&pass[0][4]!=0)
	{
	    if (pass[1][0]==0)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.0.jpg");	
	        putimage(535,92,&im1);
		}
	    if (pass[1][0]==1)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.1.jpg");	
            putimage(535,92,&im1);
		}
	    if (pass[1][0]==2)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.2.jpg");	
	        putimage(535,92,&im1);
		}
	    if (pass[1][0]==3)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.3.jpg");	
	        putimage(535,92,&im1);
		}
	}
	if (1<temp)
	{
	    if (pass[1][1]==0)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.0.jpg");	
	        putimage(535,186,&im2);
		}
	    if (pass[1][1]==1)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.1.jpg");	
            putimage(535,186,&im2);
		}
	    if (pass[1][1]==2)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.2.jpg");	
	        putimage(535,186,&im2);
		}
	    if (pass[1][1]==3)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.3.jpg");	
	        putimage(535,186,&im2);
		}
	}
	if (2<temp)
	{
	    if (pass[1][2]==0)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.0.jpg");	
	        putimage(535,280,&im3);
		}
	    if (pass[1][2]==1)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.1.jpg");	
            putimage(535,280,&im3);
		}
	    if (pass[1][2]==2)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.2.jpg");	
	        putimage(535,280,&im3);
		}
	    if (pass[1][2]==3)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.3.jpg");	
	        putimage(535,280,&im3);
		}
	}
	if (3<temp)
	{
	    if (pass[1][3]==0)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.0.jpg");	
	        putimage(535,374,&im4);
		}
	    if (pass[1][3]==1)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.1.jpg");	
            putimage(535,374,&im4);
		}
	    if (pass[1][3]==2)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.2.jpg");	
	        putimage(535,374,&im4);
		}
	    if (pass[1][3]==3)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.3.jpg");	
	        putimage(535,374,&im4);
		}
	}
	if (4<temp)
	{
	    if (pass[1][4]==0)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.0.jpg");	
	        putimage(535,468,&im5);
		}
	    if (pass[1][4]==1)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.1.jpg");	
            putimage(535,468,&im5);
		}
	    if (pass[1][4]==2)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.2.jpg");	
	        putimage(535,468,&im5);
		}
	    if (pass[1][4]==3)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.3.jpg");	
	        putimage(535,468,&im5);
		}
	}
}
void main_menu3()
{	
    int temp=0;
	int a;
	for (a=0;a<5;a++)
	{
	    temp++;
		if (pass[2][a]==0)
			break;
	}
	IMAGE img0,img1,img2,img3,img4,img5,i1,i2,i3,i4,i5,im1,im2,im3,im4,im5;
	loadimage(&img0,"界面\\000.jpg");
	loadimage(&img1,"界面\\第一关\\1.s.jpg");	
	loadimage(&img2,"界面\\第二关\\2.s.jpg");
	loadimage(&img3,"界面\\第三关\\3.s.jpg");
	loadimage(&img4,"界面\\第四关\\4.s.jpg");
	loadimage(&img5,"界面\\第五关\\5.s.jpg");
	putimage(0,0,&img0);
	putimage(530,92,&img1);
	putimage(530,186,&img2);
	putimage(530,280,&img3);
	putimage(530,374,&img4);
	putimage(530,468,&img5);
    if (0<temp&&pass[1][4]!=0)
	{
	    if (pass[2][0]==0)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.0.jpg");	
	        putimage(535,92,&im1);
		}
	    if (pass[2][0]==1)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.1.jpg");	
            putimage(535,92,&im1);
		}
	    if (pass[2][0]==2)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.2.jpg");	
	        putimage(535,92,&im1);
		}
	    if (pass[2][0]==3)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.3.jpg");	
	        putimage(535,92,&im1);
		}
	}
	if (1<temp)
	{
	    if (pass[2][1]==0)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.0.jpg");	
	        putimage(535,186,&im2);
		}
	    if (pass[2][1]==1)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.1.jpg");	
            putimage(535,186,&im2);
		}
	    if (pass[2][1]==2)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.2.jpg");	
	        putimage(535,186,&im2);
		}
	    if (pass[2][1]==3)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.3.jpg");	
	        putimage(535,186,&im2);
		}
	}
	if (2<temp)
	{
	    if (pass[2][2]==0)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.0.jpg");	
	        putimage(535,280,&im3);
		}
	    if (pass[2][2]==1)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.1.jpg");	
            putimage(535,280,&im3);
		}
	    if (pass[2][2]==2)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.2.jpg");	
	        putimage(535,280,&im3);
		}
	    if (pass[2][2]==3)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.3.jpg");	
	        putimage(535,280,&im3);
		}
	}
	if (3<temp)
	{
	    if (pass[2][3]==0)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.0.jpg");	
	        putimage(535,374,&im4);
		}
	    if (pass[2][3]==1)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.1.jpg");	
            putimage(535,374,&im4);
		}
	    if (pass[2][3]==2)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.2.jpg");	
	        putimage(535,374,&im1);
		}
	    if (pass[2][3]==3)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.3.jpg");	
	        putimage(535,374,&im4);
		}
	}
	if (4<temp)
	{
	    if (pass[2][4]==0)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.0.jpg");	
	        putimage(535,468,&im5);
		}
	    if (pass[2][4]==1)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.1.jpg");	
            putimage(535,468,&im5);
		}
	    if (pass[2][4]==2)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.2.jpg");	
	        putimage(535,468,&im5);
		}
	    if (pass[2][4]==3)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.3.jpg");	
	        putimage(535,468,&im5);
		}
	}
}
void main_menu4()
{	
    int temp=0;
	int a;
	for (a=0;a<5;a++)
	{
	    temp++;
		if (pass[3][a]==0)
			break;
	}
	IMAGE img0,img1,img2,img3,img4,img5,i1,i2,i3,i4,i5,im1,im2,im3,im4,im5;
	loadimage(&img0,"界面\\000.jpg");
	loadimage(&img1,"界面\\第一关\\1.s.jpg");	
	loadimage(&img2,"界面\\第二关\\2.s.jpg");
	loadimage(&img3,"界面\\第三关\\3.s.jpg");
	loadimage(&img4,"界面\\第四关\\4.s.jpg");
	loadimage(&img5,"界面\\第五关\\5.s.jpg");
	putimage(0,0,&img0);
	putimage(530,92,&img1);
	putimage(530,186,&img2);
	putimage(530,280,&img3);
	putimage(530,374,&img4);
	putimage(530,468,&img5);
    if (0<temp&&pass[2][4]!=0)
	{
	    if (pass[3][0]==0)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.0.jpg");	
	        putimage(535,92,&im1);
		}
	    if (pass[3][0]==1)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.1.jpg");	
            putimage(535,92,&im1);
		}
	    if (pass[3][0]==2)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.2.jpg");	
	        putimage(535,92,&im1);
		}
	    if (pass[3][0]==3)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.3.jpg");	
	        putimage(535,92,&im1);
		}
	}
	if (1<temp)
	{
	    if (pass[3][1]==0)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.0.jpg");	
	        putimage(535,186,&im2);
		}
	    if (pass[3][1]==1)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.1.jpg");	
            putimage(535,186,&im2);
		}
	    if (pass[3][1]==2)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.2.jpg");	
	        putimage(535,186,&im2);
		}
	    if (pass[3][1]==3)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.3.jpg");	
	        putimage(535,186,&im2);
		}
	}
	if (2<temp)
	{
	    if (pass[3][2]==0)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.0.jpg");	
	        putimage(535,280,&im3);
		}
	    if (pass[3][2]==1)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.1.jpg");	
            putimage(535,280,&im3);
		}
	    if (pass[3][2]==2)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.2.jpg");	
	        putimage(535,280,&im3);
		}
	    if (pass[3][2]==3)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.3.jpg");	
	        putimage(535,280,&im3);
		}
	}
	if (3<temp)
	{
	    if (pass[3][3]==0)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.0.jpg");	
	        putimage(535,374,&im4);
		}
	    if (pass[3][3]==1)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.1.jpg");	
            putimage(535,374,&im4);
		}
	    if (pass[3][3]==2)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.2.jpg");	
	        putimage(535,374,&im4);
		}
	    if (pass[3][3]==3)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.3.jpg");	
	        putimage(535,374,&im4);
		}
	}
	if (4<temp)
	{
	    if (pass[3][4]==0)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.0.jpg");	
	        putimage(535,468,&im5);
		}
	    if (pass[3][4]==1)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.1.jpg");	
            putimage(535,468,&im5);
		}
	    if (pass[3][4]==2)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.2.jpg");	
	        putimage(535,468,&im5);
		}
	    if (pass[3][4]==3)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.3.jpg");	
	        putimage(535,468,&im5);
		}
	}
}
void main_menu5()
{	
    int temp=0;
	int a;
	for (a=0;a<5;a++)
	{
	    temp++;
		if (pass[4][a]==0)
			break;
	}
	IMAGE img0,img1,img2,img3,img4,img5,i1,i2,i3,i4,i5,im1,im2,im3,im4,im5;
	loadimage(&img0,"界面\\000.jpg");
	loadimage(&img1,"界面\\第一关\\1.s.jpg");	
	loadimage(&img2,"界面\\第二关\\2.s.jpg");
	loadimage(&img3,"界面\\第三关\\3.s.jpg");
	loadimage(&img4,"界面\\第四关\\4.s.jpg");
	loadimage(&img5,"界面\\第五关\\5.s.jpg");
	putimage(0,0,&img0);
	putimage(530,92,&img1);
	putimage(530,186,&img2);
	putimage(530,280,&img3);
	putimage(530,374,&img4);
	putimage(530,468,&img5);
    if (0<temp&&pass[3][4]!=0)
	{
	    if (pass[4][0]==0)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.0.jpg");	
	        putimage(535,92,&im1);
		}
	    if (pass[4][0]==1)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.1.jpg");	
            putimage(535,92,&im1);
		}
	    if (pass[4][0]==2)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.2.jpg");	
	        putimage(535,92,&im1);
		}
	    if (pass[4][0]==3)
		{
			loadimage(&i1,"界面\\1.bmp");
			putimage(535,92,&i1);
	        loadimage(&im1,"界面\\第一关\\1.3.jpg");	
	        putimage(535,92,&im1);
		}
	}
	if (1<temp)
	{
	    if (pass[4][1]==0)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.0.jpg");	
	        putimage(535,186,&im2);
		}
	    if (pass[4][1]==1)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.1.jpg");	
            putimage(535,186,&im2);
		}
	    if (pass[4][1]==2)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.2.jpg");	
	        putimage(535,186,&im2);
		}
	    if (pass[4][1]==3)
		{
			loadimage(&i2,"界面\\2.bmp");
			putimage(535,186,&i2);
	        loadimage(&im2,"界面\\第二关\\2.3.jpg");	
	        putimage(535,186,&im2);
		}
	}
	if (2<temp)
	{
	    if (pass[4][2]==0)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.0.jpg");	
	        putimage(535,280,&im3);
		}
	    if (pass[4][2]==1)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.1.jpg");	
            putimage(535,280,&im3);
		}
	    if (pass[4][2]==2)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.2.jpg");	
	        putimage(535,280,&im3);
		}
	    if (pass[4][2]==3)
		{
			loadimage(&i3,"界面\\3.bmp");
			putimage(535,280,&i3);
	        loadimage(&im3,"界面\\第三关\\3.3.jpg");	
	        putimage(535,280,&im3);
		}
	}
	if (3<temp)
	{
	    if (pass[4][3]==0)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.0.jpg");	
	        putimage(535,374,&im4);
		}
	    if (pass[4][3]==1)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.1.jpg");	
            putimage(535,374,&im4);
		}
	    if (pass[4][3]==2)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.2.jpg");	
	        putimage(535,374,&im4);
		}
	    if (pass[4][3]==3)
		{
			loadimage(&i4,"界面\\4.bmp");
			putimage(535,374,&i4);
	        loadimage(&im4,"界面\\第四关\\4.3.jpg");	
	        putimage(535,374,&im4);
		}
	}
	if (4<temp)
	{
	    if (pass[4][4]==0)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.0.jpg");	
	        putimage(535,468,&im5);
		}
	    if (pass[4][4]==1)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.1.jpg");	
            putimage(535,468,&im5);
		}
	    if (pass[4][4]==2)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.2.jpg");	
	        putimage(535,468,&im5);
		}
	    if (pass[4][4]==3)
		{
			loadimage(&i5,"界面\\5.bmp");
			putimage(535,468,&i5);
	        loadimage(&im5,"界面\\第五关\\5.3.jpg");	
	        putimage(535,468,&im5);
		}
	}
}
void menu()
{
	int a,b,c;
    while(true)
	{
		//处理鼠标消息
		while(MouseHit())
		{
			mmsg = GetMouseMsg();
			switch(mmsg.uMsg)
			{
				case WM_MOUSEMOVE:		mouseX = mmsg.x; mouseY = mmsg.y;	break;
				case WM_LBUTTONDOWN:	isMouseDown = true;					break;
				case WM_LBUTTONUP:		isMouseDown = false;				break;
			}
		}
			Rect r1;
			r1.x = 340;
			r1.y = 460;
			r1.w = 410;
			r1.h = 554;	
			if(IsInRect(mouseX, mouseY, r1)) 
			{
				//返回按键响应
				if(isMouseDown)
				{
					isMouseDown=false;
				    main_menu1();
					pass1();
				}
			}
			else
			{
			    Rect r2;
				r2.x=85;
				r2.y=415;
				r2.w=150;
				r2.h=491;
				if (IsInRect(mouseX,mouseY,r2))
				{
				    if (isMouseDown)
					{
					    main_menu2();
						pass2();
					}
				}
				else 
				{
				    Rect r3;
					r3.x=195;
				    r3.y=267;
			    	r3.w=265;
				    r3.h=360;
                    if (IsInRect(mouseX,mouseY,r3))
					{
				        if (isMouseDown)
						{
							isMouseDown=false;
						    main_menu3();
							pass3();
						}
					}
					else
					{
					    Rect r4;
					    r4.x=420;
				        r4.y=173;
			    	    r4.w=483;
				        r4.h=255;
						if (IsInRect(mouseX,mouseY,r4))
						{
						    if (isMouseDown)
							{
								isMouseDown=false;
							    main_menu4();
								pass4();
							}
						}
						else 
						{
						    Rect r5;
					        r5.x=138;
				            r5.y=86;
			    	        r5.w=259;
				            r5.h=205;
							if (IsInRect(mouseX,mouseY,r5))
							{
							    if (isMouseDown)
								{
									isMouseDown=false;
								    main_menu5();
									pass5();
								}
							}
							else
							{
							    Rect rBack;
								rBack.x=73;
								rBack.y=96;
								rBack.w=117;
								rBack.h=139;
								if (IsInRect(mouseX,mouseY,rBack))
								{
								    if (isMouseDown)
									{
									    isMouseDown=false;
										hello();
									}
								}
								else
								{
								    Rect rSet;
									rSet.x=760;
									rSet.y=521;
									rSet.w=844;
									rSet.h=553;
									if (IsInRect(mouseX,mouseY,rSet))
									{
									    if (isMouseDown)
										{
										    isMouseDown=false;
											set();
										}
									}
								}
							}
						}
					}
				}
			}
    }
}
void pass1()
{
	int temp=0;
	mciSendString("close mymusic2",NULL,0,NULL); 
	int a,b,c;
	char test[1];
	int num;
	IMAGE im;
	for (a=0;a<5;a++)
	{
	    temp++;
		if (pass[0][a]==0)
			break;
	}
    while (true)
	{
	    while(MouseHit())
		{
			mmsg = GetMouseMsg();
			switch(mmsg.uMsg)
			{
				case WM_MOUSEMOVE:		mouseX = mmsg.x; mouseY = mmsg.y;	break;
				case WM_LBUTTONDOWN:	isMouseDown = true;					break;
				case WM_LBUTTONUP:		isMouseDown = false;				break;
			}
		}
		Rect r1;
			r1.x = 340;
			r1.y = 460;
			r1.w = 410;
			r1.h = 554;	
			if(IsInRect(mouseX, mouseY, r1)) 
			{
				//返回按键响应
				if(isMouseDown)
				{
					isMouseDown=false;
				    main_menu1();
					pass1();
				}
			}
			else
			{
			    Rect r2;
				r2.x=85;
				r2.y=415;
				r2.w=150;
				r2.h=491;
				if (IsInRect(mouseX,mouseY,r2))
				{
				    if (isMouseDown)
					{
						isMouseDown=false;
					    main_menu2();
						pass2();
					}
				}
				else 
				{
				    Rect r3;
					r3.x=195;
				    r3.y=267;
			    	r3.w=265;
				    r3.h=360;
                    if (IsInRect(mouseX,mouseY,r3))
					{
				        if (isMouseDown)
						{
							isMouseDown=false;
						    main_menu3();
							pass3();
						}
					}
					else
					{
					    Rect r4;
					    r4.x=420;
				        r4.y=173;
			    	    r4.w=483;
				        r4.h=255;
						if (IsInRect(mouseX,mouseY,r4))
						{
						    if (isMouseDown)
							{
								isMouseDown=false;
							    main_menu4();
								pass4();
							}
						}
						else 
						{
						    Rect r5;
					        r5.x=138;
				            r5.y=86;
			    	        r5.w=259;
				            r5.h=205;
							if (IsInRect(mouseX,mouseY,r5))
							{
							    if (isMouseDown)
								{
									isMouseDown=false;
								    main_menu5();
									pass5();
								}
							}
							else
							{
							    Rect rBack;
								rBack.x=73;
								rBack.y=96;
								rBack.w=117;
								rBack.h=139;
								if (IsInRect(mouseX,mouseY,rBack))
								{
								    if (isMouseDown)
									{
										isMouseDown=false;
									    IMAGE img0;
	                                    loadimage(&img0,"界面\\001.jpg");
	                                    putimage(0,0,&img0);
                                        menu();
									}
								}
								else
								{
									if (0<temp)
									{
									    Rect r11;
									    r11.x=744;
									    r11.y=104;
									    r11.w=r11.x+75;
									    r11.h=r11.y+23;
									    if (IsInRect(mouseX,mouseY,r11))
										{
									        if (isMouseDown)
											{
											    isMouseDown=false;
												Game1_1();				
											}
										}
										else 
										{
											if (1<temp)
											{
												Rect r12;
										        r12.x=744;
										        r12.y=199;
										        r12.w=r12.x+75;
										        r12.h=r12.y+23;
										        if (IsInRect(mouseX,mouseY,r12))
												{
									                if (isMouseDown)
													{
												        isMouseDown=false;
														Game1_2();
													}
												}
												else
												{
													if (2<temp)
													{
													    Rect r13;
										    	        r13.x=744;
										    	        r13.y=292;
										    	        r13.w=r13.x+75;
										    	        r13.h=r13.y+23;
											            if (IsInRect(mouseX,mouseY,r13))
														{
									                        if (isMouseDown)
															{
													            isMouseDown=false;
																Game1_3();
															}
														}
														else
														{
															if (3<temp)
															{
															    Rect r14;
												                r14.x=744;
												                r14.y=388;
												                r14.w=r14.x+75;
												                r14.h=r14.y+23;
												                if (IsInRect(mouseX,mouseY,r14))
																{
									                               if (isMouseDown)
																   {
														                isMouseDown=false;
																		Game1_4();
																   }
																}
																else
																{
																	if (4<temp)
																	{
																	    Rect r15;
												                	    r15.x=744;
													                    r15.y=485;
													                    r15.w=r15.x+75;
													                    r15.h=r15.y+23;
													                    if (IsInRect(mouseX,mouseY,r15))
																		{
									                                       if (isMouseDown)
																		   {
															                    isMouseDown=false;
																				Game1_5();
																		   }
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
            }
   }
}
void pass2()
{
	int temp=0;
	mciSendString("close mymusic2",NULL,0,NULL);
	int a,b,c;
	char test[1];
	int num;
	for (a=0;a<5;a++)
	{
	    temp++;
		if (pass[1][a]==0)
			break;
	}
    while (true)
	{
	    while(MouseHit())
		{
			mmsg = GetMouseMsg();
			switch(mmsg.uMsg)
			{
				case WM_MOUSEMOVE:		mouseX = mmsg.x; mouseY = mmsg.y;	break;
				case WM_LBUTTONDOWN:	isMouseDown = true;					break;
				case WM_LBUTTONUP:		isMouseDown = false;				break;
			}
		}
		Rect r1;
			r1.x = 340;
			r1.y = 460;
			r1.w = 410;
			r1.h = 554;	
			if(IsInRect(mouseX, mouseY, r1)) 
			{
				//返回按键响应
				if(isMouseDown)
				{
					isMouseDown=false;
				    main_menu1();
					pass1();
				}
			}
			else
			{
			    Rect r2;
				r2.x=85;
				r2.y=415;
				r2.w=150;
				r2.h=491;
				if (IsInRect(mouseX,mouseY,r2))
				{
				    if (isMouseDown)
					{
						isMouseDown=false;
					    main_menu2();
						pass2();
					}
				}
				else 
				{
				    Rect r3;
					r3.x=195;
				    r3.y=267;
			    	r3.w=265;
				    r3.h=360;
                    if (IsInRect(mouseX,mouseY,r3))
					{
				        if (isMouseDown)
						{
							isMouseDown=false;
						    main_menu3();
							pass3();
						}
					}
					else
					{
					    Rect r4;
					    r4.x=420;
				        r4.y=173;
			    	    r4.w=483;
				        r4.h=255;
						if (IsInRect(mouseX,mouseY,r4))
						{
						    if (isMouseDown)
							{
							    main_menu4();
								pass4();
							}
						}
						else 
						{
						    Rect r5;
					        r5.x=138;
				            r5.y=86;
			    	        r5.w=259;
				            r5.h=205;
							if (IsInRect(mouseX,mouseY,r5))
							{
							    if (isMouseDown)
								{
									isMouseDown=false;
								    main_menu5();
									pass5();
								}
							}
							else
							{
							    Rect rBack;
								rBack.x=73;
								rBack.y=96;
								rBack.w=117;
								rBack.h=139;
								if (IsInRect(mouseX,mouseY,rBack))
								{
								    if (isMouseDown)
									{
										isMouseDown=false;
									    IMAGE img0;
	                                    loadimage(&img0,"界面\\001.jpg");
	                                    putimage(0,0,&img0);
                                        menu();
									}
								}
								else
								{
									if (0<temp&&pass[0][4]!=0)
									{
									    Rect r21;
									    r21.x=744;
									    r21.y=104;
									    r21.w=r21.x+75;
									    r21.h=r21.y+23;
									    if (IsInRect(mouseX,mouseY,r21))
										{
									        if (isMouseDown)
											{
											    isMouseDown=false;
												Game2_1();
											}
										}
										else 
										{
											if (1<temp)
											{
											    Rect r22;
										        r22.x=744;
										        r22.y=199;
										        r22.w=r22.x+75;
										        r22.h=r22.y+23;
										        if (IsInRect(mouseX,mouseY,r22))
												{
									                if (isMouseDown)
													{
												        isMouseDown=false;
														Game2_2();
													}
												}
												else
												{
													if (2<temp)
													{
													    Rect r23;
											            r23.x=744;
											            r23.y=292;
											            r23.w=r23.x+75;
											            r23.h=r23.y+23;
											            if (IsInRect(mouseX,mouseY,r23))
														{
									                        if (isMouseDown)
															{
													            isMouseDown=false;
																Game2_3();
															}
														}
														else
														{
															if (3<temp)
															{
															    Rect r24;
												                r24.x=744;
												                r24.y=388;
												                r24.w=r24.x+75;
												                r24.h=r24.y+23;
												                if (IsInRect(mouseX,mouseY,r24))
																{
									                                if (isMouseDown)
																	{
														                isMouseDown=false;
																		Game2_4();
																	}
																}
																else
																{
																	if (4<temp)
																	{
																	    Rect r25;
												                	    r25.x=744;
													                    r25.y=485;
													                    r25.w=r25.x+75;
													                    r25.h=r25.y+23;
													                    if (IsInRect(mouseX,mouseY,r25))
																		{
									                                        if (isMouseDown)
																			{
															                    isMouseDown=false;
																				Game2_5();
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
	}
}
void pass3()
{
	int temp=0;
	int a,b,c;
	mciSendString("close mymusic2",NULL,0,NULL);//关闭胜利音效
	char test[1];
	int num;
	for (a=0;a<5;a++)
	{
	    temp++;
		if (pass[2][a]==0)
			break;
	}
    while (true)
	{
	    while(MouseHit())
		{
			mmsg = GetMouseMsg();
			switch(mmsg.uMsg)
			{
				case WM_MOUSEMOVE:		mouseX = mmsg.x; mouseY = mmsg.y;	break;
				case WM_LBUTTONDOWN:	isMouseDown = true;					break;
				case WM_LBUTTONUP:		isMouseDown = false;				break;
			}
		}
		Rect r1;
			r1.x = 340;
			r1.y = 460;
			r1.w = 410;
			r1.h = 554;	
			if(IsInRect(mouseX, mouseY, r1)) 
			{
				//返回按键响应
				if(isMouseDown)
				{
					isMouseDown=false;
				    main_menu1();
					pass1();
				}
			}
			else
			{
			    Rect r2;
				r2.x=85;
				r2.y=415;
				r2.w=150;
				r2.h=491;
				if (IsInRect(mouseX,mouseY,r2))
				{
				    if (isMouseDown)
					{
						isMouseDown=false;
					    main_menu2();
						pass2();
					}
				}
				else 
				{
				    Rect r3;
					r3.x=195;
				    r3.y=267;
			    	r3.w=265;
				    r3.h=360;
                    if (IsInRect(mouseX,mouseY,r3))
					{
				        if (isMouseDown)
						{
							isMouseDown=false;
						    main_menu3();
							pass3();
						}
					}
					else
					{
					    Rect r4;
					    r4.x=420;
				        r4.y=173;
			    	    r4.w=483;
				        r4.h=255;
						if (IsInRect(mouseX,mouseY,r4))
						{
						    if (isMouseDown)
							{
								isMouseDown=false;
							    main_menu4();
								pass4();
							}
						}
						else 
						{
						    Rect r5;
					        r5.x=138;
				            r5.y=86;
			    	        r5.w=259;
				            r5.h=205;
							if (IsInRect(mouseX,mouseY,r5))
							{
							    if (isMouseDown)
								{
									isMouseDown=false;
								    main_menu5();
									pass5();
								}
							}
							else
							{
							    Rect rBack;
								rBack.x=73;
								rBack.y=96;
								rBack.w=117;
								rBack.h=139;
								if (IsInRect(mouseX,mouseY,rBack))
								{
								    if (isMouseDown)
									{
										isMouseDown=false;
									    IMAGE img0;
	                                    loadimage(&img0,"界面\\001.jpg");
	                                    putimage(0,0,&img0);
                                        menu();
									}
								}
								else
								{
									if (0<temp&&pass[1][4]!=0)
									{
									    Rect r31;
									    r31.x=744;
									    r31.y=104;
									    r31.w=r31.x+75;
									    r31.h=r31.y+23;
									    if (IsInRect(mouseX,mouseY,r31))
										{
									        if (isMouseDown)
											{
											    isMouseDown=false;
												Game3_1();
											}
										}
										else 
										{
											if (1<temp)
											{
											    Rect r32;
										        r32.x=744;
										        r32.y=199;
										        r32.w=r32.x+75;
										        r32.h=r32.y+23;
										        if (IsInRect(mouseX,mouseY,r32))
												{
									                if (isMouseDown)
													{
												        isMouseDown=false;
														Game3_2();
													}
												}
												else
												{
													if (2<temp)
													{
													    Rect r33;
											            r33.x=744;
											            r33.y=292;
											            r33.w=r33.x+75;
											            r33.h=r33.y+23;
											            if (IsInRect(mouseX,mouseY,r33))
														{
									                        if (isMouseDown)
															{
													            isMouseDown=false;
																Game3_3();
															}
														}
														else
														{
															if (3<temp)
															{
															    Rect r34;
												                r34.x=744;
												                r34.y=388;
												                r34.w=r34.x+75;
												                r34.h=r34.y+23;
												                if (IsInRect(mouseX,mouseY,r34))
																{
									                                if (isMouseDown)
																	{
														                isMouseDown=false;
																		Game3_4();
																	}
																}
																else
																{
																	if (4<temp)
																	{
																	    Rect r35;
													                    r35.x=744;
													                    r35.y=485;
													                    r35.w=r35.x+75;
													                    r35.h=r35.y+23;
													                    if (IsInRect(mouseX,mouseY,r35))
																		{
									                                        if (isMouseDown)
																			{
															                    isMouseDown=false;
																				Game3_5();
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
	}
}
void pass4()
{
	int temp=0;
	int a,b,c;
	mciSendString("close mymusic2",NULL,0,NULL);
	char test[1];
	int num;
	for (a=0;a<5;a++)
	{
	    temp++;
		if (pass[3][a]==0)
			break;
	}
    while (true)
	{
	    while(MouseHit())
		{
			mmsg = GetMouseMsg();
			switch(mmsg.uMsg)
			{
				case WM_MOUSEMOVE:		mouseX = mmsg.x; mouseY = mmsg.y;	break;
				case WM_LBUTTONDOWN:	isMouseDown = true;					break;
				case WM_LBUTTONUP:		isMouseDown = false;				break;
			}
		}
		Rect r1;
			r1.x = 340;
			r1.y = 460;
			r1.w = 410;
			r1.h = 554;	
			if(IsInRect(mouseX, mouseY, r1)) 
			{
				//返回按键响应
				if(isMouseDown)
				{
					isMouseDown=false;
				    main_menu1();
					pass1();
				}
			}
			else
			{
			    Rect r2;
				r2.x=85;
				r2.y=415;
				r2.w=150;
				r2.h=491;
				if (IsInRect(mouseX,mouseY,r2))
				{
				    if (isMouseDown)
					{
						isMouseDown=false;
					    main_menu2();
						pass2();
					}
				}
				else 
				{
				    Rect r3;
					r3.x=195;
				    r3.y=267;
			    	r3.w=265;
				    r3.h=360;
                    if (IsInRect(mouseX,mouseY,r3))
					{
				        if (isMouseDown)
						{
							isMouseDown=false;
						    main_menu3();
							pass3();
						}
					}
					else
					{
					    Rect r4;
					    r4.x=420;
				        r4.y=173;
			    	    r4.w=483;
				        r4.h=255;
						if (IsInRect(mouseX,mouseY,r4))
						{
						    if (isMouseDown)
							{
								isMouseDown=false;
							    main_menu4();
								pass4();
							}
						}
						else 
						{
						    Rect r5;
					        r5.x=138;
				            r5.y=86;
			    	        r5.w=259;
				            r5.h=205;
							if (IsInRect(mouseX,mouseY,r5))
							{
							    if (isMouseDown)
								{
									isMouseDown=false;
								    main_menu5();
									pass5();
								}
							}
							else
							{
							    Rect rBack;
								rBack.x=73;
								rBack.y=96;
								rBack.w=117;
								rBack.h=139;
								if (IsInRect(mouseX,mouseY,rBack))
								{
								    if (isMouseDown)
									{
										isMouseDown=false;
									    IMAGE img0;
	                                    loadimage(&img0,"界面\\001.jpg");
	                                    putimage(0,0,&img0);
                                        menu();
									}
								}
								else
								{
									if (0<temp&&pass[2][4]!=0)
									{
									    Rect r41;
									    r41.x=744;
									    r41.y=104;
									    r41.w=r41.x+75;
									    r41.h=r41.y+23;
									    if (IsInRect(mouseX,mouseY,r41))
										{
									        if (isMouseDown)
											{
											    isMouseDown=false;										        
												Game4_1();
											}
										}
										else 
										{
											if (1<temp)
											{
											    Rect r42;
										        r42.x=744;
										        r42.y=199;
										        r42.w=r42.x+75;
										        r42.h=r42.y+23;
										        if (IsInRect(mouseX,mouseY,r42))
												{
									                if (isMouseDown)
													{
												        isMouseDown=false;
														Game4_2();
													}
												}
												else
												{
													if (2<temp)
													{
													    Rect r43;
											            r43.x=744;
											            r43.y=292;
											            r43.w=r43.x+75;
											            r43.h=r43.y+23;
											            if (IsInRect(mouseX,mouseY,r43))
														{
									                        if (isMouseDown)
															{
													            isMouseDown=false;
																Game4_3();
															}
														}
														else
														{
															if (3<temp)
															{
															    Rect r44;
												                r44.x=744;
												                r44.y=388;
												                r44.w=r44.x+75;
												                r44.h=r44.y+23;
												                if (IsInRect(mouseX,mouseY,r44))
																{
									                                if (isMouseDown)
																	{
														                isMouseDown=false;
																		Game4_4();
																	}
																}
																else
																{
																	if (4<temp)
																	{
																	    Rect r45;
													                    r45.x=744;
													                    r45.y=485;
													                    r45.w=r45.x+75;
													                    r45.h=r45.y+23;
													                    if (IsInRect(mouseX,mouseY,r45))
																		{
									                                        if (isMouseDown)
																			{
															                    isMouseDown=false;
																				Game4_5();
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
	}
}
void pass5()
{
	int temp=0;
	int a,b,c;
	mciSendString("close mymusic2",NULL,0,NULL);
	char test[1];
	int num;
	for (a=0;a<5;a++)
	{
	    temp++;
		if (pass[4][a]==0)
			break;
	}
    while (true)
	{
	    while(MouseHit())
		{
			mmsg = GetMouseMsg();
			switch(mmsg.uMsg)
			{
				case WM_MOUSEMOVE:		mouseX = mmsg.x; mouseY = mmsg.y;	break;
				case WM_LBUTTONDOWN:	isMouseDown = true;					break;
				case WM_LBUTTONUP:		isMouseDown = false;				break;
			}
		}
		Rect r1;
			r1.x = 340;
			r1.y = 460;
			r1.w = 410;
			r1.h = 554;	
			if(IsInRect(mouseX, mouseY, r1)) 
			{
				//返回按键响应
				if(isMouseDown)
				{
					isMouseDown=false;
				    main_menu1();
					pass1();
				}
			}
			else
			{
			    Rect r2;
				r2.x=85;
				r2.y=415;
				r2.w=150;
				r2.h=491;
				if (IsInRect(mouseX,mouseY,r2))
				{
				    if (isMouseDown)
					{
						isMouseDown=false;
					    main_menu2();
						pass2();
					}
				}
				else 
				{
				    Rect r3;
					r3.x=195;
				    r3.y=267;
			    	r3.w=265;
				    r3.h=360;
                    if (IsInRect(mouseX,mouseY,r3))
					{
				        if (isMouseDown)
						{
							isMouseDown=false;
						    main_menu3();
							pass3();
						}
					}
					else
					{
					    Rect r4;
					    r4.x=420;
				        r4.y=173;
			    	    r4.w=483;
				        r4.h=255;
						if (IsInRect(mouseX,mouseY,r4))
						{
						    if (isMouseDown)
							{
								isMouseDown=false;
							    main_menu4();
								pass4();
							}
						}
						else 
						{
						    Rect r5;
					        r5.x=138;
				            r5.y=86;
			    	        r5.w=259;
				            r5.h=205;
							if (IsInRect(mouseX,mouseY,r5))
							{
							    if (isMouseDown)
								{
									isMouseDown=false;
								    main_menu5();
									pass5();
								}
							}
							else
							{
							    Rect rBack;
								rBack.x=73;
								rBack.y=96;
								rBack.w=117;
								rBack.h=139;
								if (IsInRect(mouseX,mouseY,rBack))
								{
								    if (isMouseDown)
									{
										isMouseDown=false;
									    IMAGE img0;
	                                    loadimage(&img0,"界面\\001.jpg");
	                                    putimage(0,0,&img0);
                                        menu();
									}
								}
								else
								{
									if (0<temp&&pass[3][4]!=0)
									{
									    Rect r51;
									    r51.x=744;
								    	r51.y=104;
									    r51.w=r51.x+75;
									    r51.h=r51.y+23;
									    if (IsInRect(mouseX,mouseY,r51))
										{
									        if (isMouseDown)
											{
											    isMouseDown=false;
												Game5_1();
											}
										}
										else 
										{
											if (1<temp)
											{
											    Rect r52;
										        r52.x=744;
										        r52.y=199;
										        r52.w=r52.x+75;
										        r52.h=r52.y+23;
										        if (IsInRect(mouseX,mouseY,r52))
												{
									                if (isMouseDown)
													{
												        isMouseDown=false;
														Game5_2();
													}
												}
												else
												{
													if (2<temp)
													{
													    Rect r53;
											            r53.x=744;
											            r53.y=292;
											            r53.w=r53.x+75;
											            r53.h=r53.y+23;
											            if (IsInRect(mouseX,mouseY,r53))
														{
									                        if (isMouseDown)
															{
													            isMouseDown=false;
																Game5_3();
															}
														}
														else
														{
															if (3<temp)
															{
															    Rect r54;
												                r54.x=744;
												                r54.y=388;
												                r54.w=r54.x+75;
												                r54.h=r54.y+23;
												                if (IsInRect(mouseX,mouseY,r54))
																{
									                                if (isMouseDown)
																	{
														                isMouseDown=false;
																		Game5_4();
																	}
																}
																else
																{
																	if (4<temp)
																	{
																	    Rect r55;
													                    r55.x=744;
													                    r55.y=485;
													                    r55.w=r55.x+75;
													                    r55.h=r55.y+23;
													                    if (IsInRect(mouseX,mouseY,r55))
																		{
									                                        if (isMouseDown)
																			{
															                    isMouseDown=false;
																				Game5_5();
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
	}
}
void set()
{
    IMAGE img;
	if (temp_music[0]==1&&temp_music[1]==1)
	{
	    loadimage(&img,"界面\\set1.jpg");
	    putimage(0,0,&img);
	}
	if (temp_music[0]==1&&temp_music[1]==0)
	{
	    loadimage(&img,"界面\\set2.jpg");
	    putimage(0,0,&img);
	}
	if (temp_music[0]==0&&temp_music[1]==1)
	{
	    loadimage(&img,"界面\\set3.jpg");
	    putimage(0,0,&img);
	}
	if (temp_music[0]==0&&temp_music[1]==0)
	{
	    loadimage(&img,"界面\\set4.jpg");
	    putimage(0,0,&img);
	}
	set_choose();
}


void Game1_1 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
    if(bgmusic==1)
	{
        mciSendString("open music//1.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
	}
	direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count2_2=0;
	count3_2=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
	N=5;
    t0=0;

	//在此处修改
    food1_1=10;food1_2=15;food1_3=20;
    food2_1=2;food2_2=3;food2_3=4;
    food3_1=0;food3_2=1;food3_3=1;
	//
    food_x1=10;food_y1=10;
	food_x2=12;food_y2=19;
	food_x3=13;food_y3=19;
	door_x=1;door_y=1;
	//
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    int gameover=0;
	int a=0;
	 Black1_1();
     Gainpicture();
     while(1)
	 {
		 cin.clear();
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
			 }
			cin.clear();
		 }
		 Snakemove();
		 if(Snake_judge1_1()==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_1_1();
		       Add_food_2_1_1();
		       Add_food_3_1_1();
               a=customs_pass_1_1();
			    if(a!=0)
				   break;

			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
	 {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL); 
	 }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[0][0])
		 {
			 pass[0][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
         char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass1();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[0][0])
		 {
			 pass[0][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass1();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[0][0])
		 {
			 pass[0][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass1();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==0)
	 {
		 star_judge=0;
		 if (star_judge>pass[0][0])
		 {
			 pass[0][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 if(a==0)
		 {
	         putimage(0,0,&img4);
			 if(bgmusic==1)
			 {
			      mciSendString("close mymusic1",NULL,0,NULL);
		          mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		          mciSendString("play mymusic3",NULL,0,NULL); 
			 }
		 }
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu1();
		 pass1();
	 }
}


void Game1_2 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
	{
        mciSendString("open music//2.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
	}
    direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count2_2=0;
	count3_2=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
	N=5;
    t0=0;
	//在此处修改
    food1_1=15;food1_2=20;food1_3=25;
    food2_1=2;food2_2=3;food2_3=5;
    food3_1=0;food3_2=1;food3_3=1;
	//
    food_x1=10;food_y1=10;
	food_x2=12;food_y2=19;
	food_x3=13;food_y3=19;
	door_x=14;door_y=19;
	//
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    int gameover=0;
	int a=0;
	 Black1_2();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge1_2()==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_1_2();
		       Add_food_2_1_2();
		       Add_food_3_1_2();
               a=customs_pass_1_2();
			    if(a!=0)
				   break;

			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		    mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
	 {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
	 }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[0][1])
		 {
			 pass[0][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass1();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[0][1])
		 {
			 pass[0][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass1();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[0][1])
		 {
			 pass[0][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass1();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==0)
	 {
		 star_judge=0;
		 if (star_judge>pass[0][1])
		 {
			 pass[0][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 if(bgmusic==1)
		 {
			 mciSendString("close mymusic1",NULL,0,NULL);
		     mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		     mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		 putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu1();
		 pass1();
	 }
}


void Game1_3 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
    {
        mciSendString("open music//1.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
	direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count2_2=0;
	count3_2=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
	N=5;
    t0=0;
	//在此处修改
    food1_1=20;food1_2=25;food1_3=30;
    food2_1=4;food2_2=6;food2_3=8;
    food3_1=1;food3_2=2;food3_3=2;

    food_x1=10;food_y1=11;
	food_x2=12;food_y2=19;
	food_x3=13;food_y3=19;
	door_x=14;door_y=19;

	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    int gameover=0;
	int a=0;
	 Black1_3();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge1_3()==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_1_3();
		       Add_food_2_1_3();
		       Add_food_3_1_3();
               a=customs_pass_1_3();
			    if(a!=0)
				   break;

			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		    mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
      if(a!=0&&bgmusic==1)
	  {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
	  }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[0][2])
		 {
			 pass[0][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass1();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[0][2])
		 {
			 pass[0][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass1();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[0][2])
		 {
			 pass[0][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass1();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==0)
	 {
		 star_judge=0;
		 if(bgmusic==1)
		 {
	         mciSendString("close mymusic1",NULL,0,NULL);
	         mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	         mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		 if (star_judge>pass[0][2])
		 {
			 pass[0][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
	     putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu1();
		 pass1();
	 }
}


void Game1_4 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
    {
        mciSendString("open music//2.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
	direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count2_2=0;
	count3_2=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
	N=5;
    t0=0;
	//在此处修改
    food1_1=25;food1_2=35;food1_3=40;
    food2_1=7;food2_2=10;food2_3=11;
    food3_1=2;food3_2=2;food3_3=3;
	//
    food_x1=10;food_y1=10;
	food_x2=12;food_y2=19;
	food_x3=13;food_y3=19;
	door_x=14;door_y=19;
	//
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    int gameover=0;
	int a=0;
	 Black1_4();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge1_4()==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_1_4();
		       Add_food_2_1_4();
		       Add_food_3_1_4();
               a=customs_pass_1_4();
			    if(a!=0)
				   break;

			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		    mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
	 {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[0][3])
		 {
			 pass[0][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d               X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,16*UNIT, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass1();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[0][3])
		 {
			 pass[0][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass1();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[0][3])
		 {
			 pass[0][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass1();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==0)
	 {
		 star_judge=0;
		 if(bgmusic==1)
		{
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		 if (star_judge>pass[0][3])
		 {
			 pass[0][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
	     putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu1();
		 pass1();
	 }
}


void Game1_5 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
    {
        mciSendString("open music//1.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
		direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count2_2=0;
	count3_2=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
	N=5;
    t0=0;
	//在此处修改
    food1_1=30;food1_2=40;food1_3=45;
    food2_1=7;food2_2=10;food2_3=12;
    food3_1=2;food3_2=2;food3_3=3;
	//
    food_x1=10;food_y1=10;
	food_x2=12;food_y2=19;
	food_x3=13;food_y3=19;
	door_x=14;door_y=19;
	//
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    int gameover=0;
	int a=0;
	 Black1_5();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge1_5()==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_1_5();
		       Add_food_2_1_5();
		       Add_food_3_1_5();
               a=customs_pass_1_5();
			    if(a!=0)
				   break;

			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		    mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
	 {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[0][4])
		 {
			 pass[0][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass1();
	//	 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[0][4])
		 {
			 pass[0][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
//		 mciSendString("close mymusic2",NULL,0,NULL);
		 back_pass1();
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[0][4])
		 {
			 pass[0][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
         char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass1();
		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==0)
	 {
		 star_judge=0;
		 if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		 if (star_judge>pass[0][4])
		 {
			 pass[0][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
	     putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu1();
		 pass1();
	 }
}


void Game2_1()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}	
	if(bgmusic==1)
    {
        mciSendString("open music//2.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
		direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool5=1;
	bool6=1;
	bool7=0;
	bool8=0;
	props_x=2;
	props_y=2;
    N=5;
	//在此处修改
    food1_1=20;food1_2=30;food1_3=35;
    food2_1=5;food2_2=6;food2_3=8;
    food3_1=1;food3_2=2;food3_3=2;
    food_x1=10;food_y1=8;
    food_x2=12;food_y2=19;
	food_x3=13;food_y3=20;
	door_x=8;door_y=8;
	//
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    t0=0;
    int gameover=0;
	int a=0,b=0;
	 Black2_1();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge2_1()==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_2_1();
		       Add_food_2_2_1();
		       Add_food_3_2_1();
               product_props2_1();
               a=customs_pass_2_1();
			     if(a!=0)
				   break;
			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		    mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[1][0])
		 {
			 pass[1][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
//		 mciSendString("close mymusic2",NULL,0,NULL);
		 back_pass2();
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[1][0])
		 {
			 pass[1][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass2();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[1][0])
		 {
			 pass[1][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
//		 mciSendString("close mymusic2",NULL,0,NULL);
		 back_pass2();
	 }
	 if(a==0)
	 {
	     star_judge=0;
		 if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		 if (star_judge>pass[1][0])
		 {
			 pass[1][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu2();
		 pass2();
	 }
}


void Game2_2 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}	
    if(bgmusic==1)
    {
        mciSendString("open music//1.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
    direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool5=1;
	bool6=1;
	bool7=0;
	bool8=0;
	props_x=2;
	props_y=2;
   N=5;
	//在此处修改
    food1_1=25;food1_2=35;food1_3=40;
    food2_1=6;food2_2=7;food2_3=10;
    food3_1=1;food3_2=2;food3_3=2;
    food_x1=10;food_y1=10;
    food_x2=12;food_y2=19;
	food_x3=13;food_y3=20;
    door_x=8;door_y=8;
	//
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    t0=0;
    int gameover=0;
	int a=0,b=0;
	 Black2_2();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge2_2()==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_2_2();
		       Add_food_2_2_2();
		       Add_food_3_2_2();
               product_props2_2();
               a=customs_pass_2_2();
			     if(a!=0)
				   break;
			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[1][1])
		 {
			 pass[1][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
         char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass2();
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[1][1])
		 {
			 pass[1][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass2();
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[1][1])
		 {
			 pass[1][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass2();
	 }
	 if(a==0)
	 {
	     star_judge=0;
		 if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		 if (star_judge>pass[1][1])
		 {
			 pass[1][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu2();
		 pass2();
	 }
}



void Game2_3 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}	
	if(bgmusic==1)
    {
        mciSendString("open music//2.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
		direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool5=1;
	bool6=1;
	bool7=0;
	bool8=0;
	props_x=2;
	props_y=2;
   N=5;
	//在此处修改
    food1_1=30;food1_2=35;food1_3=40;
    food2_1=8;food2_2=8;food2_3=12;
    food3_1=1;food3_2=2;food3_3=3;
    food_x1=10;food_y1=10;
    food_x2=12;food_y2=16;
	food_x3=13;food_y3=20;
		door_x=8;door_y=13;
	//
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    t0=0;
    int gameover=0;
	int a=0,b=0;
	 Black2_3();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge2_3()==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_2_3();
		       Add_food_2_2_3();
		       Add_food_3_2_3();
               product_props2_3();
               a=customs_pass_2_3();
			     if(a!=0)
				   break;
			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[1][2])
		 {
			 pass[1][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
//		 mciSendString("close mymusic2",NULL,0,NULL);
		 back_pass2();
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[1][2])
		 {
			 pass[1][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass2();
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[1][2])
		 {
			 pass[1][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
//		 mciSendString("close mymusic2",NULL,0,NULL);
		 back_pass2();
	 }
	 if(a==0)
	 {
	     star_judge=0;
		 if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		 if (star_judge>pass[1][2])
		 {
			 pass[1][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu2();
		 pass2();
	 }
}



void Game2_4 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
    {
        mciSendString("open music//1.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
	
	direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool5=1;
	bool6=1;
	bool7=0;
	bool8=0;
	props_x=2;
	props_y=2;
   N=5;
	//在此处修改
    food1_1=35;food1_2=45;food1_3=50;
    food2_1=9;food2_2=12;food2_3=16;
    food3_1=2;food3_2=3;food3_3=5;
    food_x1=10;food_y1=10;
    food_x2=12;food_y2=15;
	food_x3=14;food_y3=19;
		door_x=8;door_y=8;
	//
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    t0=0;
    int gameover=0;
	int a=0,b=0;
	 Black2_4();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge2_4()==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_2_4();
		       Add_food_2_2_4();
		       Add_food_3_2_4();
               product_props2_4();
               a=customs_pass_2_4();
			     if(a!=0)
				   break;
			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2 from 0",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[1][3])
		 {
			 pass[1][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
//		 mciSendString("close mymusic2",NULL,0,NULL);
		 back_pass2();
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[1][3])
		 {
			 pass[1][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d               X%d                  X%d ",count1,count2,count3);
         outtextxy(13*UNIT,16*UNIT, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
//		 mciSendString("close mymusic2",NULL,0,NULL);
		 back_pass2();
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[1][3])
		 {
			 pass[1][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass2();
	 }
	 if(a==0)
	 {
	     star_judge=0;
		 if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		 if (star_judge>pass[1][3])
		 {
			 pass[1][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu2();
		 pass2();
	 }
}



void Game2_5 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}	
	if(bgmusic==1)
    {
        mciSendString("open music//2.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }

		direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool5=1;
	bool6=1;
	bool7=0;
	bool8=0;
	props_x=2;
	props_y=2;
   N=5;
	//在此处修改
    food1_1=40;food1_2=50;food1_3=55;
    food2_1=12;food2_2=15;food2_3=17;
    food3_1=3;food3_2=4;food3_3=5;
    food_x1=10;food_y1=10;
    food_x2=12;food_y2=19;
	food_x3=13;food_y3=20;
		door_x=8;door_y=8;
	//
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    t0=0;
    int gameover=0;
	int a=0,b=0;
	 Black2_5();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge2_5()==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_2_5();
		       Add_food_2_2_5();
		       Add_food_3_2_5();
               product_props2_5();
               a=customs_pass_2_5();
			     if(a!=0)
				   break;
			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[1][4])
		 {
			 pass[1][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
         char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass2();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[1][4])
		 {
			 pass[1][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass2();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[1][4])
		 {
			 pass[1][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass2();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==0)
	 {
	     star_judge=0;
		 if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		 if (star_judge>pass[1][4])
		 {
			 pass[1][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu2();
		 pass2();
	 }
}



void Game3_1 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
    {
        mciSendString("open music//1.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
	direction=4;	
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count1_3=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool3=0;//默认关闭
	bool4=0;//默认未集满
	bool5=1;
	N=5;
	t8=0;
	//在此处修改
    food1_1=20;food1_2=30;food1_3=40;
    food2_1=5;food2_2=7;food2_3=10;
    food3_1=1;food3_2=1;food3_3=3;
	//
    food_x1=10;food_y1=11;
	food_x2=12;food_y2=19;
	food_x3=13;food_y3=19;
	door_x=14;door_y=19;
    props_x=2;props_y=2;
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    t0=0;
    int gameover=0;
	int a=0;
	 Black3_1();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
				case 'r':bool3=1;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge3_1()==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_3_1();
		       Add_food_2_3_1();
		       Add_food_3_3_1();
		       Energy3_1();
               a=customs_pass_3_1();
			    if(a!=0)
				   break;

			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[2][0])
		 {
			 pass[2][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d               X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass3();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[2][0])
		 {
			 pass[2][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass3();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[2][0])
		 {
			 pass[2][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass3();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==0)
	 {
	     star_judge=0;
		 if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		 if (star_judge>pass[2][0])
		 {
			 pass[2][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu3();
		 pass3();
	 }
}



void Game3_2 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}	
	if(bgmusic==1)
    {
        mciSendString("open music//2.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
   direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count1_3=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool3=0;//默认关闭
	bool4=0;//默认未集满
	bool5=1;
	N=5;
	t8=0;
	//在此处修改
    food1_1=30;food1_2=35;food1_3=45;//
    food2_1=5;food2_2=6;food2_3=10;//
    food3_1=1;food3_2=2;food3_3=3;//
	//
    food_x1=10;food_y1=10;
	food_x2=12;food_y2=19;
	food_x3=12;food_y3=19;
	door_x=14;door_y=19;
    props_x=2;props_y=2;
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    t0=0;
    int gameover=0;
	int a=0;
	 Black3_2();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
				case 'r':bool3=1;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge3_2()==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_3_2();
		       Add_food_2_3_2();
		       Add_food_3_3_2();
		       Energy3_2();
               a=customs_pass_3_2();
			    if(a!=0)
				   break;

			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[2][1])
		 {
			 pass[2][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d              X%d                  X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass3();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[2][1])
		 {
			 pass[2][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass3();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[2][1])
		 {
			 pass[2][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass3();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==0)
	 {
	     star_judge=0;
		 if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		 if (star_judge>pass[2][1])
		 {
			 pass[2][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu3();
		 pass3();
	 }
}



void Game3_3 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
    {
        mciSendString("open music//1.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
		direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count1_3=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool3=0;//默认关闭
	bool4=0;//默认未集满
	bool5=1;
	N=5;
	t8=0;
	//在此处修改
    food1_1=35;food1_2=40;food1_3=45;//35
    food2_1=10;food2_2=13;food2_3=15;//10
    food3_1=2;food3_2=3;food3_3=4;//2
	//
    food_x1=10;food_y1=23;
	food_x2=10;food_y2=24;
	food_x3=8;food_y3=23;
	door_x=9;door_y=23;
    props_x=2;props_y=2;
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    t0=0;
    int gameover=0;
	int a=0;
	 Black3_3();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
				case 'r':bool3=1;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge3_3()==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_3_3();
		       Add_food_2_3_3();
		       Add_food_3_3_3();
		       Energy3_3();
               a=customs_pass_3_3();
			    if(a!=0)
				   break;

			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[2][2])
		 {
			 pass[2][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass3();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[2][2])
		 {
			 pass[2][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass3();
///		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[2][2])
		 {
			 pass[2][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass3();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==0)
	 {
	     star_judge=0;
		 if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		 if (star_judge>pass[2][2])
		 {
			 pass[2][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu3();
		 pass3();
	 }
}



void Game3_4 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}	
	if(bgmusic==1)
    {
        mciSendString("open music//2.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
	direction=4;	
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count1_3=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool3=0;//默认关闭
	bool4=0;//默认未集满
	bool5=1;
	N=5;
	t8=0;
	//在此处修改
    food1_1=40;food1_2=45;food1_3=50;//40
    food2_1=10;food2_2=15;food2_3=15;//10
    food3_1=2;food3_2=3;food3_3=5;//2
	//
    food_x1=10;food_y1=10;
	food_x2=12;food_y2=19;
	food_x3=13;food_y3=15;
	door_x=14;door_y=19;
    props_x=2;props_y=2;
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    t0=0;
    int gameover=0;
	int a=0;
	 Black3_4();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
				case 'r':bool3=1;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge3_4()==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_3_4();
		       Add_food_2_3_4();
		       Add_food_3_3_4();
		       Energy3_4();
               a=customs_pass_3_4();
			    if(a!=0)
				   break;

			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);

			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[2][3])
		 {
			 pass[2][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass3();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[2][3])
		 {
			 pass[2][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass3();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[2][3])
		 {
			 pass[2][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 back_pass3();
		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==0)
	 {
	     star_judge=0;
		 if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		 if (star_judge>pass[2][3])
		 {
			 pass[2][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu3();
		 pass3();
	 }
 }



void Game3_5 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
    {
        mciSendString("open music//1.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
	direction=4;	
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count1_3=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool3=0;//默认关闭
	bool4=0;//默认未集满
	bool5=1;
	N=5;
	t8=0;
	//在此处修改
    food1_1=45;food1_2=55;food1_3=60;//45
    food2_1=10;food2_2=15;food2_3=16;//10
    food3_1=3;food3_2=4;food3_3=5;//3
	//
    food_x1=10;food_y1=10;
	food_x2=12;food_y2=18;
	food_x3=13;food_y3=18;
	door_x=14;door_y=19;
    props_x=2;props_y=2;
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    t0=0;
    int gameover=0;
	int a=0;
	 Black3_5();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
				case 'r':bool3=1;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge3_5()==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_3_5();
		       Add_food_2_3_5();
		       Add_food_3_3_5();
		       Energy3_5();
               a=customs_pass_3_5();
			    if(a!=0)
				   break;

			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[2][4])
		 {
			 pass[2][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass3();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[2][4])
		 {
			 pass[2][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass3();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[2][4])
		 {
			 pass[2][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass3();
	//	 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==0)
	 {
	     star_judge=0;
		 if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		 if (star_judge>pass[2][4])
		 {
			 pass[2][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu3();
		 pass3();
	 }
}



void Game4_1 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
    {
        mciSendString("open music//2.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
		direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count1_3=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool3=0;//默认关闭
	bool4=0;//默认未集满
	bool5=1;
	bool6=1;
	bool7=0;
	bool8=0;
	N=5;
	t8=0;
	//在此处修改
    food1_1=30;food1_2=40;food1_3=45;//30
    food2_1=6;food2_2=6;food2_3=10;//6
    food3_1=1;food3_2=2;food3_3=3;//1
    food_x1=10;food_y1=10;
	food_x2=12;food_y2=18;
	food_x3=13;food_y3=18;
	door_x=14;door_y=18;
    props_x=2;props_y=2;
	landmine_x=4;landmine_y=5;

	//
    t0=0;
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    int gameover=0;
	int a=0,b=0;
	 Black4_1();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
				case 'r':bool3=1;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge4_1()==0&&b==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_4_1();
		       Add_food_2_4_1();
		       Add_food_3_4_1();
               product_props4_1();
		       Energy4_1();
               a=customs_pass_4_1();
			   b=random_landmine4_1();
			     if(a!=0)
				   break;
			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[3][0])
		 {
			 pass[3][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass4();
	//	 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[3][0])
		 {
			 pass[3][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass4();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[3][0])
		 {
			 pass[3][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass4();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==0)
	 {
	     star_judge=0;
		 if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		 if (star_judge>pass[3][0])
		 {
			 pass[3][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu4();
		 pass4();
	 }
}



void Game4_2 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
    {
        mciSendString("open music//1.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
		direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count1_3=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool3=0;//默认关闭
	bool4=0;//默认未集满
	bool5=1;
	bool6=1;
	bool7=0;
	bool8=0;
	N=5;
	t8=0;
	//在此处修改
    food1_1=35;food1_2=40;food1_3=45;
    food2_1=8;food2_2=10;food2_3=12;
    food3_1=2;food3_2=3;food3_3=3;
    food_x1=10;food_y1=10;
	food_x2=12;food_y2=18;
	food_x3=13;food_y3=18;
	door_x=14;door_y=19;
    props_x=2;props_y=2;
	landmine_x=4;landmine_y=5;
	//
    t0=0;
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    int gameover=0;
	int a=0,b=0;
	 Black4_2();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
				case 'r':bool3=1;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge4_2()==0&&b==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_4_2();
		       Add_food_2_4_2();
		       Add_food_3_4_2();
               product_props4_2();
		       Energy4_2();
               a=customs_pass_4_2();
			   b=random_landmine4_2();
			     if(a!=0)
				   break;
			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[3][1])
		 {
			 pass[3][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass4();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[3][1])
		 {
			 pass[3][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass4();
	//	 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[3][1])
		 {
			 pass[3][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass4();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==0)
	 {
	     star_judge=0;
		 if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3 from 0",NULL,0,NULL); 
		 }
		 if (star_judge>pass[3][1])
		 {
			 pass[3][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu4();
		 pass4();
	 }
}



void Game4_3 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
    {
        mciSendString("open music//2.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
		direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count1_3=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool3=0;//默认关闭
	bool4=0;//默认未集满
	bool5=1;
	bool6=1;
	bool7=0;
	bool8=0;
	N=5;
	t8=0;
	//在此处修改
    food1_1=40;food1_2=45;food1_3=50;//40
    food2_1=8;food2_2=10;food2_3=15;//8
    food3_1=2;food3_2=3;food3_3=4;//2
    food_x1=10;food_y1=8;
	food_x2=12;food_y2=18;
	food_x3=13;food_y3=18;
	door_x=14;door_y=19;
    props_x=2;props_y=2;
	landmine_x=4;landmine_y=5;
	//
    t0=0;
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    int gameover=0;
	int a=0,b=0;
	 Black4_3();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
				case 'r':bool3=1;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge4_3()==0&&b==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_4_3();
		       Add_food_2_4_3();
		       Add_food_3_4_3();
               product_props4_3();
		       Energy4_3();
               a=customs_pass_4_3();
			   b=random_landmine4_3();
			     if(a!=0)
				   break;
			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
        mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2 from 0",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[3][2])
		 {
			 pass[3][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass4();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[3][2])
		 {
			 pass[3][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass4();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[3][2])
		 {
			 pass[3][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass4();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==0)
	 {
	     star_judge=0;
		 if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3 from 0",NULL,0,NULL); 
		 }
		 if (star_judge>pass[3][2])
		 {
			 pass[3][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu4();
		 pass4();
	 }
}



void Game4_4 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
    {
        mciSendString("open music//2.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
		direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
count1_3=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool3=0;//默认关闭
	bool4=0;//默认未集满
	bool5=1;
	bool6=1;
	bool7=0;
	bool8=0;
	N=5;
	t8=0;
	//在此处修改
    food1_1=40;food1_2=45;food1_3=50;//40
    food2_1=10;food2_2=12;food2_3=15;//10
    food3_1=3;food3_2=4;food3_3=5;//3
    food_x1=10;food_y1=10;
	food_x2=12;food_y2=18;
	food_x3=14;food_y3=18;
	door_x=14;door_y=19;
    props_x=2;props_y=2;
	landmine_x=4;landmine_y=5;
	//
    t0=0;
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    int gameover=0;
	int a=0,b=0;
	 Black4_4();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
				case 'r':bool3=1;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge4_4()==0&&b==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_4_4();
		       Add_food_2_4_4();
		       Add_food_3_4_4();
               product_props4_4();
		       Energy4_4();
               a=customs_pass_4_4();
			   b=random_landmine4_4();
			     if(a!=0)
				   break;
			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[3][3])
		 {
			 pass[3][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass4();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[3][3])
		 {
			 pass[3][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass4();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[3][3])
		 {
			 pass[3][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass4();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==0)
	 {
	     star_judge=0;
		 if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3 from 0",NULL,0,NULL); 
		 }
		 if (star_judge>pass[3][3])
		 {
			 pass[3][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu4();
		 pass4();
	 }
}



void Game4_5 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
    {
        mciSendString("open music//2.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
	direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count1_3=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool3=0;//默认关闭
	bool4=0;//默认未集满
	bool5=1;
	bool6=1;
	bool7=0;
	bool8=0;
	N=5;
	t8=0;//初始化能量时间
	//在此处修改
    food1_1=45;food1_2=50;food1_3=55;//45
    food2_1=10;food2_2=15;food2_3=15;//10
    food3_1=3;food3_2=4;food3_3=5;//3
    food_x1=10;food_y1=10;
	food_x2=12;food_y2=18;
	food_x3=13;food_y3=18;
	door_x=14;door_y=19;
    props_x=2;props_y=2;
	landmine_x=4;landmine_y=5;
	//
    t0=0;
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    int gameover=0;
	int a=0,b=0;
	 Black4_5();
     Gainpicture();
     while(1)
	 {
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
				case 'r':bool3=1;break;
			 }
		 }
		 Snakemove();
		 if(Snake_judge4_5()==0&&b==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_4_5();
		       Add_food_2_4_5();
		       Add_food_3_4_5();
               product_props4_5();
		       Energy4_5();
               a=customs_pass_4_5();
			   b=random_landmine4_5();
			     if(a!=0)
				   break;
			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度
		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2 from 0",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[3][4])
		 {
			 pass[3][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass4();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[3][4])
		 {
			 pass[3][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
		 back_pass4();
//		 mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[3][4])
		 {
			 pass[3][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	     int seconds;
	     int min;
	     int hours;
	     char s[20];
	     seconds=difftime(t1,t_0);
         min=seconds/60;
	     seconds=seconds%60;
	     sprintf(s, "%d分%d秒",min,seconds);
         outtextxy(12*UNIT, 14*UNIT, s);
         putimage(12*20,16*20,&foods[0][0],SRCAND);
         putimage(12*20,16*20,&foods[0][1],SRCINVERT);
         putimage(16*20,16*20,&foods[1][0],SRCAND);
         putimage(16*20,16*20,&foods[1][1],SRCINVERT);
         putimage(20*20,16*20,&foods[2][0],SRCAND);
         putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	     char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);char t[60];//个人记录
	     sprintf(q, "%d分",count1*1+count2*5+count3*10);
         outtextxy(14*UNIT,18*UNIT, q);
		 back_pass4();
	 }
	 if(a==0)
	 {
	     star_judge=0;
		 if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3 from 0",NULL,0,NULL); 
		 }
		 if (star_judge>pass[3][4])
		 {
			 pass[3][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(0,0,&img4);
	     getch();
		 mciSendString("close mymusic3",NULL,0,NULL);
		 main_menu4();
		 pass4();
	 }
}



void Game5_1 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
    {
        mciSendString("open music//1.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
	direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count1_3=0;
	count2_2=0;
	count3_2=0;
	count=0;               
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool3=0;//默认关闭
	bool4=0;//默认未集满
	bool5=1;
	bool6=1;
	bool7=0;
	bool8=0;//第一把
	bool9=0;//设置门初始为关闭
	bool10=1;//第二把
	bool11=1;//第三把
	bool12=0;//第一把钥匙状态
	bool13=0;//第二把钥匙状态
	bool14=0;//第三把钥匙状态
	int c=0;
	N=5;
	t8=0;//初始化能量时间
	//5-1
	door_x1=0,door_y1=27;
	door_x2=0,door_y2=28;
    food1_1=10;food1_2=25;food1_3=30;
    food2_1=2;food2_2=3;food2_3=5;
    food3_1=0;food3_2=1;food3_3=1;
	//
      food_x1=10;food_y1=10;
	  food_x2=12;food_y2=19;
      food_x3=13;food_y3=19;
	  landmine_x=4;landmine_y=5;
    t0=0;
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    int gameover=0;
	int a=0,b=0;
	Black5_1();
    Gainpicture();
    while(1)
	{
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
				case 'r':bool3=1;break;   
			 }
		 }
		 Snakemove();
		 if((Snake_judge5_1())==0&&b==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_5_1();
		       Add_food_2_5_1();
		       Add_food_3_5_1();
               product_props5_1();
		       Energy5_1();
               a=customs_pass_5_1();
			   b=random_landmine5_1();
			   if(a!=0)
				   break;
			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度

		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[4][0])
		 {
			 pass[4][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	   int seconds;
	   int min;
	   int hours;
	   char s[20];
	   seconds=difftime(t1,t_0);
       min=seconds/60;
	   seconds=seconds%60;
	   sprintf(s, "%d分%d秒",min,seconds);
       outtextxy(12*UNIT, 14*UNIT, s);
       putimage(12*20,16*20,&foods[0][0],SRCAND);
       putimage(12*20,16*20,&foods[0][1],SRCINVERT);
       putimage(16*20,16*20,&foods[1][0],SRCAND);
       putimage(16*20,16*20,&foods[1][1],SRCINVERT);
       putimage(20*20,16*20,&foods[2][0],SRCAND);
       putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	   char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
	   char t[60];//个人记录
	   sprintf(q, "%d分",count1*1+count2*5+count3*10);
       outtextxy(14*UNIT,18*UNIT, q);
	   back_pass5();
//	   mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[4][0])
		 {
			 pass[4][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	   int seconds;
	   int min;
	   int hours;
	   char s[20];
	   seconds=difftime(t1,t_0);
       min=seconds/60;
	   seconds=seconds%60;
	   sprintf(s, "%d分%d秒",min,seconds);
       outtextxy(12*UNIT, 14*UNIT, s);
       putimage(12*20,16*20,&foods[0][0],SRCAND);
       putimage(12*20,16*20,&foods[0][1],SRCINVERT);
       putimage(16*20,16*20,&foods[1][0],SRCAND);
       putimage(16*20,16*20,&foods[1][1],SRCINVERT);
       putimage(20*20,16*20,&foods[2][0],SRCAND);
       putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	   char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
	   char t[60];//个人记录
	   sprintf(q, "%d分",count1*1+count2*5+count3*10);
       outtextxy(14*UNIT,18*UNIT, q);
	   back_pass5();
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[4][0])
		 {
			 pass[4][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	   int seconds;
	   int min;
	   int hours;
	   char s[20];
	   seconds=difftime(t1,t_0);
       min=seconds/60;
	   seconds=seconds%60;
	   sprintf(s, "%d分%d秒",min,seconds);
       outtextxy(12*UNIT, 14*UNIT, s);
       putimage(12*20,16*20,&foods[0][0],SRCAND);
       putimage(12*20,16*20,&foods[0][1],SRCINVERT);
       putimage(16*20,16*20,&foods[1][0],SRCAND);
       putimage(16*20,16*20,&foods[1][1],SRCINVERT);
       putimage(20*20,16*20,&foods[2][0],SRCAND);
       putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	   char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
	   char t[60];//个人记录
	   sprintf(q, "%d分",count1*1+count2*5+count3*10);
       outtextxy(14*UNIT,18*UNIT, q);
	   back_pass5();
//	   mciSendString("close mymusic2",NULL,0,NULL);
	 }
	if(a==0||a==4||b!=0)
	{
	    star_judge=0;
		if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		if (star_judge>pass[4][0])
		 {
			 pass[4][0]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		putimage(0,0,&img4);
	    getch();
		mciSendString("close mymusic3",NULL,0,NULL);
		main_menu5();
		pass5();
	}
}



void Game5_2 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
    {
        mciSendString("open music//2.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
	direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count1_3=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool3=0;//默认关闭
	bool4=0;//默认未集满
	bool5=1;
	bool6=1;
	bool7=0;
	bool8=0;//第一把
	bool9=0;//设置门初始为关闭
	bool10=1;//第二把
	bool11=1;//第三把
	bool12=0;//第一把钥匙状态
	bool13=0;//第二把钥匙状态
	bool14=0;//第三把钥匙状态
	int c=0;
	N=5;
	t8=0;//初始化能量时间
	//5-1
	door_x1=0,door_y1=14;
	door_x2=0,door_y2=15;
    food1_1=15;food1_2=25;food1_3=30;
    food2_1=3;food2_2=6;food2_3=8;
    food3_1=1;food3_2=1;food3_3=2;
	//
      food_x1=9;food_y1=9;
	  food_x2=12;food_y2=19;
      food_x3=14;food_y3=15;
	  landmine_x=4;landmine_y=5;
    t0=0;
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    int gameover=0;
	int a=0,b=0;
	Black5_2();
    Gainpicture();
    while(1)
	{
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
				case 'r':bool3=1;break;
			 }
		 }
		 Snakemove();
		 if((Snake_judge5_2())==0&&b==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_5_2();
		       Add_food_2_5_2();
		       Add_food_3_5_2();
               product_props5_2();
		       Energy5_2();
               a=customs_pass_5_2();
			   b=random_landmine5_2();
			   if(a!=0)
				   break;
			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度

		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2 from 0",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[4][1])
		 {
			 pass[4][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	   int seconds;
	   int min;
	   int hours;
	   char s[20];
	   seconds=difftime(t1,t_0);
       min=seconds/60;
	   seconds=seconds%60;
	   sprintf(s, "%d分%d秒",min,seconds);
       outtextxy(12*UNIT, 14*UNIT, s);
       putimage(12*20,16*20,&foods[0][0],SRCAND);
       putimage(12*20,16*20,&foods[0][1],SRCINVERT);
       putimage(16*20,16*20,&foods[1][0],SRCAND);
       putimage(16*20,16*20,&foods[1][1],SRCINVERT);
       putimage(20*20,16*20,&foods[2][0],SRCAND);
       putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	   char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
	   char t[60];//个人记录
	   sprintf(q, "%d分",count1*1+count2*5+count3*10);
       outtextxy(14*UNIT,18*UNIT, q);
	   back_pass5();
//	   mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[4][1])
		 {
			 pass[4][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	   int seconds;
	   int min;
	   int hours;
	   char s[20];
	   seconds=difftime(t1,t_0);
       min=seconds/60;
	   seconds=seconds%60;
	   sprintf(s, "%d分%d秒",min,seconds);
       outtextxy(12*UNIT, 14*UNIT, s);
       putimage(12*20,16*20,&foods[0][0],SRCAND);
       putimage(12*20,16*20,&foods[0][1],SRCINVERT);
       putimage(16*20,16*20,&foods[1][0],SRCAND);
       putimage(16*20,16*20,&foods[1][1],SRCINVERT);
       putimage(20*20,16*20,&foods[2][0],SRCAND);
       putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	   char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
	   char t[60];//个人记录
	   sprintf(q, "%d分",count1*1+count2*5+count3*10);
       outtextxy(14*UNIT,18*UNIT, q);
	   back_pass5();
//	   mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[4][1])
		 {
			 pass[4][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	   int seconds;
	   int min;
	   int hours;
	   char s[20];
	   seconds=difftime(t1,t_0);
       min=seconds/60;
	   seconds=seconds%60;
	   sprintf(s, "%d分%d秒",min,seconds);
       outtextxy(12*UNIT, 14*UNIT, s);
       putimage(12*20,16*20,&foods[0][0],SRCAND);
       putimage(12*20,16*20,&foods[0][1],SRCINVERT);
       putimage(16*20,16*20,&foods[1][0],SRCAND);
       putimage(16*20,16*20,&foods[1][1],SRCINVERT);
       putimage(20*20,16*20,&foods[2][0],SRCAND);
       putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	   char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
	   char t[60];//个人记录
	   sprintf(q, "%d分",count1*1+count2*5+count3*10);
       outtextxy(14*UNIT,18*UNIT, q);
	   back_pass5();
//	   mciSendString("close mymusic2",NULL,0,NULL);
	 }
	if(a==0||a==4||b!=0)
	{
	    star_judge=0;
		if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3 from 0",NULL,0,NULL); 
		 }
		if (star_judge>pass[4][1])
		 {
			 pass[4][1]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		putimage(0,0,&img4);
	    getch();
		mciSendString("close mymusic3",NULL,0,NULL);
		main_menu5();
		pass5();
	}
}



void Game5_3 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
    if(bgmusic==1)
    {
        mciSendString("open music//2.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
	direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count1_3=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool3=0;//默认关闭
	bool4=0;//默认未集满
	bool5=1;
	bool6=1;
	bool7=0;
	bool8=0;//第一把
	bool9=0;//设置门初始为关闭
	bool10=1;//第二把
	bool11=1;//第三把
	bool12=0;//第一把钥匙状态
	bool13=0;//第二把钥匙状态
	bool14=0;//第三把钥匙状态
	int c=0;
	N=5;
	t8=0;//初始化能量时间
	//5-3
	door_x1=13,door_y1=0;
	door_x2=14,door_y2=0;
    food1_1=25;food1_2=30;food1_3=35;
    food2_1=5;food2_2=6;food2_3=10;
    food3_1=1;food3_2=1;food3_3=3;
	//
      food_x1=9;food_y1=10;
	  food_x2=12;food_y2=18;
      food_x3=14;food_y3=13;
	  landmine_x=4;landmine_y=5;
    t0=0;
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    int gameover=0;
	int a=0,b=0;
	Black5_3();
    Gainpicture();
    while(1)
	{
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
				case 'r':bool3=1;break;
			 }
		 }
		 Snakemove();
		 if((Snake_judge5_3())==0&&b==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_5_3();
		       Add_food_2_5_3();
		       Add_food_3_5_3();
               product_props5_3();
		       Energy5_3();
               a=customs_pass_5_3();
			   b=random_landmine5_3();
			   if(a!=0)
				   break;
			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度

		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
		if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2 from 0",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[4][2])
		 {
			 pass[4][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	   int seconds;
	   int min;
	   int hours;
	   char s[20];
	   seconds=difftime(t1,t_0);
       min=seconds/60;
	   seconds=seconds%60;
	   sprintf(s, "%d分%d秒",min,seconds);
       outtextxy(12*UNIT, 14*UNIT, s);
       putimage(12*20,16*20,&foods[0][0],SRCAND);
       putimage(12*20,16*20,&foods[0][1],SRCINVERT);
       putimage(16*20,16*20,&foods[1][0],SRCAND);
       putimage(16*20,16*20,&foods[1][1],SRCINVERT);
       putimage(20*20,16*20,&foods[2][0],SRCAND);
       putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	   char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
	   char t[60];//个人记录
	   sprintf(q, "%d分",count1*1+count2*5+count3*10);
       outtextxy(14*UNIT,18*UNIT, q);
	   back_pass5();
//	   mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[4][2])
		 {
			 pass[4][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	   int seconds;
	   int min;
	   int hours;
	   char s[20];
	   seconds=difftime(t1,t_0);
       min=seconds/60;
	   seconds=seconds%60;
	   sprintf(s, "%d分%d秒",min,seconds);
       outtextxy(12*UNIT, 14*UNIT, s);
       putimage(12*20,16*20,&foods[0][0],SRCAND);
       putimage(12*20,16*20,&foods[0][1],SRCINVERT);
       putimage(16*20,16*20,&foods[1][0],SRCAND);
       putimage(16*20,16*20,&foods[1][1],SRCINVERT);
       putimage(20*20,16*20,&foods[2][0],SRCAND);
       putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	   char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
	   char t[60];//个人记录
	   sprintf(q, "%d分",count1*1+count2*5+count3*10);
       outtextxy(14*UNIT,18*UNIT, q);
	   back_pass5();
//	   mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[4][2])
		 {
			 pass[4][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	   int seconds;
	   int min;
	   int hours;
	   char s[20];
	   seconds=difftime(t1,t_0);
       min=seconds/60;
	   seconds=seconds%60;
	   sprintf(s, "%d分%d秒",min,seconds);
       outtextxy(12*UNIT, 14*UNIT, s);
       putimage(12*20,16*20,&foods[0][0],SRCAND);
       putimage(12*20,16*20,&foods[0][1],SRCINVERT);
       putimage(16*20,16*20,&foods[1][0],SRCAND);
       putimage(16*20,16*20,&foods[1][1],SRCINVERT);
       putimage(20*20,16*20,&foods[2][0],SRCAND);
       putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	   char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
	   char t[60];//个人记录
	   sprintf(q, "%d分",count1*1+count2*5+count3*10);
       outtextxy(14*UNIT,18*UNIT, q);
	   back_pass5();
//	   mciSendString("close mymusic2",NULL,0,NULL);
	 }
	if(a==0||a==4||b!=0)
	{
	    star_judge=0;
		if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3 from 0",NULL,0,NULL); 
		 }
		if (star_judge>pass[4][2])
		 {
			 pass[4][2]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		putimage(0,0,&img4);
	    getch();
		mciSendString("close mymusic3",NULL,0,NULL);
		main_menu5();
		pass5();
	}
}



void Game5_4 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
    {
        mciSendString("open music//2.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
	direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count1_3=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool3=0;//默认关闭
	bool4=0;//默认未集满
	bool5=1;
	bool6=1;
	bool7=0;
	bool8=0;//第一把
	bool9=0;//设置门初始为关闭
	bool10=1;//第二把
	bool11=1;//第三把
	bool12=0;//第一把钥匙状态
	bool13=0;//第二把钥匙状态
	bool14=0;//第三把钥匙状态
	int c=0;
	N=5;
	t8=0;//初始化能量时间
	//5-1
	door_x1=0,door_y1=24;
	door_x2=0,door_y2=25;
    food1_1=25;food1_2=30;food1_3=40;
    food2_1=6;food2_2=6;food2_3=10;
    food3_1=2;food3_2=2;food3_3=3;
	landmine_x=4;landmine_y=6;
	//
      food_x1=7;food_y1=10;
	  food_x2=12;food_y2=18;
      food_x3=14;food_y3=15;
    t0=0;
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    int gameover=0;
	int a=0,b=0;
	Black5_4();
    Gainpicture();
    while(1)
	{
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
				case 'r':bool3=1;break;
			 }
		 }
		 Snakemove();
		 if((Snake_judge5_4())==0&&b==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_5_4();
		       Add_food_2_5_4();
		       Add_food_3_5_4();
               product_props5_4();
		       Energy5_4();
               a=customs_pass_5_4();
			   b=random_landmine5_4();
			   if(a!=0)
				   break;
			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度

		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
		if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[4][3])
		 {
			 pass[4][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	   int seconds;
	   int min;
	   int hours;
	   char s[20];
	   seconds=difftime(t1,t_0);
       min=seconds/60;
	   seconds=seconds%60;
	   sprintf(s, "%d分%d秒",min,seconds);
       outtextxy(12*UNIT, 14*UNIT, s);
       putimage(12*20,16*20,&foods[0][0],SRCAND);
       putimage(12*20,16*20,&foods[0][1],SRCINVERT);
       putimage(16*20,16*20,&foods[1][0],SRCAND);
       putimage(16*20,16*20,&foods[1][1],SRCINVERT);
       putimage(20*20,16*20,&foods[2][0],SRCAND);
       putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	   char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
	   char t[60];//个人记录
	   sprintf(q, "%d分",count1*1+count2*5+count3*10);
       outtextxy(14*UNIT,18*UNIT, q);
	   back_pass5();
//	   mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[4][3])
		 {
			 pass[4][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	   int seconds;
	   int min;
	   int hours;
	   char s[20];
	   seconds=difftime(t1,t_0);
       min=seconds/60;
	   seconds=seconds%60;
	   sprintf(s, "%d分%d秒",min,seconds);
       outtextxy(12*UNIT, 14*UNIT, s);
       putimage(12*20,16*20,&foods[0][0],SRCAND);
       putimage(12*20,16*20,&foods[0][1],SRCINVERT);
       putimage(16*20,16*20,&foods[1][0],SRCAND);
       putimage(16*20,16*20,&foods[1][1],SRCINVERT);
       putimage(20*20,16*20,&foods[2][0],SRCAND);
       putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	   char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
	   char t[60];//个人记录
	   sprintf(q, "%d分",count1*1+count2*5+count3*10);
       outtextxy(14*UNIT,18*UNIT, q);
	   back_pass5();
//	   mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[4][3])
		 {
			 pass[4][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	   int seconds;
	   int min;
	   int hours;
	   char s[20];
	   seconds=difftime(t1,t_0);
       min=seconds/60;
	   seconds=seconds%60;
	   sprintf(s, "%d分%d秒",min,seconds);
       outtextxy(12*UNIT, 14*UNIT, s);
       putimage(12*20,16*20,&foods[0][0],SRCAND);
       putimage(12*20,16*20,&foods[0][1],SRCINVERT);
       putimage(16*20,16*20,&foods[1][0],SRCAND);
       putimage(16*20,16*20,&foods[1][1],SRCINVERT);
       putimage(20*20,16*20,&foods[2][0],SRCAND);
       putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	   char q[60];
	     sprintf(q, "X%d             X%d                  X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q); 
	   char t[60];//个人记录
	   sprintf(q, "%d分",count1*1+count2*5+count3*10);
       outtextxy(14*UNIT,18*UNIT, q);
	   back_pass5();
//	   mciSendString("close mymusic2",NULL,0,NULL);
	 }
	if(a==0||a==4||b!=0)
	{
	    star_judge=0;
		if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3 from 0",NULL,0,NULL); 
		 }
		if (star_judge>pass[4][3])
		 {
			 pass[4][3]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		putimage(0,0,&img4);
	    getch();
		mciSendString("close mymusic3",NULL,0,NULL);
		main_menu5();
		pass5();
	}
}



void Game5_5 ()
{
	snake_move_speed=200;//蛇身移动速度
	int star_judge;
	int temp1,temp2,temp3;
	time_t t_0;
	bool_k=0;
	if(bool_k==0)
	{
		t_0=time(NULL);
		bool_k=1;
	}
	if(bgmusic==1)
    {
        mciSendString("open music//1.mp3 alias mymusic1", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic1 repeat",NULL,0,NULL);
    }
	direction=4;
	count1=0;
	count2=0;
	count3=0;
	count1_1=0;
	count2_1=0;
	count1_2=0;
	count1_3=0;
	count2_2=0;
	count3_2=0;
	count=0;
	count_1=0;
	bool_p=1;
	bool_q=1;
	bool_t=0;
    boolw=0;
	bool2=0;
	bool3=0;//默认关闭
	bool4=0;//默认未集满
	bool5=1;
	bool6=1;
	bool7=0;
	bool8=0;//第一把
	bool9=0;//设置门初始为关闭
	bool10=1;//第二把
	bool11=1;//第三把
	bool12=0;//第一把钥匙状态
	bool13=0;//第二把钥匙状态
	bool14=0;//第三把钥匙状态
	int c=0;
	N=5;
	t8=0;//初始化能量时间
	//5-1
	door_x1=0,door_y1=1;
	door_x2=0,door_y2=2;
    food1_1=30;food1_2=30;food1_3=35;
    food2_1=8;food2_2=10;food2_3=10;
    food3_1=2;food3_2=2;food3_3=3;
	landmine_x=4;landmine_y=5;
	//
      food_x1=7;food_y1=10;
	  food_x2=12;food_y2=18;
      food_x3=14;food_y3=15;
    t0=0;
	for(int i=0;i<N;i++)
	{
         for(int j=0;j<3;j++)
		{
		          local_snake[i][j]=chushi_snake[i][j];
		}
	}//蛇身初始化
    int gameover=0;
	int a=0,b=0;
	Black5_5();
    Gainpicture();
    while(1)
	{
		 old_direction=direction;
	     for(int i=0;i<N;i++)
		 {
             for(int j=0;j<3;j++)
			 {
		          old_local_snake[i][j]=local_snake[i][j];
			 }
		 }
		 if(kbhit())
		 { 
			char m;//获取输入
			m=getch();
            m=tolower(m);//检查大小写
		    switch(m)
			{
			    case 'w':if(old_direction!=2)direction=1;break;
			    case 's':if(old_direction!=1)direction=2;break;
			    case 'a':if(old_direction!=4)direction=3;break;
			    case 'd':if(old_direction!=3)direction=4;break;
				case 'r':bool3=1;break;
			 }
		 }
		 Snakemove();
		 if((Snake_judge5_5())==0&&b==0)
		 {
		       putimage(0,0,&img);
		       Add_food_1_5_5();
		       Add_food_2_5_5();
		       Add_food_3_5_5();
               product_props5_5();
		       Energy5_5();
               a=customs_pass_5_5();
			   b=random_landmine5_5();
			   if(a!=0)
				   break;
			   for(int i=0;i<N;i++)
			   {
		         putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][0],SRCAND);
                 putimage(local_snake[i][0]*20,local_snake[i][1]*20,&snake[local_snake[i][2]][1],SRCINVERT);
			   }
		       Sleep(snake_move_speed);//蛇身移动速度

		 }
		 else
		 {
		     mciSendString("close mymusic1",NULL,0,NULL);
			 for(int i=0;i<N;i++)
			 {
		         Explode(old_local_snake[i][0],old_local_snake[i][1]);
			 }
			 mciSendString("close mymusic5",NULL,0,NULL);
			 break;
		 }
	 }
	 if(a!=0&&bgmusic==1)
     {
        mciSendString("close mymusic1",NULL,0,NULL);
		mciSendString("open music//win.mp3 alias mymusic2", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
		mciSendString("play mymusic2",NULL,0,NULL);   
     }
	 if(a==1)
	 {
		 star_judge=1;
		 if (star_judge>pass[4][4])
		 {
			 pass[4][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
         putimage(7*UNIT,1*UNIT,&p1_2,SRCINVERT);
		 time_t t1=time(NULL);
	   int seconds;
	   int min;
	   int hours;
	   char s[20];
	   seconds=difftime(t1,t_0);
       min=seconds/60;
	   seconds=seconds%60;
	   sprintf(s, "%d分%d秒",min,seconds);
       outtextxy(12*UNIT, 14*UNIT, s);
       putimage(12*20,16*20,&foods[0][0],SRCAND);
       putimage(12*20,16*20,&foods[0][1],SRCINVERT);
       putimage(16*20,16*20,&foods[1][0],SRCAND);
       putimage(16*20,16*20,&foods[1][1],SRCINVERT);
       putimage(20*20,16*20,&foods[2][0],SRCAND);
       putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	   char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
	   char t[60];//个人记录
	   sprintf(q, "%d分",count1*1+count2*5+count3*10);
       outtextxy(14*UNIT,18*UNIT, q);
	   back_pass5();
//	   mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==2)
	 {
		 star_judge=2;
		 if (star_judge>pass[4][4])
		 {
			 pass[4][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p2_2,SRCINVERT);
		 time_t t1=time(NULL);
	   int seconds;
	   int min;
	   int hours;
	   char s[20];
	   seconds=difftime(t1,t_0);
       min=seconds/60;
	   seconds=seconds%60;
	   sprintf(s, "%d分%d秒",min,seconds);
       outtextxy(12*UNIT, 14*UNIT, s);
       putimage(12*20,16*20,&foods[0][0],SRCAND);
       putimage(12*20,16*20,&foods[0][1],SRCINVERT);
       putimage(16*20,16*20,&foods[1][0],SRCAND);
       putimage(16*20,16*20,&foods[1][1],SRCINVERT);
       putimage(20*20,16*20,&foods[2][0],SRCAND);
       putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	   char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
	   char t[60];//个人记录
	   sprintf(q, "%d分",count1*1+count2*5+count3*10);
       outtextxy(14*UNIT,18*UNIT, q);
	   back_pass5();
//	   mciSendString("close mymusic2",NULL,0,NULL);
	 }
	 if(a==3)
	 {
		 star_judge=3;
		 if (star_judge>pass[4][4])
		 {
			 pass[4][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		 putimage(7*UNIT,1*UNIT,&p1_1,SRCAND);
		 putimage(7*UNIT,1*UNIT,&p3_2,SRCINVERT);
		 time_t t1=time(NULL);
	   int seconds;
	   int min;
	   int hours;
	   char s[20];
	   seconds=difftime(t1,t_0);
       min=seconds/60;
	   seconds=seconds%60;
	   sprintf(s, "%d分%d秒",min,seconds);
       outtextxy(12*UNIT, 14*UNIT, s);
       putimage(12*20,16*20,&foods[0][0],SRCAND);
       putimage(12*20,16*20,&foods[0][1],SRCINVERT);
       putimage(16*20,16*20,&foods[1][0],SRCAND);
       putimage(16*20,16*20,&foods[1][1],SRCINVERT);
       putimage(20*20,16*20,&foods[2][0],SRCAND);
       putimage(20*20,16*20,&foods[2][1],SRCINVERT);  
	   char q[60];
	     sprintf(q, "X%d             X%d                 X%d ",count1,count2,count3);
         outtextxy(13*UNIT,325, q);
	   char t[60];//个人记录
	   sprintf(q, "%d分",count1*1+count2*5+count3*10);
       outtextxy(14*UNIT,18*UNIT, q);
	   back_pass5();
//	   mciSendString("close mymusic2",NULL,0,NULL);
	 }
	if(a==0||a==4||b!=0)
	{
	    star_judge=0;
		if(bgmusic==1)
		 {
	       mciSendString("close mymusic1",NULL,0,NULL);
	       mciSendString("open music//lose.mp3 alias mymusic3", NULL, 0, NULL); //打开音乐文件 //播放音乐文件  
	       mciSendString("play mymusic3",NULL,0,NULL); 
		 }
		if (star_judge>pass[4][4])
		 {
			 pass[4][4]=star_judge;
			 temp3=0;
			 for (temp1=0;temp1<5;temp1++)
			 {
				 for (temp2=0;temp2<5;temp2++)
				 {
					 star[temp3]=pass[temp1][temp2];
					 temp3++;
				 }					
			 }
			 fstar=fopen("star.txt","w");
			 fwrite(star,sizeof(int),25,fstar);
			 fclose(fstar);
		 }
		putimage(0,0,&img4);
	    getch();
		mciSendString("close mymusic3",NULL,0,NULL);
		main_menu5();
		pass5();
	}
}


void Black1_1()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第一关\\m1.1.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black1_2 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第一关\\m1.2.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black1_3 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第一关\\m1.3.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black1_4 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第一关\\m1.4.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black1_5 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第一关\\m1.5.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}


void Black2_1 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第二关\\m2.1.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black2_2 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第二关\\m2.2.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black2_3 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第二关\\m2.3.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black2_4 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第二关\\m2.4.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black2_5 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第二关\\m2.5.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black3_1 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第三关\\m3.1.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black3_2 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第三关\\m3.2.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black3_3 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第三关\\m3.3.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black3_4 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第三关\\m3.4.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black3_5()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第三关\\m3.5.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black4_1 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第四关\\m4.1.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img8,"material\\t4.jpg");
	loadimage(&img8_1,"material\\t41.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black4_2 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第四关\\m4.2.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img8,"material\\t4.jpg");
	loadimage(&img8_1,"material\\t41.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black4_3 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第四关\\m4.3.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img8,"material\\t4.jpg");
	loadimage(&img8_1,"material\\t41.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black4_4()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第四关\\m4.4.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img8,"material\\t4.jpg");
	loadimage(&img8_1,"material\\t41.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black4_5 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第四关\\m4.5.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img8,"material\\t4.jpg");
	loadimage(&img8_1,"material\\t41.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}


void Black5_1()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第五关\\m5.1.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img8,"material\\t4.jpg");
	loadimage(&img8_1,"material\\t41.jpg");
	loadimage(&img9,"material\\mg0.jpg");
	loadimage(&img9_1,"material\\mg1.jpg");
	loadimage(&img10,"material\\mk0.jpg");
	loadimage(&img10_1,"material\\mk1.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black5_2()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第五关\\m5.2.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img8,"material\\t4.jpg");
	loadimage(&img8_1,"material\\t41.jpg");
	loadimage(&img9,"material\\mg0.jpg");
	loadimage(&img9_1,"material\\mg1.jpg");
	loadimage(&img10,"material\\mk0.jpg");
	loadimage(&img10_1,"material\\mk1.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black5_3()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第五关\\m5.3.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img8,"material\\t4.jpg");
	loadimage(&img8_1,"material\\t41.jpg");
	loadimage(&img9,"material\\mg0.jpg");
	loadimage(&img9_1,"material\\mg1.jpg");
	loadimage(&img10,"material\\mk0.jpg");
	loadimage(&img10_1,"material\\mk1.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black5_4()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第五关\\m5.4.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img8,"material\\t4.jpg");
	loadimage(&img8_1,"material\\t41.jpg");
	loadimage(&img9,"material\\mg0.jpg");
	loadimage(&img9_1,"material\\mg1.jpg");
	loadimage(&img10,"material\\mk0.jpg");
	loadimage(&img10_1,"material\\mk1.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}



void Black5_5 ()
{
    initgraph(900, 600);
    cleardevice();
	setbkmode(TRANSPARENT);
	loadimage(&img,"界面\\第五关\\m5.5.jpg");
    loadimage(&img1,"material\\20x20px.jpg");
	loadimage(&img3,"material\\t4-1.jpg");
	loadimage(&img5,"material\\t4-2.jpg");
	loadimage(&img4,"material\\t3.jpg");
	loadimage(&img8,"material\\t4.jpg");
	loadimage(&img8_1,"material\\t41.jpg");
	loadimage(&img9,"material\\mg0.jpg");
	loadimage(&img9_1,"material\\mg1.jpg");
	loadimage(&img10,"material\\mk0.jpg");
	loadimage(&img10_1,"material\\mk1.jpg");
	loadimage(&img6,"material\\food.jpg");
	loadimage(&img7,"material\\prop.jpg");
	loadimage(&p1_1,"界面\\弹框\\p1.1.jpg");
	loadimage(&p1_2,"界面\\弹框\\p1.2.jpg");
	loadimage(&p2_1,"界面\\弹框\\p2.1.jpg");
	loadimage(&p2_2,"界面\\弹框\\p2.2.jpg");
	loadimage(&p3_1,"界面\\弹框\\p3.1.jpg");
	loadimage(&p3_2,"界面\\弹框\\p3.2.jpg");
	loadimage(&p0,"界面\\弹框\\p0.jpg");
}


void Gainpicture()
{
	int i=0;
	SetWorkingImage(&img1);
	for(i=0;i<4;i++)
	{
		 getimage(&snake[i][1],i*UNIT,0,UNIT,20);
		 getimage(&snake[i][0],i*UNIT,20,UNIT,20);
	     getimage(&snake[i+4][1],i*UNIT,40,UNIT,20);
		 getimage(&snake[i+4][0],i*UNIT,60,UNIT,20);
		 getimage(&snake[i+8][1],i*UNIT,80,UNIT,20);
		 getimage(&snake[i+8][0],i*UNIT,100,UNIT,20);
	     getimage(&snake[i+12][1],i*UNIT,120,UNIT,20);
		 getimage(&snake[i+12][0],i*UNIT,140,UNIT,20);
	 }
    SetWorkingImage(NULL);
	SetWorkingImage(&img6);
	for(i=0;i<3;i++)
	{
		 getimage(&foods[i][1],i*UNIT,0,UNIT,20);
		 getimage(&foods[i][0],i*UNIT,20,UNIT,20);
	 }
    SetWorkingImage(NULL);
	SetWorkingImage(&img7);
	for(i=0;i<3;i++)
	{
		 getimage(&props[i][1],i*UNIT,0,UNIT,20);
		 getimage(&props[i][0],i*UNIT,20,UNIT,20);
	 }
    SetWorkingImage(NULL);
}



void Snakemove()
{
	for(int i=N-1;i>0;i--)//蛇各项赋值
	{
        for(int j=0;j<3;j++)
		{
		    local_snake[i][j]=local_snake[i-1][j];
		}
	}
    Snake_head();//蛇头修改
    Snake_second();//蛇第二节修改
	Snake_tail();
}



void  Explode(int x,int y)
{
	IMAGE temp;
	if(bgmusic_effect==1)
	{
		mciSendString("open music//地雷1.mp3 alias mymusic5", NULL, 0, NULL);
        mciSendString("play mymusic5 from 0",NULL,0,NULL);
	}
	SetWorkingImage(&img);
	{
		getimage(&temp,x*20,y*20,UNIT,UNIT);
	}
	SetWorkingImage(NULL);
	putimage(x*20,y*20,&img5,SRCAND);
	putimage(x*20,y*20,&img3,SRCINVERT);
			 Sleep(snake_miss_speed);
	putimage(x*20,y*20,&temp);
}


void Add_food_1_1_1()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   foodexit=0;
	   Add_snake();
	   while(foodexit==0)
	  {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide1_1(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   if(count1_1>=3)
	       count1_1=3;
   }
   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_1_2()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   foodexit=0;
	   Add_snake();
	   while(foodexit==0)
	  {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide1_2(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_1_3()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   Add_snake();
	   while(foodexit==0)
	  {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide1_3(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_1_4()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
       if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   Add_snake();
	   while(foodexit==0)
	  {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide1_4(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_1_5()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   Add_snake();
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   while(foodexit==0)
	  {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide1_5(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}


void Add_food_1_2_1()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide2_1(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count_1++;
	   count1_2++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_2_2()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide2_2(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count_1++;
	   count1_2++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_2_3()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide2_3(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count_1++;
	   count1_2++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_2_4()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide2_4(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count_1++;
	   count1_2++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_2_5()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide2_5(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count_1++;
	   count1_2++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_3_1()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(difftime(t9,t8)<=20)
   {
	   	 char q[30];
	     sprintf(q,"能量时刻剩余%.1fs",20-difftime(t9,t8));
	     outtextxy(11.5*UNIT,3.5*UNIT,q);
   }
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide3_1(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count1_3++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_3_2()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(difftime(t9,t8)<=20)
   {
	   	 char q[30];
	     sprintf(q,"能量时刻剩余%.1fs",20-difftime(t9,t8));
	     outtextxy(11.5*UNIT,3.5*UNIT,q);
   }
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide3_2(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
       count1_3++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_3_3()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(difftime(t9,t8)<=20)
   {
	   	 char q[30];
	     sprintf(q,"能量时刻剩余%.1fs",20-difftime(t9,t8));
	     outtextxy(11.5*UNIT,3.5*UNIT,q);
   }
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide3_3(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count1_3++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_3_4()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(difftime(t9,t8)<=20)
   {
	   	 char q[30];
	     sprintf(q,"能量时刻剩余%.1fs",20-difftime(t9,t8));
	     outtextxy(11.5*UNIT,3.5*UNIT,q);
   }
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide3_4(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count1_3++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_3_5()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(difftime(t9,t8)<=20)
   {
	   	 char q[30];
	     sprintf(q,"能量时刻剩余%.1fs",20-difftime(t9,t8));
	     outtextxy(11.5*UNIT,3.5*UNIT,q);
   }
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide3_5(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count1_3++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_4_1()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(difftime(t9,t8)<=20)
   {
	   	 char q[30];
	     sprintf(q,"能量时刻剩余%.1fs",20-difftime(t9,t8));
	     outtextxy(11.5*UNIT,3.5*UNIT,q);
   }
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide4_1(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count_1++;
	   count1_3++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_4_2()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(difftime(t9,t8)<=20)
   {
	   	 char q[30];
	     sprintf(q,"能量时刻剩余%.1fs",20-difftime(t9,t8));
	     outtextxy(11.5*UNIT,3.5*UNIT,q);
   }
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide4_2(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count_1++;
	   count1_3++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_4_3()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(difftime(t9,t8)<=20)
   {
	   	 char q[30];
	     sprintf(q,"能量时刻剩余%.1fs",20-difftime(t9,t8));
	     outtextxy(11.5*UNIT,3.5*UNIT,q);
   }
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide4_3(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count_1++;
	   count1_3++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_4_4()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(difftime(t9,t8)<=20)
   {
	   	 char q[30];
	     sprintf(q,"能量时刻剩余%.1fs",20-difftime(t9,t8));
	     outtextxy(11.5*UNIT,3.5*UNIT,q);
   }
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide4_4(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count_1++;
	   count1_3++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_4_5()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(difftime(t9,t8)<=20)
   {
	   	 char q[30];
	     sprintf(q,"能量时刻剩余%.1fs",20-difftime(t9,t8));
	     outtextxy(11.5*UNIT,3.5*UNIT,q);
   }
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide4_5(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count_1++;
	   count1_3++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_5_1()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(difftime(t9,t8)<=20)
   {
	   	 char q[30];
	     sprintf(q,"能量时刻剩余%.1fs",20-difftime(t9,t8));
	     outtextxy(11.5*UNIT,3.5*UNIT,q);
   }
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide5_1(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count_1++;
	   count1_3++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_5_2()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(difftime(t9,t8)<=20)
   {
	   	 char q[30];
	     sprintf(q,"能量时刻剩余%.1fs",20-difftime(t9,t8));
	     outtextxy(11.5*UNIT,3.5*UNIT,q);
   }
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide5_2(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count_1++;
	   count1_3++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_5_3()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(difftime(t9,t8)<=20)
   {
	   	 char q[30];
	     sprintf(q,"能量时刻剩余%.1fs",20-difftime(t9,t8));
	     outtextxy(11.5*UNIT,3.5*UNIT,q);
   }
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide5_3(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count_1++;
	   count1_3++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_5_4()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(difftime(t9,t8)<=20)
   {
	   	 char q[30];
	     sprintf(q,"能量时刻剩余%.1fs",20-difftime(t9,t8));
	     outtextxy(11.5*UNIT,3.5*UNIT,q);
   }
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide5_4(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count_1++;
	   count1_3++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}



void Add_food_1_5_5()
{
   srand((int)time(0));
   int foodexit=1;
   char s[5];
   time_t t9=time(NULL);
   if(difftime(t9,t8)<=20)
   {
	   	 char q[30];
	     sprintf(q,"能量时刻剩余%.1fs",20-difftime(t9,t8));
	     outtextxy(11.5*UNIT,3.5*UNIT,q);
   }
   if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
   {
       foodexit=0;
	   if(bgmusic_effect==1)
	   {
		   mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
           mciSendString("play mymusic4 from 0",NULL,0,NULL);
	   }
	   if(difftime(t9,t8)>20)
	   {
	         Add_snake();
	   }
	   while(foodexit==0)
	   {
	       foodexit=1;
	       food_x1=rand()%28+1;
	       food_y1=rand()%28+1;
           foodexit=food_decide5_5(food_x1,food_y1,1);
	   }
	   count1++;
	   count1_1++;
	   count++;
	   count_1++;
	   count1_3++;
	   if(count1_1>=3)
	       count1_1=3;
   }


   if(foodexit==1)
   {
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][0],SRCAND);
       putimage(food_x1*UNIT,food_y1*UNIT,&foods[0][1],SRCINVERT);
	   sprintf(s, "X%2d",count1);
       outtextxy(33.5*UNIT, 18.5*UNIT, s);
   }
}


void Add_food_2_1_1()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT);   
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		                 mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                          mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide1_1(food_x2,food_y2,2);
				   }
        	       Add_snake();
			   	  count1_1=0;
				  count2++;
				  count2_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_1_2()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT);   
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide1_2(food_x2,food_y2,2);
				   }
        	       Add_snake();
			   	  count1_1=0;
				  count2++;
				  count2_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_1_3()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT);   
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide1_3(food_x2,food_y2,2);
				   }
        	       Add_snake();
			   	  count1_1=0;
				  count2++;
				  count2_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_1_4()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT);   
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide1_4(food_x2,food_y2,2);
				   }
        	       Add_snake();
			   	  count1_1=0;
				  count2++;
				  count2_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_1_5()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT);   
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide1_5(food_x2,food_y2,2);
				   }
        	       Add_snake();
			   	  count1_1=0;
				  count2++;
				  count2_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_2_1()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide2_1(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_2_2()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide2_2(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_2_3()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide2_3(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_2_4()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide2_4(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_2_5()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide2_5(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_3_1()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(difftime(t10,t8)<=20)
			{
	   	               char q[30];
	                   sprintf(q,"能量时刻剩余%.1fs",20-difftime(t10,t8));
	                   outtextxy(11.5*UNIT,3.5*UNIT,q);
			}
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide3_1(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_3_2()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(difftime(t10,t8)<=20)
			{
	   	               char q[30];
	                   sprintf(q,"能量时刻剩余%.1fs",20-difftime(t10,t8));
	                   outtextxy(11.5*UNIT,3.5*UNIT,q);
			}
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide3_2(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_3_3()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(difftime(t10,t8)<=20)
			{
	   	               char q[30];
	                   sprintf(q,"能量时刻剩余%.1fs",20-difftime(t10,t8));
	                   outtextxy(11.5*UNIT,3.5*UNIT,q);
			}
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide3_3(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_3_4()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(difftime(t10,t8)<=20)
			{
	   	               char q[30];
	                   sprintf(q,"能量时刻剩余%.1fs",20-difftime(t10,t8));
	                   outtextxy(11.5*UNIT,3.5*UNIT,q);
			}
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide3_4(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_3_5()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(difftime(t10,t8)<=20)
			{
	   	               char q[30];
	                   sprintf(q,"能量时刻剩余%.1fs",20-difftime(t10,t8));
	                   outtextxy(11.5*UNIT,3.5*UNIT,q);
			}
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide3_5(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_4_1()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(difftime(t10,t8)<=20)
			{
	   	               char q[30];
	                   sprintf(q,"能量时刻剩余%.1fs",20-difftime(t10,t8));
	                   outtextxy(11.5*UNIT,3.5*UNIT,q);
			}
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide4_1(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_4_2()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(difftime(t10,t8)<=20)
			{
	   	               char q[30];
	                   sprintf(q,"能量时刻剩余%.1fs",20-difftime(t10,t8));
	                   outtextxy(11.5*UNIT,3.5*UNIT,q);
			}
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide4_2(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}




void Add_food_2_4_3()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(difftime(t10,t8)<=20)
			{
	   	               char q[30];
	                   sprintf(q,"能量时刻剩余%.1fs",20-difftime(t10,t8));
	                   outtextxy(11.5*UNIT,3.5*UNIT,q);
			}
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				 if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide4_3(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}





void Add_food_2_4_4()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(difftime(t10,t8)<=20)
			{
	   	               char q[30];
	                   sprintf(q,"能量时刻剩余%.1fs",20-difftime(t10,t8));
	                   outtextxy(11.5*UNIT,3.5*UNIT,q);
			}
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide4_4(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}





void Add_food_2_4_5()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(difftime(t10,t8)<=20)
			{
	   	               char q[30];
	                   sprintf(q,"能量时刻剩余%.1fs",20-difftime(t10,t8));
	                   outtextxy(11.5*UNIT,3.5*UNIT,q);
			}
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide4_5(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}






void Add_food_2_5_1()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(difftime(t10,t8)<=20)
			{
	   	               char q[30];
	                   sprintf(q,"能量时刻剩余%.1fs",20-difftime(t10,t8));
	                   outtextxy(11.5*UNIT,3.5*UNIT,q);
			}
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide5_1(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_5_2()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(difftime(t10,t8)<=20)
			{
	   	               char q[30];
	                   sprintf(q,"能量时刻剩余%.1fs",20-difftime(t10,t8));
	                   outtextxy(11.5*UNIT,3.5*UNIT,q);
			}
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide5_2(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}


void Add_food_2_5_3()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(difftime(t10,t8)<=20)
			{
	   	               char q[30];
	                   sprintf(q,"能量时刻剩余%.1fs",20-difftime(t10,t8));
	                   outtextxy(11.5*UNIT,3.5*UNIT,q);
			}
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide5_3(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_5_4()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(difftime(t10,t8)<=20)
			{
	   	               char q[30];
	                   sprintf(q,"能量时刻剩余%.1fs",20-difftime(t10,t8));
	                   outtextxy(11.5*UNIT,3.5*UNIT,q);
			}
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide5_4(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}



void Add_food_2_5_5()
{
    	char s[5];
		int foodexit=0;
		srand((int)time(0));
		time_t t10=time(NULL);
        if(count1_1==3)
		 {
		     putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][0],SRCAND);
             putimage(food_x2*UNIT,food_y2*UNIT,&foods[1][1],SRCINVERT); 
			 if(difftime(t10,t8)<=20)
			{
	   	               char q[30];
	                   sprintf(q,"能量时刻剩余%.1fs",20-difftime(t10,t8));
	                   outtextxy(11.5*UNIT,3.5*UNIT,q);
			}
			 if(local_snake[0][0]==food_x2&&local_snake[0][1]==food_y2)
			  {
				  foodexit=0;
				  if(bgmusic_effect==1)
				  {
		              mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                      mciSendString("play mymusic4 from 0",NULL,0,NULL);
				  }
				   while(foodexit==0)
				   {
	                  foodexit=1;
	                  food_x2=rand()%28+1;
	                  food_y2=rand()%28+1;
                      foodexit=food_decide5_5(food_x2,food_y2,2);
				   }
        	        if(difftime(t10,t8)>20)
				   {
	                  Add_snake();
				   }
				  count1_1=0;
				  count2++;
				  count2_1++;
				  count++;
				  count_1++;
	             if(count2_1>=3)
	                 count2_1=3;
			 }
		 }
         sprintf(s, "X%2d",count2);
         outtextxy(37.5*UNIT,18.5*UNIT,s);
}


void Add_food_3_1_1()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  Add_snake();
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide1_1(food_x3,food_y3,3);
			  }
	           count3++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}




void Add_food_3_1_2()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  Add_snake();
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide1_2(food_x3,food_y3,3);
			  }
	           count3++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_1_3()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  Add_snake();
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide1_3(food_x3,food_y3,3);
			  }
	           count3++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_1_4()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  Add_snake();
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide1_4(food_x3,food_y3,3);
			  }
	           count3++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_1_5()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  Add_snake();
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide1_5(food_x3,food_y3,3);
			  }
	           count3++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_2_1()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide2_1(food_x3,food_y3,3);
			  }
	           count3++;
			   count++;
			   count_1++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_2_2()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide2_2(food_x3,food_y3,3);
			  }
	           count3++;
			   count++;
			   count_1++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_2_3()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide2_3(food_x3,food_y3,3);
			  }
	           count3++;
			   count++;
			   count_1++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_2_4()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide2_4(food_x3,food_y3,3);
			  }
	           count3++;
			   count++;
			   count_1++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_2_5()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide2_5(food_x3,food_y3,3);
			  }
	           count3++;
			   count++;
			   count_1++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_3_1()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
		 if(difftime(t11,t8)<=20)
		 {
	   	       char q[30];
	           sprintf(q,"能量时刻剩余%.1fs",20-difftime(t11,t8));
	           outtextxy(11.5*UNIT,3.5*UNIT,q);
		 }
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide3_1(food_x3,food_y3,3);
			  }
	           count3++;
			   count++;
			   count_1++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_3_2()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
		 if(difftime(t11,t8)<=20)
		 {
	   	       char q[30];
	           sprintf(q,"能量时刻剩余%.1fs",20-difftime(t11,t8));
	           outtextxy(11.5*UNIT,3.5*UNIT,q);
		 }
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide3_2(food_x3,food_y3,3);
			  }
	           count3++;
			   count++;
			   count_1++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_3_3()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
		 if(difftime(t11,t8)<=20)
		 {
	   	       char q[30];
	           sprintf(q,"能量时刻剩余%.1fs",20-difftime(t11,t8));
	           outtextxy(11.5*UNIT,3.5*UNIT,q);
		 }
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide3_3(food_x3,food_y3,3);
			  }
	           count3++;
			   count++;
			   count_1++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_3_4()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
		 if(difftime(t11,t8)<=20)
		 {
	   	       char q[30];
	           sprintf(q,"能量时刻剩余%.1fs",20-difftime(t11,t8));
	           outtextxy(11.5*UNIT,3.5*UNIT,q);
		 }
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide3_4(food_x3,food_y3,3);
			  }
	           count3++;
			   count++;
			   count_1++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_3_5()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
		 if(difftime(t11,t8)<=20)
		 {
	   	       char q[30];
	           sprintf(q,"能量时刻剩余%.1fs",20-difftime(t11,t8));
	           outtextxy(11.5*UNIT,3.5*UNIT,q);
		 }
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide3_5(food_x3,food_y3,3);
			  }
	           count3++;
			   count++;
			   count_1++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_4_1()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
		 if(difftime(t11,t8)<=20)
		 {
	   	       char q[30];
	           sprintf(q,"能量时刻剩余%.1fs",20-difftime(t11,t8));
	           outtextxy(11.5*UNIT,3.5*UNIT,q);
		 }
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
              if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide4_1(food_x3,food_y3,3);
			  }
	           count3++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_4_2()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
		 if(difftime(t11,t8)<=20)
		 {
	   	       char q[30];
	           sprintf(q,"能量时刻剩余%.1fs",20-difftime(t11,t8));
	           outtextxy(11.5*UNIT,3.5*UNIT,q);
		 }
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
              if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide4_2(food_x3,food_y3,3);
			  }
	           count3++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_4_3()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
		 if(difftime(t11,t8)<=20)
		 {
	   	       char q[30];
	           sprintf(q,"能量时刻剩余%.1fs",20-difftime(t11,t8));
	           outtextxy(11.5*UNIT,3.5*UNIT,q);
		 }
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
              if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide4_3(food_x3,food_y3,3);
			  }
	           count3++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_4_4()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
		 if(difftime(t11,t8)<=20)
		 {
	   	       char q[30];
	           sprintf(q,"能量时刻剩余%.1fs",20-difftime(t11,t8));
	           outtextxy(11.5*UNIT,3.5*UNIT,q);
		 }
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
              if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide4_4(food_x3,food_y3,3);
			  }
	           count3++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_4_5()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
		 if(difftime(t11,t8)<=20)
		 {
	   	       char q[30];
	           sprintf(q,"能量时刻剩余%.1fs",20-difftime(t11,t8));
	           outtextxy(11.5*UNIT,3.5*UNIT,q);
		 }
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
              if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide4_5(food_x3,food_y3,3);
			  }
	           count3++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_5_1()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
		 if(difftime(t11,t8)<=20)
		 {
	   	       char q[30];
	           sprintf(q,"能量时刻剩余%.1fs",20-difftime(t11,t8));
	           outtextxy(11.5*UNIT,3.5*UNIT,q);
		 }
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide5_1(food_x3,food_y3,3);
			  }
	           count3++;
			   count++;
			   count_1++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_5_2()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
		 if(difftime(t11,t8)<=20)
		 {
	   	       char q[30];
	           sprintf(q,"能量时刻剩余%.1fs",20-difftime(t11,t8));
	           outtextxy(11.5*UNIT,3.5*UNIT,q);
		 }
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide5_2(food_x3,food_y3,3);
			  }
	           count3++;
			   count++;
			   count_1++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_5_3()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
		 if(difftime(t11,t8)<=20)
		 {
	   	       char q[30];
	           sprintf(q,"能量时刻剩余%.1fs",20-difftime(t11,t8));
	           outtextxy(11.5*UNIT,3.5*UNIT,q);
		 }
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide5_3(food_x3,food_y3,3);
			  }
	           count3++;
			   count++;
			   count_1++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_5_4()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
		 if(difftime(t11,t8)<=20)
		 {
	   	       char q[30];
	           sprintf(q,"能量时刻剩余%.1fs",20-difftime(t11,t8));
	           outtextxy(11.5*UNIT,3.5*UNIT,q);
		 }
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide5_4(food_x3,food_y3,3);
			  }
	           count3++;
			   count++;
			   count_1++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}



void Add_food_3_5_5()
{
    char s[5];
	if(count2_1==3)
   {
		int foodexit=1;
	     srand((int)time(0));
		 time_t t11=time(NULL);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][0],SRCAND);
         putimage(food_x3*UNIT,food_y3*UNIT,&foods[2][1],SRCINVERT);
		 if(difftime(t11,t8)<=20)
		 {
	   	       char q[30];
	           sprintf(q,"能量时刻剩余%.1fs",20-difftime(t11,t8));
	           outtextxy(11.5*UNIT,3.5*UNIT,q);
		 }
         if(local_snake[0][0]==food_x3&&local_snake[0][1]==food_y3)
		 {
              foodexit=0;
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
        	  if(difftime(t11,t8)>20)
			  {
	               Add_snake();
			  }
	          while(foodexit==0)
			  {
	               foodexit=1;
	               food_x3=rand()%28+1;
	               food_y3=rand()%28+1;
                   foodexit=food_decide5_5(food_x3,food_y3,3);
			  }
	           count3++;
			   count++;
			   count_1++;
			   count2_1=0;
		 }
   }
    sprintf(s, "X%2d",count3);
    outtextxy(41.35*UNIT, 18.5*UNIT, s);
}


void Add_snake()
{
	if(local_snake[N-1][2]==8)
	{
		local_snake[N][0]=local_snake[N-1][0]-1;
	    local_snake[N][1]=local_snake[N-1][1];
		local_snake[N][2]=local_snake[N-1][2];
		local_snake[N-1][2]=12;
		N+=1;
	}
	if(local_snake[N-1][2]==9)
	{
		local_snake[N][0]=local_snake[N-1][0];
	    local_snake[N][1]=local_snake[N-1][1]-1;
		local_snake[N][2]=local_snake[N-1][2];
		local_snake[N-1][2]=13;
		N+=1;
	}
	if(local_snake[N-1][2]==10)
	{
		local_snake[N][0]=local_snake[N-1][0]+1;
	    local_snake[N][1]=local_snake[N-1][1];
		local_snake[N][2]=local_snake[N-1][2];
		local_snake[N-1][2]=12;
		N+=1;
	}
	if(local_snake[N-1][2]==11)
	{
		local_snake[N][0]=local_snake[N-1][0];
	    local_snake[N][1]=local_snake[N-1][1]+1;
		local_snake[N][2]=local_snake[N-1][2];
		local_snake[N-1][2]=13;
		N+=1;
	}
}


int food_decide1_1(int x,int y,int kind)
{
 
	int foodexit=1;
	//蛇身	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	   //障碍
	if((y>=14&&y<=15)&&((x<=20&&x>=9)||(x<=5&&x>=1)||(x<=28&&x>=24)))
             foodexit=0;
    if(((y<=15)&&(y>=14))&&((x<=8&&x>=6)||(x<=23&&x>=21)))
	    		 foodexit=0;
	//
	if(kind==1)
	 	if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3))
			foodexit=0;
	return foodexit;
}


int food_decide1_2(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y>=14&&y<=15)&&((x<=5&&x>=1)||(x<=20&&x>=9)||(x<=28&&x>=24)))
             foodexit=0;
	
	if((x>=14&&x<=15)&&((y<=5&&y>=1)||(y<=20&&y>=9)||(y<=28&&y>=24)))
             foodexit=0;
    
	if(((y<=15)&&(y>=14)&&(x<=8&&x>=6)))
			 foodexit=0;
    
	if(((y<=15)&&(y>=14)&&(x<=23&&x>=21)))
			 foodexit=0;
    
	if(((x=15)&&(x>=14)&&(y<=23&&y>=21)))
			 foodexit=0;
    
	if(((x<=15)&&(x>=14)&&(y<=8&&y>=6)))
			 foodexit=0;

	
	if(kind==1)
	 	if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3))
			foodexit=0;
	return foodexit;
}


int food_decide1_3(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==7)&&((x<=7&&x>=3)||(x<=26&&x>=22)))
              foodexit=0;
    
	if((y==10)&&((x<=10&&x>=3)||(x<=26&&x>=19)))
              foodexit=0;
    
	if((y==19)&&((x<=10&&x>=3)||(x<=26&&x>=19)))
              foodexit=0;
   
	if((y==22)&&((x<=7&&x>=3)||(x<=26&&x>=22)))
              foodexit=0;
   
	if((x==7)&&((y<=7&&y>=3)||(y<=26&&y>=22)))
              foodexit=0;
   
	if((x==10)&&((y<=10&&y>=3)||(y<=26&&y>=19)))
              foodexit=0;

	if((x==19)&&((y<=10&&y>=3)||(y<=26&&y>=19)))
              foodexit=0;
   
	if((x==22)&&((y<=7&&y>=3)||(y<=26&&y>=22)))
              foodexit=0;


	if(kind==1)
	 	if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3))
			foodexit=0;
	return foodexit;
}


int food_decide1_4(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==8)&&((x<=13&&x>=8)||(x<=21&&x>=16)))
             foodexit=0;
   
	if((y==3)&&((x<=7&&x>=3)||(x<=26&&x>=22)))
			 foodexit=0;
    
	if((y==21)&&((x<=13&&x>=8)||(x<=21&&x>=16)))
             foodexit=0;
   
	if((y==26)&&((x<=7&&x>=3)||(x<=26&&x>=22)))
             foodexit=0;
   
	if((x==3)&&((y<=7&&y>=3)||(y<=26&&y>=22)))
             foodexit=0;
  
	if((x==8)&&((y<=13&&y>=8)||(y<=21&&y>=16)))
             foodexit=0;
   
	if((x==21)&&((y<=13&&y>=8)||(y<=21&&y>=16)))
             foodexit=0;
   
	if((x==26)&&((y<=7&&y>=3)||(y<=26&&y>=22)))
             foodexit=0;
   
	if(((x==13)&&(y==13))||((x==13&&y==16))||((x==16&&y==13))||((x==16&&y==16)))
             foodexit=0;

	
	if(kind==1)
	 	if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3))
			foodexit=0;
	return foodexit;
}


int food_decide1_5(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==5)&&((x<=14&&x>=6)||(x<=25&&x>=17)))
             foodexit=0;
   
	if((y==11)&&((x<=14&&x>=12)||(x<=19&&x>=17)))
             foodexit=0;
   
	if((y==18)&&((x<=14&&x>=12)||(x<=19&&x>=17)))
             foodexit=0;
   
	if((y==24)&&((x<=14&&x>=6)||(x<=25&&x>=17)))
             foodexit=0;
   
	if((x==9)&&((y<=13&&y>=8)||(y<=21&&y>=16)))
             foodexit=0;
   
	if((x==22)&&((y<=13&&y>=8)||(y<=21&&y>=16)))
             foodexit=0;
   
	if((y==8)&&((x<=22&&x>=9)))
             foodexit=0;
   
	if((y==21)&&((x<=22&&x>=9)))
             foodexit=0;
   
	if((x==6)&&((y<=24&&y>=5)))
             foodexit=0;
   
	if((x==25)&&((y<=24&&y>=5)))
             foodexit=0;
  
	if((x==12)&&((y<=18&&y>=11)))
             foodexit=0;
   
	if((x==19)&&((y<=18&&y>=11)))
             foodexit=0;
   
	if(((x==15)&&(y==14))||((x==15&&y==15))||((x==16&&y==15))||((x==16&&y==14)))
             foodexit=0;


	if(kind==1)
	 	if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3))
			foodexit=0;
	return foodexit;
}


int food_decide2_1(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==3)&&((x<=7&&x>=3)||(x<=26&&x>=22)))
             foodexit=0;
   
	if((y==6)&&((x<=12&&x>=8)||(x<=21&&x>=17)))
             foodexit=0;
   
	if((y==23)&&((x<=12&&x>=8)||(x<=21&&x>=17)))
             foodexit=0;

	if((y==26)&&((x<=7&&x>=3)||(x<=26&&x>=22)))
             foodexit=0;
   
	if((y==14)&&((x<=17&&x>=12)))
             foodexit=0;
   
	if((y==15)&&((x<=17&&x>=12)))
             foodexit=0;
   
	if((x==5)&&((y<=23&&y>=6)))
             foodexit=0;
    
	if((x==10)&&((y<=20&&y>=9)))
             foodexit=0;
   
	if((x==19)&&((y<=20&&y>=9)))
             foodexit=0;
    
	if((x==24)&&((y<=23&&y>=6)))
             foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
			foodexit=0;
	return foodexit;
}


int food_decide2_2(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==3||y==26)&&((x<=7&&x>=3)||(x<=26&&x>=22)))
             foodexit=0;
    
	if((y==14||y==15)&&((x<=9&&x>=5)||(x<=24&&x>=20)))
             foodexit=0;
   
	if((y==12||y==13)&&((x<=13&&x>=12)||(x<=17&&x>=16)))
             foodexit=0;
   
	if((y==16||y==17)&&((x<=13&&x>=12)||(x<=17&&x>=16)))
             foodexit=0;
    
	if((x==3||x==26)&&((y<=7&&y>=3)||(y<=26&&y>=22)))
             foodexit=0;
    
	if((x==14||x==15)&&((y<=9&&y>=5)||(y<=24&&y>=20)))
             foodexit=0;
   
	if((y==13||y==12)&&(x<=15&&x>=14))
			 foodexit=0;
   
	if((y==15||y==14)&&(x<=13&&x>=12))
			 foodexit=0;
    
	if((y==15||y==14)&&(x<=17&&x>=16))
			 foodexit=0;
    
	if((y==17||y==16)&&(x<=15&&x>=14))
			 foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
			foodexit=0;
	return foodexit;
}


int food_decide2_3(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==5||y==24)&&((x<=5&&x>=3)||(x<=26&&x>=24)))
             foodexit=0;
	
	if((y==14||y==15)&&((x<=5&&x>=1)||(x<=28&&x>=24)))
             foodexit=0;
    
	if((x==14||x==15)&&((y<=5&&y>=1)||(y<=28&&y>=24)||(y<=15&&y>=14)))
             foodexit=0;
   
	if((x==5||x==24)&&((y<=5&&y>=3)||(y<=26&&y>=24)))
             foodexit=0;
    
	if((x==12||x==17)&&((y<=12&&y>=9)||(y<=20&&y>=17)))
             foodexit=0;
    
	if((x==8||x==21)&&((y<=9&&y>=6)||(y<=23&&y>=20)))
             foodexit=0;
    
	if((y==6||y==23)&&((x<=21&&x>=8)))
             foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
			foodexit=0;
	return foodexit;
}


int food_decide2_4(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==3||y==4)&&((x<=8&&x>=7)||(x<=22&&x>=21)))
             foodexit=0;
    
	if((y==25||y==26)&&((x<=8&&x>=7)||(x<=22&&x>=21)))
             foodexit=0;
    
	if((y==6||y==23)&&((x<=13&&x>=9)||(x<=20&&x>=16)))
             foodexit=0;
   
	if((y==9||y==20||y==13||y==16)&&((x<=13&&x>=12)||(x<=17&&x>=16)))
             foodexit=0;
    
	if((y==13||y==16)&&((x<=10&&x>=9)||(x<=20&&x>=19)))
             foodexit=0;
    
	if((x==3||x==4||x==26||x==25)&&((y<=13&&y>=3)||(y<=26&&y>=16)))
             foodexit=0;
    
	if((x==9||x==20)&&((y<=12&&y>=6)||(y<=22&&y>=17)))
             foodexit=0;

	if((x==12||x==17)&&((y<=12&&y>=10)||(y<=19&&y>=17)))
             foodexit=0;
    
	if((y==6||y==7)&&(x<=15&&x>=14))
			 foodexit=0;
    
	if((y==14||y==15)&&(x<=10&&x>=9))
			 foodexit=0;
    
	if((y==23||y==22)&&(x<=15&&x>=14))
			 foodexit=0;
    
	if((y==15||y==14)&&(x<=20&&x>=19))
			 foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
			foodexit=0;
	return foodexit;
}


int food_decide2_5(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==3||y==25)&&((x<=13&&x>=4)||(x<=25&&x>=16)))
             foodexit=0;
    
	if((y==6||y==22)&&((x<=13&&x>=6)||(x<=23&&x>=16)))
             foodexit=0;
    
	if((y==9||y==19)&&((x<=13&&x>=9)||(x<=20&&x>=16)))
             foodexit=0;
    
	if((y==14)&&((x<=16&&x>=13)))
             foodexit=0;
    
	if((x==11||x==13||x==16||x==18)&&((y<=13&&y>=12)||(y<=16&&y>=15)))
             foodexit=0;
    
	if((x==4||x==25)&&((y<=13&&y>=3)||(y<=25&&y>=15)))
             foodexit=0;
    
	if((x==6||x==23)&&((y<=13&&y>=6)||(y<=22&&y>=15)))
             foodexit=0;
    
	if((x==9||x==20)&&((y<=13&&y>=9)||(y<=19&&y>=15)))
             foodexit=0;
    
	if((y==5)&&(x<=15&&x>=14))
			 foodexit=0;
    
	if((y==23)&&(x<=15&&x>=14))
			 foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
			foodexit=0;
	return foodexit;
}


int food_decide3_1(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==3||y==10||y==19||y==26)&&((x<=5&&x>=3)||(x<=10&&x>=8)||(x<=21&&x>=19)||(x<=26&&x>=24)))
            foodexit=0;
    
	if((y==14||y==15)&&((x<=15&&x>=14)))
            foodexit=0;
	
	if((x==3||x==10||x==19||x==26)&&((y<=5&&y>=3)||(y<=10&&y>=8)||(y<=21&&y>=19)||(y<=26&&y>=24)))
            foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
			foodexit=0;
	return foodexit;
}


int food_decide3_2(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==3||y==26)&&((x<=7&&x>=3)||(x<=26&&x>=22)))
				     foodexit=0;
    
	if((y==7||y==22)&&((x<=10&&x>=6)||(x<=23&&x>=19)))
				     foodexit=0;
	
	if((y==13||y==16)&&((x<=13&&x>=7)||(x<=22&&x>=16)))
				     foodexit=0;
	
	if((x==3||x==10||x==19||x==26)&&((y<=7&&y==3)||(y<=26&&y>=22)))
				     foodexit=0;
	
	if((x==13||x==16)&&((y<=13&&y>=7)||(y<=22&&y>=16)))
				     foodexit=0;
    
	if((y==7)&&(x<=15&&x>=14))
				     foodexit=0;
    
	if((y==22)&&(x<=15&&x>=14))
				     foodexit=0;
    
	if((y==14||y==15)&&(x==7))
				     foodexit=0;
    
	if((y==15||y==14)&&(x==22))
				     foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
			foodexit=0;
	return foodexit;
}


int food_decide3_3(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==5||y==24)&&((x<=5&&x>=3)||(x<=26&&x>=24)))
				     foodexit=0;
    
	if((y==8||y==21)&&((y<=10&&x>=8)||(x<=21&&x>=19)))
				     foodexit=0;
	
	if((y==14||y==15)&&((x<=10&&x>=1)||(x<=28&&x>=19)))
				     foodexit=0;
	
	if((x==5||x==24)&&((y<=5&&y>=3)||(y<=26&&y>=24)))
				     foodexit=0;
	
	if((x==8||x==21)&&((y<=10&&y>=8)||(y<=21&&y>=19)))
				     foodexit=0;
    
	if((x==14||x==15)&&((y<=10&&y>=1)||(y<=28&&y>=19)))
  				     foodexit=0;
    
	if((y==10)&&((x<=13&&x>=11)||(x<=18&&x>=16)))
				     foodexit=0;
    
	if((y==19)&&((x<=13&&x>=11)||(x<=18&&x>=16)))
				     foodexit=0;
    
	if((x==10)&&((y<=13&&y>=11)||(y<=18&&y>=16)))
				     foodexit=0;
    
	if((x==19)&&((y<=13&&y>=11)||(y<=18&&y>=16)))
				     foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
			foodexit=0;
	return foodexit;
}


int food_decide3_4(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==3||y==26)&&((x<=13&&x>=4)||(x<=25&&x>=16)))
  				     foodexit=0;
    
	if((y==9||y==20)&&((x<=8&&x>=4)||(x<=25&&x>=21)))
 				     foodexit=0;
	
	if((y==13||y==16)&&((x<=13&&x>=8)||(x<=21&&x>=16)))
 				     foodexit=0;
	
	if((x==13||x==16)&&((y<=13&&y>=3)||(y<=26&&y>=16)))
				     foodexit=0;
	
	if((x==4||x==25)&&((y<=6&&y>=3)||(y<=26&&y>=23)))
				     foodexit=0;
    
	if((x==4||x==8||x==25||x==21)&&((y<=13&&y>=9)||(y<=20&&y>=16)))
				     foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
			foodexit=0;
	return foodexit;
}


int food_decide3_5(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==3||y==26)&&((x<=13&&x>=3)||(x<=26&&x>=16)))
				     foodexit=0;
	
	if((x==3||x==26)&&((y<=13&&y>=3)||(y<=26&&y>=16)))
				     foodexit=0;
	
	if((x==13||x==16)&&((y<=10&&y>=3)||(y<=26&&y>=19)))
				     foodexit=0;
    
	if((x==12||x==17)&&((y<=10&&y>=9)||(y<=20&&y>=19)))
				     foodexit=0;
    
	if((x==11||x==18)&&((y<=11&&y>=10)||(y<=19&&y>=18)))
				     foodexit=0;
    
	if((x==10||x==19)&&((y<=12&&y>=11)||(y<=18&&y>=17)))
				     foodexit=0;
    
	if((x==9||x==20)&&((y<=13&&y>=12)||(y<=17&&y>=16)))
 				     foodexit=0;
    
	if((x==8||x==21)&&(y<=15&&y>=14))
				     foodexit=0;
    
	if((y==3||y==26)&&(x<=15&&x>=14))
				     foodexit=0;


	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y))
			foodexit=0;
	return foodexit;
}


int food_decide4_1(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==3||y==26)&&((x<=13&&x>=3)||(x<=26&&x>=16)))
				     foodexit=0;
    
	if((y==6||y==19)&&(x<=17&&x>=12))
				     foodexit=0;
    
	if((y==13||y==16)&&(x<=23&&x>=6))
				     foodexit=0;
	
	if((x==3||x==26)&&((y<=13&&y>=3)||(y<=26&&y>=16)))
				     foodexit=0;
	
	if((x==8||x==21)&&((y<=10&&y>=6)||(y<=23&&y>=19)))
 				     foodexit=0;
    
	if((y==3||y==26)&&(x<=15&&x>=14))
				     foodexit=0;
    
	if((y==14||y==15)&&(x==3))
				     foodexit=0;
    
	if((y==14||y==15)&&(x==26))
				     foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==landmine_x&&y==landmine_y))
			foodexit=0;
	if(kind==6)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
			foodexit=0;
	return foodexit;
}


int food_decide4_2(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==3||y==26)&&((x<=7&&x>=3)||(x<=26&&x>=22)))
				     foodexit=0;
    
	if((y==3||y==26)&&((x<=13&&x>=10)||(x<=19&&x>=16)))
				     foodexit=0;
    
	if((y==8||y==21)&&((x<=10&&x>=6)||(x<=23&&x>=19)))
				     foodexit=0;
    
	if((y==13||y==16)&&((x<=13&&x>=3)||(x<=26&&x>=16)))
				     foodexit=0;
	
	if((x==3||x==26)&&((y<=13&&y>=3)||(y<=26&&y>=16)))
 				     foodexit=0;
	
	if((x==10||x==19)&&((y<=8&&y>=3)||(y<=26&&y>=21)))
				     foodexit=0;
    
	if((y==13||y==16)&&(x<=15&&x>=14))
				     foodexit=0;
    
	if((y==14||y==15)&&(x==13))
				     foodexit=0;
    
	if((y==14||y==15)&&(x==16))
				     foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==landmine_x&&y==landmine_y))
			foodexit=0;
	if(kind==6)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
			foodexit=0;
	return foodexit;
}


int food_decide4_3(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==13||y==16)&&((x<=13&&x>=3)||(x<=26&&x>=16)))
				     foodexit=0;
    
	if((y==6||y==9||y==20||y==23)&&((x<=19&&x>=10)))
				     foodexit=0;
	
	if((x==6||x==23)&&((y<=13&&y>=3)||(y<=26&&y>=16)))
				     foodexit=0;
	
	if((x==10||x==19)&&((y<=6&&y>=3)||(y<=13&&y>=9)||(y<=20&&y>=16)||(y<=26&&y>=23)))
				     foodexit=0;
    
	if((x==3||x==26)&&(y<=15&&x>=14))
				     foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==landmine_x&&y==landmine_y))
			foodexit=0;
	if(kind==6)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
			foodexit=0;
	return foodexit;
}


int food_decide4_4(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==3||y==26)&&((x<=7&&x>=3)||(x<=26&&x>=22)))
				     foodexit=0;
    
	if((y==6||y==23)&&((x<=9&&x>=5)||(x<=24&&x>=20)))
				     foodexit=0;
    
	if((y==9||y==20)&&((x<=11&&x>=7)||(x<=22&&x>=18)))
				     foodexit=0;
    
	if((y==12||y==17)&&((x<=13&&x>=9)||(x<=20&&x>=16)))
				     foodexit=0;
	
	if((x==13||x==16)&&((y<=12&&y>=3)||(y<=26&&y>=17)))
				     foodexit=0;
    
	if((x==11||x==18)&&((y<=17&&y>=12)))
				     foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==landmine_x&&y==landmine_y))
			foodexit=0;
	if(kind==6)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
			foodexit=0;
	return foodexit;
}


int food_decide4_5(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
 
	if((y==7||y==11||y==15||y==19)&&((x<=13&&x>=3)||(x<=26&&x>=16)))
				     foodexit=0;
    
	if((y==5)&&((x<=8&&x>=5)||(x<=24&&x>=21)))
				     foodexit=0;
    
	if((y==23||y==26)&&((x<=13&&x>=5)||(x<=24&&x>=16)))
				     foodexit=0;
    
	if((y==3)&&((x<=5&&x>=3)||(x<=13&&x>=8)||(x<=21&&x>=16)||(x<=26&&x>=24)))
				     foodexit=0;

	if((x==3||x==26)&&((y<=11&&y>=7)||(y<=19&&y>=15)||(y==3)))
				     foodexit=0;
    
	if((x==5||x==24)&&((y<=5&&y>=3)||(y<=26&&y>=23)))
				     foodexit=0;
    
	if((x==13||x==16)&&((y<=7&&y>=3)||(y<=15&&y>=11)||(y<=23&&y>=19)))
				     foodexit=0;
    
	if((x==8||x==24)&&((y<=5&&y>=3)))
				     foodexit=0;
    
	if((y==3||y==26)&&(x<=15&&x>=14))
				     foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==landmine_x&&y==landmine_y))
			foodexit=0;
	if(kind==6)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y))
			foodexit=0;
	return foodexit;
}


int food_decide5_1(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
	if((y==2&&(x<=15&&x>=3))||((y==5||y==11||y==17||y==23)&&(x>=14&&x<=28))||((y==8||y==14||y==20||y==26)&&(x>=1&&x<=15)))
				     foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==6)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==7)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==8)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==9)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2))
			foodexit=0;
	return foodexit;
}


int food_decide5_2(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
	if(((y==3 || y==26) && ((x>=3 && x<=13) || (x>=16 && x<=26))))
				     foodexit=0;

	if((x==3 || x==26) && ((y=4 && y<=13) || (y>=16 && y<=26)))
				     foodexit=0;

	if((y==10 || y==19) && ((x>=6 && x<=10) || (x>=19 && x<=23)))
				     foodexit=0;

	if((x==13 || x==16) && ((y>=6 && y<=13) || (y>=16 && y<=23)))
				     foodexit=0;

	if((y==13 || y==16) && ((x>=11 && x<=12) || (x>=17 && x<=18)))
				     foodexit=0;

	if((x==11 || x==18) && (y>=14 && y<=15))
				     foodexit=0;

	if((y==3 || y==26) && (x>=14 && x<=15))
				     foodexit=0;

	if((y==13 || y==16) && (x>=14 && x<=15))
				     foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==6)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==7)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==8)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==9)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2))
			foodexit=0;
	return foodexit;
}


int food_decide5_3(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	
	if(((y==3 || y==26) && ((x>=3 && x<=10) || (x>=19 && x<=26))))
				     foodexit=0;

	if(((y==8 || y==21) && ((x>=7 && x<=8) || (x>=21 && x<=22))))
				     foodexit=0;

	if((x==10 || x==19) && (y>=4 && y<=25))
				     foodexit=0;

	if((x==3 || x==26) && ((y>=6 && y<=13) || (y>=16 && y<=23)))
				     foodexit=0;

	if((x==6 || x==23) && ((y>=8 && y<=13) || (y>=16 && y<=21)))
				     foodexit=0;

	if((x=11 || x==18 || x==13 || x==16) && (y>=14 && y<=15))
				     foodexit=0;

	if((x==12 || x==17) && ((y>=3 && y<=10) || (y>=19 && y<=26)))
				     foodexit=0;

	if(x==15 && ((y>=1 && y<=5) || (y>=24 && y<=28)))
				     foodexit=0;
	
	if((x==14 || x==15) && (y>=10 && y<=19))
				     foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==6)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==7)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==8)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==9)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2))
			foodexit=0;
	return foodexit;
}


int food_decide5_4(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	

	if((x==2 || x==5) && (y>=5 && y<=10))
				     foodexit=0;

	if((x==3) && (y=5))
				     foodexit=0;

	if((x==4) && (y>=2 && x<=5))
				     foodexit=0;

	if((y==2) && (x>=5 && x<=6))
				     foodexit=0;

	if((y==3) && ((x>=8 && x<=12) || (x>=15 && x<=27)))
				     foodexit=0;

	if((x==8) && (y>=4 && y<=10))
				     foodexit=0;
	
	if((x==12 || x==15) && (y>=4 && y<=8))
				     foodexit=0;
	
	if((x==27) && (y>=4 && y<=13))
				     foodexit=0;

	if((y==8) && ((x>=13 && x<=14) || (x>=21 && x<=22)))
				     foodexit=0;

	if((y==10) && (x>=9 && x<=18))
				     foodexit=0;

	if((y==13) && ((x>=2 && x<=19) || (x>=24 && x<=26)))
				     foodexit=0;

	if((x==20 || x==23) && ((y>=8 && y<=13) || (y>=16 && y<=19)))
				     foodexit=0;

	if((x==5 || x==8 || x==11 || x==14 || x==17 || x==20 || x==23) && (y>=16 && y<=19))
				     foodexit=0;

	if((x==2) && (y>=16 && y<=23))
				     foodexit=0;

	if((x==27) && (y>=19 && y<=23))
				     foodexit=0;

	if((x==6) && (y>=23 && y<=26))
				     foodexit=0;

	if((x==10 || x==13 || x==16 || x==19 || x==22 || x==25) && (y>=23 && y<=27))
				     foodexit=0;

	if((y==16) && ((x>=3 && x<=4) || (x>=9 && x<=10) || (x>=15 && x<=16) || (x>=21 && x<=22)))
				     foodexit=0;

	if((y==19) && ((x>=6 && x<=7) || (x>=12 && x<=13) || (x>=18 && x<=19) || (x>=24 && x<=26)))
				     foodexit=0;

	if((y==23) && ((x>=7 && x<=9) || (x>=14 && x<=15) || (x>=20 && x<=21) || (x==26)))
				     foodexit=0;

	if((y==26) && (x>=1 && x<=5))
				     foodexit=0;

	if((y==27) && ((x>=11 && x<=12) || (x>=17 && x<=18) || (x>=23 && x<=24)))
				     foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==6)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==7)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==8)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==9)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2))
			foodexit=0;
	return foodexit;
}


int food_decide5_5(int x,int y,int kind)
{
 
	int foodexit=1;
	
	for(int i=0;i<N;i++)
	{
	 	if(x==local_snake[i][0]&&y==local_snake[i][1])
		{ 
	          foodexit=0;
		     break;
		 }
	}
	

	if((x==3 || x==12) && (y>=1 && y<=4))
				     foodexit=0;

	if((x==9) && (y>=4 && y<=10))
				     foodexit=0;

	if((x==17) && (y>=4 && y<=13))
				     foodexit=0;

	if((x==23) && (y>=1 && y<=16))
				     foodexit=0;

	if(x==26 && (y>=10 && y<=13))
				     foodexit=0;
	
	if(x==3 && (y>=13 && y<=26))
				     foodexit=0;
	
	if(x==6 && (y>=10 && y<=23))
				     foodexit=0;

	if(x==9 && (y>=23 && y<=26))
				     foodexit=0;

	if(x==12 && (y>=20 && y<=26))
				     foodexit=0;

	if(x==15 && ((y>=14 && y<=20) || (y>=26 && y<=28)))
				     foodexit=0;

	if(x==18 && (y>=20 && y<=22))
				     foodexit=0;

	if(x==21 && (y>=16 && y<=20))
				     foodexit=0;

	if(x==24 && (y>=19 && y<=23))
				     foodexit=0;

	if(y==3 && (x>=26 && x<=28))
				     foodexit=0;

	if(y==4 && ((x>=4 && x<=6) || (x>=13 && x<=14) || (x>=18 && x<=20)))
				     foodexit=0;

	if(y==7 && ((x>=1 && x<=8) || (x>=10 && x<=16) || (x>=20 && x<=22)))
				     foodexit=0;

	if(y==10 && ((x>=1 && x<=3) || (x>=10 && x<=13) || (x>=18 && x<=20) || (x>=24 && x<=25)))
				     foodexit=0;

	if(y==13 && ((x>=7 && x<=16) || (x>=20 && x<=22)))
				     foodexit=0;

	if(y==16 && x==22)
				     foodexit=0;

	if(y==20 && ((x>=9 && x<=11) || (x>=19 && x<=20)))
				     foodexit=0;

	if(y==23 && ((x>=7 && x<=8) || (x>=13 && x<=23)))
				     foodexit=0;

	if(y==26 && ((x>=4 && x<=8) || (x>=16 && x<=18)))
				     foodexit=0;

	
	if(kind==1)
	   if((x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
				     foodexit=0;
	if(kind==2)
	 	if((x==food_x1&&y==food_y1)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
				     foodexit=0;
	if(kind==3)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
				     foodexit=0;
	if(kind==4)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
    if(kind==5)
	 	if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==6)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==7)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x2&&y==key_y2)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==8)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x3&&y==key_y3))
			foodexit=0;
	if(kind==9)
		if((x==food_x1&&y==food_y1)||(x==food_x2&&y==food_y2)||(x==food_x3&&y==food_y3)||(x==door_x&&y==door_y)||(x==props_x&&y==props_y)||(x==landmine_x&&y==landmine_y)||(x==key_x1&&y==key_y1)||(x==key_x2&&y==key_y2))
			foodexit=0;
	return foodexit;
}

void Snake_head()
{
    if(direction==1)
	{
        local_snake[0][1]--;
		local_snake[0][2]=1;
	}
	if(direction==2)
	{
        local_snake[0][1]++;
		local_snake[0][2]=3;
	}
	if(direction==3)
	{
        local_snake[0][0]--;
		local_snake[0][2]=0;
	}
	if(direction==4)
	{
        local_snake[0][0]++;
		local_snake[0][2]=2;
	}
}

void Snake_second()
{
	if(old_direction==direction)
	{
		if(direction==1||direction==2)
           local_snake[1][2]=13;
		else
		   local_snake[1][2]=12;
	}
	else
	{
        if(old_direction==1)
		{
			if(direction==3)
				local_snake[1][2]=7;
            if(direction==4)
				local_snake[1][2]=6;
		}
		if(old_direction==2)
		{
			if(direction==3)
				local_snake[1][2]=4;
            if(direction==4)
				local_snake[1][2]=5;
		}
		if(old_direction==3)
		{
			if(direction==1)
				local_snake[1][2]=5;
            if(direction==2)
				local_snake[1][2]=6;
		}
		if(old_direction==4)
		{
			if(direction==1)
				local_snake[1][2]=4;
            if(direction==2)
				local_snake[1][2]=7;
		}
	}
}


void Snake_tail()
{
	if(local_snake[N-2][1]>local_snake[N-1][1]&&local_snake[N-2][0]==local_snake[N-1][0])
		local_snake[N-1][2]=9;
	if(local_snake[N-2][1]<local_snake[N-1][1]&&local_snake[N-2][0]==local_snake[N-1][0])
	    local_snake[N-1][2]=11;
	if(local_snake[N-2][0]>local_snake[N-1][0]&&local_snake[N-2][1]==local_snake[N-2][1])
		local_snake[N-1][2]=8;
	if(local_snake[N-2][0]<local_snake[N-1][0]&&local_snake[N-2][1]==local_snake[N-2][1])
		local_snake[N-1][2]=10;
}

int  Snake_judge1_1()
{
	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))//墙壁
	{
             gameover=1;
	}
    //地图障碍
	if(local_snake[0][1]>=14&&local_snake[0][1]<=15&&((local_snake[0][0]<=20&&local_snake[0][0]>=9)||(local_snake[0][0]<=5&&local_snake[0][0]>=1)||(local_snake[0][0]<=28&&local_snake[0][0]>=24)))
             gameover=1;
    
	if(((local_snake[0][1]<=15)&&(local_snake[0][1]>=14)&&(local_snake[0][0]<=8&&local_snake[0][0]>=6)))
		 if(direction!=2)
			 gameover=1;

   if(((local_snake[0][1]<=15)&&(local_snake[0][1]>=14)&&(local_snake[0][0]<=23&&local_snake[0][0]>=21)))
		 if(direction!=1)
			 gameover=1;

	for(int i=1;i<N;i++)  //蛇身
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}

int  Snake_judge1_2()
{
	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))//墙壁
	{
             gameover=1;
	}
   
	if((local_snake[0][1]>=14&&local_snake[0][1]<=15)&&((local_snake[0][0]<=5&&local_snake[0][0]>=1)||(local_snake[0][0]<=20&&local_snake[0][0]>=9)||(local_snake[0][0]<=28&&local_snake[0][0]>=24)))
             gameover=1;
	
	if((local_snake[0][0]>=14&&local_snake[0][0]<=15)&&((local_snake[0][1]<=5&&local_snake[0][1]>=1)||(local_snake[0][1]<=20&&local_snake[0][1]>=9)||(local_snake[0][1]<=28&&local_snake[0][1]>=24)))
             gameover=1;
    
	if(((local_snake[0][1]<=15)&&(local_snake[0][1]>=14)&&(local_snake[0][0]<=8&&local_snake[0][0]>=6)))
		 if(direction!=2)
			 gameover=1;
    
	if(((local_snake[0][1]<=15)&&(local_snake[0][1]>=14)&&(local_snake[0][0]<=23&&local_snake[0][0]>=21)))
		 if(direction!=1)
			 gameover=1;
    
	if(((local_snake[0][0]<=15)&&(local_snake[0][0]>=14)&&(local_snake[0][1]<=23&&local_snake[0][1]>=21)))
		 if(direction!=4)
			 gameover=1;
    
	if(((local_snake[0][0]<=15)&&(local_snake[0][0]>=14)&&(local_snake[0][1]<=8&&local_snake[0][1]>=6)))
		 if(direction!=3)
			 gameover=1;

	for(int i=1;i<N;i++) 
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}



int  Snake_judge1_3()
{
	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))//墙壁
	{
             gameover=1;
	}
    
	if((local_snake[0][1]==7)&&((local_snake[0][0]<=7&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=22)))
             gameover=1;
    
	if((local_snake[0][1]==10)&&((local_snake[0][0]<=10&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=19)))
             gameover=1;
    
	if((local_snake[0][1]==19)&&((local_snake[0][0]<=10&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=19)))
             gameover=1;
   
	if((local_snake[0][1]==22)&&((local_snake[0][0]<=7&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=22)))
             gameover=1;
   
	if((local_snake[0][0]==7)&&((local_snake[0][1]<=7&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=22)))
             gameover=1;
   
	if((local_snake[0][0]==10)&&((local_snake[0][1]<=10&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=19)))
             gameover=1;
   
	if((local_snake[0][0]==19)&&((local_snake[0][1]<=10&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=19)))
             gameover=1;
   
	if((local_snake[0][0]==22)&&((local_snake[0][1]<=7&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=22)))
             gameover=1;
	
	for(int i=1;i<N;i++)
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}



int  Snake_judge1_4()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))//墙壁
	{
             gameover=1;
	}
  
	if((local_snake[0][1]==8)&&((local_snake[0][0]<=13&&local_snake[0][0]>=8)||(local_snake[0][0]<=21&&local_snake[0][0]>=16)))
             gameover=1;
   
	if((local_snake[0][1]==3)&&((local_snake[0][0]<=7&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=22)))
			 gameover=1;
    
	if((local_snake[0][1]==21)&&((local_snake[0][0]<=13&&local_snake[0][0]>=8)||(local_snake[0][0]<=21&&local_snake[0][0]>=16)))
             gameover=1;
   
	if((local_snake[0][1]==26)&&((local_snake[0][0]<=7&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=22)))
             gameover=1;
   
	if((local_snake[0][0]==3)&&((local_snake[0][1]<=7&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=22)))
             gameover=1;
  
	if((local_snake[0][0]==8)&&((local_snake[0][1]<=13&&local_snake[0][1]>=8)||(local_snake[0][1]<=21&&local_snake[0][1]>=16)))
             gameover=1;
   
	if((local_snake[0][0]==21)&&((local_snake[0][1]<=13&&local_snake[0][1]>=8)||(local_snake[0][1]<=21&&local_snake[0][1]>=16)))
             gameover=1;
   
	if((local_snake[0][0]==26)&&((local_snake[0][1]<=7&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=22)))
             gameover=1;
   
	if(((local_snake[0][0]==13)&&(local_snake[0][1]==13))||((local_snake[0][0]==13&&local_snake[0][1]==16))||((local_snake[0][0]==16&&local_snake[0][1]==13))||((local_snake[0][0]==16&&local_snake[0][1]==16)))
             gameover=1;
	
	for(int i=1;i<N;i++) 
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}



int  Snake_judge1_5()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))//墙壁
	{
             gameover=1;
	}
   
	if((local_snake[0][1]==5)&&((local_snake[0][0]<=14&&local_snake[0][0]>=6)||(local_snake[0][0]<=25&&local_snake[0][0]>=17)))
             gameover=1;
   
	if((local_snake[0][1]==11)&&((local_snake[0][0]<=14&&local_snake[0][0]>=12)||(local_snake[0][0]<=19&&local_snake[0][0]>=17)))
             gameover=1;
   
	if((local_snake[0][1]==18)&&((local_snake[0][0]<=14&&local_snake[0][0]>=12)||(local_snake[0][0]<=19&&local_snake[0][0]>=17)))
             gameover=1;
   
	if((local_snake[0][1]==24)&&((local_snake[0][0]<=14&&local_snake[0][0]>=6)||(local_snake[0][0]<=25&&local_snake[0][0]>=17)))
             gameover=1;
   
	if((local_snake[0][0]==9)&&((local_snake[0][1]<=13&&local_snake[0][1]>=8)||(local_snake[0][1]<=21&&local_snake[0][1]>=16)))
             gameover=1;
   
	if((local_snake[0][0]==22)&&((local_snake[0][1]<=13&&local_snake[0][1]>=8)||(local_snake[0][1]<=21&&local_snake[0][1]>=16)))
             gameover=1;
   
	if((local_snake[0][1]==8)&&((local_snake[0][0]<=22&&local_snake[0][0]>=9)))
             gameover=1;
   
	if((local_snake[0][1]==21)&&((local_snake[0][0]<=22&&local_snake[0][0]>=9)))
             gameover=1;
   
	if((local_snake[0][0]==6)&&((local_snake[0][1]<=24&&local_snake[0][1]>=5)))
             gameover=1;
   
	if((local_snake[0][0]==25)&&((local_snake[0][1]<=24&&local_snake[0][1]>=5)))
             gameover=1;
  
	if((local_snake[0][0]==12)&&((local_snake[0][1]<=18&&local_snake[0][1]>=11)))
             gameover=1;
   
	if((local_snake[0][0]==19)&&((local_snake[0][1]<=18&&local_snake[0][1]>=11)))
             gameover=1;
   
	if(((local_snake[0][0]==15)&&(local_snake[0][1]==14))||((local_snake[0][0]==15&&local_snake[0][1]==15))||((local_snake[0][0]==16&&local_snake[0][1]==15))||((local_snake[0][0]==16&&local_snake[0][1]==14)))
             gameover=1;

	for(int i=1;i<N;i++) 
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}


int  Snake_judge2_1()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))//墙壁
	{
             gameover=1;
	}
  
	if((local_snake[0][1]==3)&&((local_snake[0][0]<=7&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=22)))
             gameover=1;
   
	if((local_snake[0][1]==6)&&((local_snake[0][0]<=12&&local_snake[0][0]>=8)||(local_snake[0][0]<=21&&local_snake[0][0]>=17)))
             gameover=1;
   
	if((local_snake[0][1]==23)&&((local_snake[0][0]<=12&&local_snake[0][0]>=8)||(local_snake[0][0]<=21&&local_snake[0][0]>=17)))
             gameover=1;

	if((local_snake[0][1]==26)&&((local_snake[0][0]<=7&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=22)))
             gameover=1;
   
	if((local_snake[0][1]==14)&&((local_snake[0][0]<=17&&local_snake[0][0]>=12)))
             gameover=1;
   
	if((local_snake[0][1]==15)&&((local_snake[0][0]<=17&&local_snake[0][0]>=12)))
             gameover=1;
   
	if((local_snake[0][0]==5)&&((local_snake[0][1]<=23&&local_snake[0][1]>=6)))
             gameover=1;
    
	if((local_snake[0][0]==10)&&((local_snake[0][1]<=20&&local_snake[0][1]>=9)))
             gameover=1;
   
	if((local_snake[0][0]==19)&&((local_snake[0][1]<=20&&local_snake[0][1]>=9)))
             gameover=1;
    
	if((local_snake[0][0]==24)&&((local_snake[0][1]<=23&&local_snake[0][1]>=6)))
             gameover=1;

	for(int i=1;i<N;i++)
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}




int  Snake_judge2_2()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))//墙壁
	{
             gameover=1;
	}
  
	if((local_snake[0][1]==3||local_snake[0][1]==26)&&((local_snake[0][0]<=7&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=22)))
             gameover=1;
    
	if((local_snake[0][1]==14||local_snake[0][1]==15)&&((local_snake[0][0]<=9&&local_snake[0][0]>=5)||(local_snake[0][0]<=24&&local_snake[0][0]>=20)))
             gameover=1;
   
	if((local_snake[0][1]==12||local_snake[0][1]==13)&&((local_snake[0][0]<=13&&local_snake[0][0]>=12)||(local_snake[0][0]<=17&&local_snake[0][0]>=16)))
             gameover=1;
   
	if((local_snake[0][1]==16||local_snake[0][1]==17)&&((local_snake[0][0]<=13&&local_snake[0][0]>=12)||(local_snake[0][0]<=17&&local_snake[0][0]>=16)))
             gameover=1;
    
	if((local_snake[0][0]==3||local_snake[0][0]==26)&&((local_snake[0][1]<=7&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=22)))
             gameover=1;
    
	if((local_snake[0][0]==14||local_snake[0][0]==15)&&((local_snake[0][1]<=9&&local_snake[0][1]>=5)||(local_snake[0][1]<=24&&local_snake[0][1]>=20)))
             gameover=1;
   
	if((local_snake[0][1]==13||local_snake[0][1]==12)&&(local_snake[0][0]<=15&&local_snake[0][0]>=14))
		 if(direction!=1)
			 gameover=1;
   
	if((local_snake[0][1]==15||local_snake[0][1]==14)&&(local_snake[0][0]<=13&&local_snake[0][0]>=12))
		 if(direction!=4)
			 gameover=1;
    
	if((local_snake[0][1]==15||local_snake[0][1]==14)&&(local_snake[0][0]<=17&&local_snake[0][0]>=16))
		 if(direction!=3)
			 gameover=1;
    
	if((local_snake[0][1]==17||local_snake[0][1]==16)&&(local_snake[0][0]<=15&&local_snake[0][0]>=14))
		 if(direction!=1)
			 gameover=1;
	
	for(int i=1;i<N;i++) 
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}


int  Snake_judge2_3()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))//墙壁
	{
             gameover=1;
	}
   
	if((local_snake[0][1]==5||local_snake[0][1]==24)&&((local_snake[0][0]<=5&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=24)))
             gameover=1;
	
	if((local_snake[0][1]==14||local_snake[0][1]==15)&&((local_snake[0][0]<=5&&local_snake[0][0]>=1)||(local_snake[0][0]<=28&&local_snake[0][0]>=24)))
             gameover=1;
    
	if((local_snake[0][0]==14||local_snake[0][0]==15)&&((local_snake[0][1]<=5&&local_snake[0][1]>=1)||(local_snake[0][1]<=28&&local_snake[0][1]>=24)||(local_snake[0][1]<=15&&local_snake[0][1]>=14)))
             gameover=1;
   
	if((local_snake[0][0]==5||local_snake[0][0]==24)&&((local_snake[0][1]<=5&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=24)))
             gameover=1;
    
	if((local_snake[0][0]==12||local_snake[0][0]==17)&&((local_snake[0][1]<=12&&local_snake[0][1]>=9)||(local_snake[0][1]<=20&&local_snake[0][1]>=17)))
             gameover=1;
    
	if((local_snake[0][0]==8||local_snake[0][0]==21)&&((local_snake[0][1]<=9&&local_snake[0][1]>=6)||(local_snake[0][1]<=23&&local_snake[0][1]>=20)))
             gameover=1;
    
	if((local_snake[0][1]==6||local_snake[0][1]==23)&&((local_snake[0][0]<=21&&local_snake[0][0]>=8)))
             gameover=1;

	for(int i=1;i<N;i++) 
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}


int  Snake_judge2_4()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))//墙壁
	{
             gameover=1;
	}
 
	if((local_snake[0][1]==3||local_snake[0][1]==4)&&((local_snake[0][0]<=8&&local_snake[0][0]>=7)||(local_snake[0][0]<=22&&local_snake[0][0]>=21)))
             gameover=1;
    
	if((local_snake[0][1]==25||local_snake[0][1]==26)&&((local_snake[0][0]<=8&&local_snake[0][0]>=7)||(local_snake[0][0]<=22&&local_snake[0][0]>=21)))
             gameover=1;
    
	if((local_snake[0][1]==6||local_snake[0][1]==23)&&((local_snake[0][0]<=13&&local_snake[0][0]>=9)||(local_snake[0][0]<=20&&local_snake[0][0]>=16)))
             gameover=1;
   
	if((local_snake[0][1]==9||local_snake[0][1]==20||local_snake[0][1]==13||local_snake[0][1]==16)&&((local_snake[0][0]<=13&&local_snake[0][0]>=12)||(local_snake[0][0]<=17&&local_snake[0][0]>=16)))
             gameover=1;
    
	if((local_snake[0][1]==13||local_snake[0][1]==16)&&((local_snake[0][0]<=10&&local_snake[0][0]>=9)||(local_snake[0][0]<=20&&local_snake[0][0]>=19)))
             gameover=1;
    
	if((local_snake[0][0]==3||local_snake[0][0]==4||local_snake[0][0]==26||local_snake[0][0]==25)&&((local_snake[0][1]<=13&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=16)))
             gameover=1;
    
	if((local_snake[0][0]==9||local_snake[0][0]==20)&&((local_snake[0][1]<=12&&local_snake[0][1]>=6)||(local_snake[0][1]<=22&&local_snake[0][1]>=17)))
             gameover=1;
    
	if((local_snake[0][0]==12||local_snake[0][0]==17)&&((local_snake[0][1]<=12&&local_snake[0][1]>=10)||(local_snake[0][1]<=19&&local_snake[0][1]>=17)))
             gameover=1;//
    
	if((local_snake[0][1]==6||local_snake[0][1]==7)&&(local_snake[0][0]<=15&&local_snake[0][0]>=14))
		 if(direction!=1)
			 gameover=1;
    
	if((local_snake[0][1]==14||local_snake[0][1]==15)&&(local_snake[0][0]<=10&&local_snake[0][0]>=9))
		 if(direction!=4)
			 gameover=1;
    
	if((local_snake[0][1]==23||local_snake[0][1]==22)&&(local_snake[0][0]<=15&&local_snake[0][0]>=14))
		 if(direction!=2)
			 gameover=1;
    
	if((local_snake[0][1]==15||local_snake[0][1]==14)&&(local_snake[0][0]<=20&&local_snake[0][0]>=19))
		 if(direction!=3)
			 gameover=1;
	
	for(int i=1;i<N;i++)  
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}


int  Snake_judge2_5()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))//墙壁
	{
             gameover=1;
	}
   
	if((local_snake[0][1]==3||local_snake[0][1]==25)&&((local_snake[0][0]<=13&&local_snake[0][0]>=4)||(local_snake[0][0]<=25&&local_snake[0][0]>=16)))
             gameover=1;
    
	if((local_snake[0][1]==6||local_snake[0][1]==22)&&((local_snake[0][0]<=13&&local_snake[0][0]>=6)||(local_snake[0][0]<=23&&local_snake[0][0]>=16)))
             gameover=1;
    
	if((local_snake[0][1]==9||local_snake[0][1]==19)&&((local_snake[0][0]<=13&&local_snake[0][0]>=9)||(local_snake[0][0]<=20&&local_snake[0][0]>=16)))
             gameover=1;
    
	if((local_snake[0][1]==14)&&((local_snake[0][0]<=16&&local_snake[0][0]>=13)))
             gameover=1;
    
	if((local_snake[0][0]==11||local_snake[0][0]==13||local_snake[0][0]==16||local_snake[0][0]==18)&&((local_snake[0][1]<=13&&local_snake[0][1]>=12)||(local_snake[0][1]<=16&&local_snake[0][1]>=15)))
             gameover=1;
    
	if((local_snake[0][0]==4||local_snake[0][0]==25)&&((local_snake[0][1]<=13&&local_snake[0][1]>=3)||(local_snake[0][1]<=25&&local_snake[0][1]>=15)))
             gameover=1;
    
	if((local_snake[0][0]==6||local_snake[0][0]==23)&&((local_snake[0][1]<=13&&local_snake[0][1]>=6)||(local_snake[0][1]<=22&&local_snake[0][1]>=15)))
             gameover=1;
    
	if((local_snake[0][0]==9||local_snake[0][0]==20)&&((local_snake[0][1]<=13&&local_snake[0][1]>=9)||(local_snake[0][1]<=19&&local_snake[0][1]>=15)))
             gameover=1;
    
	if((local_snake[0][1]==5)&&(local_snake[0][0]<=15&&local_snake[0][0]>=14))
		 if(direction!=1)
			 gameover=1;
    
	if((local_snake[0][1]==23)&&(local_snake[0][0]<=15&&local_snake[0][0]>=14))
		 if(direction!=2)
			 gameover=1;

	for(int i=1;i<N;i++) 
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}


int  Snake_judge3_1()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))
	{
             gameover=1;
	}
   
	if((local_snake[0][1]==3||local_snake[0][1]==10||local_snake[0][1]==19||local_snake[0][1]==26)&&((local_snake[0][0]<=5&&local_snake[0][0]>=3)||(local_snake[0][0]<=10&&local_snake[0][0]>=8)||(local_snake[0][0]<=21&&local_snake[0][0]>=19)||(local_snake[0][0]<=26&&local_snake[0][0]>=24)))
            gameover=1;
    
	if((local_snake[0][1]==14||local_snake[0][1]==15)&&((local_snake[0][0]<=15&&local_snake[0][0]>=14)))
             gameover=1;
	
	if((local_snake[0][0]==3||local_snake[0][0]==10||local_snake[0][0]==19||local_snake[0][0]==26)&&((local_snake[0][1]<=5&&local_snake[0][1]>=3)||(local_snake[0][1]<=10&&local_snake[0][1]>=8)||(local_snake[0][1]<=21&&local_snake[0][1]>=19)||(local_snake[0][1]<=26&&local_snake[0][1]>=24)))
            gameover=1;
   
	for(int i=1;i<N;i++) 
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}


int  Snake_judge3_2()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))
	{
             gameover=1;
	}
   
	if((local_snake[0][1]==3||local_snake[0][1]==26)&&((local_snake[0][0]<=7&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=22)))
            gameover=1;
    
	if((local_snake[0][1]==7||local_snake[0][1]==22)&&((local_snake[0][0]<=10&&local_snake[0][0]>=6)||(local_snake[0][0]<=23&&local_snake[0][0]>=19)))
             gameover=1;
	
	if((local_snake[0][1]==13||local_snake[0][1]==16)&&((local_snake[0][0]<=13&&local_snake[0][0]>=7)||(local_snake[0][0]<=22&&local_snake[0][0]>=16)))
             gameover=1;
	
	if((local_snake[0][0]==3||local_snake[0][0]==10||local_snake[0][0]==19||local_snake[0][0]==26)&&((local_snake[0][1]<=7&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=22)))
            gameover=1;
	
	if((local_snake[0][0]==13||local_snake[0][0]==16)&&((local_snake[0][1]<=13&&local_snake[0][1]>=7)||(local_snake[0][1]<=22&&local_snake[0][1]>=16)))
             gameover=1;
    
	if((local_snake[0][1]==7)&&(local_snake[0][0]<=15&&local_snake[0][0]>=14))
		 if(direction!=2)
			 gameover=1;
    
	if((local_snake[0][1]==22)&&(local_snake[0][0]<=15&&local_snake[0][0]>=14))
		 if(direction!=2)
			 gameover=1;//
    
	if((local_snake[0][1]==14||local_snake[0][1]==15)&&(local_snake[0][0]==7))
		 if(direction!=3)
			 gameover=1;
    
	if((local_snake[0][1]==15||local_snake[0][1]==14)&&(local_snake[0][0]==22))
		 if(direction!=4)
			 gameover=1;
 
	for(int i=1;i<N;i++)
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}



int  Snake_judge3_3()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))
	{
             gameover=1;
	}
   
	if((local_snake[0][1]==5||local_snake[0][1]==24)&&((local_snake[0][0]<=5&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=24)))
            gameover=1;
    
	if((local_snake[0][1]==8||local_snake[0][1]==21)&&((local_snake[0][0]<=10&&local_snake[0][0]>=8)||(local_snake[0][0]<=21&&local_snake[0][0]>=19)))
             gameover=1;
	
	if((local_snake[0][1]==14||local_snake[0][1]==15)&&((local_snake[0][0]<=10&&local_snake[0][0]>=1)||(local_snake[0][0]<=28&&local_snake[0][0]>=19)))
             gameover=1;
	
	if((local_snake[0][0]==5||local_snake[0][0]==24)&&((local_snake[0][1]<=5&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=24)))
            gameover=1;
	
	if((local_snake[0][0]==8||local_snake[0][0]==21)&&((local_snake[0][1]<=10&&local_snake[0][1]>=8)||(local_snake[0][1]<=21&&local_snake[0][1]>=19)))
             gameover=1;
    
	if((local_snake[0][0]==14||local_snake[0][0]==15)&&((local_snake[0][1]<=10&&local_snake[0][1]>=1)||(local_snake[0][1]<=28&&local_snake[0][1]>=19)))
             gameover=1;
    
	if((local_snake[0][1]==10)&&((local_snake[0][0]<=13&&local_snake[0][0]>=11)||(local_snake[0][0]<=18&&local_snake[0][0]>=16)))
		 if(direction!=1)
			 gameover=1;
    
	if((local_snake[0][1]==19)&&((local_snake[0][0]<=13&&local_snake[0][0]>=11)||(local_snake[0][0]<=18&&local_snake[0][0]>=16)))
		 if(direction!=2)
			 gameover=1;
    
	if((local_snake[0][0]==10)&&((local_snake[0][1]<=13&&local_snake[0][1]>=11)||(local_snake[0][1]<=18&&local_snake[0][1]>=16)))
		 if(direction!=4)
			 gameover=1;
    
	if((local_snake[0][0]==19)&&((local_snake[0][1]<=13&&local_snake[0][1]>=11)||(local_snake[0][1]<=18&&local_snake[0][1]>=16)))
		 if(direction!=3)
			 gameover=1;
   
	for(int i=1;i<N;i++)
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}


int  Snake_judge3_4()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))
	{
             gameover=1;
	}
   
	if((local_snake[0][1]==3||local_snake[0][1]==26)&&((local_snake[0][0]<=13&&local_snake[0][0]>=4)||(local_snake[0][0]<=25&&local_snake[0][0]>=16)))
            gameover=1;
    
	if((local_snake[0][1]==9||local_snake[0][1]==20)&&((local_snake[0][0]<=8&&local_snake[0][0]>=4)||(local_snake[0][0]<=25&&local_snake[0][0]>=21)))
             gameover=1;
	
	if((local_snake[0][1]==13||local_snake[0][1]==16)&&((local_snake[0][0]<=13&&local_snake[0][0]>=8)||(local_snake[0][0]<=21&&local_snake[0][0]>=16)))
             gameover=1;
	
	if((local_snake[0][0]==13||local_snake[0][0]==16)&&((local_snake[0][1]<=13&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=16)))
            gameover=1;
	
	if((local_snake[0][0]==4||local_snake[0][0]==25)&&((local_snake[0][1]<=6&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=23)))
             gameover=1;
    
	if((local_snake[0][0]==4||local_snake[0][0]==8||local_snake[0][0]==25||local_snake[0][0]==21)&&((local_snake[0][1]<=13&&local_snake[0][1]>=9)||(local_snake[0][1]<=20&&local_snake[0][1]>=16)))
             gameover=1;
 
	for(int i=1;i<N;i++)
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}


int  Snake_judge3_5()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))
	{
             gameover=1;
	}

	if((local_snake[0][1]==3||local_snake[0][1]==26)&&((local_snake[0][0]<=13&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=16)))
            gameover=1;
	
	if((local_snake[0][0]==3||local_snake[0][0]==26)&&((local_snake[0][1]<=13&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=16)))
            gameover=1;
	
	if((local_snake[0][0]==13||local_snake[0][0]==16)&&((local_snake[0][1]<=10&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=19)))
             gameover=1;
    
	if((local_snake[0][0]==12||local_snake[0][0]==17)&&((local_snake[0][1]<=10&&local_snake[0][1]>=9)||(local_snake[0][1]<=20&&local_snake[0][1]>=19)))
             gameover=1;
    
	if((local_snake[0][0]==11||local_snake[0][0]==18)&&((local_snake[0][1]<=11&&local_snake[0][1]>=10)||(local_snake[0][1]<=19&&local_snake[0][1]>=18)))
             gameover=1;
    
	if((local_snake[0][0]==10||local_snake[0][0]==19)&&((local_snake[0][1]<=12&&local_snake[0][1]>=11)||(local_snake[0][1]<=18&&local_snake[0][1]>=17)))
             gameover=1;
    
	if((local_snake[0][0]==9||local_snake[0][0]==20)&&((local_snake[0][1]<=13&&local_snake[0][1]>=12)||(local_snake[0][1]<=17&&local_snake[0][1]>=16)))
             gameover=1;
    
	if((local_snake[0][0]==8||local_snake[0][0]==21)&&(local_snake[0][1]<=15&&local_snake[0][1]>=14))
             gameover=1;
    
	if((local_snake[0][1]==3||local_snake[0][1]==26)&&(local_snake[0][0]<=15&&local_snake[0][0]>=14))
		 if(direction!=1)
			 gameover=1;

	for(int i=1;i<N;i++)
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}



int  Snake_judge4_1()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))
	{
             gameover=1;
	}

	if((local_snake[0][1]==3||local_snake[0][1]==26)&&((local_snake[0][0]<=13&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=16)))
            gameover=1;
    
	if((local_snake[0][1]==6||local_snake[0][1]==19)&&(local_snake[0][0]<=17&&local_snake[0][0]>=12))
			 gameover=1;
    
	if((local_snake[0][1]==13||local_snake[0][1]==16)&&(local_snake[0][0]<=23&&local_snake[0][0]>=6))
			 gameover=1;
	
	if((local_snake[0][0]==3||local_snake[0][0]==26)&&((local_snake[0][1]<=13&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=16)))
            gameover=1;
	
	if((local_snake[0][0]==8||local_snake[0][0]==21)&&((local_snake[0][1]<=10&&local_snake[0][1]>=6)||(local_snake[0][1]<=23&&local_snake[0][1]>=19)))
             gameover=1;
    
	if((local_snake[0][1]==3||local_snake[0][1]==26)&&(local_snake[0][0]<=15&&local_snake[0][0]>=14))
		 if(direction!=1)
			 gameover=1;
    
	if((local_snake[0][1]==14||local_snake[0][1]==15)&&(local_snake[0][0]==3))
		 if(direction!=3)
			 gameover=1;
    
	if((local_snake[0][1]==14||local_snake[0][1]==15)&&(local_snake[0][0]==26))
		 if(direction!=4)
			 gameover=1;
 
	for(int i=1;i<N;i++)
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}




int  Snake_judge4_2()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))
	{
             gameover=1;
	}
 
	if((local_snake[0][1]==3||local_snake[0][1]==26)&&((local_snake[0][0]<=7&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=22)))
            gameover=1;
    
	if((local_snake[0][1]==3||local_snake[0][1]==26)&&((local_snake[0][0]<=13&&local_snake[0][0]>=10)||(local_snake[0][0]<=19&&local_snake[0][0]>=16)))
			 gameover=1;
    
	if((local_snake[0][1]==8||local_snake[0][1]==21)&&((local_snake[0][0]<=10&&local_snake[0][0]>=6)||(local_snake[0][0]<=23&&local_snake[0][0]>=19)))
			 gameover=1;
    
	if((local_snake[0][1]==13||local_snake[0][1]==16)&&((local_snake[0][0]<=13&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=16)))
			 gameover=1;
	
	if((local_snake[0][0]==3||local_snake[0][0]==26)&&((local_snake[0][1]<=13&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=16)))
            gameover=1;
	
	if((local_snake[0][0]==10||local_snake[0][0]==19)&&((local_snake[0][1]<=8&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=21)))
             gameover=1;
    
	if((local_snake[0][1]==13||local_snake[0][1]==16)&&(local_snake[0][0]<=15&&local_snake[0][0]>=14))
		 if(direction!=2)
			 gameover=1;
    
	if((local_snake[0][1]==14||local_snake[0][1]==15)&&(local_snake[0][0]==13))
		 if(direction!=4)
			 gameover=1;
    
	if((local_snake[0][1]==14||local_snake[0][1]==15)&&(local_snake[0][0]==16))
		 if(direction!=3)
			 gameover=1;
  
	for(int i=1;i<N;i++)
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}


int  Snake_judge4_3()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))
	{
             gameover=1;
	}
  
	if((local_snake[0][1]==13||local_snake[0][1]==16)&&((local_snake[0][0]<=13&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=16)))
            gameover=1;
    
	if((local_snake[0][1]==6||local_snake[0][1]==9||local_snake[0][1]==20||local_snake[0][1]==23)&&((local_snake[0][0]<=19&&local_snake[0][0]>=10)))
			 gameover=1;
	
	if((local_snake[0][0]==6||local_snake[0][0]==23)&&((local_snake[0][1]<=13&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=16)))
            gameover=1;
	
	if((local_snake[0][0]==10||local_snake[0][0]==19)&&((local_snake[0][1]<=6&&local_snake[0][1]>=3)||(local_snake[0][1]<=13&&local_snake[0][1]>=9)||(local_snake[0][1]<=20&&local_snake[0][1]>=16)||(local_snake[0][1]<=26&&local_snake[0][1]>=23)))
             gameover=1;//
    
	if((local_snake[0][0]==3||local_snake[0][0]==26)&&(local_snake[0][1]<=15&&local_snake[0][0]>=14))
		 if(direction!=4)
			 gameover=1;

	for(int i=1;i<N;i++)
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}



int  Snake_judge4_4()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))
	{
             gameover=1;
	}

	if((local_snake[0][1]==3||local_snake[0][1]==26)&&((local_snake[0][0]<=7&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=22)))
            gameover=1;
    
	if((local_snake[0][1]==6||local_snake[0][1]==23)&&((local_snake[0][0]<=9&&local_snake[0][0]>=5)||(local_snake[0][0]<=24&&local_snake[0][0]>=20)))
			 gameover=1;
    
	if((local_snake[0][1]==9||local_snake[0][1]==20)&&((local_snake[0][0]<=11&&local_snake[0][0]>=7)||(local_snake[0][0]<=22&&local_snake[0][0]>=18)))
			 gameover=1;
    
	if((local_snake[0][1]==12||local_snake[0][1]==17)&&((local_snake[0][0]<=13&&local_snake[0][0]>=9)||(local_snake[0][0]<=20&&local_snake[0][0]>=16)))
			 gameover=1;
	
	if((local_snake[0][0]==13||local_snake[0][0]==16)&&((local_snake[0][1]<=12&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=17)))
            gameover=1;
    
	if((local_snake[0][0]==11||local_snake[0][0]==18)&&((local_snake[0][1]<=17&&local_snake[0][1]>=12)))
             gameover=1;

	for(int i=1;i<N;i++)
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}



int  Snake_judge4_5()
{	
	int gameover=0;
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))
	{
             gameover=1;
	}
  
	if((local_snake[0][1]==7||local_snake[0][1]==11||local_snake[0][1]==15||local_snake[0][1]==19)&&((local_snake[0][0]<=13&&local_snake[0][0]>=3)||(local_snake[0][0]<=26&&local_snake[0][0]>=16)))
            gameover=1;
    
	if((local_snake[0][1]==5)&&((local_snake[0][0]<=8&&local_snake[0][0]>=5)||(local_snake[0][0]<=24&&local_snake[0][0]>=21)))
			 gameover=1;
    
	if((local_snake[0][1]==23||local_snake[0][1]==26)&&((local_snake[0][0]<=13&&local_snake[0][0]>=5)||(local_snake[0][0]<=24&&local_snake[0][0]>=16)))
			 gameover=1;
    
	if((local_snake[0][1]==3)&&((local_snake[0][0]<=5&&local_snake[0][0]>=3)||(local_snake[0][0]<=13&&local_snake[0][0]>=8)||(local_snake[0][0]<=21&&local_snake[0][0]>=16)||(local_snake[0][0]<=26&&local_snake[0][0]>=24)))
			 gameover=1;

	if((local_snake[0][0]==3||local_snake[0][0]==26)&&((local_snake[0][1]<=11&&local_snake[0][1]>=7)||(local_snake[0][1]<=19&&local_snake[0][1]>=15)||(local_snake[0][1]==3)))
			 gameover=1;
    
	if((local_snake[0][0]==5||local_snake[0][0]==24)&&((local_snake[0][1]<=5&&local_snake[0][1]>=3)||(local_snake[0][1]<=26&&local_snake[0][1]>=23)))
             gameover=1;
    
	if((local_snake[0][0]==13||local_snake[0][0]==16)&&((local_snake[0][1]<=7&&local_snake[0][1]>=3)||(local_snake[0][1]<=15&&local_snake[0][1]>=11)||(local_snake[0][1]<=23&&local_snake[0][1]>=19)))
             gameover=1;
    
	if((local_snake[0][0]==8||local_snake[0][0]==24)&&((local_snake[0][1]<=5&&local_snake[0][1]>=3)))
             gameover=1;
    
	if((local_snake[0][1]==3||local_snake[0][1]==26)&&(local_snake[0][0]<=15&&local_snake[0][0]>=14))
		 if(direction!=2)
			 gameover=1;//

	for(int i=1;i<N;i++)
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}
	return gameover;
}


int Snake_judge5_1()
{
	int gameover = 0;
	
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))//墙壁
	{
             gameover=1;
	}
	if((local_snake[0][0]==0&&local_snake[0][1]==27)||(local_snake[0][0]==0&&local_snake[0][1]==28))
   {
             gameover=0;
   }

	if((local_snake[0][1]==2&&(local_snake[0][0]<=15&&local_snake[0][0]>=3))||((local_snake[0][1]==5||local_snake[0][1]==11||local_snake[0][1]==17||local_snake[0][1]==23)&&(local_snake[0][0]>=14&&local_snake[0][0]<=28))||((local_snake[0][1]==8||local_snake[0][1]==14||local_snake[0][1]==20||local_snake[0][1]==26)&&(local_snake[0][0]>=1&&local_snake[0][0]<=15)))
             gameover=1;

	for(int i=1;i<N;i++)
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}

	return gameover;
}


int Snake_judge5_2()
{
	int gameover = 0;
	
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))//墙壁
	{
             gameover=1;
	}
	if((local_snake[0][0]==0&&local_snake[0][1]==14)||(local_snake[0][0]==0&&local_snake[0][1]==15))
   {
             gameover=0;
   }
	
	if(((local_snake[0][1]==3 || local_snake[0][1]==26) && ((local_snake[0][0]>=3 && local_snake[0][0]<=13) || (local_snake[0][0]>=16 && local_snake[0][0]<=26))))
			gameover=1;

	if((local_snake[0][0]==3 || local_snake[0][0]==26) && ((local_snake[0][1]>=4 && local_snake[0][1]<=13) || (local_snake[0][1]>=16 && local_snake[0][1]<=26)))
			gameover=1;

	if((local_snake[0][1]==10 || local_snake[0][1]==19) && ((local_snake[0][0]>=6 && local_snake[0][0]<=10) || (local_snake[0][0]>=19 && local_snake[0][0]<=23)))
			gameover=1;

	if((local_snake[0][0]==13 || local_snake[0][0]==16) && ((local_snake[0][1]>=6 && local_snake[0][1]<=13) || (local_snake[0][1]>=16 && local_snake[0][1]<=23)))
			gameover=1;

	if((local_snake[0][1]==13 || local_snake[0][1]==16) && ((local_snake[0][0]>=11 && local_snake[0][0]<=12) || (local_snake[0][0]>=17 && local_snake[0][0]<=18)))
			gameover=1;

	if((local_snake[0][0]==11 || local_snake[0][0]==18) && (local_snake[0][1]>=14 && local_snake[0][1]<=15))
			gameover=1;

	if((local_snake[0][1]==3 || local_snake[0][1]==26) && (local_snake[0][0]>=14 && local_snake[0][0]<=15))
			if(direction!=1)
					gameover=1;

	if((local_snake[0][1]==13 || local_snake[0][1]==16) && (local_snake[0][0]>=14 && local_snake[0][0]<=15))
			if(direction!=2)
					gameover=1;

	for(int i=1;i<N;i++)
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}

	return gameover;
}


int Snake_judge5_3()
{
	int gameover = 0;
	
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))//墙壁
	{
             gameover=1;
	}
	if((local_snake[0][0]==13&&local_snake[0][1]==0)||(local_snake[0][0]==14&&local_snake[0][1]==0))
   {
             gameover=0;
   }
	
	if(((local_snake[0][1]==3 || local_snake[0][1]==26) && ((local_snake[0][0]>=3 && local_snake[0][0]<=10) || (local_snake[0][0]>=19 && local_snake[0][0]<=26))))
			gameover=1;

	if(((local_snake[0][1]==8 || local_snake[0][1]==21) && ((local_snake[0][0]>=7 && local_snake[0][0]<=8) || (local_snake[0][0]>=21 && local_snake[0][0]<=22))))
			gameover=1;

	if((local_snake[0][0]==10 || local_snake[0][0]==19) && (local_snake[0][1]>=4 && local_snake[0][1]<=25))
			gameover=1;

	if((local_snake[0][0]==3 || local_snake[0][0]==26) && ((local_snake[0][1]>=6 && local_snake[0][1]<=13) || (local_snake[0][1]>=16 && local_snake[0][1]<=23)))
			gameover=1;

	if((local_snake[0][0]==6 || local_snake[0][0]==23) && ((local_snake[0][1]>=8 && local_snake[0][1]<=13) || (local_snake[0][1]>=16 && local_snake[0][1]<=21)))
			gameover=1;

	if((local_snake[0][0]==11 || local_snake[0][0]==18 || local_snake[0][0]==13 || local_snake[0][0]==16) && (local_snake[0][1]>=14 && local_snake[0][1]<=15))
			gameover=1;

	if((local_snake[0][0]==12 || local_snake[0][0]==17) && ((local_snake[0][1]>=3 && local_snake[0][1]<=10) || (local_snake[0][1]>=19 && local_snake[0][1]<=26)))
			gameover=1;

	if(local_snake[0][0]==15 && ((local_snake[0][1]>=1 && local_snake[0][1]<=5) || (local_snake[0][1]>=24 && local_snake[0][1]<=28)))
			gameover=1;
	
	if((local_snake[0][0]==14 || local_snake[0][0]==15) && (local_snake[0][1]>=10 && local_snake[0][1]<=19))
			gameover=1;

	for(int i=1;i<N;i++)
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}

	return gameover;
}


int Snake_judge5_4()
{
	int gameover = 0;
	
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))//墙壁
	{
             gameover=1;
	}
	
	if((local_snake[0][0]==2 || local_snake[0][0]==5) && (local_snake[0][1]>=5 && local_snake[0][1]<=10))
			gameover=1;

	if((local_snake[0][0]==3) && (local_snake[0][1]=5))
			gameover=1;

	if((local_snake[0][0]==4) && (local_snake[0][1]>=2 && local_snake[0][1]<=5))
			gameover=1;

	if((local_snake[0][1]==2) && (local_snake[0][0]>=5 && local_snake[0][0]<=6))
			gameover=1;

	if((local_snake[0][1]==3) && ((local_snake[0][0]>=8 && local_snake[0][0]<=12) || (local_snake[0][0]>=15 && local_snake[0][0]<=27)))
			gameover=1;

	if((local_snake[0][0]==8) && (local_snake[0][1]>=4 && local_snake[0][1]<=10))
			gameover=1;
	
	if((local_snake[0][0]==12 || local_snake[0][0]==15) && (local_snake[0][1]>=4 && local_snake[0][1]<=8))
			gameover=1;
	
	if((local_snake[0][0]==27) && (local_snake[0][1]>=4 && local_snake[0][1]<=13))
			gameover=1;

	if((local_snake[0][1]==8) && ((local_snake[0][0]>=13 && local_snake[0][0]<=14) || (local_snake[0][0]>=21 && local_snake[0][0]<=22)))
			gameover=1;

	if((local_snake[0][1]==10) && (local_snake[0][0]>=9 && local_snake[0][0]<=18))
			gameover=1;

	if((local_snake[0][1]==13) && ((local_snake[0][0]>=2 && local_snake[0][0]<=19) || (local_snake[0][0]>=24 && local_snake[0][0]<=26)))
			gameover=1;

	if((local_snake[0][0]==20 || local_snake[0][0]==23) && ((local_snake[0][1]>=8 && local_snake[0][1]<=13) || (local_snake[0][1]>=16 && local_snake[0][1]<=19)))
			gameover=1;

	if((local_snake[0][0]==5 || local_snake[0][0]==8 || local_snake[0][0]==11 || local_snake[0][0]==14 || local_snake[0][0]==17 || local_snake[0][0]==20 || local_snake[0][0]==23) && (local_snake[0][1]>=16 && local_snake[0][1]<=19))
			gameover=1;

	if((local_snake[0][0]==2) && (local_snake[0][1]>=16 && local_snake[0][1]<=23))
			gameover=1;

	if((local_snake[0][0]==27) && (local_snake[0][1]>=19 && local_snake[0][1]<=23))
			gameover=1;

	if((local_snake[0][0]==6) && (local_snake[0][1]>=23 && local_snake[0][1]<=26))
			gameover=1;

	if((local_snake[0][0]==10 || local_snake[0][0]==13 || local_snake[0][0]==16 || local_snake[0][0]==19 || local_snake[0][0]==22 || local_snake[0][0]==25) && (local_snake[0][1]>=23 && local_snake[0][1]<=27))
			gameover=1;

	if((local_snake[0][1]==16) && ((local_snake[0][0]>=3 && local_snake[0][0]<=4) || (local_snake[0][0]>=9 && local_snake[0][0]<=10) || (local_snake[0][0]>=15 && local_snake[0][0]<=16) || (local_snake[0][0]>=21 && local_snake[0][0]<=22)))
			gameover=1;

	if((local_snake[0][1]==19) && ((local_snake[0][0]>=6 && local_snake[0][0]<=7) || (local_snake[0][0]>=12 && local_snake[0][0]<=13) || (local_snake[0][0]>=18 && local_snake[0][0]<=19) || (local_snake[0][0]>=24 && local_snake[0][0]<=26)))
			gameover=1;

	if((local_snake[0][1]==23) && ((local_snake[0][0]>=7 && local_snake[0][0]<=9) || (local_snake[0][0]>=14 && local_snake[0][0]<=15) || (local_snake[0][0]>=20 && local_snake[0][0]<=21) || (local_snake[0][0]==26)))
			gameover=1;

	if((local_snake[0][1]==26) && (local_snake[0][0]>=1 && local_snake[0][0]<=5))
			gameover=1;

	if((local_snake[0][1]==27) && ((local_snake[0][0]>=11 && local_snake[0][0]<=12) || (local_snake[0][0]>=17 && local_snake[0][0]<=18) || (local_snake[0][0]>=23 && local_snake[0][0]<=24)))
			gameover=1;

	for(int i=1;i<N;i++)
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}


	return gameover;
}


int Snake_judge5_5()
{
	int gameover = 0;
	
	if((local_snake[0][0]<=0)||(local_snake[0][0]>=29)||(local_snake[0][1]<=0)||(local_snake[0][1]>=29))//墙壁
	{
             gameover=1;
	}
	if((local_snake[0][0]==0&&local_snake[0][1]==1)||(local_snake[0][0]==0&&local_snake[0][1]==2))
   {
             gameover=0;
   }

	if((local_snake[0][0]==3 || local_snake[0][0]==12) && (local_snake[0][1]>=1 && local_snake[0][1]<=4))
			gameover=1;

	if((local_snake[0][0]==9) && (local_snake[0][1]>=4 && local_snake[0][1]<=10))
			gameover=1;

	if((local_snake[0][0]==17) && (local_snake[0][1]>=4 && local_snake[0][1]<=13))
			gameover=1;

	if((local_snake[0][0]==23) && (local_snake[0][1]>=1 && local_snake[0][1]<=16))
			gameover=1;

	if(local_snake[0][0]==26 && (local_snake[0][1]>=10 && local_snake[0][1]<=13))
			gameover=1;
	
	if(local_snake[0][0]==3 && (local_snake[0][1]>=13 && local_snake[0][1]<=26))
			gameover=1;
	
	if(local_snake[0][0]==6 && (local_snake[0][1]>=10 && local_snake[0][1]<=23))
			gameover=1;

	if(local_snake[0][0]==9 && (local_snake[0][1]>=23 && local_snake[0][1]<=26))
			gameover=1;

	if(local_snake[0][0]==12 && (local_snake[0][1]>=20 && local_snake[0][1]<=26))
			gameover=1;

	if(local_snake[0][0]==15 && ((local_snake[0][1]>=14 && local_snake[0][1]<=20) || (local_snake[0][1]>=26 && local_snake[0][1]<=28)))
			gameover=1;

	if(local_snake[0][0]==18 && (local_snake[0][1]>=20 && local_snake[0][1]<=22))
			gameover=1;

	if(local_snake[0][0]==21 && (local_snake[0][1]>=16 && local_snake[0][1]<=20))
			gameover=1;

	if(local_snake[0][0]==24 && (local_snake[0][1]>=19 && local_snake[0][1]<=23))
			gameover=1;

	if(local_snake[0][1]==3 && (local_snake[0][0]>=26 && local_snake[0][0]<=28))
			gameover=1;

	if(local_snake[0][1]==4 && ((local_snake[0][0]>=4 && local_snake[0][0]<=6) || (local_snake[0][0]>=13 && local_snake[0][0]<=14) || (local_snake[0][0]>=18 && local_snake[0][0]<=20)))
			gameover=1;

	if(local_snake[0][1]==7 && ((local_snake[0][0]>=1 && local_snake[0][0]<=8) || (local_snake[0][0]>=10 && local_snake[0][0]<=16) || (local_snake[0][0]>=20 && local_snake[0][0]<=22)))
			gameover=1;

	if(local_snake[0][1]==10 && ((local_snake[0][0]>=1 && local_snake[0][0]<=3) || (local_snake[0][0]>=10 && local_snake[0][0]<=13) || (local_snake[0][0]>=18 && local_snake[0][0]<=20) || (local_snake[0][0]>=24 && local_snake[0][0]<=25)))
			gameover=1;

	if(local_snake[0][1]==13 && ((local_snake[0][0]>=7 && local_snake[0][0]<=16) || (local_snake[0][0]>=20 && local_snake[0][0]<=22)))
			gameover=1;

	if(local_snake[0][1]==16 && local_snake[0][0]==22)
			gameover=1;

	if(local_snake[0][1]==20 && ((local_snake[0][0]>=9 && local_snake[0][0]<=11) || (local_snake[0][0]>=19 && local_snake[0][0]<=20)))
			gameover=1;

	if(local_snake[0][1]==23 && ((local_snake[0][0]>=7 && local_snake[0][0]<=8) || (local_snake[0][0]>=13 && local_snake[0][0]<=23)))
			gameover=1;

	if(local_snake[0][1]==26 && ((local_snake[0][0]>=4 && local_snake[0][0]<=8) || (local_snake[0][0]>=16 && local_snake[0][0]<=18)))
			gameover=1;

	for(int i=1;i<N;i++)
	{
         if(local_snake[0][0]==local_snake[i][0]&&local_snake[0][1]==local_snake[i][1])
		 {
			 gameover=-1;
			 break;
		 }
	}

	return gameover;
}
int customs_pass_1_1()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)//food1_1
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide1_1(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}
int customs_pass_1_2()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)//food1_1
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide1_2(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}
int customs_pass_1_3()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)//food1_1
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide1_3(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}

int customs_pass_1_4()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)//food1_1
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide1_4(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}


int customs_pass_1_5()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)//food1_1
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide1_4(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}


int customs_pass_2_1()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide2_1(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}



int customs_pass_2_2()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide2_2(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}



int customs_pass_2_3()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide2_3(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}



int customs_pass_2_4()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide2_4(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}



int customs_pass_2_5()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide2_5(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}


int customs_pass_3_1()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
		 char f[50];
		 sprintf(f,"%d",bool_p);//距离洞出现剩余时间
			    outtextxy(18.5*UNIT, 26.5*UNIT, f); 
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide3_1(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}


int customs_pass_3_2()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide3_2(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}


int customs_pass_3_3()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide3_3(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}


int customs_pass_3_4()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide3_4(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}


int customs_pass_3_5()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide3_5(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}


int customs_pass_4_1()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide4_1(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}


int customs_pass_4_2()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide4_2(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}


int customs_pass_4_3()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide4_3(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}


int customs_pass_4_4()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide4_4(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}


int customs_pass_4_5()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(count1>=food1_1&&count2>=food2_1&&count3>=food3_1)
	 {
		 time_t t1=time(NULL);
		 char s[30];
		 if(bool_p==1)
		 {
	    	count1_2=count1;
	    	count2_2=count2;
			count3_2=count3;
			bool_p=0;
		 }
		 if(bool_p==0)
		 {
		    if(count1_2!=count1||count2_2!=count2||count3_2!=count3)
			{
			    t0=time(NULL);
				bool_p=2;
				bool_q=0;
			}
		 }
	      if(difftime(t1,t0)<=20)
		  {
                sprintf(s,"距洞重新开启时间还剩%.1fs",20-difftime(t1,t0));//距离洞出现剩余时间
			    outtextxy(32.5*UNIT, 26.5*UNIT, s); 
		  }
          if(difftime(t1,t0)>=20&&bool_q==0)
		  {
			  if(bool_t==0)
			  {
			      while(foodexit==0)
				  {
	                 foodexit=1;
	                 door_x=rand()%28+1;
	                 door_y=rand()%28+1;
                     foodexit=food_decide4_5(door_x,door_y,4);
				  }
			  bool_t=1;
			  }
		   bool_q=1;
		  }
          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)//&&bool_q==1
              gameover_pd=1;
		  if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		  {
				   if(difftime(t1,t0)>=20)
				   {
			          if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					   gameover_pd=2;
				   }
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
					   if(difftime(t1,t0)>=20)
				       if(door_x==local_snake[0][0]&&door_y==local_snake[0][1]&&bool_q==1)
					         gameover_pd=3;
		  }
		   if(bool_q==1)
		   {
		   	   putimage(door_x*UNIT,door_y*UNIT,&props[0][0],SRCAND);
		       putimage(door_x*UNIT,door_y*UNIT,&props[0][1],SRCINVERT);
		   }
	 }
return gameover_pd;
}



int customs_pass_5_1()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(bool9==0)//输出门
	 {
			   putimage(0,27*UNIT,&img9,SRCAND); 
			   putimage(0,27*UNIT,&img9_1,SRCINVERT);			   
			   putimage(0,28*UNIT,&img9,SRCAND); 
			   putimage(0,28*UNIT,&img9_1,SRCINVERT);
	 }
  	 else
	 {
			   putimage(0,27*UNIT,&img10,SRCAND); 
			   putimage(0,27*UNIT,&img10_1,SRCINVERT);			   
			   putimage(0,28*UNIT,&img10,SRCAND); 
			   putimage(0,28*UNIT,&img10_1,SRCINVERT);
	 }      
	 if(count1>=food1_1&&count2>=0&&count3>=food3_1)//food1_1
	 {
         if(bool8==0)
		 {
			 int foodexit=0;
	         while(foodexit==0)
				{
	               foodexit=1;
	               key[0][0]=rand()%28+1;
	               key[0][1]=rand()%28+1;
                   foodexit=food_decide5_1(key[0][0],key[0][1],7);
				}
			 key_x1= key[0][0];
			 key_y1= key[0][1];
			 bool8=1;
		 }
	     if(bool10==0)
		 {
			 int foodexit=0;
	         while(foodexit==0)
				{
	               foodexit=1;
	               key[1][0]=rand()%28+1;
	               key[1][1]=rand()%28+1;
                   foodexit=food_decide5_1(key[1][0],key[1][1],8);
				}
			 key_x2= key[1][0];
			 key_y2= key[1][1];
			 bool10=2;
		 }
         if(bool8==1&&bool10==1)
			 bool10=0;
	     if(bool11==0)
		 {
			 int foodexit=0;
	         while(foodexit==0)
				{
	               foodexit=1;
	               key[2][0]=rand()%28+1;
	               key[2][1]=rand()%28+1;
                   foodexit=food_decide5_1(key[2][0],key[2][1],9);
				}
			 key_x3= key[2][0];
			 key_y3= key[2][1];
			 bool11=2;
		 }
		 if(bool10==2&&bool11==1)
			 bool11=0;
		 if(local_snake[0][0]==key[2][0]&&local_snake[0][1]==key[2][1])//判断是否吃上真钥匙
		 {
			 bool9=1;//标记为开启
			 bool14=1;
		 }
		 if((local_snake[0][0]==key[0][0]&&local_snake[0][1]==key[0][1]))//若未吃到则增加蛇长
		 {
			 Add_snake();
			 Add_snake();
			 bool12=1;
		 }
		 if((local_snake[0][0]==key[1][0]&&local_snake[0][1]==key[1][1]))//若未吃到则增加蛇长
		 {
			 Add_snake();
			 Add_snake();
			 bool13=1;
		 }
         if(((local_snake[0][0]==0&&local_snake[0][1]==27)||(local_snake[0][0]==0&&local_snake[0][1]==28))&&bool9!=1)//未开启时若碰则死亡
			 gameover_pd=4;
		 if(((local_snake[0][0]==0&&local_snake[0][1]==27)||(local_snake[0][0]==0&&local_snake[0][1]==28))&&bool9==1)
                  gameover_pd=1;
		 if(bool12==0)
		 {
			   putimage(key[0][0]*UNIT,key[0][1]*UNIT,&props[2][0],SRCAND);
			   putimage(key[0][0]*UNIT,key[0][1]*UNIT,&props[2][1],SRCINVERT);
		 }
		 if(bool13==0&&bool10==2)
		 {
			   putimage(key[1][0]*UNIT,key[1][1]*UNIT,&props[2][0],SRCAND);
			   putimage(key[1][0]*UNIT,key[1][1]*UNIT,&props[2][1],SRCINVERT);
		 }
		 if(bool14==0&&bool11==2)
		{
			   putimage(key[2][0]*UNIT,key[2][1]*UNIT,&props[2][0],SRCAND);
			   putimage(key[2][0]*UNIT,key[2][1]*UNIT,&props[2][1],SRCINVERT);
		}
		if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		{
			       if(((local_snake[0][0]==0&&local_snake[0][1]==27)||(local_snake[0][0]==0&&local_snake[0][1]==28))&&bool9==1)
					   gameover_pd=2;
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
				       if(((local_snake[0][0]==0&&local_snake[0][1]==27)||(local_snake[0][0]==0&&local_snake[0][1]==28))&&bool9==1)
					         gameover_pd=3;
		}
	 }
     return gameover_pd;
}



int customs_pass_5_2()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(bool9==0)//输出门
	{
			   putimage(0,14*UNIT,&img9,SRCAND); 
			   putimage(0,14*UNIT,&img9_1,SRCINVERT);			   
			   putimage(0,15*UNIT,&img9,SRCAND); 
			   putimage(0,15*UNIT,&img9_1,SRCINVERT);
	}
	else
	{
			   putimage(0,14*UNIT,&img10,SRCAND); 
			   putimage(0,14*UNIT,&img10_1,SRCINVERT);			   
			   putimage(0,15*UNIT,&img10,SRCAND); 
			   putimage(0,15*UNIT,&img10_1,SRCINVERT);
	}      
	 if(count1>=food1_1&&count2>=0&&count3>=food3_1)//food1_1
	 {
         if(bool8==0)
		 {
			 int foodexit=0;
	         while(foodexit==0)
				{
	               foodexit=1;
	               key[0][0]=rand()%28+1;
	               key[0][1]=rand()%28+1;
                   foodexit=food_decide5_2(key[0][0],key[0][1],7);
				}
			 key_x1= key[0][0];
			 key_y1= key[0][1];
			 bool8=1;
		}
	     if(bool10==0)
		 {
			 int foodexit=0;
	         while(foodexit==0)
				{
	               foodexit=1;
	               key[1][0]=rand()%28+1;
	               key[1][1]=rand()%28+1;
                   foodexit=food_decide5_2(key[1][0],key[1][1],8);
				}
			 key_x2= key[1][0];
			 key_y2= key[1][1];
			 bool10=2;
		}
         if(bool8==1&&bool10==1)
			 bool10=0;
	     if(bool11==0)
		 {
			 int foodexit=0;
	         while(foodexit==0)
				{
	               foodexit=1;
	               key[2][0]=rand()%28+1;
	               key[2][1]=rand()%28+1;
                   foodexit=food_decide5_2(key[2][0],key[2][1],9);
				}
			 key_x3= key[2][0];
			 key_y3= key[2][1];
			 bool11=2;
		}
		if(bool10==2&&bool11==1)
			 bool11=0;
		 if(local_snake[0][0]==key[2][0]&&local_snake[0][1]==key[2][1])//判断是否吃上真钥匙
		 {
			 bool9=1;//标记为开启
			 bool14=1;
		 }
		 if((local_snake[0][0]==key[0][0]&&local_snake[0][1]==key[0][1]))//若未吃到则增加蛇长
		 {
			 Add_snake();
			 Add_snake();
			 bool12=1;
		 }
		 if((local_snake[0][0]==key[1][0]&&local_snake[0][1]==key[1][1]))//若未吃到则增加蛇长
		 {
			 Add_snake();
			 Add_snake();
			 bool13=1;
		 }

        if(((local_snake[0][0]==0&&local_snake[0][1]==14)||(local_snake[0][0]==0&&local_snake[0][1]==15))&&bool9!=1)//未开启时若碰则死亡
			 gameover_pd=4;
		 if(((local_snake[0][0]==0&&local_snake[0][1]==14)||(local_snake[0][0]==0&&local_snake[0][1]==15))&&bool9==1)
                  gameover_pd=1;
		 if(bool12==0)
		 {
			   putimage(key[0][0]*UNIT,key[0][1]*UNIT,&props[2][0],SRCAND);
			   putimage(key[0][0]*UNIT,key[0][1]*UNIT,&props[2][1],SRCINVERT);
		 }
		 if(bool13==0&&bool10==2)
		 {
			   putimage(key[1][0]*UNIT,key[1][1]*UNIT,&props[2][0],SRCAND);
			   putimage(key[1][0]*UNIT,key[1][1]*UNIT,&props[2][1],SRCINVERT);
		 }
		 if(bool14==0&&bool11==2)
		 {
			   putimage(key[2][0]*UNIT,key[2][1]*UNIT,&props[2][0],SRCAND);
			   putimage(key[2][0]*UNIT,key[2][1]*UNIT,&props[2][1],SRCINVERT);
		 }
		 if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		 {
			       if(((local_snake[0][0]==0&&local_snake[0][1]==14)||(local_snake[0][0]==0&&local_snake[0][1]==15))&&bool9==1)
					   gameover_pd=2;
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
				       if(((local_snake[0][0]==0&&local_snake[0][1]==14)||(local_snake[0][0]==0&&local_snake[0][1]==15))&&bool9==1)
					         gameover_pd=3;
		 }
	 }
return gameover_pd;
}




int customs_pass_5_3()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(bool9==0)//输出门
	{
			   putimage(13*UNIT,0*UNIT,&img9,SRCAND); 
			   putimage(13*UNIT,0*UNIT,&img9_1,SRCINVERT);			   
			   putimage(14*UNIT,0*UNIT,&img9,SRCAND); 
			   putimage(14*UNIT,0*UNIT,&img9_1,SRCINVERT);
	}
	else
	{
			   putimage(13*UNIT,0*UNIT,&img10,SRCAND); 
			   putimage(13*UNIT,0*UNIT,&img10_1,SRCINVERT);			   
			   putimage(14*UNIT,0*UNIT,&img10,SRCAND); 
			   putimage(14*UNIT,0*UNIT,&img10_1,SRCINVERT);
	}      
	 if(count1>=food1_1&&count2>=0&&count3>=food3_1)//food1_1
	 {
         if(bool8==0)
		 {
			 int foodexit=0;
	         while(foodexit==0)
				{
	               foodexit=1;
	               key[0][0]=rand()%28+1;
	               key[0][1]=rand()%28+1;
                   foodexit=food_decide5_3(key[0][0],key[0][1],7);
				}
			 key_x1= key[0][0];
			 key_y1= key[0][1];
			 bool8=1;
		}
	     if(bool10==0)
		 {
			 int foodexit=0;
	         while(foodexit==0)
				{
	               foodexit=1;
	               key[1][0]=rand()%28+1;
	               key[1][1]=rand()%28+1;
                   foodexit=food_decide5_3(key[1][0],key[1][1],8);
				}
			 key_x2= key[1][0];
			 key_y2= key[1][1];
			 bool10=2;
		}
         if(bool8==1&&bool10==1)
			 bool10=0;
	     if(bool11==0)
		 {
			 int foodexit=0;
	         while(foodexit==0)
				{
	               foodexit=1;
	               key[2][0]=rand()%28+1;
	               key[2][1]=rand()%28+1;
                   foodexit=food_decide5_3(key[2][0],key[2][1],9);
				}
			 key_x3= key[2][0];
			 key_y3= key[2][1];
			 bool11=2;
		}
		if(bool10==2&&bool11==1)
			 bool11=0;
		 if(local_snake[0][0]==key[2][0]&&local_snake[0][1]==key[2][1])//判断是否吃上真钥匙
		 {
			 bool9=1;//标记为开启
			 bool14=1;
		 }
		 if((local_snake[0][0]==key[0][0]&&local_snake[0][1]==key[0][1]))//若未吃到则增加蛇长
		 {
			 Add_snake();
			 Add_snake();
			 bool12=1;
		 }
		 if((local_snake[0][0]==key[1][0]&&local_snake[0][1]==key[1][1]))//若未吃到则增加蛇长
		 {
			 Add_snake();
			 Add_snake();
			 bool13=1;
		 }
        if(((local_snake[0][0]==13&&local_snake[0][1]==0)||(local_snake[0][0]==14&&local_snake[0][1]==0))&&bool9!=1)//未开启时若碰则死亡
			 gameover_pd=4;
		if(((local_snake[0][0]==13&&local_snake[0][1]==0)||(local_snake[0][0]==14&&local_snake[0][1]==0))&&bool9==1)
                  gameover_pd=1;
		 if(bool12==0)
		 {
			   putimage(key[0][0]*UNIT,key[0][1]*UNIT,&props[2][0],SRCAND);
			   putimage(key[0][0]*UNIT,key[0][1]*UNIT,&props[2][1],SRCINVERT);
		 }
		 if(bool13==0&&bool10==2)
		 {
			   putimage(key[1][0]*UNIT,key[1][1]*UNIT,&props[2][0],SRCAND);
			   putimage(key[1][0]*UNIT,key[1][1]*UNIT,&props[2][1],SRCINVERT);
		 }
		 if(bool14==0&&bool11==2)
		 {
			   putimage(key[2][0]*UNIT,key[2][1]*UNIT,&props[2][0],SRCAND);
			   putimage(key[2][0]*UNIT,key[2][1]*UNIT,&props[2][1],SRCINVERT);
		 }
		 if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		 {
			       if(((local_snake[0][0]==13&&local_snake[0][1]==0)||(local_snake[0][0]==14&&local_snake[0][1]==0))&&bool9==1)
					   gameover_pd=2;
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
				       if(((local_snake[0][0]==13&&local_snake[0][1]==0)||(local_snake[0][0]==14&&local_snake[0][1]==0))&&bool9==1)
					         gameover_pd=3;
		 }
	 }
return gameover_pd;
}



int customs_pass_5_4()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(bool9==0)//输出门
	{
			   putimage(0,14*UNIT,&img9,SRCAND); 
			   putimage(0,14*UNIT,&img9_1,SRCINVERT);			   
			   putimage(0,15*UNIT,&img9,SRCAND); 
			   putimage(0,15*UNIT,&img9_1,SRCINVERT);
	}
	else
	{
			   putimage(0,14*UNIT,&img10,SRCAND); 
			   putimage(0,14*UNIT,&img10_1,SRCINVERT);			   
			   putimage(0,15*UNIT,&img10,SRCAND); 
			   putimage(0,15*UNIT,&img10_1,SRCINVERT);
	}      
	 if(count1>=food1_1&&count2>=0&&count3>=food3_1)//food1_1
	 {
         if(bool8==0)
		 {
			 int foodexit=0;
	         while(foodexit==0)
				{
	               foodexit=1;
	               key[0][0]=rand()%28+1;
	               key[0][1]=rand()%28+1;
                   foodexit=food_decide5_4(key[0][0],key[0][1],7);
				}
			 key_x1= key[0][0];
			 key_y1= key[0][1];
			 bool8=1;
		}
	     if(bool10==0)
		 {
			 int foodexit=0;
	         while(foodexit==0)
				{
	               foodexit=1;
	               key[1][0]=rand()%28+1;
	               key[1][1]=rand()%28+1;
                   foodexit=food_decide5_4(key[1][0],key[1][1],8);
				}
			 key_x2= key[1][0];
			 key_y2= key[1][1];
			 bool10=2;
		}
         if(bool8==1&&bool10==1)
			 bool10=0;
	     if(bool11==0)
		 {
			 int foodexit=0;
	         while(foodexit==0)
				{
	               foodexit=1;
	               key[2][0]=rand()%28+1;
	               key[2][1]=rand()%28+1;
                   foodexit=food_decide5_4(key[2][0],key[2][1],9);
				}
			 key_x3= key[2][0];
			 key_y3= key[2][1];
			 bool11=2;
		}
		if(bool10==2&&bool11==1)
			 bool11=0;
		 if(local_snake[0][0]==key[2][0]&&local_snake[0][1]==key[2][1])//判断是否吃上真钥匙
		 {
			 bool9=1;//标记为开启
			 bool14=1;
		 }
		 if((local_snake[0][0]==key[0][0]&&local_snake[0][1]==key[0][1]))//若未吃到则增加蛇长
		 {
			 Add_snake();
			 Add_snake();
			 bool12=1;
		 }
		 if((local_snake[0][0]==key[1][0]&&local_snake[0][1]==key[1][1]))//若未吃到则增加蛇长
		 {
			 Add_snake();
			 Add_snake();
			 bool13=1;
		 }

        if(((local_snake[0][0]==0&&local_snake[0][1]==24)||(local_snake[0][0]==0&&local_snake[0][1]==25))&&bool9!=1)//未开启时若碰则死亡
			 gameover_pd=4;
		 if(((local_snake[0][0]==0&&local_snake[0][1]==24)||(local_snake[0][0]==0&&local_snake[0][1]==25))&&bool9==1)
                  gameover_pd=1;
		 if(bool12==0)
		 {
			   putimage(key[0][0]*UNIT,key[0][1]*UNIT,&props[2][0],SRCAND);
			   putimage(key[0][0]*UNIT,key[0][1]*UNIT,&props[2][1],SRCINVERT);
		 }
		 if(bool13==0&&bool10==2)
		 {
			   putimage(key[1][0]*UNIT,key[1][1]*UNIT,&props[2][0],SRCAND);
			   putimage(key[1][0]*UNIT,key[1][1]*UNIT,&props[2][1],SRCINVERT);
		 }
		 if(bool14==0&&bool11==2)
		 {
			   putimage(key[2][0]*UNIT,key[2][1]*UNIT,&props[2][0],SRCAND);
			   putimage(key[2][0]*UNIT,key[2][1]*UNIT,&props[2][1],SRCINVERT);
		 }
		 if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		 {
			       if(((local_snake[0][0]==0&&local_snake[0][1]==24)||(local_snake[0][0]==0&&local_snake[0][1]==25))&&bool9==1)
					   gameover_pd=2;
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
				       if(((local_snake[0][0]==0&&local_snake[0][1]==24)||(local_snake[0][0]==0&&local_snake[0][1]==25))&&bool9==1)
					         gameover_pd=3;
		 }
	 }
return gameover_pd;
}



int customs_pass_5_5()
{
	 srand((int)time(0));
	 int foodexit=0;
	 int gameover_pd=0;
	 int temp1=0,temp2=0,temp3=0;
	 if(bool9==0)//输出门
	{
			   putimage(0,1*UNIT,&img9,SRCAND); 
			   putimage(0,1*UNIT,&img9_1,SRCINVERT);			   
			   putimage(0,2*UNIT,&img9,SRCAND); 
			   putimage(0,2*UNIT,&img9_1,SRCINVERT);
	}
	else
	{
			   putimage(0,1*UNIT,&img10,SRCAND); 
			   putimage(0,1*UNIT,&img10_1,SRCINVERT);			   
			   putimage(0,2*UNIT,&img10,SRCAND); 
			   putimage(0,2*UNIT,&img10_1,SRCINVERT);
	}      
	 if(count1>=food1_1&&count2>=0&&count3>=food3_1)//food1_1
	 {
         if(bool8==0)
		 {
			 int foodexit=0;
	         while(foodexit==0)
				{
	               foodexit=1;
	               key[0][0]=rand()%28+1;
	               key[0][1]=rand()%28+1;
                   foodexit=food_decide5_5(key[0][0],key[0][1],7);
				}
			 key_x1= key[0][0];
			 key_y1= key[0][1];
			 bool8=1;
		}
	     if(bool10==0)
		 {
			 int foodexit=0;
	         while(foodexit==0)
				{
	               foodexit=1;
	               key[1][0]=rand()%28+1;
	               key[1][1]=rand()%28+1;
                   foodexit=food_decide5_5(key[1][0],key[1][1],8);
				}
			 key_x2= key[1][0];
			 key_y2= key[1][1];
			 bool10=2;
		}
         if(bool8==1&&bool10==1)
			 bool10=0;
	     if(bool11==0)
		 {
			 int foodexit=0;
	         while(foodexit==0)
				{
	               foodexit=1;
	               key[2][0]=rand()%28+1;
	               key[2][1]=rand()%28+1;
                   foodexit=food_decide5_5(key[2][0],key[2][1],9);
				}
			 key_x3= key[2][0];
			 key_y3= key[2][1];
			 bool11=2;
		}
		if(bool10==2&&bool11==1)
			 bool11=0;
		 if(local_snake[0][0]==key[2][0]&&local_snake[0][1]==key[2][1])//判断是否吃上真钥匙
		 {
			 bool9=1;//标记为开启
			 bool14=1;
		 }
		 if((local_snake[0][0]==key[0][0]&&local_snake[0][1]==key[0][1]))//若未吃到则增加蛇长
		 {
			 Add_snake();
			 Add_snake();
			 bool12=1;
		 }
		 if((local_snake[0][0]==key[1][0]&&local_snake[0][1]==key[1][1]))//若未吃到则增加蛇长
		 {
			 Add_snake();
			 Add_snake();
			 bool13=1;
		 }

        if(((local_snake[0][0]==0&&local_snake[0][1]==1)||(local_snake[0][0]==0&&local_snake[0][1]==2))&&bool9!=1)//未开启时若碰则死亡
			 gameover_pd=4;
		 if(((local_snake[0][0]==0&&local_snake[0][1]==1)||(local_snake[0][0]==0&&local_snake[0][1]==2))&&bool9==1)
                  gameover_pd=1;
		 if(bool12==0)
		 {
			   putimage(key[0][0]*UNIT,key[0][1]*UNIT,&props[2][0],SRCAND);
			   putimage(key[0][0]*UNIT,key[0][1]*UNIT,&props[2][1],SRCINVERT);
		 }
		 if(bool13==0&&bool10==2)
		 {
			   putimage(key[1][0]*UNIT,key[1][1]*UNIT,&props[2][0],SRCAND);
			   putimage(key[1][0]*UNIT,key[1][1]*UNIT,&props[2][1],SRCINVERT);
		 }
		 if(bool14==0&&bool11==2)
		 {
			   putimage(key[2][0]*UNIT,key[2][1]*UNIT,&props[2][0],SRCAND);
			   putimage(key[2][0]*UNIT,key[2][1]*UNIT,&props[2][1],SRCINVERT);
		 }
		 if(count1>=food1_2&&count2>=food2_2&&count3>=food3_2)
		 {
			       if(((local_snake[0][0]==0&&local_snake[0][1]==1)||(local_snake[0][0]==0&&local_snake[0][1]==2))&&bool9==1)
					   gameover_pd=2;
				   if(count1>=food1_3&&count2>=food2_3&&count3>=food3_3)
				       if(((local_snake[0][0]==0&&local_snake[0][1]==1)||(local_snake[0][0]==0&&local_snake[0][1]==2))&&bool9==1)
					         gameover_pd=3;
		 }
	 }
return gameover_pd;
}









void Cut_down_snake()//蛇身减短
{
		N--;
		Snake_tail();
		local_snake[N][2]=0;
        local_snake[N][0]=0;
		local_snake[N][1]=0;
		N--;
		Snake_tail();
		local_snake[N][2]=0;
        local_snake[N][0]=0;
		local_snake[N][1]=0;
		N--;
		Snake_tail();
		local_snake[N][2]=0;
        local_snake[N][0]=0;
		local_snake[N][1]=0;
}


void product_props2_1()//道具随机添加
{
     char q[30];
	 sprintf(q,"距离道具重现剩余%d个水果",6-count_1);
	 outtextxy(10.5*UNIT,1.5*UNIT,q);
	 int foodexit=1;
	 if(count_1==6&&boolw==0)
	 {
		t2=time(NULL);
		boolw=1;
	 }
	 time_t t3=time(NULL);
	 if(difftime(t3,t2)<20)
	 {
         char r[30];
	     if(count_1==6&&boolw==1)
		 {
	        sprintf(r,"道具消失剩余%.1fs",20-difftime(t3,t2));
	        outtextxy(34*UNIT,22.5*UNIT,r);
		 }
	 }
     if(difftime(t3,t2)>=20)//控制为20s后道具消失
	 {
		boolw=0;
		if(difftime(t3,t2)==20)
		count_1=0;
		foodexit=0;       
		while(foodexit==0)
		{
		    foodexit=1;
	        props_x=rand()%28+1;
	        props_y=rand()%28+1;
            foodexit=food_decide2_1(props_x, props_y,5);
		}
	 }
	 if(count_1>6)
		count_1=6;
     if(count_1==6&&boolw==1)
	 {
			putimage(props_x*UNIT,props_y*UNIT,&props[1][0],SRCAND);
		    putimage(props_x*UNIT,props_y*UNIT,&props[1][1],SRCINVERT);
	 }
	 srand((int)time(0));
     time_t t5=time(NULL);//速度时间判断
	 if(bool2==1)
	 {
        if(difftime(t5,t4)>=20)
		{
	    	snake_move_speed=200;  
		}
        if(difftime(t5,t4)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前加速剩余%.1fs",20-difftime(t5,t4));
	             outtextxy(33.5*UNIT,22.5*UNIT,q);
		}		
	 }
	 if(bool2==2)
	 {
        if(difftime(t5,t6)>=20)
		{
		   snake_move_speed=200;  
		}
        if(difftime(t5,t6)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前减速剩余%.1fs",20-difftime(t5,t6));
	             outtextxy(33.5*UNIT,22.5*UNIT,q);
		}
	 }
 	 if(bool2==3)
	 {
        if(difftime(t5,t12)<=5)
		{
	    	     char *q="蛇身减短3节";
	             outtextxy(35*UNIT,22.5*UNIT,q);
		}		
	 }
	 if(bool2==4)
	 {
        if(difftime(t5,t13)<=5)
		{
	    	     char *q="蛇身增长3节";
	             outtextxy(35*UNIT,22.5*UNIT,q);
		}		
	 }
	 if(local_snake[0][0]==props_x&&local_snake[0][1]==props_y&&boolw==1)
	 {
	           foodexit=0;  
			   if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
			   count_1=0;
		       while(foodexit==0)
			   {
				   foodexit=1;
	               props_x=rand()%28+1;
	               props_y=rand()%28+1;
                   foodexit=food_decide2_1(props_x, props_y,5);
			   }
		      int m;
			  m=rand()%5+1;
			  switch(m)//应改为m
			  {
			  case 1:t12=time(NULL);Cut_down_snake();bool2=3;break;//减
			  case 2:t13=time(NULL);Add_snake();Add_snake();Add_snake();bool2=4;break;//增长
			  case 3:Speed_add();break;//
			  case 4:Speed_down();break;
			  case 5:not_add_snake();break;
			  }
	 }

}


void product_props2_2()//道具随机添加
{
     char q[30];
	 sprintf(q,"距离道具重现剩余%d个水果",6-count_1);
	 outtextxy(10.5*UNIT,2.5*UNIT,q);
	    int foodexit=1;
	if(count_1==6&&boolw==0)
	{
		t2=time(NULL);
		boolw=1;
	}
	time_t t3=time(NULL);
	if(difftime(t3,t2)<20)
	{
         char r[30];
	     if(count_1==6&&boolw==1)
		 {
	        sprintf(r,"道具消失剩余%.1fs",20-difftime(t3,t2));
	        outtextxy(34*UNIT,22.5*UNIT,r);
		 }
	}
    if(difftime(t3,t2)>=20)//控制为20s后道具消失
	{
		boolw=0;
		if(difftime(t3,t2)==20)
		count_1=0;
		foodexit=0;       
		while(foodexit==0)
		{
		    foodexit=1;
	        props_x=rand()%28+1;
	        props_y=rand()%28+1;
            foodexit=food_decide2_2(props_x, props_y,5);
		}
	}
	if(count_1>6)
		count_1=6;
    if(count_1==6&&boolw==1)
	{
			putimage(props_x*UNIT,props_y*UNIT,&props[1][0],SRCAND);
		    putimage(props_x*UNIT,props_y*UNIT,&props[1][1],SRCINVERT);
	}
	srand((int)time(0));
    time_t t5=time(NULL);//速度时间判断
	if(bool2==1)
	{
        if(difftime(t5,t4)>=20)
		{
	    	snake_move_speed=200;  
		}
        if(difftime(t5,t4)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前加速剩余%.1fs",20-difftime(t5,t4));
	             outtextxy(33.5*UNIT,22.5*UNIT,q);
		}		
	}
	if(bool2==2)
	{
        if(difftime(t5,t6)>=20)
		{
		   snake_move_speed=200;  
		}
        if(difftime(t5,t6)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前减速剩余%.1fs",20-difftime(t5,t6));
	             outtextxy(33.5*UNIT,22.5*UNIT,q);
		}
	}
	if(bool2==3)
	{
        if(difftime(t5,t12)<=5)
		{
	    	     char *q="蛇身减短3节";
	             outtextxy(35*UNIT,22.5*UNIT,q);
		}		
	}
	if(bool2==4)
	{
        if(difftime(t5,t13)<=5)
		{
	    	     char *q="蛇身增长3节";
	             outtextxy(35*UNIT,22.5*UNIT,q);
		}		
	}
	if(local_snake[0][0]==props_x&&local_snake[0][1]==props_y&&boolw==1)
	{
	           foodexit=0;  
			   if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
			   count_1=0;
		       while(foodexit==0)
			   {
				   foodexit=1;
	               props_x=rand()%28+1;
	               props_y=rand()%28+1;
                   foodexit=food_decide2_2(props_x, props_y,5);
			   }
		      int m;
			  m=rand()%5+1;
			  switch(m)//应改为m
			  {
			  case 1:t12=time(NULL);Cut_down_snake();bool2=3;break;//减
			  case 2:t13=time(NULL);Add_snake();Add_snake();Add_snake();bool2=4;break;//增长
			  case 3:Speed_add();break;//
			  case 4:Speed_down();break;
			  case 5:not_add_snake();break;
			  }
	}

}


void product_props2_3()//道具随机添加
{
     char q[30];
	 sprintf(q,"距离道具重现剩余%d个水果",6-count_1);
	 outtextxy(10.5*UNIT,2.5*UNIT,q);
	    int foodexit=1;
	if(count_1==6&&boolw==0)
	{
		t2=time(NULL);
		boolw=1;
	}
	time_t t3=time(NULL);
	if(difftime(t3,t2)<20)
	{
         char r[30];
	     if(count_1==6&&boolw==1)
		 {
	        sprintf(r,"道具消失剩余%.1fs",20-difftime(t3,t2));
	        outtextxy(34*UNIT,22.5*UNIT,r);
		 }
	}
    if(difftime(t3,t2)>=20)//控制为20s后道具消失
	{
		boolw=0;
		if(difftime(t3,t2)==20)
		count_1=0;
		foodexit=0;       
		while(foodexit==0)
		{
		    foodexit=1;
	        props_x=rand()%28+1;
	        props_y=rand()%28+1;
            foodexit=food_decide2_3(props_x, props_y,5);
		}
	}
	if(count_1>6)
		count_1=6;
    if(count_1==6&&boolw==1)
	{
			putimage(props_x*UNIT,props_y*UNIT,&props[1][0],SRCAND);
		    putimage(props_x*UNIT,props_y*UNIT,&props[1][1],SRCINVERT);
	}
	srand((int)time(0));
    time_t t5=time(NULL);//速度时间判断
	if(bool2==1)
	{
        if(difftime(t5,t4)>=20)
		{
	    	snake_move_speed=200;  
		}
        if(difftime(t5,t4)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前加速剩余%.1fs",20-difftime(t5,t4));
	             outtextxy(33.5*UNIT,22.5*UNIT,q);
		}		
	}
	if(bool2==2)
	{
        if(difftime(t5,t6)>=20)
		{
		   snake_move_speed=200;  
		}
        if(difftime(t5,t6)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前减速剩余%.1fs",20-difftime(t5,t6));
	             outtextxy(33.5*UNIT,22.5*UNIT,q);
		}
	}
	if(bool2==3)
	{
        if(difftime(t5,t12)<=5)
		{
	    	     char *q="蛇身减短3节";
	             outtextxy(35*UNIT,22.5*UNIT,q);
		}		
	}
	if(bool2==4)
	{
        if(difftime(t5,t13)<=5)
		{
	    	     char *q="蛇身增长3节";
	             outtextxy(35*UNIT,22.5*UNIT,q);
		}		
	}
	if(local_snake[0][0]==props_x&&local_snake[0][1]==props_y&&boolw==1)
	{
	           foodexit=0;
			   if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
			   count_1=0;
		       while(foodexit==0)
			   {
				   foodexit=1;
	               props_x=rand()%28+1;
	               props_y=rand()%28+1;
                   foodexit=food_decide2_3(props_x, props_y,5);
			   }
		      int m;
			  m=rand()%3+1;
			  switch(m)//应改为m
			  {
			  case 1:t12=time(NULL);Cut_down_snake();bool2=3;break;//减
			  case 2:t13=time(NULL);Add_snake();Add_snake();Add_snake();bool2=4;break;//增长
			  case 3:Speed_add();break;//
			  case 4:Speed_down();break;
			  case 5:not_add_snake();break;
			  }
	}

}


void product_props2_4()//道具随机添加
{
     char q[30];
	 sprintf(q,"距离道具重现剩余%d个水果",6-count_1);
	 outtextxy(10.5*UNIT,2.5*UNIT,q);
	    int foodexit=1;
	if(count_1==6&&boolw==0)
	{
		t2=time(NULL);
		boolw=1;
	}
	time_t t3=time(NULL);
	if(difftime(t3,t2)<20)
	{
         char r[30];
	     if(count_1==6&&boolw==1)
		 {
	        sprintf(r,"道具消失剩余%.1fs",20-difftime(t3,t2));
	        outtextxy(34*UNIT,22.5*UNIT,r);
		 }
	}
    if(difftime(t3,t2)>=20)//控制为20s后道具消失
	{
		boolw=0;
		if(difftime(t3,t2)==20)
		count_1=0;
		foodexit=0;       
		while(foodexit==0)
		{
		    foodexit=1;
	        props_x=rand()%28+1;
	        props_y=rand()%28+1;
            foodexit=food_decide2_4(props_x, props_y,5);
		}
	}
	if(count_1>6)
		count_1=6;
    if(count_1==6&&boolw==1)
	{
			putimage(props_x*UNIT,props_y*UNIT,&props[1][0],SRCAND);
		    putimage(props_x*UNIT,props_y*UNIT,&props[1][1],SRCINVERT);
	}
	srand((int)time(0));
    time_t t5=time(NULL);//速度时间判断
	if(bool2==1)
	{
        if(difftime(t5,t4)>=20)
		{
	    	snake_move_speed=200;  
		}
        if(difftime(t5,t4)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前加速剩余%.1fs",20-difftime(t5,t4));
	             outtextxy(33.5*UNIT,22.5*UNIT,q);
		}		
	}
	if(bool2==2)
	{
        if(difftime(t5,t6)>=20)
		{
		   snake_move_speed=200;  
		}
        if(difftime(t5,t6)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前减速剩余%.1fs",20-difftime(t5,t6));
	             outtextxy(33.5*UNIT,22.5*UNIT,q);
		}
	}
	if(bool2==3)
	{
        if(difftime(t5,t12)<=5)
		{
	    	     char *q="蛇身减短3节";
	             outtextxy(35*UNIT,22.5*UNIT,q);
		}		
	}
	if(bool2==4)
	{
        if(difftime(t5,t13)<=5)
		{
	    	     char *q="蛇身增长3节";
	             outtextxy(35*UNIT,22.5*UNIT,q);
		}		
	}
	if(local_snake[0][0]==props_x&&local_snake[0][1]==props_y&&boolw==1)
	{
	           foodexit=0;  
			   if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
			   count_1=0;
		       while(foodexit==0)
			   {
				   foodexit=1;
	               props_x=rand()%28+1;
	               props_y=rand()%28+1;
                   foodexit=food_decide2_4(props_x, props_y,5);
			   }
		      int m;
			  m=rand()%3+1;
			  switch(m)//应改为m
			  {
			  case 1:t12=time(NULL);Cut_down_snake();bool2=3;break;//减
			  case 2:t13=time(NULL);Add_snake();Add_snake();Add_snake();bool2=4;break;//增长
			  case 3:Speed_add();break;//
			  case 4:Speed_down();break;
			  case 5:not_add_snake();break;
			  }
	}

}


void product_props2_5()//道具随机添加
{
     char q[30];
	 sprintf(q,"距离道具重现剩余%d个水果",6-count_1);
	 outtextxy(10.5*UNIT,2.5*UNIT,q);
	    int foodexit=1;
	if(count_1==6&&boolw==0)
	{
		t2=time(NULL);
		boolw=1;
	}
	time_t t3=time(NULL);
	if(difftime(t3,t2)<20)
	{
         char r[30];
	     if(count_1==6&&boolw==1)
		 {
	        sprintf(r,"道具消失剩余%.1fs",20-difftime(t3,t2));
	        outtextxy(34*UNIT,22.5*UNIT,r);
		 }
	}
    if(difftime(t3,t2)>=20)//控制为20s后道具消失
	{
		boolw=0;
		if(difftime(t3,t2)==20)
		count_1=0;
		foodexit=0;       
		while(foodexit==0)
		{
		    foodexit=1;
	        props_x=rand()%28+1;
	        props_y=rand()%28+1;
            foodexit=food_decide2_5(props_x, props_y,5);
		}
	}
	if(count_1>6)
		count_1=6;
    if(count_1==6&&boolw==1)
	{
			putimage(props_x*UNIT,props_y*UNIT,&props[1][0],SRCAND);
		    putimage(props_x*UNIT,props_y*UNIT,&props[1][1],SRCINVERT);
	}
	srand((int)time(0));
    time_t t5=time(NULL);//速度时间判断
	if(bool2==1)
	{
        if(difftime(t5,t4)>=20)
		{
	    	snake_move_speed=200;  
		}
        if(difftime(t5,t4)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前加速剩余%.1fs",20-difftime(t5,t4));
	             outtextxy(33.5*UNIT,22.5*UNIT,q);
		}		
	}
	if(bool2==2)
	{
        if(difftime(t5,t6)>=20)
		{
		   snake_move_speed=200;  
		}
        if(difftime(t5,t6)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前减速剩余%.1fs",20-difftime(t5,t6));
	             outtextxy(33.5*UNIT,22.5*UNIT,q);
		}
	}
	if(bool2==3)
	{
        if(difftime(t5,t12)<=5)
		{
	    	     char *q="蛇身减短3节";
	             outtextxy(35*UNIT,22.5*UNIT,q);
		}		
	}
	if(bool2==4)
	{
        if(difftime(t5,t13)<=5)
		{
	    	     char *q="蛇身增长3节";
	             outtextxy(35*UNIT,22.5*UNIT,q);
		}		
	}
	if(local_snake[0][0]==props_x&&local_snake[0][1]==props_y&&boolw==1)
	{
	           foodexit=0;  
			   if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
			   count_1=0;
		       while(foodexit==0)
			   {
				   foodexit=1;
	               props_x=rand()%28+1;
	               props_y=rand()%28+1;
                   foodexit=food_decide2_5(props_x, props_y,5);
			   }
		      int m;
			  m=rand()%5+1;
			  switch(m)//应改为m
			  {
			  case 1:t12=time(NULL);Cut_down_snake();bool2=3;break;//减
			  case 2:t13=time(NULL);Add_snake();Add_snake();Add_snake();bool2=4;break;//增长
			  case 3:Speed_add();break;//
			  case 4:Speed_down();break;
			  case 5:not_add_snake();break;
			  }
	}

}


void product_props4_1()//道具随机添加
{
     char q[30];
	 sprintf(q,"距离道具重现剩余%d个水果",6-count_1);
	 outtextxy(10.5*UNIT,2.5*UNIT,q);
	    int foodexit=1;
	if(count_1==6&&boolw==0)
	{
		t2=time(NULL);
		boolw=1;
	}
	time_t t3=time(NULL);
	if(difftime(t3,t2)<20)
	{
         char r[30];
	     if(count_1==6&&boolw==1)
		 {
	        sprintf(r,"道具消失剩余%.1fs",20-difftime(t3,t2));
	        outtextxy(34*UNIT,26.5*UNIT,r);
		 }
	}
    if(difftime(t3,t2)>=20)//控制为20s后道具消失
	{
		boolw=0;
		if(difftime(t3,t2)==20)
		count_1=0;
		foodexit=0;       
		while(foodexit==0)
		{
		    foodexit=1;
	        props_x=rand()%28+1;
	        props_y=rand()%28+1;
            foodexit=food_decide4_1(props_x, props_y,5);
		}
	}
	if(count_1>6)
		count_1=6;
    if(count_1==6&&boolw==1)
	{
			putimage(props_x*UNIT,props_y*UNIT,&props[1][0],SRCAND);
		    putimage(props_x*UNIT,props_y*UNIT,&props[1][1],SRCINVERT);
	}
	srand((int)time(0));
    time_t t5=time(NULL);//速度时间判断
	if(bool2==1)
	{
        if(difftime(t5,t4)>=20)
		{
	    	snake_move_speed=200;  
		}
        if(difftime(t5,t4)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前加速剩余%.1fs",20-difftime(t5,t4));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==2)
	{
        if(difftime(t5,t6)>=20)
		{
		   snake_move_speed=200;  
		}
        if(difftime(t5,t6)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前减速剩余%.1fs",20-difftime(t5,t6));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}
	}
	if(bool2==3)
	{
        if(difftime(t5,t12)<=5)
		{
	    	     char *q="蛇身减短3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==4)
	{
        if(difftime(t5,t13)<=5)
		{
	    	     char *q="蛇身增长3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(local_snake[0][0]==props_x&&local_snake[0][1]==props_y&&boolw==1)
	{
	           foodexit=0; 
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
			   count_1=0;
		       while(foodexit==0)
			   {
				   foodexit=1;
	               props_x=rand()%28+1;
	               props_y=rand()%28+1;
                   foodexit=food_decide4_1(props_x, props_y,5);
			   }
		      int m;
			  m=rand()%5+1;
			  switch(m)//应改为m
			  {
			  case 1:t12=time(NULL);Cut_down_snake();bool2=3;break;//减
			  case 2:t13=time(NULL);Add_snake();Add_snake();Add_snake();bool2=4;break;//增长
			  case 3:Speed_add();break;//
			  case 4:Speed_down();break;
			  case 5:not_add_snake();break;
			  }
	}

}


void product_props4_2()//道具随机添加
{
     char q[30];
	 sprintf(q,"距离道具重现剩余%d个水果",6-count_1);
	 outtextxy(10.5*UNIT,2.5*UNIT,q);
	    int foodexit=1;
	if(count_1==6&&boolw==0)
	{
		t2=time(NULL);
		boolw=1;
	}
	time_t t3=time(NULL);
	if(difftime(t3,t2)<20)
	{
         char r[30];
	     if(count_1==6&&boolw==1)
		 {
	        sprintf(r,"道具消失剩余%.1fs",20-difftime(t3,t2));
	        outtextxy(34*UNIT,26.5*UNIT,r);
		 }
	}
    if(difftime(t3,t2)>=20)//控制为20s后道具消失
	{
		boolw=0;
		if(difftime(t3,t2)==20)
		count_1=0;
		foodexit=0;       
		while(foodexit==0)
		{
		    foodexit=1;
	        props_x=rand()%28+1;
	        props_y=rand()%28+1;
            foodexit=food_decide4_2(props_x, props_y,5);
		}
	}
	if(count_1>6)
		count_1=6;
    if(count_1==6&&boolw==1)
	{
			putimage(props_x*UNIT,props_y*UNIT,&props[1][0],SRCAND);
		    putimage(props_x*UNIT,props_y*UNIT,&props[1][1],SRCINVERT);
	}
	srand((int)time(0));
    time_t t5=time(NULL);//速度时间判断
	if(bool2==1)
	{
        if(difftime(t5,t4)>=20)
		{
	    	snake_move_speed=200;  
		}
        if(difftime(t5,t4)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前加速剩余%.1fs",20-difftime(t5,t4));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==2)
	{
        if(difftime(t5,t6)>=20)
		{
		   snake_move_speed=200;  
		}
        if(difftime(t5,t6)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前减速剩余%.1fs",20-difftime(t5,t6));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}
	}
	if(bool2==3)
	{
        if(difftime(t5,t12)<=5)
		{
	    	     char *q="蛇身减短3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==4)
	{
        if(difftime(t5,t13)<=5)
		{
	    	     char *q="蛇身增长3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(local_snake[0][0]==props_x&&local_snake[0][1]==props_y&&boolw==1)
	{
	           foodexit=0;  
			   if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
			   count_1=0;
		       while(foodexit==0)
			   {
				   foodexit=1;
	               props_x=rand()%28+1;
	               props_y=rand()%28+1;
                   foodexit=food_decide4_2(props_x, props_y,5);
			   }
		      int m;
			  m=rand()%5+1;
			  switch(m)//应改为m
			  {
			  case 1:t12=time(NULL);Cut_down_snake();bool2=3;break;//减
			  case 2:t13=time(NULL);Add_snake();Add_snake();Add_snake();bool2=4;break;//增长
			  case 3:Speed_add();break;//
			  case 4:Speed_down();break;
			  case 5:not_add_snake();break;
			  }
	}

}


void product_props4_3()//道具随机添加
{
     char q[30];
	 sprintf(q,"距离道具重现剩余%d个水果",6-count_1);
	 outtextxy(10.5*UNIT,2.5*UNIT,q);
	    int foodexit=1;
	if(count_1==6&&boolw==0)
	{
		t2=time(NULL);
		boolw=1;
	}
	time_t t3=time(NULL);
	if(difftime(t3,t2)<20)
	{
         char r[30];
	     if(count_1==6&&boolw==1)
		 {
	        sprintf(r,"道具消失剩余%.1fs",20-difftime(t3,t2));
	        outtextxy(34*UNIT,26.5*UNIT,r);
		 }
	}
    if(difftime(t3,t2)>=20)//控制为20s后道具消失
	{
		boolw=0;
		if(difftime(t3,t2)==20)
		count_1=0;
		foodexit=0;       
		while(foodexit==0)
		{
		    foodexit=1;
	        props_x=rand()%28+1;
	        props_y=rand()%28+1;
            foodexit=food_decide4_3(props_x, props_y,5);
		}
	}
	if(count_1>6)
		count_1=6;
    if(count_1==6&&boolw==1)
	{
			putimage(props_x*UNIT,props_y*UNIT,&props[1][0],SRCAND);
		    putimage(props_x*UNIT,props_y*UNIT,&props[1][1],SRCINVERT);
	}
	srand((int)time(0));
    time_t t5=time(NULL);//速度时间判断
	if(bool2==1)
	{
        if(difftime(t5,t4)>=20)
		{
	    	snake_move_speed=200;  
		}
        if(difftime(t5,t4)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前加速剩余%.1fs",20-difftime(t5,t4));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==2)
	{
        if(difftime(t5,t6)>=20)
		{
		   snake_move_speed=200;  
		}
        if(difftime(t5,t6)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前减速剩余%.1fs",20-difftime(t5,t6));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}
	}
	if(bool2==3)
	{
        if(difftime(t5,t12)<=5)
		{
	    	     char *q="蛇身减短3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==4)
	{
        if(difftime(t5,t13)<=5)
		{
	    	     char *q="蛇身增长3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(local_snake[0][0]==props_x&&local_snake[0][1]==props_y&&boolw==1)
	{
	           foodexit=0; 
			   if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
			   count_1=0;
		       while(foodexit==0)
			   {
				   foodexit=1;
	               props_x=rand()%28+1;
	               props_y=rand()%28+1;
                   foodexit=food_decide4_3(props_x, props_y,5);
			   }
		      int m;
			  m=rand()%5+1;
			  switch(m)//应改为m
			  {
			  case 1:t12=time(NULL);Cut_down_snake();bool2=3;break;//减
			  case 2:t13=time(NULL);Add_snake();Add_snake();Add_snake();bool2=4;break;//增长
			  case 3:Speed_add();break;//
			  case 4:Speed_down();break;
			  case 5:not_add_snake();break;
			  }
	}

}


void product_props4_4()//道具随机添加
{
     char q[30];
	 sprintf(q,"距离道具重现剩余%d个水果",6-count_1);
	 outtextxy(10.5*UNIT,2.5*UNIT,q);
	    int foodexit=1;
	if(count_1==6&&boolw==0)
	{
		t2=time(NULL);
		boolw=1;
	}
	time_t t3=time(NULL);
	if(difftime(t3,t2)<20)
	{
         char r[30];
	     if(count_1==6&&boolw==1)
		 {
	        sprintf(r,"道具消失剩余%.1fs",20-difftime(t3,t2));
	        outtextxy(34*UNIT,26.5*UNIT,r);
		 }
	}
    if(difftime(t3,t2)>=20)//控制为20s后道具消失
	{
		boolw=0;
		if(difftime(t3,t2)==20)
		count_1=0;
		foodexit=0;       
		while(foodexit==0)
		{
		    foodexit=1;
	        props_x=rand()%28+1;
	        props_y=rand()%28+1;
            foodexit=food_decide4_4(props_x, props_y,5);
		}
	}
	if(count_1>6)
		count_1=6;
    if(count_1==6&&boolw==1)
	{
			putimage(props_x*UNIT,props_y*UNIT,&props[1][0],SRCAND);
		    putimage(props_x*UNIT,props_y*UNIT,&props[1][1],SRCINVERT);
	}
	srand((int)time(0));
    time_t t5=time(NULL);//速度时间判断
	if(bool2==1)
	{
        if(difftime(t5,t4)>=20)
		{
	    	snake_move_speed=200;  
		}
        if(difftime(t5,t4)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前加速剩余%.1fs",20-difftime(t5,t4));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==2)
	{
        if(difftime(t5,t6)>=20)
		{
		   snake_move_speed=200;  
		}
        if(difftime(t5,t6)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前减速剩余%.1fs",20-difftime(t5,t6));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}
	}
	if(bool2==3)
	{
        if(difftime(t5,t12)<=5)
		{
	    	     char *q="蛇身减短3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==4)
	{
        if(difftime(t5,t13)<=5)
		{
	    	     char *q="蛇身增长3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(local_snake[0][0]==props_x&&local_snake[0][1]==props_y&&boolw==1)
	{
	           foodexit=0;  
			   if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
			   count_1=0;
		       while(foodexit==0)
			   {
				   foodexit=1;
	               props_x=rand()%28+1;
	               props_y=rand()%28+1;
                   foodexit=food_decide4_4(props_x, props_y,5);
			   }
		      int m;
			  m=rand()%5+1;
			  switch(m)//应改为m
			  {
			  case 1:t12=time(NULL);Cut_down_snake();bool2=3;break;//减
			  case 2:t13=time(NULL);Add_snake();Add_snake();Add_snake();bool2=4;break;//增长
			  case 3:Speed_add();break;//
			  case 4:Speed_down();break;
			  case 5:not_add_snake();break;
			  }
	}

}


void product_props4_5()//道具随机添加
{
     char q[30];
	 sprintf(q,"距离道具重现剩余%d个水果",6-count_1);
	 outtextxy(10.5*UNIT,2.5*UNIT,q);
	    int foodexit=1;
	if(count_1==6&&boolw==0)
	{
		t2=time(NULL);
		boolw=1;
	}
	time_t t3=time(NULL);
	if(difftime(t3,t2)<20)
	{
         char r[30];
	     if(count_1==6&&boolw==1)
		 {
	        sprintf(r,"道具消失剩余%.1fs",20-difftime(t3,t2));
	        outtextxy(34*UNIT,26.5*UNIT,r);
		 }
	}
    if(difftime(t3,t2)>=20)//控制为20s后道具消失
	{
		boolw=0;
		if(difftime(t3,t2)==20)
		count_1=0;
		foodexit=0;       
		while(foodexit==0)
		{
		    foodexit=1;
	        props_x=rand()%28+1;
	        props_y=rand()%28+1;
            foodexit=food_decide4_5(props_x, props_y,5);
		}
	}
	if(count_1>6)
		count_1=6;
    if(count_1==6&&boolw==1)
	{
			putimage(props_x*UNIT,props_y*UNIT,&props[1][0],SRCAND);
		    putimage(props_x*UNIT,props_y*UNIT,&props[1][1],SRCINVERT);
	}
	srand((int)time(0));
    time_t t5=time(NULL);//速度时间判断
	if(bool2==1)
	{
        if(difftime(t5,t4)>=20)
		{
	    	snake_move_speed=200;  
		}
        if(difftime(t5,t4)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前加速剩余%.1fs",20-difftime(t5,t4));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==2)
	{
        if(difftime(t5,t6)>=20)
		{
		   snake_move_speed=200;  
		}
        if(difftime(t5,t6)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前减速剩余%.1fs",20-difftime(t5,t6));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}
	}
	if(bool2==3)
	{
        if(difftime(t5,t12)<=5)
		{
	    	     char *q="蛇身减短3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==4)
	{
        if(difftime(t5,t13)<=5)
		{
	    	     char *q="蛇身增长3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(local_snake[0][0]==props_x&&local_snake[0][1]==props_y&&boolw==1)
	{
	           foodexit=0; 
			   if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
			   count_1=0;
		       while(foodexit==0)
			   {
				   foodexit=1;
	               props_x=rand()%28+1;
	               props_y=rand()%28+1;
                   foodexit=food_decide4_5(props_x, props_y,5);
			   }
		      int m;
			  m=rand()%5+1;
			  switch(m)//应改为m
			  {
			  case 1:t12=time(NULL);Cut_down_snake();bool2=3;break;//减
			  case 2:t13=time(NULL);Add_snake();Add_snake();Add_snake();bool2=4;break;//增长
			  case 3:Speed_add();break;//
			  case 4:Speed_down();break;
			  case 5:not_add_snake();break;
			  }
	}

}


void product_props5_1()//道具随机添加
{
     char q[30];
	 sprintf(q,"距离道具重现剩余%d个水果",6-count_1);
	 outtextxy(10.5*UNIT,2.5*UNIT,q);
	    int foodexit=1;
	if(count_1==6&&boolw==0)
	{
		t2=time(NULL);
		boolw=1;
	}
	time_t t3=time(NULL);
	if(difftime(t3,t2)<20)
	{
         char r[30];
	     if(count_1==6&&boolw==1)
		 {
	        sprintf(r,"道具消失剩余%.1fs",20-difftime(t3,t2));
	        outtextxy(34*UNIT,26.5*UNIT,r);
		 }
	}
    if(difftime(t3,t2)>=20)//控制为20s后道具消失
	{
		boolw=0;
		if(difftime(t3,t2)==20)
		count_1=0;
		foodexit=0;       
		while(foodexit==0)
		{
		    foodexit=1;
	        props_x=rand()%28+1;
	        props_y=rand()%28+1;
            foodexit=food_decide5_1(props_x, props_y,5);
		}
	}
	if(count_1>6)
		count_1=6;
    if(count_1==6&&boolw==1)
	{
			putimage(props_x*UNIT,props_y*UNIT,&props[1][0],SRCAND);
		    putimage(props_x*UNIT,props_y*UNIT,&props[1][1],SRCINVERT);
	}
	srand((int)time(0));
    time_t t5=time(NULL);//速度时间判断
	if(bool2==1)
	{
        if(difftime(t5,t4)>=20)
		{
	    	snake_move_speed=200;  
		}
        if(difftime(t5,t4)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前加速剩余%.1fs",20-difftime(t5,t4));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==2)
	{
        if(difftime(t5,t6)>=20)
		{
		   snake_move_speed=200;  
		}
        if(difftime(t5,t6)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前减速剩余%.1fs",20-difftime(t5,t6));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}
	}
	if(bool2==3)
	{
        if(difftime(t5,t12)<=5)
		{
	    	     char *q="蛇身减短3节";
	             outtextxy(35.5*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==4)
	{
        if(difftime(t5,t13)<=5)
		{
	    	     char *q="蛇身增长3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(local_snake[0][0]==props_x&&local_snake[0][1]==props_y&&boolw==1)
	{
	           foodexit=0;  
			   if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
			   count_1=0;
		       while(foodexit==0)
			   {
				   foodexit=1;
	               props_x=rand()%28+1;
	               props_y=rand()%28+1;
                   foodexit=food_decide5_1(props_x, props_y,5);
			   }
		      int m;
			  m=rand()%5+1;
			  switch(m)//应改为m
			  {
			  case 1:t12=time(NULL);Cut_down_snake();bool2=3;break;//减
			  case 2:t13=time(NULL);Add_snake();Add_snake();Add_snake();bool2=4;break;//增长
			  case 3:Speed_add();break;//
			  case 4:Speed_down();break;
			  case 5:not_add_snake();break;
			  }
	}
}


void product_props5_2()//道具随机添加
{
     char q[30];
	 sprintf(q,"距离道具重现剩余%d个水果",6-count_1);
	 outtextxy(10.5*UNIT,2.5*UNIT,q);
	    int foodexit=1;
	if(count_1==6&&boolw==0)
	{
		t2=time(NULL);
		boolw=1;
	}
	time_t t3=time(NULL);
	if(difftime(t3,t2)<20)
	{
         char r[30];
	     if(count_1==6&&boolw==1)
		 {
	        sprintf(r,"道具消失剩余%.1fs",20-difftime(t3,t2));
	        outtextxy(34*UNIT,26.5*UNIT,r);
		 }
	}
    if(difftime(t3,t2)>=20)//控制为20s后道具消失
	{
		boolw=0;
		if(difftime(t3,t2)==20)
		count_1=0;
		foodexit=0;       
		while(foodexit==0)
		{
		    foodexit=1;
	        props_x=rand()%28+1;
	        props_y=rand()%28+1;
            foodexit=food_decide5_2(props_x, props_y,5);
		}
	}
	if(count_1>6)
		count_1=6;
    if(count_1==6&&boolw==1)
	{
			putimage(props_x*UNIT,props_y*UNIT,&props[1][0],SRCAND);
		    putimage(props_x*UNIT,props_y*UNIT,&props[1][1],SRCINVERT);
	}
	srand((int)time(0));
    time_t t5=time(NULL);//速度时间判断
	if(bool2==1)
	{
        if(difftime(t5,t4)>=20)
		{
	    	snake_move_speed=200;  
		}
        if(difftime(t5,t4)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前加速剩余%.1fs",20-difftime(t5,t4));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==2)
	{
        if(difftime(t5,t6)>=20)
		{
		   snake_move_speed=200;  
		}
        if(difftime(t5,t6)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前减速剩余%.1fs",20-difftime(t5,t6));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}
	}
	if(bool2==3)
	{
        if(difftime(t5,t12)<=5)
		{
	    	     char *q="蛇身减短3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==4)
	{
        if(difftime(t5,t13)<=5)
		{
	    	     char *q="蛇身增长3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(local_snake[0][0]==props_x&&local_snake[0][1]==props_y&&boolw==1)
	{
	           foodexit=0;  
			   if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
			   count_1=0;
		       while(foodexit==0)
			   {
				   foodexit=1;
	               props_x=rand()%28+1;
	               props_y=rand()%28+1;
                   foodexit=food_decide5_2(props_x, props_y,5);
			   }
		      int m;
			  m=rand()%5+1;
			  switch(m)//应改为m
			  {
			  case 1:t12=time(NULL);Cut_down_snake();bool2=3;break;//减
			  case 2:t13=time(NULL);Add_snake();Add_snake();Add_snake();bool2=4;break;//增长
			  case 3:Speed_add();break;//
			  case 4:Speed_down();break;
			  case 5:not_add_snake();break;
			  }
	}

}


void product_props5_3()//道具随机添加
{
     char q[30];
	 sprintf(q,"距离道具重现剩余%d个水果",6-count_1);
	 outtextxy(10.5*UNIT,2.5*UNIT,q);
	    int foodexit=1;
	if(count_1==6&&boolw==0)
	{
		t2=time(NULL);
		boolw=1;
	}
	time_t t3=time(NULL);
	if(difftime(t3,t2)<20)
	{
         char r[30];
	     if(count_1==6&&boolw==1)
		 {
	        sprintf(r,"道具消失剩余%.1fs",20-difftime(t3,t2));
	        outtextxy(34*UNIT,26.5*UNIT,r);
		 }
	}
    if(difftime(t3,t2)>=20)//控制为20s后道具消失
	{
		boolw=0;
		if(difftime(t3,t2)==20)
		count_1=0;
		foodexit=0;       
		while(foodexit==0)
		{
		    foodexit=1;
	        props_x=rand()%28+1;
	        props_y=rand()%28+1;
            foodexit=food_decide5_3(props_x, props_y,5);
		}
	}
	if(count_1>6)
		count_1=6;
    if(count_1==6&&boolw==1)
	{
			putimage(props_x*UNIT,props_y*UNIT,&props[1][0],SRCAND);
		    putimage(props_x*UNIT,props_y*UNIT,&props[1][1],SRCINVERT);
	}
	srand((int)time(0));
    time_t t5=time(NULL);//速度时间判断
	if(bool2==1)
	{
        if(difftime(t5,t4)>=20)
		{
	    	snake_move_speed=200;  
		}
        if(difftime(t5,t4)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前加速剩余%.1fs",20-difftime(t5,t4));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==2)
	{
        if(difftime(t5,t6)>=20)
		{
		   snake_move_speed=200;  
		}
        if(difftime(t5,t6)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前减速剩余%.1fs",20-difftime(t5,t6));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}
	}
	if(bool2==3)
	{
        if(difftime(t5,t12)<=5)
		{
	    	     char *q="蛇身减短3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==4)
	{
        if(difftime(t5,t13)<=5)
		{
	    	     char *q="蛇身增长3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(local_snake[0][0]==props_x&&local_snake[0][1]==props_y&&boolw==1)
	{
	           foodexit=0;  
			  if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
			   count_1=0;
		       while(foodexit==0)
			   {
				   foodexit=1;
	               props_x=rand()%28+1;
	               props_y=rand()%28+1;
                   foodexit=food_decide5_3(props_x, props_y,5);
			   }
		      int m;
			  m=rand()%5+1;
			  switch(m)//应改为m
			  {
			  case 1:t12=time(NULL);Cut_down_snake();bool2=3;break;//减
			  case 2:t13=time(NULL);Add_snake();Add_snake();Add_snake();bool2=4;break;//增长
			  case 3:Speed_add();break;//
			  case 4:Speed_down();break;
			  case 5:not_add_snake();break;
			  }
	}

}


void product_props5_4()//道具随机添加
{
     char q[30];
	 sprintf(q,"距离道具重现剩余%d个水果",6-count_1);
	 outtextxy(10.5*UNIT,2.5*UNIT,q);
	    int foodexit=1;
	if(count_1==6&&boolw==0)
	{
		t2=time(NULL);
		boolw=1;
	}
	time_t t3=time(NULL);
	if(difftime(t3,t2)<20)
	{
         char r[30];
	     if(count_1==6&&boolw==1)
		 {
	        sprintf(r,"道具消失剩余%.1fs",20-difftime(t3,t2));
	        outtextxy(34*UNIT,26.5*UNIT,r);
		 }
	}
    if(difftime(t3,t2)>=20)//控制为20s后道具消失
	{
		boolw=0;
		if(difftime(t3,t2)==20)
		count_1=0;
		foodexit=0;       
		while(foodexit==0)
		{
		    foodexit=1;
	        props_x=rand()%28+1;
	        props_y=rand()%28+1;
            foodexit=food_decide5_4(props_x, props_y,5);
		}
	}
	if(count_1>6)
		count_1=6;
    if(count_1==6&&boolw==1)
	{
			putimage(props_x*UNIT,props_y*UNIT,&props[1][0],SRCAND);
		    putimage(props_x*UNIT,props_y*UNIT,&props[1][1],SRCINVERT);
	}
	srand((int)time(0));
    time_t t5=time(NULL);//速度时间判断
	if(bool2==1)
	{
        if(difftime(t5,t4)>=20)
		{
	    	snake_move_speed=200;  
		}
        if(difftime(t5,t4)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前加速剩余%.1fs",20-difftime(t5,t4));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==2)
	{
        if(difftime(t5,t6)>=20)
		{
		   snake_move_speed=200;  
		}
        if(difftime(t5,t6)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前减速剩余%.1fs",20-difftime(t5,t6));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}
	}
	if(bool2==3)
	{
        if(difftime(t5,t12)<=5)
		{
	    	     char *q="蛇身减短3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==4)
	{
        if(difftime(t5,t13)<=5)
		{
	    	     char *q="蛇身增长3节";
	             outtextxy(35*UNIT,22.5*UNIT,q);
		}		
	}
	if(local_snake[0][0]==props_x&&local_snake[0][1]==props_y&&boolw==1)
	{
	           foodexit=0;  
			   if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
			   count_1=0;
		       while(foodexit==0)
			   {
				   foodexit=1;
	               props_x=rand()%28+1;
	               props_y=rand()%28+1;
                   foodexit=food_decide5_4(props_x, props_y,5);
			   }
		      int m;
			  m=rand()%5+1;
			  switch(m)//应改为m
			  {
			  case 1:t12=time(NULL);Cut_down_snake();bool2=3;break;//减
			  case 2:t13=time(NULL);Add_snake();Add_snake();Add_snake();bool2=4;break;//增长
			  case 3:Speed_add();break;//
			  case 4:Speed_down();break;
			  case 5:not_add_snake();break;
			  }
	}

}


void product_props5_5()//道具随机添加
{
     char q[30];
	 sprintf(q,"距离道具重现剩余%d个水果",6-count_1);
	 outtextxy(10.5*UNIT,2.5*UNIT,q);
	    int foodexit=1;
	if(count_1==6&&boolw==0)
	{
		t2=time(NULL);
		boolw=1;
	}
	time_t t3=time(NULL);
	if(difftime(t3,t2)<20)
	{
         char r[30];
	     if(count_1==6&&boolw==1)
		 {
	        sprintf(r,"道具消失剩余%.1fs",20-difftime(t3,t2));
	        outtextxy(34*UNIT,26.5*UNIT,r);
		 }
	}
    if(difftime(t3,t2)>=20)//控制为20s后道具消失
	{
		boolw=0;
		if(difftime(t3,t2)==20)
		count_1=0;
		foodexit=0;       
		while(foodexit==0)
		{
		    foodexit=1;
	        props_x=rand()%28+1;
	        props_y=rand()%28+1;
            foodexit=food_decide5_5(props_x, props_y,5);
		}
	}
	if(count_1>6)
		count_1=6;
    if(count_1==6&&boolw==1)
	{
			putimage(props_x*UNIT,props_y*UNIT,&props[1][0],SRCAND);
		    putimage(props_x*UNIT,props_y*UNIT,&props[1][1],SRCINVERT);
	}
	srand((int)time(0));
    time_t t5=time(NULL);//速度时间判断
	if(bool2==1)
	{
        if(difftime(t5,t4)>=20)
		{
	    	snake_move_speed=200;  
		}
        if(difftime(t5,t4)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前加速剩余%.1fs",20-difftime(t5,t4));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==2)
	{
        if(difftime(t5,t6)>=20)
		{
		   snake_move_speed=200;  
		}
        if(difftime(t5,t6)<=20)
		{
	    	     char q[30];
	             sprintf(q,"当前减速剩余%.1fs",20-difftime(t5,t6));
	             outtextxy(33.5*UNIT,26.5*UNIT,q);
		}
	}
	if(bool2==3)
	{
        if(difftime(t5,t12)<=5)
		{
	    	     char *q="蛇身减短3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(bool2==4)
	{
        if(difftime(t5,t13)<=5)
		{
	    	     char *q="蛇身增长3节";
	             outtextxy(35*UNIT,26.5*UNIT,q);
		}		
	}
	if(local_snake[0][0]==props_x&&local_snake[0][1]==props_y&&boolw==1)
	{
	           foodexit=0;
			   if(bgmusic_effect==1)
			  {
		            mciSendString("open music//food.mp3 alias mymusic4", NULL, 0, NULL); //打开音乐文件 //播放音乐文件
                    mciSendString("play mymusic4 from 0",NULL,0,NULL);
			  }
			   count_1=0;
		       while(foodexit==0)
			   {
				   foodexit=1;
	               props_x=rand()%28+1;
	               props_y=rand()%28+1;
                   foodexit=food_decide5_5(props_x, props_y,5);
			   }
		      int m;
			  m=rand()%5+1;
			  switch(m)//应改为m
			  {
			  case 1:t12=time(NULL);Cut_down_snake();bool2=3;break;//减
			  case 2:t13=time(NULL);Add_snake();Add_snake();Add_snake();bool2=4;break;//增长
			  case 3:Speed_add();break;//
			  case 4:Speed_down();break;
			  case 5:not_add_snake();break;
			  }
	}
}



void Speed_add()
{
	t4=time(NULL);
    snake_move_speed=100;
	bool2=1;
}


void Speed_down()
{
	t6=time(NULL);
    snake_move_speed=300;
	bool2=2;
}


void not_add_snake()
{
	t8=time(NULL);
}


void Energy3_1()
{
    if(count1_3>=10)
	   count1_3=10;
	{
        char s[30];       
		sprintf(s,"能量%d%%",count1_3*10);
			    outtextxy(36*UNIT, 22.5*UNIT, s); 
	}
	   time_t t4=time(NULL);
    if(count1_3==10)
	{
		bool4=1;//标记能量已经集满
	}
	if(bool3==0&&bool4==1)
	{
        char *q="能量已集满，请按r释放";
	    outtextxy(10.5*UNIT,3.5*UNIT,q);
	}

	if((bool3==1&&bool4==1)||difftime(t4,t8)<20)
	{
		if(bool5==1)
		{
		    not_add_snake();
		    bool5=0;
		}
		if(count1_1!=3)
		     count1_1=3;
		 if(count2_1!=3)
			 count2_1=3;
		 if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
			 Add_food_1_3_1();
	}
	if(difftime(t4,t8)==20)
	{
		bool5=1;
		bool3=0;
		bool4=0;
	}
	if(difftime(t4,t8)==1)
		count1_3=0;
}


void Energy3_2()
{
    if(count1_3>=10)
	   count1_3=10;
	   time_t t4=time(NULL);
	{
        char s[30];       
		sprintf(s,"能量%d%%",count1_3*10);
			    outtextxy(36*UNIT, 22.5*UNIT, s); 
	}
    if(count1_3==10)
	{
		bool4=1;//标记能量已经集满
	}
	if(bool3==0&&bool4==1)
	{
        char *q="能量已集满，请按r释放";
	    outtextxy(10.5*UNIT,3.5*UNIT,q);
	}

	if((bool3==1&&bool4==1)||difftime(t4,t8)<20)
	{
		if(bool5==1)
		{
		    not_add_snake();
		    bool5=0;
		}
		if(count1_1!=3)
		     count1_1=3;
		 if(count2_1!=3)
			 count2_1=3;
		 if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
			 Add_food_1_3_2();
	}
	if(difftime(t4,t8)==20)
	{
		bool5=1;
		bool3=0;
		bool4=0;
	}
	if(difftime(t4,t8)==1)
		count1_3=0;
}


void Energy3_3()
{
    if(count1_3>=10)
	   count1_3=10;
	   time_t t4=time(NULL);
	{
        char s[30];       
		sprintf(s,"能量%d%%",count1_2*10);
			    outtextxy(36*UNIT, 22.5*UNIT, s); 
	}
    if(count1_3==10)
	{
		bool4=1;//标记能量已经集满
	}

	if(bool3==0&&bool4==1)
	{
        char *q="能量已集满，请按r释放";
	    outtextxy(10.5*UNIT,3.5*UNIT,q);
	}

	if((bool3==1&&bool4==1)||difftime(t4,t8)<20)
	{
		if(bool5==1)
		{
		    not_add_snake();
		    bool5=0;
		}
		if(count1_1!=3)
		     count1_1=3;
		 if(count2_1!=3)
			 count2_1=3;
		 if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
			 Add_food_1_3_3();
	}
	if(difftime(t4,t8)==20)
	{
		bool5=1;
		bool3=0;
		bool4=0;
	}
	if(difftime(t4,t8)==1)
		count1_3=0;
}


void Energy3_4()
{
    if(count1_2>=10)
	   count1_2=10;
	   time_t t4=time(NULL);
	{
        char s[30];       
		sprintf(s,"能量%d%%",count1_3*10);
			    outtextxy(36*UNIT, 22.5*UNIT, s); 
	}
    if(count1_3==10)
	{
		bool4=1;//标记能量已经集满
	}
	if(bool3==0&&bool4==1)
	{
        char *q="能量已集满，请按r释放";
	    outtextxy(10.5*UNIT,3.5*UNIT,q);
	}

	if((bool3==1&&bool4==1)||difftime(t4,t8)<20)
	{
		if(bool5==1)
		{
		    not_add_snake();
		    bool5=0;
		}
		if(count1_1!=3)
		     count1_1=3;
		 if(count2_1!=3)
			 count2_1=3;
		 if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
			 Add_food_1_3_4();
	}
	if(difftime(t4,t8)==20)
	{
		bool5=1;
		bool3=0;
		bool4=0;
	}
	if(difftime(t4,t8)==1)
		count1_3=0;
}


void Energy3_5()
{
    if(count1_3>=10)
	   count1_3=10;
	   time_t t4=time(NULL);
	{
        char s[30];       
		sprintf(s,"能量%d%%",count1_3*10);
			    outtextxy(36*UNIT, 22.5*UNIT, s); 
	}
    if(count1_3==10)
	{
		bool4=1;//标记能量已经集满
	}
	if(bool3==0&&bool4==1)
	{
        char *q="能量已集满，请按r释放";
	    outtextxy(10.5*UNIT,3.5*UNIT,q);
	}

	if((bool3==1&&bool4==1)||difftime(t4,t8)<20)
	{
		if(bool5==1)
		{
		    not_add_snake();
		    bool5=0;
		}
		if(count1_1!=3)
		     count1_1=3;
		 if(count2_1!=3)
			 count2_1=3;
		 if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
			 Add_food_1_3_5();
	}
	if(difftime(t4,t8)==20)
	{
		bool5=1;
		bool3=0;
		bool4=0;
	}
	if(difftime(t4,t8)==1)
		count1_3=0;
}


void Energy4_1()
{
    if(count1_3>=10)
	   count1_3=10;
	   time_t t4=time(NULL);
	   	{
        char s[30];       
		sprintf(s,"能量%d%%",count1_3*10);
			    outtextxy(14*UNIT, 1*UNIT, s); 
	}
    if(count1_3==10)
	{
		bool4=1;//标记能量已经集满
	}
	if(bool3==0&&bool4==1)
	{
        char *q="能量已集满，请按r释放";
	    outtextxy(10.5*UNIT,3.5*UNIT,q);
	}

	if((bool3==1&&bool4==1)||difftime(t4,t8)<20)
	{
		if(bool5==1)
		{
		    not_add_snake();
		    bool5=0;
		}
		if(count1_1!=3)
		     count1_1=3;
		 if(count2_1!=3)
			 count2_1=3;
		 if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
			 Add_food_1_4_1();
	}
	if(difftime(t4,t8)==20)
	{
		bool5=1;
		bool3=0;
		bool4=0;
	}
	if(difftime(t4,t8)==1)
		count1_3=0;
}


void Energy4_2()
{
    if(count1_3>=10)
	   count1_3=10;
	{
        char s[30];       
		sprintf(s,"能量%d%%",count1_3*10);
			    outtextxy(14*UNIT,1*UNIT, s); 
	}
	   time_t t4=time(NULL);
    if(count1_3==10)
	{
		bool4=1;//标记能量已经集满
	}
	if(bool3==0&&bool4==1)
	{
        char *q="能量已集满，请按r释放";
	    outtextxy(10.5*UNIT,3.5*UNIT,q);
	}

	if((bool3==1&&bool4==1)||difftime(t4,t8)<20)
	{
		if(bool5==1)
		{
		    not_add_snake();
		    bool5=0;
		}
		if(count1_1!=3)
		     count1_1=3;
		 if(count2_1!=3)
			 count2_1=3;
		 if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
			 Add_food_1_4_2();
	}
	if(difftime(t4,t8)==20)
	{
		bool5=1;
		bool3=0;
		bool4=0;
	}
	if(difftime(t4,t8)==1)
		count1_3=0;
}


void Energy4_3()
{
    if(count1_3>=10)
	   count1_3=10;
	{
        char s[30];       
		sprintf(s,"能量%d%%",count1_3*10);
			    outtextxy(14*UNIT, 1*UNIT, s); 
	}
	   time_t t4=time(NULL);
    if(count1_3==10)
	{
		bool4=1;//标记能量已经集满
	}
	if(bool3==0&&bool4==1)
	{
        char *q="能量已集满，请按r释放";
	    outtextxy(10.5*UNIT,3.5*UNIT,q);
	}

	if((bool3==1&&bool4==1)||difftime(t4,t8)<20)
	{
		if(bool5==1)
		{
		    not_add_snake();
		    bool5=0;
		}
		if(count1_1!=3)
		     count1_1=3;
		 if(count2_1!=3)
			 count2_1=3;
		 if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
			 Add_food_1_4_3();
	}
	if(difftime(t4,t8)==20)
	{
		bool5=1;
		bool3=0;
		bool4=0;
	}
	if(difftime(t4,t8)==1)
		count1_3=0;
}


void Energy4_4()
{
    if(count1_3>=10)
	   count1_3=10;
	{
        char s[30];       
		sprintf(s,"能量%d%%",count1_3*10);
			    outtextxy(14*UNIT, 1*UNIT, s); 
	}
	   time_t t4=time(NULL);
    if(count1_3==10)
	{
		bool4=1;//标记能量已经集满
	}
	if(bool3==0&&bool4==1)
	{
        char *q="能量已集满，请按r释放";
	    outtextxy(10.5*UNIT,3.5*UNIT,q);
	}

	if((bool3==1&&bool4==1)||difftime(t4,t8)<20)
	{
		if(bool5==1)
		{
		    not_add_snake();
		    bool5=0;
		}
		if(count1_1!=3)
		     count1_1=3;
		 if(count2_1!=3)
			 count2_1=3;
		 if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
			 Add_food_1_4_4();
	}
	if(difftime(t4,t8)==20)
	{
		bool5=1;
		bool3=0;
		bool4=0;
	}
	if(difftime(t4,t8)==1)
		count1_3=0;
}


void Energy4_5()
{
    if(count1_3>=10)
	   count1_3=10;
	{
        char s[30];       
		sprintf(s,"能量%d%%",count1_3*10);
			    outtextxy(14*UNIT,1*UNIT, s); 
	}
	   time_t t4=time(NULL);
    if(count1_3==10)
	{
		bool4=1;//标记能量已经集满
	}
	if(bool3==0&&bool4==1)
	{
        char *q="能量已集满，请按r释放";
	    outtextxy(10.5*UNIT,3.5*UNIT,q);
	}

	if((bool3==1&&bool4==1)||difftime(t4,t8)<20)
	{
		if(bool5==1)
		{
		    not_add_snake();
		    bool5=0;
		}
		if(count1_1!=3)
		     count1_1=3;
		 if(count2_1!=3)
			 count2_1=3;
		 if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
			 Add_food_1_4_5();
	}
	if(difftime(t4,t8)==20)
	{
		bool5=1;
		bool3=0;
		bool4=0;
	}
	if(difftime(t4,t8)==1)
		count1_3=0;
}


void Energy5_1()
{
    if(count1_3>=10)
	   count1_3=10;
	{
        char s[30];       
		sprintf(s,"能量%d%%",count1_3*10);
			    outtextxy(14*UNIT, 1*UNIT, s); 
	}
	   time_t t4=time(NULL);
    if(count1_3==10)
	{
		bool4=1;//标记能量已经集满
	}
	if(bool3==0&&bool4==1)
	{
        char *q="能量已集满，请按r释放";
	    outtextxy(10.5*UNIT,3.5*UNIT,q);
	}

	if((bool3==1&&bool4==1)||difftime(t4,t8)<20)
	{
		if(bool5==1)
		{
		    not_add_snake();
		    bool5=0;
		}
		if(count1_1!=3)
		     count1_1=3;
		 if(count2_1!=3)
			 count2_1=3;
		 if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
			 Add_food_1_5_1();
	}
	if(difftime(t4,t8)==20)
	{
		bool5=1;
		bool3=0;
		bool4=0;
	}
	if(difftime(t4,t8)==1)
		count1_3=0;
}


void Energy5_2()
{
    if(count1_3>=10)
	   count1_3=10;
	{
        char s[30];       
		sprintf(s,"能量%d%%",count1_3*10);
			    outtextxy(14*UNIT, 1*UNIT, s); 
	}
	   time_t t4=time(NULL);
    if(count1_3==10)
	{
		bool4=1;//标记能量已经集满
	}
	if(bool3==0&&bool4==1)
	{
        char *q="能量已集满，请按r释放";
	    outtextxy(10.5*UNIT,3.5*UNIT,q);
	}

	if((bool3==1&&bool4==1)||difftime(t4,t8)<20)
	{
		if(bool5==1)
		{
		    not_add_snake();
		    bool5=0;
		}
		if(count1_1!=3)
		     count1_1=3;
		 if(count2_1!=3)
			 count2_1=3;
		 if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
			 Add_food_1_5_2();
	}
	if(difftime(t4,t8)==20)
	{
		bool5=1;
		bool3=0;
		bool4=0;
	}
	if(difftime(t4,t8)==1)
		count1_3=0;
}


void Energy5_3()
{
    if(count1_3>=10)
	   count1_3=10;
	{
        char s[30];       
		sprintf(s,"能量%d%%",count1_3*10);
			    outtextxy(14*UNIT,1*UNIT, s); 
	}
	   time_t t4=time(NULL);
    if(count1_3==10)
	{
		bool4=1;//标记能量已经集满
	}
	if(bool3==0&&bool4==1)
	{
        char *q="能量已集满，请按r释放";
	    outtextxy(10.5*UNIT,3.5*UNIT,q);
	}

	if((bool3==1&&bool4==1)||difftime(t4,t8)<20)
	{
		if(bool5==1)
		{
		    not_add_snake();
		    bool5=0;
		}
		if(count1_1!=3)
		     count1_1=3;
		 if(count2_1!=3)
			 count2_1=3;
		 if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
			 Add_food_1_5_3();
	}
	if(difftime(t4,t8)==20)
	{
		bool5=1;
		bool3=0;
		bool4=0;
	}
	if(difftime(t4,t8)==1)
		count1_3=0;
}


void Energy5_4()
{
    if(count1_3>=10)
	   count1_3=10;
	{
        char s[30];       
		sprintf(s,"能量%d%%",count1_3*10);
			    outtextxy(14*UNIT, 1*UNIT, s); 
	}
	   time_t t4=time(NULL);
    if(count1_3==10)
	{
		bool4=1;//标记能量已经集满
	}
	if(bool3==0&&bool4==1)
	{
        char *q="能量已集满，请按r释放";
	    outtextxy(10.5*UNIT,3.5*UNIT,q);
	}

	if((bool3==1&&bool4==1)||difftime(t4,t8)<20)
	{
		if(bool5==1)
		{
		    not_add_snake();
		    bool5=0;
		}
		if(count1_1!=3)
		     count1_1=3;
		 if(count2_1!=3)
			 count2_1=3;
		 if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
			 Add_food_1_5_4();
	}
	if(difftime(t4,t8)==20)
	{
		bool5=1;
		bool3=0;
		bool4=0;
	}
	if(difftime(t4,t8)==1)
		count1_3=0;
}


void Energy5_5()
{
    if(count1_3>=10)
	   count1_3=10;
	{
        char s[30];       
		sprintf(s,"能量%d%%",count1_3*10);
			    outtextxy(14*UNIT,1*UNIT, s); 
	}
	   time_t t4=time(NULL);
    if(count1_3==10)
	{
		bool4=1;//标记能量已经集满
	}
	if(bool3==0&&bool4==1)
	{
        char *q="能量已集满，请按r释放";
	    outtextxy(10.5*UNIT,3.5*UNIT,q);
	}

	if((bool3==1&&bool4==1)||difftime(t4,t8)<20)
	{
		if(bool5==1)
		{
		    not_add_snake();
		    bool5=0;
		}
		if(count1_1!=3)
		     count1_1=3;
		 if(count2_1!=3)
			 count2_1=3;
		 if(local_snake[0][0]==food_x1&&local_snake[0][1]==food_y1)
			 Add_food_1_5_5();
	}
	if(difftime(t4,t8)==20)
	{
		bool5=1;
		bool3=0;
		bool4=0;
	}
	if(difftime(t4,t8)==1)
		count1_3=0;
}



int random_landmine4_1()
{
	int a;
	int gameover_1=0;
    srand((int)time(0));
	time_t t16=time(NULL);
	int foodexit=0;
	if(bool6==1)//difftime(t16,t15)>=10
	{
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8,SRCAND);
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8_1,SRCINVERT);
		 if(bool7==0)
		 {
	         t15=time(NULL);
			 bool7=1;
		 }
	}
	if(difftime(t16,t15)==10)
	{
		 while(foodexit==0)
		 {
				   foodexit=1;
	               landmine_x=rand()%28+1;
	               landmine_y=rand()%28+1;
                   foodexit=food_decide4_1(landmine_x,landmine_y,6);
		 }
	    bool7=0;
	}
     char s[30];
     sprintf(s,"障碍变化剩余%.1fs",10-difftime(t16,t15));//障碍变化剩余时间
	 outtextxy(10.5*UNIT, 28*UNIT, s); 
	//
	if(local_snake[0][0]==landmine_x&&local_snake[0][1]==landmine_y)
	{		    
		gameover_1=1;
	}
    return gameover_1;
}


int random_landmine4_2()
{
	int a;
	int gameover_1=0;
    srand((int)time(0));
	time_t t16=time(NULL);
	int foodexit=0;
	if(bool6==1)//difftime(t16,t15)>=10
	{
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8,SRCAND);
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8_1,SRCINVERT);
		 if(bool7==0)
		 {
	         t15=time(NULL);
			 bool7=1;
		 }
	}
	if(difftime(t16,t15)==10)
	{
		 while(foodexit==0)
		 {
				   foodexit=1;
	               landmine_x=rand()%28+1;
	               landmine_y=rand()%28+1;
                   foodexit=food_decide4_2(landmine_x,landmine_y,6);
		 }
	    bool7=0;
	}
     char s[30];
     sprintf(s,"障碍变化剩余%.1fs",10-difftime(t16,t15));//障碍变化剩余时间
	 outtextxy(10.5*UNIT, 28*UNIT, s); 
	//
	if(local_snake[0][0]==landmine_x&&local_snake[0][1]==landmine_y)
	{		    
		gameover_1=1;
	}
    return gameover_1;
}


int random_landmine4_3()
{
	int a;
	int gameover_1=0;
    srand((int)time(0));
	time_t t16=time(NULL);
	int foodexit=0;
	if(bool6==1)//difftime(t16,t15)>=10
	{
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8,SRCAND);
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8_1,SRCINVERT);
		 if(bool7==0)
		 {
	         t15=time(NULL);
			 bool7=1;
		 }
	}
	if(difftime(t16,t15)==10)
	{
		 while(foodexit==0)
		 {
				   foodexit=1;
	               landmine_x=rand()%28+1;
	               landmine_y=rand()%28+1;
                   foodexit=food_decide4_3(landmine_x,landmine_y,6);
		 }
	    bool7=0;
	}
     char s[30];
     sprintf(s,"障碍变化剩余%.1fs",10-difftime(t16,t15));//障碍变化剩余时间
	 outtextxy(10.5*UNIT, 28*UNIT, s); 
	//
	if(local_snake[0][0]==landmine_x&&local_snake[0][1]==landmine_y)
	{		    
		gameover_1=1;
	}
    return gameover_1;
}


int random_landmine4_4()
{
	int a;
	int gameover_1=0;
    srand((int)time(0));
	time_t t16=time(NULL);
	int foodexit=0;
	if(bool6==1)//difftime(t16,t15)>=10
	{
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8,SRCAND);
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8_1,SRCINVERT);
		 if(bool7==0)
		 {
	         t15=time(NULL);
			 bool7=1;
		 }
	}
	if(difftime(t16,t15)==10)
	{
		 while(foodexit==0)
		 {
				   foodexit=1;
	               landmine_x=rand()%28+1;
	               landmine_y=rand()%28+1;
                   foodexit=food_decide4_4(landmine_x,landmine_y,6);
		 }
	    bool7=0;
	}
     char s[30];
     sprintf(s,"障碍变化剩余%.1fs",10-difftime(t16,t15));//障碍变化剩余时间
	 outtextxy(10.5*UNIT, 28*UNIT, s); 
	//
	if(local_snake[0][0]==landmine_x&&local_snake[0][1]==landmine_y)
	{		    
		gameover_1=1;
	}
    return gameover_1;
}


int random_landmine4_5()
{
	int a;
	int gameover_1=0;
    srand((int)time(0));
	time_t t16=time(NULL);
	int foodexit=0;
	if(bool6==1)//difftime(t16,t15)>=10
	{
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8,SRCAND);
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8_1,SRCINVERT);
		 if(bool7==0)
		 {
	         t15=time(NULL);
			 bool7=1;
		 }
	}
	if(difftime(t16,t15)==10)
	{
		 while(foodexit==0)
		 {
				   foodexit=1;
	               landmine_x=rand()%28+1;
	               landmine_y=rand()%28+1;
                   foodexit=food_decide4_5(landmine_x,landmine_y,6);
		 }
	    bool7=0;
	}
     char s[30];
     sprintf(s,"障碍变化剩余%.1fs",10-difftime(t16,t15));//障碍变化剩余时间
	 outtextxy(10.5*UNIT, 28*UNIT, s); 
	//
	if(local_snake[0][0]==landmine_x&&local_snake[0][1]==landmine_y)
	{		    
		gameover_1=1;
	}
    return gameover_1;
}


int random_landmine5_1()
{
	int a;
	int gameover_1=0;
    srand((int)time(0));
	time_t t16=time(NULL);
	int foodexit=0;
	if(bool6==1)//difftime(t16,t15)>=10
	{
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8,SRCAND);
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8_1,SRCINVERT);
		 if(bool7==0)
		 {
	         t15=time(NULL);
			 bool7=1;
		 }
	}
	if(difftime(t16,t15)==10)
	{
		 while(foodexit==0)
		 {
				   foodexit=1;
	               landmine_x=rand()%28+1;
	               landmine_y=rand()%28+1;
                   foodexit=food_decide5_1(landmine_x,landmine_y,6);
		 }
	    bool7=0;
	}
     char s[30];
     sprintf(s,"障碍变化剩余%.1fs",10-difftime(t16,t15));//障碍变化剩余时间
	 outtextxy(10.5*UNIT, 28*UNIT, s); 
	//
	if(local_snake[0][0]==landmine_x&&local_snake[0][1]==landmine_y)
	{		    
		gameover_1=1;
	}
    return gameover_1;
}


int random_landmine5_2()
{
	int a;
	int gameover_1=0;
    srand((int)time(0));
	time_t t16=time(NULL);
	int foodexit=0;
	if(bool6==1)//difftime(t16,t15)>=10
	{
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8,SRCAND);
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8_1,SRCINVERT);
		 if(bool7==0)
		 {
	         t15=time(NULL);
			 bool7=1;
		 }
	}
	if(difftime(t16,t15)==10)
	{
		 while(foodexit==0)
		 {
				   foodexit=1;
	               landmine_x=rand()%28+1;
	               landmine_y=rand()%28+1;
                   foodexit=food_decide5_2(landmine_x,landmine_y,6);
		 }
	    bool7=0;
	}
     char s[30];
     sprintf(s,"障碍变化剩余%.1fs",10-difftime(t16,t15));//障碍变化剩余时间
	 outtextxy(10.5*UNIT, 28*UNIT, s); 
	//
	if(local_snake[0][0]==landmine_x&&local_snake[0][1]==landmine_y)
	{		    
		gameover_1=1;
	}
    return gameover_1;
}


int random_landmine5_3()
{
	int a;
	int gameover_1=0;
    srand((int)time(0));
	time_t t16=time(NULL);
	int foodexit=0;
	if(bool6==1)//difftime(t16,t15)>=10
	{
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8,SRCAND);
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8_1,SRCINVERT);
		 if(bool7==0)
		 {
	         t15=time(NULL);
			 bool7=1;
		 }
	}
	if(difftime(t16,t15)==10)
	{
		 while(foodexit==0)
		 {
				   foodexit=1;
	               landmine_x=rand()%28+1;
	               landmine_y=rand()%28+1;
                   foodexit=food_decide5_3(landmine_x,landmine_y,6);
		 }
	    bool7=0;
	}
     char s[30];
     sprintf(s,"障碍变化剩余%.1fs",10-difftime(t16,t15));//障碍变化剩余时间
	 outtextxy(10.5*UNIT, 28*UNIT, s); 
	//
	if(local_snake[0][0]==landmine_x&&local_snake[0][1]==landmine_y)
	{		    
		gameover_1=1;
	}
    return gameover_1;
}


int random_landmine5_4()
{
	int a;
	int gameover_1=0;
    srand((int)time(0));
	time_t t16=time(NULL);
	int foodexit=0;
	if(bool6==1)//difftime(t16,t15)>=10
	{
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8,SRCAND);
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8_1,SRCINVERT);
		 if(bool7==0)
		 {
	         t15=time(NULL);
			 bool7=1;
		 }
	}
	if(difftime(t16,t15)==10)
	{
		 while(foodexit==0)
		 {
				   foodexit=1;
	               landmine_x=rand()%28+1;
	               landmine_y=rand()%28+1;
                   foodexit=food_decide5_4(landmine_x,landmine_y,6);
		 }
	    bool7=0;
	}
     char s[30];
     sprintf(s,"障碍变化剩余%.1fs",10-difftime(t16,t15));//障碍变化剩余时间
	 outtextxy(10.5*UNIT, 28*UNIT, s); 
	//
	if(local_snake[0][0]==landmine_x&&local_snake[0][1]==landmine_y)
	{		    
		gameover_1=1;
	}
    return gameover_1;
}


int random_landmine5_5()
{
	int a;
	int gameover_1=0;
    srand((int)time(0));
	time_t t16=time(NULL);
	int foodexit=0;
	if(bool6==1)//difftime(t16,t15)>=10
	{
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8,SRCAND);
         putimage(landmine_x*UNIT,landmine_y*UNIT,&img8_1,SRCINVERT);
		 if(bool7==0)
		 {
	         t15=time(NULL);
			 bool7=1;
		 }
	}
	if(difftime(t16,t15)==10)
	{
		 while(foodexit==0)
		 {
				   foodexit=1;
	               landmine_x=rand()%28+1;
	               landmine_y=rand()%28+1;
                   foodexit=food_decide5_5(landmine_x,landmine_y,6);
		 }
	    bool7=0;
	}
     char s[30];
     sprintf(s,"障碍变化剩余%.1fs",10-difftime(t16,t15));//障碍变化剩余时间
	 outtextxy(10.5*UNIT, 28*UNIT, s); 
	//
	if(local_snake[0][0]==landmine_x&&local_snake[0][1]==landmine_y)
	{		    
		gameover_1=1;
	}
    return gameover_1;
}



void back_pass1()
{
    while (true)
	{
	    while(MouseHit())
		{
			mmsg = GetMouseMsg();
			switch(mmsg.uMsg)
			{
				case WM_MOUSEMOVE:		mouseX = mmsg.x; mouseY = mmsg.y;	break;
				case WM_LBUTTONDOWN:	isMouseDown = true;					break;
				case WM_LBUTTONUP:		isMouseDown = false;				break;
			}
		}
		Rect r1;
		r1.x = 216;
		r1.y = 453;
		r1.w = 407;
		r1.h = 504;	
		if(IsInRect(mouseX, mouseY, r1)) 
		{
			//返回按键响应
			if(isMouseDown)
			{
				isMouseDown=false;
				main_menu1();
				pass1();
			}
		}
		else
		{
		    Rect r2;
			r2.x=441;
			r2.y=63;
			r2.w=464;
			r2.h=85;
			if(isMouseDown)
			{
				isMouseDown=false;
				main_menu1();
				pass1();
			}
		}
	}
}


void back_pass2()
{
    while (true)
	{
	    while(MouseHit())
		{
			mmsg = GetMouseMsg();
			switch(mmsg.uMsg)
			{
				case WM_MOUSEMOVE:		mouseX = mmsg.x; mouseY = mmsg.y;	break;
				case WM_LBUTTONDOWN:	isMouseDown = true;					break;
				case WM_LBUTTONUP:		isMouseDown = false;				break;
			}
		}
		Rect r1;
		r1.x = 216;
		r1.y = 453;
		r1.w = 407;
		r1.h = 504;	
		if(IsInRect(mouseX, mouseY, r1)) 
		{
			//返回按键响应
			if(isMouseDown)
			{
				isMouseDown=false;
				main_menu2();
				pass2();
			}
		}
		else
		{
		    Rect r2;
			r2.x=441;
			r2.y=63;
			r2.w=464;
			r2.h=85;
			if(isMouseDown)
			{
				isMouseDown=false;
				main_menu2();
				pass2();
			}
		}
	}
}


void back_pass3()
{
    while (true)
	{
	    while(MouseHit())
		{
			mmsg = GetMouseMsg();
			switch(mmsg.uMsg)
			{
				case WM_MOUSEMOVE:		mouseX = mmsg.x; mouseY = mmsg.y;	break;
				case WM_LBUTTONDOWN:	isMouseDown = true;					break;
				case WM_LBUTTONUP:		isMouseDown = false;				break;
			}
		}
		Rect r1;
		r1.x = 216;
		r1.y = 453;
		r1.w = 407;
		r1.h = 504;	
		if(IsInRect(mouseX, mouseY, r1)) 
		{
			//返回按键响应
			if(isMouseDown)
			{
				isMouseDown=false;
				main_menu3();
				pass3();
			}
		}
		else
		{
		    Rect r2;
			r2.x=441;
			r2.y=63;
			r2.w=464;
			r2.h=85;
			if(isMouseDown)
			{
				isMouseDown=false;
				main_menu3();
				pass3();
			}
		}
	}
}



void back_pass4()
{
    while (true)
	{
	    while(MouseHit())
		{
			mmsg = GetMouseMsg();
			switch(mmsg.uMsg)
			{
				case WM_MOUSEMOVE:		mouseX = mmsg.x; mouseY = mmsg.y;	break;
				case WM_LBUTTONDOWN:	isMouseDown = true;					break;
				case WM_LBUTTONUP:		isMouseDown = false;				break;
			}
		}
		Rect r1;
		r1.x = 216;
		r1.y = 453;
		r1.w = 407;
		r1.h = 504;	
		if(IsInRect(mouseX, mouseY, r1)) 
		{
			//返回按键响应
			if(isMouseDown)
			{
				isMouseDown=false;
				main_menu4();
				pass4();
			}
		}
		else
		{
		    Rect r2;
			r2.x=441;
			r2.y=63;
			r2.w=464;
			r2.h=85;
			if(isMouseDown)
			{
				isMouseDown=false;
				main_menu4();
				pass4();
			}
		}
	}
}


void back_pass5()
{
    while (true)
	{
	    while(MouseHit())
		{
			mmsg = GetMouseMsg();
			switch(mmsg.uMsg)
			{
				case WM_MOUSEMOVE:		mouseX = mmsg.x; mouseY = mmsg.y;	break;
				case WM_LBUTTONDOWN:	isMouseDown = true;					break;
				case WM_LBUTTONUP:		isMouseDown = false;				break;
			}
		}
		Rect r1;
		r1.x = 216;
		r1.y = 453;
		r1.w = 407;
		r1.h = 504;	
		if(IsInRect(mouseX, mouseY, r1)) 
		{
			//返回按键响应
			if(isMouseDown)
			{
				isMouseDown=false;
				main_menu5();
				pass5();
			}
		}
		else
		{
		    Rect r2;
			r2.x=441;
			r2.y=63;
			r2.w=464;
			r2.h=85;
			if(isMouseDown)
			{
				isMouseDown=false;
				main_menu5();
				pass5();
			}
		}
	}
}



void hello ()
{
    IMAGE img;
	loadimage(&img,"界面\\muen.jpg");
	putimage(0,0,&img);
	while (true)
	{
	    while(MouseHit())
		{
			mmsg = GetMouseMsg();
			switch(mmsg.uMsg)
			{
				case WM_MOUSEMOVE:		mouseX = mmsg.x; mouseY = mmsg.y;	break;
				case WM_LBUTTONDOWN:	isMouseDown = true;					break;
				case WM_LBUTTONUP:		isMouseDown = false;				break;
			}
		}
		Rect star;
		star.x = 329;
		star.y = 320;
		star.w = 560;
		star.h = 363;	
		if(IsInRect(mouseX, mouseY, star)) 
		{
			//返回按键响应
			if(isMouseDown)
			{
				isMouseDown=false;
				IMAGE img0;
	            loadimage(&img0,"界面\\001.jpg");
	            putimage(0,0,&img0);
                menu();
			}
		}
		else
		{
		    Rect instruction;
			instruction.x=329;
			instruction.y=381;
			instruction.w=560;
			instruction.h=426;
			if (IsInRect(mouseX, mouseY, instruction))
			{
			    if (isMouseDown)
				{
			        isMouseDown=false;
				    Game_instruction();
				}
			}
			else
			{
			    Rect leave;
				leave.x=329;
				leave.y=446;
				leave.w=560;
				leave.h=486;
				if (IsInRect(mouseX,mouseY,leave))
				{
				    if (isMouseDown)
					{
					    isMouseDown=false;
						exit(0);
					}
				}
			}
		}
	}
}


void Game_instruction()
{
    IMAGE img;
	loadimage(&img,"界面\\js.jpg");
	putimage(0,0,&img);
	while (true)
	{
	    while(MouseHit())
		{
			mmsg = GetMouseMsg();
			switch(mmsg.uMsg)
			{
				case WM_MOUSEMOVE:		mouseX = mmsg.x; mouseY = mmsg.y;	break;
				case WM_LBUTTONDOWN:	isMouseDown = true;					break;
				case WM_LBUTTONUP:		isMouseDown = false;				break;
			}
		}
		Rect goback;
		goback.x = 760;
		goback.y = 521;
		goback.w = 844;
		goback.h = 553;	
		if(IsInRect(mouseX, mouseY, goback)) 
		{
			//返回按键响应
			if(isMouseDown)
			{
				isMouseDown=false;
				hello();
			}
		}
	}
}


void set_choose()
{
    while (true)
	{
	    while(MouseHit())
		{
			mmsg = GetMouseMsg();
			switch(mmsg.uMsg)
			{
				case WM_MOUSEMOVE:		mouseX = mmsg.x; mouseY = mmsg.y;	break;
				case WM_LBUTTONDOWN:	isMouseDown = true;					break;
				case WM_LBUTTONUP:		isMouseDown = false;				break;
			}
		}
		Rect ropen1;
		ropen1.x = 432;
		ropen1.y = 249;
		ropen1.w = 458;
		ropen1.h = 270;	
		if(IsInRect(mouseX, mouseY, ropen1)) 
		{
			//返回按键响应
			if(isMouseDown)
			{
				isMouseDown=false;
				temp_music[0]=1;
				set();
			}
		}
		else
		{
		    Rect rclose1;
			rclose1.x=500;
			rclose1.y=249;
			rclose1.w=525;
			rclose1.h=270;
			if (IsInRect(mouseX,mouseY,rclose1))
			{
			    if (isMouseDown)
				{
				    isMouseDown=false;
					temp_music[0]=0;
					set();
				}
			}
			else
			{
			    Rect ropen2;
				ropen2.x=432;
				ropen2.y=270;
				ropen2.w=458;
				ropen2.h=292;
				if (IsInRect(mouseX,mouseY,ropen2))
				{
				    if (isMouseDown)
					{
					    isMouseDown=false;
						temp_music[1]=1;
						set();
					}
				}
				else 
				{
				    Rect rclose2;
					rclose2.x=500;
					rclose2.y=270;
					rclose2.w=525;
					rclose2.h=292;
					if (IsInRect(mouseX,mouseY,rclose2))
					{
					    if (isMouseDown)
						{
						    isMouseDown=false;
							temp_music[1]=0;
							set();
						}
					}
					else
					{
					    Rect rsure;
						rsure.x=381;
						rsure.y=365;
						rsure.w=464;
						rsure.h=399;
						if (IsInRect(mouseX,mouseY,rsure))
						{
						    if (isMouseDown)
							{
							    isMouseDown=false;
								bgmusic=temp_music[0];
								bgmusic_effect=temp_music[1];
								fset=fopen("set.txt","w");
								fwrite(&bgmusic,sizeof(int),1,fset);
								fwrite(&bgmusic_effect,sizeof(int),1,fset);
								fclose(fset);
								IMAGE img;
								loadimage(&img,"界面\\001.jpg");
	                            putimage(0,0,&img);
								menu();
							}
						}
						else
						{
						    Rect rcancel;
							rcancel.x=522;
							rcancel.y=365;
							rcancel.w=605;
							rcancel.h=399;
							if (IsInRect(mouseX,mouseY,rcancel))
							{
							    if (isMouseDown)
								{
								    isMouseDown=false;
									temp_music[0]=bgmusic;
									temp_music[1]=bgmusic_effect;
									IMAGE img;
								    loadimage(&img,"界面\\001.jpg");
	                                putimage(0,0,&img);
								    menu();
								}
							}
						}
					}
				}
			}
		}
	}
}





int main()
{
	int a,b,c;
	c=0;
	bgmusic=1;
	bgmusic_effect=1;
	if((fset=fopen("set.txt","r"))==NULL)
	{
	    fset=fopen("set.txt","w");
		fwrite(&bgmusic,sizeof(int),1,fset);
		fwrite(&bgmusic_effect,sizeof(int),1,fset);
	}
	else
	{
	    fread(&bgmusic,sizeof(int),1,fset);
		fread(&bgmusic_effect,sizeof(int),1,fset);
	}
	fclose(fset);
	for (a=0;a<5;a++)
	{
	    for (b=0;b<5;b++)
		{
		    pass[a][b]=0;
			star[c]=pass[a][b];
			c++;
		}
	}
	if ((fstar=fopen("star.txt","r"))==NULL)
	{
	    fstar=fopen("star.txt","w");
		fwrite(star,sizeof(int),25,fstar);
	}
	else
	{
	    fread(star,sizeof(int),25,fstar);
	}
	fclose(fstar);
	c=0;
	for (a=0;a<5;a++)
	{
	    for (b=0;b<5;b++)
		{
		    pass[a][b]=star[c];
			c++;
		}
	}
	temp_music[0]=bgmusic;
	temp_music[1]=bgmusic_effect;

	initgraph(900,600);
	hello();
	closegraph();
	return 0;
}
