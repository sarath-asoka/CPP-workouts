# -*- coding: utf-8 -*-
"""
Created on Sat Apr 29 22:42:31 2023

@author: sarat
"""

import numpy as np

# A = np.array([[4,2],
#               [-5, -3]])
# lambdas, V = np.linalg.eig(A)
# Vinv = np.linalg.inv(V)
# Lambda = np.diag(lambdas)

# Aconf = np.dot(V, np.dot(Lambda, Vinv))

A = np.array([[0, 1, 0, 0],
              [0, -0.1818, 2.6767, 0],
              [0, 0, 0, 1],
              [0, 1, 0, 0]])

B = np.array([[0], [1.8182], [0], [4.5455]])

Q = np.array([[1, 0, 0, 0],
             [0, 0, 0, 0],
             [0, 0, 1, 0],
             [0, 0, 0, 0]])
R = 1

Z = np.array([A, A],
             [B, B])