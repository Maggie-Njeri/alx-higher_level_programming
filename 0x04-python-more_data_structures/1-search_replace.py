#!/usr/bin/python3
def search_replace(my_list, search, replace):
    x_list = list(my_list)
    for i in range(len(x_list)):
        if x_list[i] == search:
            x_list[i] = replace
    return x_list
