#pragma once

class AccessLevels
{
public:
	int getReadOnly() const { return readOnly; }

	int getReadWrite() const { return readWrite; }
	void setReadWrite(int value) { readWrite = value; }

	void setWriteOnly(int value) { writeOnly = value; }

private:
	int noAccess;
	int readOnly;
	int readWrite;
	int writeOnly;
};