#!/usr/bin/python3

def read_file(pathname):
    num_list = []
    with open(pathname, 'r') as f:
        for i in f:
            num_list.append(int(i))
    return num_list
