import ctypes

lib = ctypes.CDLL('./libPyList.so')
lib.print_python_list_info.argtypes = [ctypes.py_object]
x = ['hello', 'World']
lib.print_python_list_info(x)
del x[1]
lib.print_python_list_info(x)
x = l + [4, 5, 6.0, (9, 8), [9, 8, 1024], "My string"]
lib.print_python_list_info(x)
x = []
lib.print_python_list_info(x)
x.append(0)
lib.print_python_list_info(x)
x.append(1)
x.append(2)
x.append(3)
x.append(4)
lib.print_python_list_info(x)
x.pop()
lib.print_python_list_info(x)
