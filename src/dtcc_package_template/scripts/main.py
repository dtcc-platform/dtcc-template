# Copyright (C) 2023 Anders Logg
# Licensed under the MIT License

import sys


def main():

    print("Hello world!")

    if len(sys.argv) > 1:
        print("Command-line arguments:", sys.argv[1:])
