class File
{
};


// Virtual base class.
class InputFile : virtual public File
{
};


// Virtual base class.
class OutputFile : virtual public File
{
};


// Deadly Multiple Inheritance diamond.
class IOFile : public InputFile, public OutputFile
{
};