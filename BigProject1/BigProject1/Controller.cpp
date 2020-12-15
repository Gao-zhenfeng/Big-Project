#include "Controller.h"
#include <graphics.h>
#include <ege/sys_edit.h>

std::vector<std::string> splitWithStl(const std::string& str, const std::string& pattern)
{
	std::vector<std::string> resVec;

	if ("" == str)
	{
		return resVec;
	}
	//方便截取最后一段数据
	std::string strs = str + pattern;

	size_t pos = strs.find(pattern);
	size_t size = strs.size();

	while (pos != std::string::npos)
	{
		std::string x = strs.substr(0, pos);
		resVec.push_back(x);
		strs = strs.substr(pos + 1, size);
		pos = strs.find(pattern);
	}

	return resVec;
}

Controller::Controller()	//默认构造函数
	: Controller{ 640, 480 }
{
}

Controller::Controller(int width_, int height_)	//有参构造函数
	: Width{ width_ }, Height{ height_ }
{
	std::string buff;
	initgraph(width_, height_);
	setbkcolor(WHITE);
	setcolor(BLACK);
	int fontHeight = 20;
	setfont(fontHeight, 0, "楷体");
	setbkmode(TRANSPARENT);
	sys_edit editBox;
	editBox.create(true);						//创建，false表示单行
	editBox.move(800, 20);						//设置位置
	int editTextHeight = 16;
	editBox.size(editTextHeight * 10, 4 * editTextHeight + 10);	//设置尺寸，高度一般要比字的高多一点，因为输入框的边框也占一定大小。
	editBox.setbgcolor(YELLOW);					//设置背景颜色
	editBox.setcolor(BLACK);					//设置文字颜色
	editBox.setfont(editTextHeight, 0, "楷体");	//设置字体
	int maxLen = 60;
	editBox.setmaxlen(maxLen);					//设置输入最大长度
	//editBox.setreadonly(false);				//默认允许输入
	editBox.visible(true);						//使可见
	//获取焦点
	editBox.setfocus();
	//创建输入缓存区
	const int buffSize = 100;
	char strBuff[100] = "";
	int buffLen = 0;
	bool flag_press = false;		//用来标记是否按下

	for (int i = 0; is_run() && i <= 6; delay_fps(60)) {
		cleardevice();

		xyprintf(100, 0, "1.Input Shape and enter 2.Input bodercolor and enter  ");
		xyprintf(100, 20, "3.Input fillcolor and enter 4.Input centerX and enter  ");
		xyprintf(100, 40, "5.Input centerY and enter 6.Input radius and enter  ");

		//检测到按下回车键就获取输入框内容
		if (keystate(key_enter))
		{
			if (!flag_press)
			{
				//获取输入框内容字符串
				editBox.gettext(buffSize, strBuff);
				buff = strBuff;
				//如果你想获取后清空输入框
				editBox.settext("");
				i++;
			}
			flag_press = true;
		}
		//松开
		else
		{
			flag_press = false;
		}

		//如果缓存区有内容就输出
		if (strBuff[0] != '\0')
		{
			//区域输出，因为内容较多,xyprintf不会自动换行，所以用下面这个
			outtextxy(100, 60, "输入内容:");
			rectprintf(100, 80, 380, 200, "%s", strBuff);
		}
		if (buff == "clear")
			cleardevice();
		switch (i)
		{
		case 1:
			shape = buff;
			break;
		case 2:
		{
			vector<string> ret1 = splitWithStl(buff, ",");
			c.setBoderColor(stoi(ret1[0]), stoi(ret1[2]), stoi(ret1[2]));
			break;
		}
		case 3:
		{
			vector<string> ret2 = splitWithStl(buff, ",");
			c.setFilledColor(stoi(ret2[0]), stoi(ret2[2]), stoi(ret2[2]));
			break;
		}
		case 4:
			c.setCenterX(std::stoi(buff));
			break;
		case 5:
			c.setCenterY(std::stoi(buff));
			break;

		case 6:
			c.setRadius(std::stoi(buff));
			cleardevice();
			c.draw();
			break;
		default:
			break;
		}

		//如果退出循环，直接getch()是无法阻塞的，因为输入的时候也在产生按键消息
		//需要先清空按键消息
		flushkey();
		getch();
	}
}

Controller::~Controller()
{
	closegraph();
}