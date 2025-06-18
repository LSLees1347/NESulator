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
		if (GetKey(olc::Key::ESCAPE).bPressed)
		{
			return false;
		}

		Clear(olc::VERY_DARK_GREY);
		FillRect(25, 25, 15, 15, olc::DARK_GREEN);

		return true;
	}
};


int main()
{
	Demo_olc6502 demo;
	demo.Construct(640, 360, 2, 2);
	demo.Start();
	return 0;
}