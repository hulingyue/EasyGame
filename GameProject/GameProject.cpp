#include <iostream>

#include "Python2Cpp.h"

using namespace std;

int main() {

	Python2Cpp* pyInstance =  Python2Cpp::instance();
	pyInstance->loadPythonTasks("task");

	return 0;
}