#include <Python.h>
#include <object.h>
#include <listobject.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *
 * print_python_list_info -  function that prints some basic
 *			info about Python lists
 * @p: python list
 */

void print_python_list_info(PyObject *p)
{
	long int size = PyList_Size(p);
	int elem;
	PyListObject *obj = (PyListObject)p;

	printf("[*] Size of the Python List = %lu\n", Py_SIZE(p));
	printf("[*] Allocated = %lu\n", ((PyListObject *)p)->allocated);
	for (elem = 0; elem < Py_SIZE(p); elem++)
		printf("Element %d: %s\n", elem, Py_TYPE(PyList_GetItem(p, elem))->tp_name);
}
