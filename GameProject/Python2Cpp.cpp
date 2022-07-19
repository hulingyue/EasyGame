#include "Python2Cpp.h"

/* 初始化静态变量 */
Python2Cpp* Python2Cpp::instanceObject = nullptr;

/* 获取实例的方法 */
Python2Cpp* Python2Cpp::instance() {
	if (Python2Cpp::instanceObject == nullptr) {
		Python2Cpp::instanceObject = new Python2Cpp();
	}

	return Python2Cpp::instanceObject;
}

Python2Cpp::Python2Cpp() {
	Py_Initialize();
}

Python2Cpp::~Python2Cpp() {
	Py_Finalize();
}

bool Python2Cpp::loadPythonTasks(std::string taskEntranceFileName) {

	//导入环境变量
	PyRun_SimpleString("import sys");

	//python脚本路径
	PyRun_SimpleString("sys.path.append('./../Script/Python')");

	PyObject* pyModule = PyImport_ImportModule(taskEntranceFileName.c_str());

	if (pyModule != nullptr) {

		PyObject* task = PyObject_GetAttrString(pyModule, "taskFileList");
		std::cout << task << std::endl;
		return true;
	} else {
		return false;
	}
}

void Python2Cpp::loadPythonScript() {

	//导入环境变量
	PyRun_SimpleString("import sys");

	//python脚本路径
	PyRun_SimpleString("sys.path.append('./../Script/Python')");

	PyObject* pModule = nullptr;

	PyObject* pFunc = nullptr;

	PyObject* pClass = nullptr;

	PyObject* pInstance = nullptr;

	pModule = PyImport_ImportModule("task");

	if (pModule == nullptr) {
		std::cout << "module not found" << std::endl;
	}
}
