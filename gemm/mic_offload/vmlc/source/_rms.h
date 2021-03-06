/*******************************************************************************
!  Copyright(C) 2001-2015 Intel Corporation. All Rights Reserved.
!  
!  The source code, information  and  material ("Material") contained herein is
!  owned  by Intel Corporation or its suppliers or licensors, and title to such
!  Material remains  with Intel Corporation  or its suppliers or licensors. The
!  Material  contains proprietary information  of  Intel or  its  suppliers and
!  licensors. The  Material is protected by worldwide copyright laws and treaty
!  provisions. No  part  of  the  Material  may  be  used,  copied, reproduced,
!  modified, published, uploaded, posted, transmitted, distributed or disclosed
!  in any way  without Intel's  prior  express written  permission. No  license
!  under  any patent, copyright  or  other intellectual property rights  in the
!  Material  is  granted  to  or  conferred  upon  you,  either  expressly,  by
!  implication, inducement,  estoppel or  otherwise.  Any  license  under  such
!  intellectual  property  rights must  be express  and  approved  by  Intel in
!  writing.
!  
!  *Third Party trademarks are the property of their respective owners.
!  
!  Unless otherwise  agreed  by Intel  in writing, you may not remove  or alter
!  this  notice or  any other notice embedded  in Materials by Intel or Intel's
!  suppliers or licensors in any way.
!
!*******************************************************************************
!  Content:
!    routines for relative error calculation
!******************************************************************************/

float srelerr(float a, float b)
{
  return (a-b)/a;
}

double drelerr(double a, double b)
{
  return (a-b)/a;
}

float crelerr(MKL_Complex8 a, MKL_Complex8 b)
{
  float re,im;

  re=(a.real-b.real)/a.real;
  im=(a.imag-b.imag)/a.imag;

  if(re>im) return re;
  return im;
}

double zrelerr(MKL_Complex16 a, MKL_Complex16 b)
{
  double re,im;

  re=(a.real-b.real)/a.real;
  im=(a.imag-b.imag)/a.imag;

  if(re>im) return re;
  return im;
}
