#pragma once
#include "Graphics.h"
#include "MainWindow.h"

class Dude
{
public:
	void Update(MainWindow &wnd);
	void ClampToScreen();
	void Draw(Graphics &gfx) const;
	bool Compare(int x, int y, int right, int bottom) const;
private:
	const int right = x + width;
	const int bottom = y + height;
	int x = 400;
	int y = 300;
	static constexpr int width = 20;
	static constexpr int height = 20;
};