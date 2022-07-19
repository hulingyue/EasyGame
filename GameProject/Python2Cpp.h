#pragma once
#include <Python.h>

#include <iostream>
#include <string>

class Python2Cpp
{
public:
	static Python2Cpp* instance();

	/* 加载python脚本任务 */
	bool loadPythonTasks(std::string taskEntranceFileName);
	void loadPythonScript();
private:
	Python2Cpp();
	~Python2Cpp();

	static Python2Cpp* instanceObject;
};

