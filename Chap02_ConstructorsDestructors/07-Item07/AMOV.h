class AMOV
{
public:
	//virtual ~AMOV() = 0 {}
	virtual ~AMOV() = 0;
};

AMOV::~AMOV()
{
}

class StevePro : public AMOV
{
	~StevePro() {}
};