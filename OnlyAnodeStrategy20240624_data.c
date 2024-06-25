/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: OnlyAnodeStrategy20240624_data.c
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

/* Constant parameters (default storage) */
const ConstP_OnlyAnodeStrategy20240_T OnlyAnodeStrategy2024062_ConstP = {
  /* Pooled Parameter (Expression: OutValues)
   * Referenced by:
   *   '<S27>/Vector'
   *   '<S37>/Vector'
   */
  { 1.298, 1.94, 1.343, 1.765, 1.622 },

  /* Expression: OutValues
   * Referenced by: '<S52>/Vector'
   */
  { 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 0.0 },

  /* Pooled Parameter (Expression: [50;300])
   * Referenced by:
   *   '<S58>/PressureSenserOutputMap'
   *   '<S60>/PressureSenserOutputMap'
   *   '<S61>/PressureSenserOutputMap'
   */
  { 50.0, 300.0 },

  /* Pooled Parameter (Expression: [10;90])
   * Referenced by:
   *   '<S58>/PressureSenserOutputMap'
   *   '<S60>/PressureSenserOutputMap'
   *   '<S61>/PressureSenserOutputMap'
   */
  { 10.0, 90.0 },

  /* Expression: [1.1;1.15;1.2;1.3;1.4;1.45;1.5;1.55;1.6;1.65;1.65;1.65;1.7;1.7;1.7;1.75;1.75;1.8;1.85;1.9;1.95;2;2.05]
   * Referenced by: '<S7>/各个负载对应的减压阀开度Map(待标) 根据各个负载的阴极压力和减压阀开度-压力Map确定'
   */
  { 1.1, 1.15, 1.2, 1.3, 1.4, 1.45, 1.5, 1.55, 1.6, 1.65, 1.65, 1.65, 1.7, 1.7,
    1.7, 1.75, 1.75, 1.8, 1.85, 1.9, 1.95, 2.0, 2.05 },

  /* Expression: [0;10;20;30;40;60;80;100;120;140;160;180;200;220;240;260;280;300;320;340;360;380;400]
   * Referenced by: '<S7>/各个负载对应的减压阀开度Map(待标) 根据各个负载的阴极压力和减压阀开度-压力Map确定'
   */
  { 0.0, 10.0, 20.0, 30.0, 40.0, 60.0, 80.0, 100.0, 120.0, 140.0, 160.0, 180.0,
    200.0, 220.0, 240.0, 260.0, 280.0, 300.0, 320.0, 340.0, 360.0, 380.0, 400.0
  },

  /* Expression: [170;165;160;155;150;145;140;135;130;125;120;115;110;105;100;95;90;85;80;75;70;65;60;55;50;45;40;35;30;25;20;15;10;5;0;-5;-10;-15;-20;-25;-30;-35;-40]
   * Referenced by: '<S59>/TemperatureResistanceMap'
   */
  { 170.0, 165.0, 160.0, 155.0, 150.0, 145.0, 140.0, 135.0, 130.0, 125.0, 120.0,
    115.0, 110.0, 105.0, 100.0, 95.0, 90.0, 85.0, 80.0, 75.0, 70.0, 65.0, 60.0,
    55.0, 50.0, 45.0, 40.0, 35.0, 30.0, 25.0, 20.0, 15.0, 10.0, 5.0, 0.0, -5.0,
    -10.0, -15.0, -20.0, -25.0, -30.0, -35.0, -40.0 },

  /* Expression: [101.82;111.92;123.27;136.06;150.51;166.86;185.43;206.54;230.64;258.2;289.82;326.2;368.19;416.81;473.32;539.17;616.18;706.57;813.04;938.94;1088.4;1266.6;1480;1736.5;2046.5;2422.8;2882;3445;4139;5000;6073;7420;9121;11284;14051;17618;22251;28317;36322;46980;61296;80709;107300]
   * Referenced by: '<S59>/TemperatureResistanceMap'
   */
  { 101.82, 111.92, 123.27, 136.06, 150.51, 166.86, 185.43, 206.54, 230.64,
    258.2, 289.82, 326.2, 368.19, 416.81, 473.32, 539.17, 616.18, 706.57, 813.04,
    938.94, 1088.4, 1266.6, 1480.0, 1736.5, 2046.5, 2422.8, 2882.0, 3445.0,
    4139.0, 5000.0, 6073.0, 7420.0, 9121.0, 11284.0, 14051.0, 17618.0, 22251.0,
    28317.0, 36322.0, 46980.0, 61296.0, 80709.0, 107300.0 }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
