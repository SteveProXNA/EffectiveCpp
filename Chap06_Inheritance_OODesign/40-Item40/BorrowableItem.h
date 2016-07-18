class BorrowableItem
{
public:
	void checkOut()
	{
	}
};


class ElectronicGadget
{
public:
	bool checkOut() const;
};


class Mp3Player : public BorrowableItem, public ElectronicGadget
{
};