#pragma once
#include <Python.h>

#include <iostream>
#include <string>

class Python2Cpp
{
public:
	static Python2Cpp* instance();

	/* ����python�ű����� */
	bool loadPythonTasks(std::string taskEntranceFileName);
	void loadPythonScript();
private:
	Python2Cpp();
	~Python2Cpp();

	static Python2Cpp* instanceObject;
};

