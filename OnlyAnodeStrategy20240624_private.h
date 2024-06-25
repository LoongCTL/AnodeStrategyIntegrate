/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: OnlyAnodeStrategy20240624_private.h
 *
 * Code generated for Simulink model 'OnlyAnodeStrategy20240624'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Tue Jun 25 16:53:49 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_OnlyAnodeStrategy20240624_private_h_
#define RTW_HEADER_OnlyAnodeStrategy20240624_private_h_
#include "rtwtypes.h"
#include "OnlyAnodeStrategy20240624.h"
#include "OnlyAnodeStrategy20240624_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

/* Used by FromWorkspace Block: '<S43>/FromWs' */
#ifndef rtInterpolate
# define rtInterpolate(v1,v2,f1,f2)    (((v1)==(v2))?((double)(v1)): (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif

#ifndef rtRound
# define rtRound(v)                    ( ((v) >= 0) ? floor((v) + 0.5) : ceil((v) - 0.5) )
#endif

extern real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex);
extern void OnlyAnodeStrateg_MATLABFunction(real_T rtu_setpoint, real_T
  rtu_process_variable, real_T rtu_Kp, real_T rtu_Ki, real_T rtu_Kd, real_T
  *rty_output, DW_MATLABFunction_OnlyAnodeSt_T *localDW);
extern void OnlyAnodeStrat_MATLABFunction_e(real_T rtu_input_signal, real_T
  rtu_alpha, real_T rtu_previous_output, real_T *rty_filtered_signal);

#endif                     /* RTW_HEADER_OnlyAnodeStrategy20240624_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
