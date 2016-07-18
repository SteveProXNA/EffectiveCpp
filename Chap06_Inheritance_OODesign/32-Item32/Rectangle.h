class Rectangle
{
public:
	virtual int getHeight() const { return height; }
	virtual int getWidth() const { return width; }

	virtual void setHeight(int newHeight) { height = newHeight; }
	virtual void setWidth(int newWidth) { width = newWidth; }

private:
	int height;
	int width;
};


class Square : public Rectangle
{
};