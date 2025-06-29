/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PCCI.c
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

#include "PCCI.h"
#include "CalculatePercentFunction.h"

/* External inputs (root inport signals with default storage) */
ExtU_PCCI_T PCCI_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_PCCI_T PCCI_Y;

/* Real-time model */
static RT_MODEL_PCCI_T PCCI_M_;
RT_MODEL_PCCI_T *const PCCI_M = &PCCI_M_;

/* Model step function */
void PCCI_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/CalculatePercentFunction' */

  /* Outport: '<Root>/Indicator_Lamp_B' incorporates:
   *  Inport: '<Root>/PercentRawValue_U16'
   */
  PCCI_Y.Indicator_Lamp_B = PCCI_CalculatePercentFunction
    (PCCI_U.PercentRawValue_U16);

  /* End of Outputs for SubSystem: '<Root>/CalculatePercentFunction' */
}

/* Model initialize function */
void PCCI_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void PCCI_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
