#include <iostream>

#include "EasyPythonApi.h"

using namespace std;

int main() {

	EasyPythonApi* pyInstance = EasyPythonApi::instance();
	pyInstance->loadPythonTasks("task");

	return 0;
}