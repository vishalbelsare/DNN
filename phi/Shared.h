/* This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *  
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
 // Author: Matthew Dixon, Diego Klabjan, Jin Hoon Bang
 // Description: Contains references to all the basic internal libraries & typedefs needed for the code to function.
 // Reference: Please cite as M. Dixon, D. Klabjan, and J. H. Bang. "Implementing Deep Neural Networks for Financial Market Prediction on the Intel Xeon Phi" at the Eighth Workshop on High Performance Computational Finance (WHPCF'15), held in conjunction with Supercomputing 2015, Austin, TX, November 2015. Available at SSRN: http://ssrn.com/abstract=2627258 or http://dx.doi.org/10.2139/ssrn.2627258.  
 // Dependencies: Intel MKL Random Number generator and Intel MKL BLAS
 // Revision: 1.0

#ifndef shared_h
#define shared_h
#include<assert.h>
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<fstream>
#include<string>
#include<sstream>
#include<cstdlib>
#include<stdlib.h>
#include<stdexcept>
#include<utility>
#include<cfloat>
#include<cmath>
#include<omp.h>
#include<exception>
#include "mkl.h"
typedef std::vector< std::vector<double> > matrix;
typedef std::vector< matrix > tensor;

#endif
