/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: OnlyAnodeStrategy20240624.h
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

#ifndef RTW_HEADER_OnlyAnodeStrategy20240624_h_
#define RTW_HEADER_OnlyAnodeStrategy20240624_h_
#ifndef OnlyAnodeStrategy20240624_COMMON_INCLUDES_
#define OnlyAnodeStrategy20240624_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                          /* OnlyAnodeStrategy20240624_COMMON_INCLUDES_ */

#include "OnlyAnodeStrategy20240624_types.h"
#include <math.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block states (default storage) for system '<S7>/MATLAB Function' */
typedef struct {
  real_T error_sum;                    /* '<S7>/MATLAB Function' */
  real_T last_error;                   /* '<S7>/MATLAB Function' */
} DW_MATLABFunction_OnlyAnodeSt_T;

/* Block signals (default storage) */
typedef struct {
  real_T Output;                       /* '<S52>/Output' */
  real_T Gain1;                        /* '<S9>/Gain1' */
  real_T u;                            /* '<S8>/Gain1' */
  real_T filtered_signal;              /* '<S2>/MATLAB Function3' */
  real_T filtered_signal_o;            /* '<S2>/MATLAB Function2' */
  real_T filtered_signal_p;            /* '<S2>/MATLAB Function1' */
  real_T filtered_signal_g;            /* '<S2>/MATLAB Function' */
  real_T In1;                          /* '<S22>/In1' */
  real_T In1_g;                        /* '<S16>/In1' */
  real_T Pump_RPM;                     /* '<S1>/Chart' */
} B_OnlyAnodeStrategy20240624_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Delay1_DSTATE;                /* '<S8>/Delay1' */
  real_T Delay1_DSTATE_k;              /* '<S7>/Delay1' */
  real_T Memory4_PreviousInput;        /* '<S2>/Memory4' */
  real_T Memory_PreviousInput;         /* '<S7>/Memory' */
  real_T Memory_PreviousInput_m;       /* '<S2>/Memory' */
  real_T Memory6_PreviousInput;        /* '<S2>/Memory6' */
  real_T Memory5_PreviousInput;        /* '<S2>/Memory5' */
  real_T n;                          /* '<S10>/�ӳ������µ� ִ�йػ���ɨ����' */
  real_T n_d;                          /* '<S9>/�ػ���ɨ��ת�ٿ��� ' */
  real_T n_m;
  /* '<S8>/���������ػ�ʱǰ���뱣�ִ���ϴ�ɨ Ŀ�깩��1barѹ������ �����忪�ȡ�ѹ�����궨�� ' */
  real_T n_dl;
  /* '<S7>/��ѹ���ػ�ʱǰ���뿪�ȼ�С Ŀ�깩��1barѹ������ �����忪�ȡ�ѹ�����궨�� ' */
  real_T A;                            /* '<S1>/Chart' */
  real_T n_b;                          /* '<S4>/�ػ�ƿ��������ʱ�ر� ' */
  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      /* '<S43>/FromWs' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      /* '<S43>/FromWs' */

  uint8_T Output_DSTATE;               /* '<S55>/Output' */
  uint8_T Output_DSTATE_o;             /* '<S39>/Output' */
  uint8_T Output_DSTATE_g;             /* '<S32>/Output' */
  uint8_T is_c20_OnlyAnodeStrategy2024062;/* '<S1>/Chart' */
  uint8_T is_active_c20_OnlyAnodeStrategy;/* '<S1>/Chart' */
  DW_MATLABFunction_OnlyAnodeSt_T sf_MATLABFunction_o;/* '<S38>/MATLAB Function' */
  DW_MATLABFunction_OnlyAnodeSt_T sf_MATLABFunction_m;/* '<S8>/MATLAB Function' */
  DW_MATLABFunction_OnlyAnodeSt_T sf_MATLABFunction;/* '<S7>/MATLAB Function' */
} DW_OnlyAnodeStrategy20240624_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: OutValues)
   * Referenced by:
   *   '<S27>/Vector'
   *   '<S37>/Vector'
   */
  real_T pooled5[5];

  /* Expression: OutValues
   * Referenced by: '<S52>/Vector'
   */
  real_T Vector_Value[21];

  /* Pooled Parameter (Expression: [50;300])
   * Referenced by:
   *   '<S58>/PressureSenserOutputMap'
   *   '<S60>/PressureSenserOutputMap'
   *   '<S61>/PressureSenserOutputMap'
   */
  real_T pooled7[2];

  /* Pooled Parameter (Expression: [10;90])
   * Referenced by:
   *   '<S58>/PressureSenserOutputMap'
   *   '<S60>/PressureSenserOutputMap'
   *   '<S61>/PressureSenserOutputMap'
   */
  real_T pooled8[2];

  /* Expression: [1.1;1.15;1.2;1.3;1.4;1.45;1.5;1.55;1.6;1.65;1.65;1.65;1.7;1.7;1.7;1.75;1.75;1.8;1.85;1.9;1.95;2;2.05]
   * Referenced by: '<S7>/�������ض�Ӧ�ļ�ѹ������Map(����) ���ݸ������ص�����ѹ���ͼ�ѹ������-ѹ��Mapȷ��'
   */
  real_T MapMap_tableData[23];

  /* Expression: [0;10;20;30;40;60;80;100;120;140;160;180;200;220;240;260;280;300;320;340;360;380;400]
   * Referenced by: '<S7>/�������ض�Ӧ�ļ�ѹ������Map(����) ���ݸ������ص�����ѹ���ͼ�ѹ������-ѹ��Mapȷ��'
   */
  real_T MapMap_bp01Data[23];

  /* Expression: [170;165;160;155;150;145;140;135;130;125;120;115;110;105;100;95;90;85;80;75;70;65;60;55;50;45;40;35;30;25;20;15;10;5;0;-5;-10;-15;-20;-25;-30;-35;-40]
   * Referenced by: '<S59>/TemperatureResistanceMap'
   */
  real_T TemperatureResistanceMap_tableD[43];

  /* Expression: [101.82;111.92;123.27;136.06;150.51;166.86;185.43;206.54;230.64;258.2;289.82;326.2;368.19;416.81;473.32;539.17;616.18;706.57;813.04;938.94;1088.4;1266.6;1480;1736.5;2046.5;2422.8;2882;3445;4139;5000;6073;7420;9121;11284;14051;17618;22251;28317;36322;46980;61296;80709;107300]
   * Referenced by: '<S59>/TemperatureResistanceMap'
   */
  real_T TemperatureResistanceMap_bp01Da[43];
} ConstP_OnlyAnodeStrategy20240_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Anode_reserved_o;             /* '<Root>/Anode_reserved' */
} ExtY_OnlyAnodeStrategy2024062_T;

/* Real-time Model Data Structure */
struct tag_RTM_OnlyAnodeStrategy2024_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    struct {
      uint16_T TID[4];
    } TaskCounters;

    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[4];
  } Timing;
};

/* Block signals (default storage) */
extern B_OnlyAnodeStrategy20240624_T OnlyAnodeStrategy20240624_B;

/* Block states (default storage) */
extern DW_OnlyAnodeStrategy20240624_T OnlyAnodeStrategy20240624_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_OnlyAnodeStrategy2024062_T OnlyAnodeStrategy20240624_Y;

/* Constant parameters (default storage) */
extern const ConstP_OnlyAnodeStrategy20240_T OnlyAnodeStrategy2024062_ConstP;

/* Model entry point functions */
extern void OnlyAnodeStrategy20240624_initialize(void);
extern void OnlyAnodeStrategy20240624_step(void);
extern void OnlyAnodeStrategy20240624_terminate(void);

/* Real-time Model object */
extern RT_MODEL_OnlyAnodeStrategy202_T *const OnlyAnodeStrategy20240624_M;

/* Exported data declaration */

/* Declaration for custom storage class: Global */
extern real_T A_An_BoVa_Ctrl;    /* '<S13>/����״̬�л� ����״̬(0//1//2//3)' */
extern real_T A_An_DrVa_Ctrl;    /* '<S14>/����״̬�л� ����״̬(0//1//2//3)' */
extern real_T A_An_PrReVa_Ctrl;        /* '<S66>/Switch' */
extern real_T A_An_PrVa_Ctrl;          /* '<S3>/������' */
extern real_T A_An_PuVa_Ctrl;    /* '<S54>/����״̬�л� ����״̬(0//1//2//3)' */
extern real_T A_An_PuWaSw_Ctrl;        /* '<S11>/ѭ���ó�������ɢ��' */
extern real_T Anode_reserved;          /* '<S43>/FromWs' */
extern real_T C_An_Pu_RPM;             /* '<S68>/Switch' */
extern real_T C_An_SoSeWa_m;           /* '<Root>/C_An_SoSeWa_m' */
extern real_T C_Fcu_Ready;             /* '<Root>/C_Fcu_Ready' */
extern real_T C_Sti_Req;               /* '<Root>/C_Sti_Req' */
extern real_T C_Ve_FaSta;              /* '<Root>/C_Ve_FaSta ' */
extern real_T S_An_PrReVaOut_p;        /* '<Root>/S_An_PrReVaOut_p ' */
extern real_T S_An_PrReVaOut_t;        /* '<Root>/S_An_PrReVaOut_t ' */
extern real_T S_An_RmMa_p;             /* '<Root>/S_An_RmMa_p ' */
extern real_T S_An_SuMa_p;             /* '<Root>/S_An_SuMa_p ' */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S7>/Scope' : Unused code path elimination
 * Block '<S20>/Scope' : Unused code path elimination
 * Block '<S8>/Constant4' : Unused code path elimination
 * Block '<S8>/Saturation' : Unused code path elimination
 * Block '<S8>/Scope' : Unused code path elimination
 * Block '<S8>/Scope2' : Unused code path elimination
 * Block '<S8>/Scope3' : Unused code path elimination
 * Block '<S8>/Scope4' : Unused code path elimination
 * Block '<S8>/Scope5' : Unused code path elimination
 * Block '<S8>/Sum' : Unused code path elimination
 * Block '<S29>/Data Type Propagation' : Unused code path elimination
 * Block '<S30>/FixPt Constant' : Unused code path elimination
 * Block '<S30>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S30>/FixPt Sum1' : Unused code path elimination
 * Block '<S29>/Output' : Unused code path elimination
 * Block '<S31>/Constant' : Unused code path elimination
 * Block '<S31>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S31>/FixPt Switch' : Unused code path elimination
 * Block '<S25>/Out' : Unused code path elimination
 * Block '<S25>/Output' : Unused code path elimination
 * Block '<S25>/Vector' : Unused code path elimination
 * Block '<S8>/�����ջ��л� 0 ���� 1 �ջ�' : Unused code path elimination
 * Block '<S26>/Constant1' : Unused code path elimination
 * Block '<S26>/Gain2' : Unused code path elimination
 * Block '<S26>/Gain3' : Unused code path elimination
 * Block '<S26>/����״̬�л� ����״̬(0//1//2//3)' : Unused code path elimination
 * Block '<S8>/����״̬�л� ��������//���ػ��л�' : Unused code path elimination
 * Block '<S32>/Data Type Propagation' : Unused code path elimination
 * Block '<S33>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S34>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S8>/����������strategy' : Unused code path elimination
 * Block '<S9>/Scope' : Unused code path elimination
 * Block '<S9>/Scope1' : Unused code path elimination
 * Block '<S9>/ѭ���ÿ��Ƶ�ѹ-ת��Map ת�ٷ�Χ0~6600 �����ѹ��Χ0~5V �����ѹΪ24V' : Unused code path elimination
 * Block '<S39>/Data Type Propagation' : Unused code path elimination
 * Block '<S40>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S41>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S38>/Scope3' : Unused code path elimination
 * Block '<S46>/Data Type Propagation' : Unused code path elimination
 * Block '<S47>/FixPt Constant' : Unused code path elimination
 * Block '<S47>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S47>/FixPt Sum1' : Unused code path elimination
 * Block '<S46>/Output' : Unused code path elimination
 * Block '<S48>/Constant' : Unused code path elimination
 * Block '<S48>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S48>/FixPt Switch' : Unused code path elimination
 * Block '<S44>/Out' : Unused code path elimination
 * Block '<S44>/Output' : Unused code path elimination
 * Block '<S44>/Vector' : Unused code path elimination
 * Block '<S49>/Data Type Propagation' : Unused code path elimination
 * Block '<S50>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S51>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S55>/Data Type Propagation' : Unused code path elimination
 * Block '<S56>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S57>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S2>/Switch2' : Unused code path elimination
 * Block '<S2>/Switch3' : Unused code path elimination
 * Block '<S67>/Constant' : Unused code path elimination
 * Block '<S67>/Ctrl-PWM(Ctrl����)' : Unused code path elimination
 * Block '<S67>/Switch' : Unused code path elimination
 * Block '<S3>/Saturation' : Unused code path elimination
 * Block '<S27>/Out' : Eliminate redundant signal conversion block
 * Block '<S36>/Gain2' : Eliminated nontunable gain of 1
 * Block '<S37>/Out' : Eliminate redundant signal conversion block
 * Block '<S45>/Out' : Eliminate redundant signal conversion block
 * Block '<S52>/Out' : Eliminate redundant signal conversion block
 * Block '<S7>/Constant' : Unused code path elimination
 * Block '<S7>/Sum2' : Unused code path elimination
 * Block '<S7>/����״̬�л� ��������//���ػ��л�' : Unused code path elimination
 * Block '<S9>/Constant' : Unused code path elimination
 * Block '<S38>/1�Զ�//0�ֶ�����' : Unused code path elimination
 * Block '<S38>/Constant3' : Unused code path elimination
 * Block '<S38>/Gain' : Unused code path elimination
 * Block '<S38>/Sum' : Unused code path elimination
 * Block '<S50>/FixPt Constant' : Unused code path elimination
 * Block '<S50>/FixPt Sum1' : Unused code path elimination
 * Block '<S49>/Output' : Unused code path elimination
 * Block '<S51>/Constant' : Unused code path elimination
 * Block '<S51>/FixPt Switch' : Unused code path elimination
 * Block '<S45>/Output' : Unused code path elimination
 * Block '<S45>/Vector' : Unused code path elimination
 * Block '<S2>/Constant' : Unused code path elimination
 * Block '<S58>/Constant' : Unused code path elimination
 * Block '<S59>/Constant' : Unused code path elimination
 * Block '<S60>/Constant' : Unused code path elimination
 * Block '<S61>/Constant' : Unused code path elimination
 * Block '<S66>/Constant' : Unused code path elimination
 * Block '<S66>/Ctrl-PWM(Ctrl����)' : Unused code path elimination
 * Block '<S68>/Constant' : Unused code path elimination
 * Block '<S68>/Ctrl-PWM(Ctrl����)' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'OnlyAnodeStrategy20240624'
 * '<S1>'   : 'OnlyAnodeStrategy20240624/H2_Strategy'
 * '<S2>'   : 'OnlyAnodeStrategy20240624/Sensor_Interface_Conversion'
 * '<S3>'   : 'OnlyAnodeStrategy20240624/Strategy_Output_Conversion'
 * '<S4>'   : 'OnlyAnodeStrategy20240624/H2_Strategy/BoVa_StVa'
 * '<S5>'   : 'OnlyAnodeStrategy20240624/H2_Strategy/Chart'
 * '<S6>'   : 'OnlyAnodeStrategy20240624/H2_Strategy/DrVa'
 * '<S7>'   : 'OnlyAnodeStrategy20240624/H2_Strategy/PrReVa'
 * '<S8>'   : 'OnlyAnodeStrategy20240624/H2_Strategy/PrVa'
 * '<S9>'   : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu'
 * '<S10>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PuVa'
 * '<S11>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PuWaSw'
 * '<S12>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/BoVa_StVa/�ػ�ƿ��������ʱ�ر� '
 * '<S13>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/BoVa_StVa/����״̬�ж� ���ƹ������� ���ϵȼ�(1//2//3)'
 * '<S14>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/DrVa/����״̬�ж� ���ƹ������� ���ϵȼ�(1//2//3)'
 * '<S15>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrReVa/If Action Subsystem'
 * '<S16>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrReVa/If Action Subsystem1'
 * '<S17>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrReVa/If Action Subsystem2'
 * '<S18>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrReVa/MATLAB Function'
 * '<S19>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrReVa/��ѹ���ػ�ʱǰ���뿪�ȼ�С Ŀ�깩��1barѹ������ �����忪�ȡ�ѹ�����궨�� '
 * '<S20>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrReVa/����״̬�ж� ���ƹ������� ���ϵȼ�(1//2//3)'
 * '<S21>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrVa/If Action Subsystem'
 * '<S22>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrVa/If Action Subsystem1'
 * '<S23>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrVa/If Action Subsystem2'
 * '<S24>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrVa/MATLAB Function'
 * '<S25>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrVa/mdot_out �Ա������������ڶ�������Ϊϵͳ��Ŀ������'
 * '<S26>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrVa/����״̬�ж� ���ƹ������� ���ϵȼ�(1//2//3)'
 * '<S27>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrVa/��������ѹ���������'
 * '<S28>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrVa/���������ػ�ʱǰ���뱣�ִ���ϴ�ɨ Ŀ�깩��1barѹ������ �����忪�ȡ�ѹ�����궨�� '
 * '<S29>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrVa/mdot_out �Ա������������ڶ�������Ϊϵͳ��Ŀ������/LimitedCounter'
 * '<S30>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrVa/mdot_out �Ա������������ڶ�������Ϊϵͳ��Ŀ������/LimitedCounter/Increment Real World'
 * '<S31>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrVa/mdot_out �Ա������������ڶ�������Ϊϵͳ��Ŀ������/LimitedCounter/Wrap To Zero'
 * '<S32>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrVa/��������ѹ���������/LimitedCounter'
 * '<S33>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrVa/��������ѹ���������/LimitedCounter/Increment Real World'
 * '<S34>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PrVa/��������ѹ���������/LimitedCounter/Wrap To Zero'
 * '<S35>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/�ػ���ɨ��ת�ٿ��� '
 * '<S36>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/����״̬�ж� ���ƹ������� ���ϵȼ�(1//2//3)'
 * '<S37>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/��������ѹ���������'
 * '<S38>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/��������'
 * '<S39>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/��������ѹ���������/LimitedCounter'
 * '<S40>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/��������ѹ���������/LimitedCounter/Increment Real World'
 * '<S41>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/��������ѹ���������/LimitedCounter/Wrap To Zero'
 * '<S42>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/��������/MATLAB Function'
 * '<S43>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/��������/Signal Builder'
 * '<S44>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/��������/ѭ���ó������� ��������'
 * '<S45>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/��������/����������Ŀ�����ѹ��'
 * '<S46>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/��������/ѭ���ó������� ��������/LimitedCounter'
 * '<S47>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/��������/ѭ���ó������� ��������/LimitedCounter/Increment Real World'
 * '<S48>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/��������/ѭ���ó������� ��������/LimitedCounter/Wrap To Zero'
 * '<S49>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/��������/����������Ŀ�����ѹ��/LimitedCounter'
 * '<S50>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/��������/����������Ŀ�����ѹ��/LimitedCounter/Increment Real World'
 * '<S51>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/Pu/��������/����������Ŀ�����ѹ��/LimitedCounter/Wrap To Zero'
 * '<S52>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PuVa/��ɨʱ������'
 * '<S53>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PuVa/�ӳ������µ� ִ�йػ���ɨ����'
 * '<S54>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PuVa/����״̬�ж� ���ƹ������� ���ϵȼ�(1//2//3)'
 * '<S55>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PuVa/��ɨʱ������/LimitedCounter'
 * '<S56>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PuVa/��ɨʱ������/LimitedCounter/Increment Real World'
 * '<S57>'  : 'OnlyAnodeStrategy20240624/H2_Strategy/PuVa/��ɨʱ������/LimitedCounter/Wrap To Zero'
 * '<S58>'  : 'OnlyAnodeStrategy20240624/Sensor_Interface_Conversion/H2PressureValveOut_PressureSenser5'
 * '<S59>'  : 'OnlyAnodeStrategy20240624/Sensor_Interface_Conversion/H2PressureValveOut_TemperatureSenser6'
 * '<S60>'  : 'OnlyAnodeStrategy20240624/Sensor_Interface_Conversion/H2rm_PressureSenser1'
 * '<S61>'  : 'OnlyAnodeStrategy20240624/Sensor_Interface_Conversion/H2sm_PressureSenser7'
 * '<S62>'  : 'OnlyAnodeStrategy20240624/Sensor_Interface_Conversion/MATLAB Function'
 * '<S63>'  : 'OnlyAnodeStrategy20240624/Sensor_Interface_Conversion/MATLAB Function1'
 * '<S64>'  : 'OnlyAnodeStrategy20240624/Sensor_Interface_Conversion/MATLAB Function2'
 * '<S65>'  : 'OnlyAnodeStrategy20240624/Sensor_Interface_Conversion/MATLAB Function3'
 * '<S66>'  : 'OnlyAnodeStrategy20240624/Strategy_Output_Conversion/PrReVa_DA '
 * '<S67>'  : 'OnlyAnodeStrategy20240624/Strategy_Output_Conversion/PrVa_PWM'
 * '<S68>'  : 'OnlyAnodeStrategy20240624/Strategy_Output_Conversion/Pump_CAN'
 */
#endif                             /* RTW_HEADER_OnlyAnodeStrategy20240624_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
