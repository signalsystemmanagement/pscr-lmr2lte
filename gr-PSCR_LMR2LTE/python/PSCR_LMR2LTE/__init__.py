#
# Copyright 2008,2009 Free Software Foundation, Inc.
#
# SPDX-License-Identifier: GPL-3.0-or-later
#

# The presence of this file turns this directory into a Python package

'''
This is the GNU Radio PSCR_LMR2LTE module. Place your Python package
description here (python/__init__.py).
'''
import os

# import pybind11 generated symbols into the PSCR_LMR2LTE namespace
try:
    # this might fail if the module is python-only
    from .PSCR_LMR2LTE_python import *
except ModuleNotFoundError:
    pass

# import any pure python here
from .led import led
from .label import label
#
