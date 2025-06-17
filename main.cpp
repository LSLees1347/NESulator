#include <iostream>
#include <sstream>


#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"



class Demo_olc6502 : public olc::PixelGameEngine
{
public:
	Demo_olc6502() { sAppName = "NESulator"; }

	bool OnUserCreate()
	{
		return true;
	}

	bool OnUserUpdate(float fElapsedTime)
	{
		Clear(olc::VERY_DARK_GREY);


		if (GetKey(olc::Key::SPACE).bPressed)
		{
			return false;
		}
		DrawString(10, 10, "sup");

		return true;
	}
};


int main()
{
	Demo_olc6502 demo;
	demo.Construct(680, 480, 2, 2);
	demo.Start();
	return 0;
}