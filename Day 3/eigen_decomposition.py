# -*- coding: utf-8 -*-
"""
Created on Sat Apr 29 22:42:31 2023

@author: sarat
"""

import numpy as np
import scipy.linalg
from numpy.linalg import inv, LinAlgError

# A = np.array([[4,2],
#               [-5, -3]])
# lambdas, V = np.linalg.eig(A)
# Vpinv = np.linalg.pinv(V)
# Lambda = np.diag(lambdas)

# Aconf = np.dot(V, np.dot(Lambda, Vpinv))

A = np.array([[0, 1, 0, 0],
              [0, -0.1818, 2.6767, 0],
              [0, 0, 0, 1],
              [0, 1, 0, 0]])

B = np.array([[0], [1.8182], [0], [4.5455]])

Q = np.array([[1, 0, 0, 0],
             [0, 0, 0, 0],
             [0, 0, 1, 0],
             [0, 0, 0, 0]])
R = np.array([[1]])

# try:
#     ait = inv(A).conj().transpose()  # ait is "A inverse transpose"
# except LinAlgError:
#     raise ValueError('Matrix A in the algebraic Riccati equation solver is ill-conditioned')

# Z = np.array([A, A],
#              [B, B])

# z11 = A + B*np.linalg.pinv(R)*np.transpose(B)*np.transpose(np.linalg.pinv(A))*Q
# z12 = -B*np.linalg.pinv(R)*np.transpose(B)*np.transpose(np.linalg.pinv(A))
# z21 = -np.transpose(np.linalg.pinv(A))*Q
# z22 = np.transpose(np.linalg.pinv(A))

z11 = A 
z12 = -B*np.linalg.inv(R)*np.transpose(B)
z21 = -Q
z22 = -np.transpose(A)

z = np.vstack((np.hstack((z11, z12)), np.hstack((z21, z22))))

[s,u,sdim] = scipy.linalg.schur(np.linalg.inv(z), sort='lhp')

(m,n) = u.shape

u11 = u[0:4, 0:4]
u12 = u[0:4, 4:n]
u21 = u[4:m, 0:4]
u22 = u[4:m, 4:n]
u11i = np.linalg.inv(u11)

Psolution =  np.asmatrix(u21)*np.asmatrix(u11i)

P = np.matrix(scipy.linalg.solve_discrete_are(A, B, Q, R))