class File
{
};


class InputFile : public File
{
};


class OutputFile : public File
{
};


// Deadly Multiple Inheritance diamond.
class IOFile : public InputFile, public OutputFile
{
};