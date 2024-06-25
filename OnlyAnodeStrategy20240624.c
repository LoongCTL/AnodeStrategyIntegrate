/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: OnlyAnodeStrategy20240624.c
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

#include "OnlyAnodeStrategy20240624.h"
#include "rtwtypes.h"
#include "OnlyAnodeStrategy20240624_private.h"

/* Named constants for Chart: '<S1>/Chart' */
#define OnlyAnod_IN_FCU_Self_Inspection ((uint8_T)3U)
#define OnlyAnodeS_IN_FCU_Standby_Purge ((uint8_T)4U)
#define OnlyAnodeStrate_IN_FCU_Dormancy ((uint8_T)1U)
#define OnlyAnodeStrategy20_IN_FCU_Open ((uint8_T)2U)

/* Block signals (default storage) */
B_OnlyAnodeStrategy20240624_T OnlyAnodeStrategy20240624_B;

/* Block states (default storage) */
DW_OnlyAnodeStrategy20240624_T OnlyAnodeStrategy20240624_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_OnlyAnodeStrategy2024062_T OnlyAnodeStrategy20240624_Y;

/* Real-time model */
static RT_MODEL_OnlyAnodeStrategy202_T OnlyAnodeStrategy20240624_M_;
RT_MODEL_OnlyAnodeStrategy202_T *const OnlyAnodeStrategy20240624_M =
  &OnlyAnodeStrategy20240624_M_;

/* Exported data definition */

/* Definition for custom storage class: Global */
real_T A_An_BoVa_Ctrl;           /* '<S13>/整车状态切换 故障状态(0//1//2//3)' */
real_T A_An_DrVa_Ctrl;           /* '<S14>/整车状态切换 故障状态(0//1//2//3)' */
real_T A_An_PrReVa_Ctrl;               /* '<S66>/Switch' */
real_T A_An_PrVa_Ctrl;                 /* '<S3>/比例阀' */
real_T A_An_PuVa_Ctrl;           /* '<S54>/整车状态切换 故障状态(0//1//2//3)' */
real_T A_An_PuWaSw_Ctrl;               /* '<S11>/循环泵出口气体散热' */
real_T Anode_reserved;                 /* '<S43>/FromWs' */
real_T C_An_Pu_RPM;                    /* '<S68>/Switch' */
real_T C_An_SoSeWa_m;                  /* '<Root>/C_An_SoSeWa_m' */
real_T C_Fcu_Ready;                    /* '<Root>/C_Fcu_Ready' */
real_T C_Sti_Req;                      /* '<Root>/C_Sti_Req' */
real_T C_Ve_FaSta;                     /* '<Root>/C_Ve_FaSta ' */
real_T S_An_PrReVaOut_p;               /* '<Root>/S_An_PrReVaOut_p ' */
real_T S_An_PrReVaOut_t;               /* '<Root>/S_An_PrReVaOut_t ' */
real_T S_An_RmMa_p;                    /* '<Root>/S_An_RmMa_p ' */
real_T S_An_SuMa_p;                    /* '<Root>/S_An_SuMa_p ' */
static void rate_scheduler(void);
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (OnlyAnodeStrategy20240624_M->Timing.TaskCounters.TID[2])++;
  if ((OnlyAnodeStrategy20240624_M->Timing.TaskCounters.TID[2]) > 99) {/* Sample time: [1.0s, 0.0s] */
    OnlyAnodeStrategy20240624_M->Timing.TaskCounters.TID[2] = 0;
  }

  (OnlyAnodeStrategy20240624_M->Timing.TaskCounters.TID[3])++;
  if ((OnlyAnodeStrategy20240624_M->Timing.TaskCounters.TID[3]) > 299) {/* Sample time: [3.0s, 0.0s] */
    OnlyAnodeStrategy20240624_M->Timing.TaskCounters.TID[3] = 0;
  }
}

/*
 * Output and update for atomic system:
 *    '<S7>/MATLAB Function'
 *    '<S8>/MATLAB Function'
 *    '<S38>/MATLAB Function'
 */
void OnlyAnodeStrateg_MATLABFunction(real_T rtu_setpoint, real_T
  rtu_process_variable, real_T rtu_Kp, real_T rtu_Ki, real_T rtu_Kd, real_T
  *rty_output, DW_MATLABFunction_OnlyAnodeSt_T *localDW)
{
  real_T D;
  real_T error;
  error = rtu_setpoint - rtu_process_variable;
  localDW->error_sum += error;
  D = (error - localDW->last_error) * rtu_Kd;
  localDW->last_error = error;
  *rty_output = (rtu_Kp * error + rtu_Ki * localDW->error_sum) + D;
}

/*
 * Output and update for atomic system:
 *    '<S2>/MATLAB Function'
 *    '<S2>/MATLAB Function1'
 *    '<S2>/MATLAB Function2'
 *    '<S2>/MATLAB Function3'
 */
void OnlyAnodeStrat_MATLABFunction_e(real_T rtu_input_signal, real_T rtu_alpha,
  real_T rtu_previous_output, real_T *rty_filtered_signal)
{
  *rty_filtered_signal = (1.0 - rtu_alpha) * rtu_previous_output + rtu_alpha *
    rtu_input_signal;
}

/* Model step function */
void OnlyAnodeStrategy20240624_step(void)
{
  /* local block i/o variables */
  real_T rtb_Switch;
  real_T rtb_output;
  int32_T rtb_y;
  if (OnlyAnodeStrategy20240624_M->Timing.TaskCounters.TID[3] == 0) {
    /* MultiPortSwitch: '<S52>/Output' incorporates:
     *  Constant: '<S52>/Vector'
     *  UnitDelay: '<S55>/Output'
     */
    OnlyAnodeStrategy20240624_B.Output =
      OnlyAnodeStrategy2024062_ConstP.Vector_Value[OnlyAnodeStrategy20240624_DW.Output_DSTATE];
  }

  /* MATLAB Function: '<S10>/延迟三秒下电 执行关机吹扫动作' incorporates:
   *  Inport: '<Root>/C_Fcu_Ready'
   */
  if (C_Fcu_Ready == 0.0) {
    OnlyAnodeStrategy20240624_DW.n++;
    rtb_y = 0;
    if (OnlyAnodeStrategy20240624_DW.n > 300.0) {
      rtb_y = 1;
    }
  } else {
    OnlyAnodeStrategy20240624_DW.n = 0.0;
    rtb_y = 0;
  }

  /* End of MATLAB Function: '<S10>/延迟三秒下电 执行关机吹扫动作' */

  /* MultiPortSwitch: '<S54>/整车状态切换 故障状态(0//1//2//3)' incorporates:
   *  Inport: '<Root>/C_Ve_FaSta '
   */
  switch ((int32_T)C_Ve_FaSta) {
   case 0:
    /* MultiPortSwitch: '<S10>/整车状态切换 正常工作//开关机切换' incorporates:
     *  Inport: '<Root>/C_Fcu_Ready'
     */
    if ((int32_T)C_Fcu_Ready == 1) {
      /* MultiPortSwitch: '<S54>/整车状态切换 故障状态(0//1//2//3)' */
      A_An_PuVa_Ctrl = OnlyAnodeStrategy20240624_B.Output;
    } else {
      /* MultiPortSwitch: '<S54>/整车状态切换 故障状态(0//1//2//3)' */
      A_An_PuVa_Ctrl = (real_T)rtb_y;
    }
    break;

   case 1:
    /* MultiPortSwitch: '<S10>/整车状态切换 正常工作//开关机切换' incorporates:
     *  Inport: '<Root>/C_Fcu_Ready'
     */
    if ((int32_T)C_Fcu_Ready == 1) {
      /* MultiPortSwitch: '<S54>/整车状态切换 故障状态(0//1//2//3)' */
      A_An_PuVa_Ctrl = OnlyAnodeStrategy20240624_B.Output;
    } else {
      /* MultiPortSwitch: '<S54>/整车状态切换 故障状态(0//1//2//3)' */
      A_An_PuVa_Ctrl = (real_T)rtb_y;
    }
    break;

   case 2:
    /* MultiPortSwitch: '<S10>/整车状态切换 正常工作//开关机切换' incorporates:
     *  Inport: '<Root>/C_Fcu_Ready'
     */
    if ((int32_T)C_Fcu_Ready == 1) {
      /* MultiPortSwitch: '<S54>/整车状态切换 故障状态(0//1//2//3)' */
      A_An_PuVa_Ctrl = OnlyAnodeStrategy20240624_B.Output;
    } else {
      /* MultiPortSwitch: '<S54>/整车状态切换 故障状态(0//1//2//3)' */
      A_An_PuVa_Ctrl = (real_T)rtb_y;
    }
    break;

   default:
    /* MultiPortSwitch: '<S54>/整车状态切换 故障状态(0//1//2//3)' incorporates:
     *  Constant: '<S54>/Constant1'
     */
    A_An_PuVa_Ctrl = 0.0;
    break;
  }

  /* End of MultiPortSwitch: '<S54>/整车状态切换 故障状态(0//1//2//3)' */
  if (OnlyAnodeStrategy20240624_M->Timing.TaskCounters.TID[3] == 0) {
    /* Switch: '<S57>/FixPt Switch' incorporates:
     *  Constant: '<S56>/FixPt Constant'
     *  Constant: '<S57>/Constant'
     *  Sum: '<S56>/FixPt Sum1'
     *  UnitDelay: '<S55>/Output'
     */
    if ((uint8_T)(OnlyAnodeStrategy20240624_DW.Output_DSTATE + 1U) > 20) {
      OnlyAnodeStrategy20240624_DW.Output_DSTATE = 0U;
    } else {
      OnlyAnodeStrategy20240624_DW.Output_DSTATE++;
    }

    /* End of Switch: '<S57>/FixPt Switch' */
  }

  if (OnlyAnodeStrategy20240624_M->Timing.TaskCounters.TID[2] == 0) {
    /* Gain: '<S9>/Gain1' incorporates:
     *  Constant: '<S37>/Vector'
     *  MultiPortSwitch: '<S37>/Output'
     *  UnitDelay: '<S39>/Output'
     */
    OnlyAnodeStrategy20240624_B.Gain1 = 100000.0 *
      OnlyAnodeStrategy2024062_ConstP.pooled5[OnlyAnodeStrategy20240624_DW.Output_DSTATE_o];
  }

  /* Lookup_n-D: '<S61>/PressureSenserOutputMap' incorporates:
   *  Inport: '<Root>/S_An_SuMa_p '
   */
  rtb_output = look1_binlxpw(S_An_SuMa_p,
    OnlyAnodeStrategy2024062_ConstP.pooled8,
    OnlyAnodeStrategy2024062_ConstP.pooled7, 1U);

  /* Saturate: '<S2>/Saturation1' */
  if (rtb_output > 300000.0) {
    rtb_output = 300000.0;
  } else if (rtb_output < 100000.0) {
    rtb_output = 100000.0;
  }

  /* MATLAB Function: '<S2>/MATLAB Function1' incorporates:
   *  Constant: '<S2>/进气歧管'
   *  Memory: '<S2>/Memory4'
   *  Saturate: '<S2>/Saturation1'
   */
  OnlyAnodeStrat_MATLABFunction_e(rtb_output, 1.0,
    OnlyAnodeStrategy20240624_DW.Memory4_PreviousInput,
    &OnlyAnodeStrategy20240624_B.filtered_signal_p);

  /* MATLAB Function: '<S38>/MATLAB Function' incorporates:
   *  Constant: '<S38>/Constant'
   *  Constant: '<S38>/Constant1'
   *  Constant: '<S38>/Constant2'
   *  Inport: '<Root>/S_An_SuMa_p '
   */
  OnlyAnodeStrateg_MATLABFunction(OnlyAnodeStrategy20240624_B.Gain1, S_An_SuMa_p,
    0.1, 0.49, 0.0, &rtb_output,
    &OnlyAnodeStrategy20240624_DW.sf_MATLABFunction_o);

  /* MATLAB Function: '<S9>/关机吹扫泵转速控制 ' incorporates:
   *  Inport: '<Root>/C_Fcu_Ready'
   */
  if (C_Fcu_Ready == 0.0) {
    OnlyAnodeStrategy20240624_DW.n_d++;
    rtb_y = 1;
    if (OnlyAnodeStrategy20240624_DW.n_d < 300.0) {
      rtb_y = 5000;
    }
  } else {
    OnlyAnodeStrategy20240624_DW.n_d = 0.0;
    rtb_y = 0;
  }

  /* End of MATLAB Function: '<S9>/关机吹扫泵转速控制 ' */

  /* MultiPortSwitch: '<S9>/整车状态切换 开机//正常工作//关机' incorporates:
   *  Inport: '<Root>/C_Fcu_Ready'
   */
  if ((int32_T)C_Fcu_Ready == 1) {
    /* Saturate: '<S38>/Saturation' */
    if (rtb_output > 350000.0) {
      rtb_output = 350000.0;
    } else if (rtb_output < 0.0) {
      rtb_output = 0.0;
    }

    /* End of Saturate: '<S38>/Saturation' */
  } else {
    rtb_output = rtb_y;
  }

  /* End of MultiPortSwitch: '<S9>/整车状态切换 开机//正常工作//关机' */

  /* MultiPortSwitch: '<S36>/整车状态切换 故障状态(0//1//2//3)' incorporates:
   *  Constant: '<S36>/Constant1'
   *  Gain: '<S36>/Gain3'
   *  Inport: '<Root>/C_Ve_FaSta '
   */
  switch ((int32_T)C_Ve_FaSta) {
   case 0:
   case 1:
    break;

   case 2:
    rtb_output *= 0.5;
    break;

   default:
    rtb_output = 0.0;
    break;
  }

  /* End of MultiPortSwitch: '<S36>/整车状态切换 故障状态(0//1//2//3)' */

  /* Chart: '<S1>/Chart' incorporates:
   *  Inport: '<Root>/C_Sti_Req'
   *  Inport: '<Root>/C_Ve_FaSta '
   */
  if (OnlyAnodeStrategy20240624_DW.is_active_c20_OnlyAnodeStrategy == 0U) {
    OnlyAnodeStrategy20240624_DW.is_active_c20_OnlyAnodeStrategy = 1U;
    OnlyAnodeStrategy20240624_DW.is_c20_OnlyAnodeStrategy2024062 =
      OnlyAnodeStrate_IN_FCU_Dormancy;
  } else {
    switch (OnlyAnodeStrategy20240624_DW.is_c20_OnlyAnodeStrategy2024062) {
     case OnlyAnodeStrate_IN_FCU_Dormancy:
      if (C_Sti_Req > 0.0) {
        OnlyAnodeStrategy20240624_DW.is_c20_OnlyAnodeStrategy2024062 =
          OnlyAnod_IN_FCU_Self_Inspection;
        OnlyAnodeStrategy20240624_DW.A = 1.0;
      }
      break;

     case OnlyAnodeStrategy20_IN_FCU_Open:
      break;

     case OnlyAnod_IN_FCU_Self_Inspection:
      if (C_Ve_FaSta != 3.0) {
        OnlyAnodeStrategy20240624_B.Pump_RPM = 5000.0;
        OnlyAnodeStrategy20240624_DW.A++;
        OnlyAnodeStrategy20240624_DW.is_c20_OnlyAnodeStrategy2024062 =
          OnlyAnodeS_IN_FCU_Standby_Purge;
      } else {
        OnlyAnodeStrategy20240624_DW.A = 1.0;
      }
      break;

     default:
      /* case IN_FCU_Standby_Purge: */
      if (OnlyAnodeStrategy20240624_DW.A >= 300.0) {
        OnlyAnodeStrategy20240624_B.Pump_RPM = 0.0;
        OnlyAnodeStrategy20240624_DW.is_c20_OnlyAnodeStrategy2024062 =
          OnlyAnodeStrategy20_IN_FCU_Open;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */

  /* Switch: '<S68>/Switch' incorporates:
   *  Sum: '<S1>/Sum'
   */
  C_An_Pu_RPM = OnlyAnodeStrategy20240624_B.Pump_RPM + rtb_output;

  /* Switch: '<S11>/循环泵出口气体散热' */
  A_An_PuWaSw_Ctrl = (real_T)(rtb_output >= 2500.0);
  if (OnlyAnodeStrategy20240624_M->Timing.TaskCounters.TID[2] == 0) {
    /* Gain: '<S8>/Gain1' incorporates:
     *  Constant: '<S27>/Vector'
     *  MultiPortSwitch: '<S27>/Output'
     *  UnitDelay: '<S32>/Output'
     */
    OnlyAnodeStrategy20240624_B.u = 100000.0 *
      OnlyAnodeStrategy2024062_ConstP.pooled5[OnlyAnodeStrategy20240624_DW.Output_DSTATE_g];
  }

  /* If: '<S8>/If' incorporates:
   *  Delay: '<S8>/Delay1'
   *  Inport: '<Root>/C_Sti_Req'
   *  Sum: '<S8>/Sum1'
   */
  if (!(C_Sti_Req - OnlyAnodeStrategy20240624_DW.Delay1_DSTATE <= -300.0)) {
    /* Outputs for IfAction SubSystem: '<S8>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S22>/Action Port'
     */
    /* SignalConversion generated from: '<S22>/In1' */
    OnlyAnodeStrategy20240624_B.In1 = OnlyAnodeStrategy20240624_B.u;

    /* End of Outputs for SubSystem: '<S8>/If Action Subsystem1' */
  }

  /* End of If: '<S8>/If' */

  /* MATLAB Function: '<S8>/MATLAB Function' incorporates:
   *  Constant: '<S8>/Constant'
   *  Constant: '<S8>/Constant1'
   *  Constant: '<S8>/Constant2'
   *  Inport: '<Root>/S_An_SuMa_p '
   */
  OnlyAnodeStrateg_MATLABFunction(OnlyAnodeStrategy20240624_B.In1, S_An_SuMa_p,
    0.05, 0.51, 0.0, &rtb_output,
    &OnlyAnodeStrategy20240624_DW.sf_MATLABFunction_m);
  if (OnlyAnodeStrategy20240624_M->Timing.TaskCounters.TID[2] == 0) {
    /* Switch: '<S34>/FixPt Switch' incorporates:
     *  Constant: '<S33>/FixPt Constant'
     *  Constant: '<S34>/Constant'
     *  Sum: '<S33>/FixPt Sum1'
     *  UnitDelay: '<S32>/Output'
     */
    if ((uint8_T)(OnlyAnodeStrategy20240624_DW.Output_DSTATE_g + 1U) > 4) {
      OnlyAnodeStrategy20240624_DW.Output_DSTATE_g = 0U;
    } else {
      OnlyAnodeStrategy20240624_DW.Output_DSTATE_g++;
    }

    /* End of Switch: '<S34>/FixPt Switch' */

    /* Switch: '<S41>/FixPt Switch' incorporates:
     *  Constant: '<S40>/FixPt Constant'
     *  Constant: '<S41>/Constant'
     *  Sum: '<S40>/FixPt Sum1'
     *  UnitDelay: '<S39>/Output'
     */
    if ((uint8_T)(OnlyAnodeStrategy20240624_DW.Output_DSTATE_o + 1U) > 4) {
      OnlyAnodeStrategy20240624_DW.Output_DSTATE_o = 0U;
    } else {
      OnlyAnodeStrategy20240624_DW.Output_DSTATE_o++;
    }

    /* End of Switch: '<S41>/FixPt Switch' */
  }

  /* MultiPortSwitch: '<S20>/整车状态切换 故障状态(0//1//2//3)' incorporates:
   *  Inport: '<Root>/C_Ve_FaSta '
   */
  switch ((int32_T)C_Ve_FaSta) {
   case 0:
    /* Switch: '<S66>/Switch' incorporates:
     *  Constant: '<S7>/减压阀开环压力控制'
     *  Switch: '<S7>/机械减压阀//电磁减压阀切换 0 机械减压阀 1 电磁减压阀'
     */
    A_An_PrReVa_Ctrl = 500000.0;
    break;

   case 1:
    /* Switch: '<S66>/Switch' incorporates:
     *  Constant: '<S7>/减压阀开环压力控制'
     *  Gain: '<S20>/Gain2'
     *  Switch: '<S7>/机械减压阀//电磁减压阀切换 0 机械减压阀 1 电磁减压阀'
     */
    A_An_PrReVa_Ctrl = 0.0;
    break;

   case 2:
    /* Switch: '<S66>/Switch' incorporates:
     *  Constant: '<S7>/减压阀开环压力控制'
     *  Gain: '<S20>/Gain3'
     *  Switch: '<S7>/机械减压阀//电磁减压阀切换 0 机械减压阀 1 电磁减压阀'
     */
    A_An_PrReVa_Ctrl = 250000.0;
    break;

   default:
    /* Switch: '<S66>/Switch' incorporates:
     *  Constant: '<S20>/Constant1'
     */
    A_An_PrReVa_Ctrl = 1.0;
    break;
  }

  /* End of MultiPortSwitch: '<S20>/整车状态切换 故障状态(0//1//2//3)' */

  /* MATLAB Function: '<S4>/关机瓶阀开度延时关闭 ' incorporates:
   *  Inport: '<Root>/C_Fcu_Ready'
   */
  if (C_Fcu_Ready == 0.0) {
    OnlyAnodeStrategy20240624_DW.n_b++;
    rtb_y = 1;
    if (OnlyAnodeStrategy20240624_DW.n_b < 300.0) {
      rtb_y = 0;
    }
  } else {
    OnlyAnodeStrategy20240624_DW.n_b = 0.0;
    rtb_y = 0;
  }

  /* End of MATLAB Function: '<S4>/关机瓶阀开度延时关闭 ' */

  /* MultiPortSwitch: '<S13>/整车状态切换 故障状态(0//1//2//3)' incorporates:
   *  Inport: '<Root>/C_Ve_FaSta '
   */
  switch ((int32_T)C_Ve_FaSta) {
   case 0:
    /* MultiPortSwitch: '<S4>/整车状态切换 正常工作//开关机切换' incorporates:
     *  Inport: '<Root>/C_Fcu_Ready'
     */
    if ((int32_T)C_Fcu_Ready == 1) {
      /* MultiPortSwitch: '<S13>/整车状态切换 故障状态(0//1//2//3)' incorporates:
       *  Constant: '<S4>/Constant'
       */
      A_An_BoVa_Ctrl = 0.0;
    } else {
      /* MultiPortSwitch: '<S13>/整车状态切换 故障状态(0//1//2//3)' */
      A_An_BoVa_Ctrl = (real_T)rtb_y;
    }

    /* End of MultiPortSwitch: '<S4>/整车状态切换 正常工作//开关机切换' */

    /* MultiPortSwitch: '<S14>/整车状态切换 故障状态(0//1//2//3)' incorporates:
     *  Inport: '<Root>/C_An_SoSeWa_m'
     *  Switch: '<S6>/Switch3'
     */
    A_An_DrVa_Ctrl = (real_T)!(C_An_SoSeWa_m > 0.2);
    break;

   case 1:
    /* MultiPortSwitch: '<S13>/整车状态切换 故障状态(0//1//2//3)' incorporates:
     *  Gain: '<S13>/Gain2'
     */
    A_An_BoVa_Ctrl = 0.0;

    /* MultiPortSwitch: '<S14>/整车状态切换 故障状态(0//1//2//3)' incorporates:
     *  Inport: '<Root>/C_An_SoSeWa_m'
     *  Switch: '<S6>/Switch3'
     */
    A_An_DrVa_Ctrl = (real_T)!(C_An_SoSeWa_m > 0.2);
    break;

   case 2:
    /* MultiPortSwitch: '<S13>/整车状态切换 故障状态(0//1//2//3)' incorporates:
     *  Gain: '<S13>/Gain3'
     */
    A_An_BoVa_Ctrl = 0.0;

    /* MultiPortSwitch: '<S14>/整车状态切换 故障状态(0//1//2//3)' incorporates:
     *  Inport: '<Root>/C_An_SoSeWa_m'
     *  Switch: '<S6>/Switch3'
     */
    A_An_DrVa_Ctrl = (real_T)!(C_An_SoSeWa_m > 0.2);
    break;

   default:
    /* MultiPortSwitch: '<S13>/整车状态切换 故障状态(0//1//2//3)' incorporates:
     *  Constant: '<S13>/Constant1'
     */
    A_An_BoVa_Ctrl = 1.0;

    /* MultiPortSwitch: '<S14>/整车状态切换 故障状态(0//1//2//3)' incorporates:
     *  Constant: '<S14>/Constant1'
     */
    A_An_DrVa_Ctrl = 0.0;
    break;
  }

  /* End of MultiPortSwitch: '<S13>/整车状态切换 故障状态(0//1//2//3)' */

  /* If: '<S7>/If' incorporates:
   *  Delay: '<S7>/Delay1'
   *  Inport: '<Root>/C_Sti_Req'
   *  Sum: '<S7>/Sum1'
   */
  if (!(C_Sti_Req - OnlyAnodeStrategy20240624_DW.Delay1_DSTATE_k <= -200.0)) {
    /* Outputs for IfAction SubSystem: '<S7>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S16>/Action Port'
     */
    /* SignalConversion generated from: '<S16>/In1' incorporates:
     *  Lookup_n-D: '<S7>/各个负载对应的减压阀开度Map(待标) 根据各个负载的阴极压力和减压阀开度-压力Map确定'
     */
    OnlyAnodeStrategy20240624_B.In1_g = look1_binlxpw(C_Sti_Req,
      OnlyAnodeStrategy2024062_ConstP.MapMap_bp01Data,
      OnlyAnodeStrategy2024062_ConstP.MapMap_tableData, 22U);

    /* End of Outputs for SubSystem: '<S7>/If Action Subsystem1' */
  }

  /* End of If: '<S7>/If' */

  /* MATLAB Function: '<S7>/MATLAB Function' incorporates:
   *  Constant: '<S7>/Constant1'
   *  Constant: '<S7>/Constant2'
   *  Constant: '<S7>/Constant3'
   *  Memory: '<S7>/Memory'
   */
  OnlyAnodeStrateg_MATLABFunction(OnlyAnodeStrategy20240624_B.In1_g,
    OnlyAnodeStrategy20240624_DW.Memory_PreviousInput, 1.0, 0.1, 0.0,
    &rtb_output, &OnlyAnodeStrategy20240624_DW.sf_MATLABFunction);

  /* Lookup_n-D: '<S58>/PressureSenserOutputMap' incorporates:
   *  Inport: '<Root>/S_An_PrReVaOut_p '
   */
  rtb_output = look1_binlxpw(S_An_PrReVaOut_p,
    OnlyAnodeStrategy2024062_ConstP.pooled8,
    OnlyAnodeStrategy2024062_ConstP.pooled7, 1U);

  /* Saturate: '<S2>/Saturation' */
  if (rtb_output > 300000.0) {
    rtb_output = 300000.0;
  } else if (rtb_output < 100000.0) {
    rtb_output = 100000.0;
  }

  /* MATLAB Function: '<S2>/MATLAB Function' incorporates:
   *  Constant: '<S2>/减压阀出口压力'
   *  Memory: '<S2>/Memory'
   *  Saturate: '<S2>/Saturation'
   */
  OnlyAnodeStrat_MATLABFunction_e(rtb_output, 1.0,
    OnlyAnodeStrategy20240624_DW.Memory_PreviousInput_m,
    &OnlyAnodeStrategy20240624_B.filtered_signal_g);

  /* Switch: '<S2>/Switch' incorporates:
   *  Inport: '<Root>/S_An_PrReVaOut_p '
   */
  rtb_Switch = S_An_PrReVaOut_p;

  /* Lookup_n-D: '<S59>/TemperatureResistanceMap' incorporates:
   *  Inport: '<Root>/S_An_PrReVaOut_t '
   */
  rtb_output = look1_binlxpw(S_An_PrReVaOut_t,
    OnlyAnodeStrategy2024062_ConstP.TemperatureResistanceMap_bp01Da,
    OnlyAnodeStrategy2024062_ConstP.TemperatureResistanceMap_tableD, 42U);

  /* Saturate: '<S2>/Saturation3' */
  if (rtb_output > 100.0) {
    rtb_output = 100.0;
  } else if (rtb_output < -50.0) {
    rtb_output = -50.0;
  }

  /* MATLAB Function: '<S2>/MATLAB Function3' incorporates:
   *  Constant: '<S2>/减压阀出口温度'
   *  Memory: '<S2>/Memory6'
   *  Saturate: '<S2>/Saturation3'
   */
  OnlyAnodeStrat_MATLABFunction_e(rtb_output, 1.0,
    OnlyAnodeStrategy20240624_DW.Memory6_PreviousInput,
    &OnlyAnodeStrategy20240624_B.filtered_signal);

  /* Lookup_n-D: '<S60>/PressureSenserOutputMap' incorporates:
   *  Inport: '<Root>/S_An_RmMa_p '
   */
  rtb_output = look1_binlxpw(S_An_RmMa_p,
    OnlyAnodeStrategy2024062_ConstP.pooled8,
    OnlyAnodeStrategy2024062_ConstP.pooled7, 1U);

  /* Saturate: '<S2>/Saturation2' */
  if (rtb_output > 300000.0) {
    rtb_output = 300000.0;
  } else if (rtb_output < 100000.0) {
    rtb_output = 100000.0;
  }

  /* MATLAB Function: '<S2>/MATLAB Function2' incorporates:
   *  Constant: '<S2>/排气歧管'
   *  Memory: '<S2>/Memory5'
   *  Saturate: '<S2>/Saturation2'
   */
  OnlyAnodeStrat_MATLABFunction_e(rtb_output, 1.0,
    OnlyAnodeStrategy20240624_DW.Memory5_PreviousInput,
    &OnlyAnodeStrategy20240624_B.filtered_signal_o);

  /* FromWorkspace: '<S43>/FromWs' */
  {
    real_T *pDataValues = (real_T *)
      OnlyAnodeStrategy20240624_DW.FromWs_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *)
      OnlyAnodeStrategy20240624_DW.FromWs_PWORK.TimePtr;
    int_T currTimeIndex = OnlyAnodeStrategy20240624_DW.FromWs_IWORK.PrevIndex;
    real_T t = OnlyAnodeStrategy20240624_M->Timing.t[0];

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[9]) {
      currTimeIndex = 8;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    OnlyAnodeStrategy20240624_DW.FromWs_IWORK.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          Anode_reserved = pDataValues[currTimeIndex];
        } else {
          Anode_reserved = pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex = currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        Anode_reserved = (real_T) rtInterpolate(d1, d2, f1, f2);
        pDataValues += 10;
      }
    }
  }

  /* Outport: '<Root>/Anode_reserved' */
  OnlyAnodeStrategy20240624_Y.Anode_reserved_o = Anode_reserved;

  /* MATLAB Function: '<S7>/减压阀关机时前三秒开度减小 目标供给1bar压力氢气 （具体开度、压力待标定） ' incorporates:
   *  Inport: '<Root>/C_Fcu_Ready'
   *  MATLAB Function: '<S8>/比例阀阀关机时前三秒保持打开配合吹扫 目标供给1bar压力氢气 （具体开度、压力待标定） '
   */
  if (C_Fcu_Ready == 0.0) {
    OnlyAnodeStrategy20240624_DW.n_dl++;
    OnlyAnodeStrategy20240624_DW.n_m++;
  } else {
    OnlyAnodeStrategy20240624_DW.n_dl = 0.0;
    OnlyAnodeStrategy20240624_DW.n_m = 0.0;
  }

  /* End of MATLAB Function: '<S7>/减压阀关机时前三秒开度减小 目标供给1bar压力氢气 （具体开度、压力待标定） ' */

  /* Update for Memory: '<S2>/Memory4' */
  OnlyAnodeStrategy20240624_DW.Memory4_PreviousInput =
    OnlyAnodeStrategy20240624_B.filtered_signal_p;

  /* Update for Delay: '<S8>/Delay1' incorporates:
   *  Inport: '<Root>/C_Sti_Req'
   */
  OnlyAnodeStrategy20240624_DW.Delay1_DSTATE = C_Sti_Req;

  /* Update for Delay: '<S7>/Delay1' incorporates:
   *  Inport: '<Root>/C_Sti_Req'
   */
  OnlyAnodeStrategy20240624_DW.Delay1_DSTATE_k = C_Sti_Req;

  /* Update for Memory: '<S7>/Memory' */
  OnlyAnodeStrategy20240624_DW.Memory_PreviousInput = rtb_Switch;

  /* Update for Memory: '<S2>/Memory' */
  OnlyAnodeStrategy20240624_DW.Memory_PreviousInput_m =
    OnlyAnodeStrategy20240624_B.filtered_signal_g;

  /* Update for Memory: '<S2>/Memory6' */
  OnlyAnodeStrategy20240624_DW.Memory6_PreviousInput =
    OnlyAnodeStrategy20240624_B.filtered_signal;

  /* Update for Memory: '<S2>/Memory5' */
  OnlyAnodeStrategy20240624_DW.Memory5_PreviousInput =
    OnlyAnodeStrategy20240624_B.filtered_signal_o;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  OnlyAnodeStrategy20240624_M->Timing.t[0] =
    ((time_T)(++OnlyAnodeStrategy20240624_M->Timing.clockTick0)) *
    OnlyAnodeStrategy20240624_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.01s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.01, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    OnlyAnodeStrategy20240624_M->Timing.clockTick1++;
  }

  rate_scheduler();
}

/* Model initialize function */
void OnlyAnodeStrategy20240624_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&OnlyAnodeStrategy20240624_M->solverInfo,
                          &OnlyAnodeStrategy20240624_M->Timing.simTimeStep);
    rtsiSetTPtr(&OnlyAnodeStrategy20240624_M->solverInfo, &rtmGetTPtr
                (OnlyAnodeStrategy20240624_M));
    rtsiSetStepSizePtr(&OnlyAnodeStrategy20240624_M->solverInfo,
                       &OnlyAnodeStrategy20240624_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&OnlyAnodeStrategy20240624_M->solverInfo,
                          (&rtmGetErrorStatus(OnlyAnodeStrategy20240624_M)));
    rtsiSetRTModelPtr(&OnlyAnodeStrategy20240624_M->solverInfo,
                      OnlyAnodeStrategy20240624_M);
  }

  rtsiSetSimTimeStep(&OnlyAnodeStrategy20240624_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&OnlyAnodeStrategy20240624_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(OnlyAnodeStrategy20240624_M,
             &OnlyAnodeStrategy20240624_M->Timing.tArray[0]);
  OnlyAnodeStrategy20240624_M->Timing.stepSize0 = 0.01;

  /* Start for FromWorkspace: '<S43>/FromWs' */
  {
    static real_T pTimeValues0[] = { -0.0, 1.0, 1.0, 2.0, 2.0, 3.0, 3.0, 4.0,
      4.0, 10.0 } ;

    static real_T pDataValues0[] = { 0.2043, 0.2043, 0.0, 0.0, 0.4779, 0.4779,
      0.0, 0.0, 0.8453, 0.8453 } ;

    OnlyAnodeStrategy20240624_DW.FromWs_PWORK.TimePtr = (void *) pTimeValues0;
    OnlyAnodeStrategy20240624_DW.FromWs_PWORK.DataPtr = (void *) pDataValues0;
    OnlyAnodeStrategy20240624_DW.FromWs_IWORK.PrevIndex = 0;
  }

  /* ConstCode for Constant: '<S3>/比例阀' */
  A_An_PrVa_Ctrl = 333333.0;
}

/* Model terminate function */
void OnlyAnodeStrategy20240624_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
