#include "Cell.h"

Cell::Cell(int new_x, int new_y, System::Char newImgChar)
{
	setX(new_x);
	setY(new_y);
	setImage(newImgChar);
}
int Cell::getX()
{
	return x;
}
int Cell::getY()
{
	return y;
}
void Cell::setX(int new_X)
{
	x = new_X;
	return;
}
void Cell::setY(int new_Y)
{
	y = new_Y;
	return;
}
void Cell::setImage(System::Char newImage)
{
	imgChar = newImage;
	System::Drawing::Image^ img1 = System::Drawing::Image::FromFile(blank_picture);
	System::Drawing::Image^ img2 = System::Drawing::Image::FromFile(x_picture);
	System::Drawing::Image^ img3 = System::Drawing::Image::FromFile(o_picture);

	switch (newImage)
	{
	case '-':
		image = gcnew System::Drawing::Bitmap(img1, 100, 100);
		break;
	case 'X':
		image = gcnew System::Drawing::Bitmap(img2, 100, 100);
		break;
	case 'O':
		image = gcnew System::Drawing::Bitmap(img3, 100, 100);
		break;
	}
}
System::Char Cell::getImageChar()
{
	return imgChar;
}
void Cell::display(System::Drawing::Graphics^ g)
{
	g->DrawImage(image, x, y);
}