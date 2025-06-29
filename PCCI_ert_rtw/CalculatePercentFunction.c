/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: CalculatePercentFunction.c
 *
 * Code generated for Simulink model 'PCCI'.
 *
 * Model version                  : 3.0
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Sun Jun 29 18:18:46 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtwtypes.h"
#include "CalculatePercentFunction.h"

/* Output and update for atomic system: '<Root>/CalculatePercentFunction' */
boolean_T PCCI_CalculatePercentFunction(real32_T rtu_PercentRawValue)
{
  /* RelationalOperator: '<S1>/GreaterThan' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant2'
   *  Product: '<S1>/Divide'
   *  Product: '<S1>/Product'
   */
  return rtu_PercentRawValue / 1023.0F * 100.0F > 50.0F;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
