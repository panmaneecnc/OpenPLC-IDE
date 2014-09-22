/* This is auto-generated code from LDmicro. Do not edit this file! Go
   back to the ladder diagram source for changes in the logic, and make
   any C additions either in ladder.h or in additional .c files linked
   against this one. */

/* You must provide ladder.h; there you must provide:
      * a typedef for SWORD and BOOL, signed 16 bit and boolean types
        (probably typedef signed short SWORD; typedef unsigned char BOOL;)

   You must also provide implementations of all the I/O read/write
   either as inlines in the header file or in another source file. (The
   I/O functions are all declared extern.)

   See the generated source code (below) for function names. */
#include "ladder.h"

/* Define EXTERN_EVERYTHING in ladder.h if you want all symbols extern.
   This could be useful to implement `magic variables,' so that for
   example when you write to the ladder variable duty_cycle, your PLC
   runtime can look at the C variable U_duty_cycle and use that to set
   the PWM duty cycle on the micro. That way you can add support for
   peripherals that LDmicro doesn't know about. */
#ifdef EXTERN_EVERYTHING
#define STATIC
#else
#define STATIC static
#endif

/* Define NO_PROTOTYPES if you don't want LDmicro to provide prototypes for
   all the I/O functions (Read_U_xxx, Write_U_xxx) that you must provide.
   If you define this then you must provide your own prototypes for these
   functions in ladder.h, or provide definitions (e.g. as inlines or macros)
   for them in ladder.h. */
#ifdef NO_PROTOTYPES
#define PROTO(x)
#else
#define PROTO(x) x
#endif

/* U_xxx symbols correspond to user-defined names. There is such a symbol
   for every internal relay, variable, timer, and so on in the ladder
   program. I_xxx symbols are internally generated. */
STATIC BOOL I_b_mcr = 0;
#define Read_I_b_mcr() I_b_mcr
#define Write_I_b_mcr(x) I_b_mcr = x
STATIC BOOL I_b_rung_top = 0;
#define Read_I_b_rung_top() I_b_rung_top
#define Write_I_b_rung_top(x) I_b_rung_top = x

/* You provide this function. */
PROTO(extern BOOL Read_U_b_X1_1(void);)

STATIC BOOL U_b_RTRAVA = 0;
#define Read_U_b_RTRAVA() U_b_RTRAVA
#define Write_U_b_RTRAVA(x) U_b_RTRAVA = x
STATIC BOOL U_b_RPL = 0;
#define Read_U_b_RPL() U_b_RPL
#define Write_U_b_RPL(x) U_b_RPL = x
STATIC BOOL U_b_RDO = 0;
#define Read_U_b_RDO() U_b_RDO
#define Write_U_b_RDO(x) U_b_RDO = x
STATIC BOOL I_b_parOut_0000 = 0;
#define Read_I_b_parOut_0000() I_b_parOut_0000
#define Write_I_b_parOut_0000(x) I_b_parOut_0000 = x
STATIC BOOL I_b_parThis_0000 = 0;
#define Read_I_b_parThis_0000() I_b_parThis_0000
#define Write_I_b_parThis_0000(x) I_b_parThis_0000 = x
STATIC BOOL U_b_RADE = 0;
#define Read_U_b_RADE() U_b_RADE
#define Write_U_b_RADE(x) U_b_RADE = x

/* You provide these functions. */
PROTO(BOOL Read_U_b_Y1_1(void);)
PROTO(void Write_U_b_Y1_1(BOOL v);)

STATIC BOOL I_b_parOut_0001 = 0;
#define Read_I_b_parOut_0001() I_b_parOut_0001
#define Write_I_b_parOut_0001(x) I_b_parOut_0001 = x
STATIC BOOL I_b_parThis_0001 = 0;
#define Read_I_b_parThis_0001() I_b_parThis_0001
#define Write_I_b_parThis_0001(x) I_b_parThis_0001 = x

/* You provide this function. */
PROTO(extern BOOL Read_U_b_XSF03(void);)


/* You provide this function. */
PROTO(extern BOOL Read_U_b_X1_7(void);)

STATIC BOOL I_b_scratch = 0;
#define Read_I_b_scratch() I_b_scratch
#define Write_I_b_scratch(x) I_b_scratch = x
STATIC BOOL I_b_oneShot_0000 = 0;
#define Read_I_b_oneShot_0000() I_b_oneShot_0000
#define Write_I_b_oneShot_0000(x) I_b_oneShot_0000 = x
STATIC BOOL I_b_parOut_0002 = 0;
#define Read_I_b_parOut_0002() I_b_parOut_0002
#define Write_I_b_parOut_0002(x) I_b_parOut_0002 = x
STATIC BOOL I_b_parThis_0002 = 0;
#define Read_I_b_parThis_0002() I_b_parThis_0002
#define Write_I_b_parThis_0002(x) I_b_parThis_0002 = x
STATIC BOOL I_b_oneShot_0001 = 0;
#define Read_I_b_oneShot_0001() I_b_oneShot_0001
#define Write_I_b_oneShot_0001(x) I_b_oneShot_0001 = x

/* You provide these functions. */
PROTO(BOOL Read_U_b_Y1_2(void);)
PROTO(void Write_U_b_Y1_2(BOOL v);)

STATIC BOOL I_b_parOut_0003 = 0;
#define Read_I_b_parOut_0003() I_b_parOut_0003
#define Write_I_b_parOut_0003(x) I_b_parOut_0003 = x
STATIC BOOL I_b_parThis_0003 = 0;
#define Read_I_b_parThis_0003() I_b_parThis_0003
#define Write_I_b_parThis_0003(x) I_b_parThis_0003 = x

/* You provide this function. */
PROTO(extern BOOL Read_U_b_X1_6(void);)


/* You provide this function. */
PROTO(extern BOOL Read_U_b_X1_0(void);)

STATIC SWORD U_i_ANDAR = 0;

/* You provide this function. */
PROTO(extern BOOL Read_U_b_X1_2(void);)


/* You provide this function. */
PROTO(extern BOOL Read_U_b_X1_3(void);)


/* You provide this function. */
PROTO(extern BOOL Read_U_b_X1_4(void);)


/* You provide this function. */
PROTO(extern BOOL Read_U_b_X1_5(void);)

STATIC BOOL I_b_parOut_0004 = 0;
#define Read_I_b_parOut_0004() I_b_parOut_0004
#define Write_I_b_parOut_0004(x) I_b_parOut_0004 = x
STATIC BOOL I_b_parThis_0004 = 0;
#define Read_I_b_parThis_0004() I_b_parThis_0004
#define Write_I_b_parThis_0004(x) I_b_parThis_0004 = x

/* You provide this function. */
PROTO(extern BOOL Read_U_b_X2_1(void);)


/* You provide these functions. */
PROTO(BOOL Read_U_b_Y3_1(void);)
PROTO(void Write_U_b_Y3_1(BOOL v);)

STATIC BOOL I_b_oneShot_0002 = 0;
#define Read_I_b_oneShot_0002() I_b_oneShot_0002
#define Write_I_b_oneShot_0002(x) I_b_oneShot_0002 = x
STATIC SWORD U_i_PED1 = 0;
STATIC BOOL I_b_parOut_0005 = 0;
#define Read_I_b_parOut_0005() I_b_parOut_0005
#define Write_I_b_parOut_0005(x) I_b_parOut_0005 = x
STATIC BOOL I_b_parThis_0005 = 0;
#define Read_I_b_parThis_0005() I_b_parThis_0005
#define Write_I_b_parThis_0005(x) I_b_parThis_0005 = x

/* You provide this function. */
PROTO(extern BOOL Read_U_b_X2_2(void);)


/* You provide these functions. */
PROTO(BOOL Read_U_b_Y3_2(void);)
PROTO(void Write_U_b_Y3_2(BOOL v);)

STATIC BOOL I_b_oneShot_0003 = 0;
#define Read_I_b_oneShot_0003() I_b_oneShot_0003
#define Write_I_b_oneShot_0003(x) I_b_oneShot_0003 = x
STATIC SWORD U_i_PED2 = 0;
STATIC BOOL I_b_parOut_0006 = 0;
#define Read_I_b_parOut_0006() I_b_parOut_0006
#define Write_I_b_parOut_0006(x) I_b_parOut_0006 = x
STATIC BOOL I_b_parThis_0006 = 0;
#define Read_I_b_parThis_0006() I_b_parThis_0006
#define Write_I_b_parThis_0006(x) I_b_parThis_0006 = x

/* You provide this function. */
PROTO(extern BOOL Read_U_b_X2_3(void);)


/* You provide these functions. */
PROTO(BOOL Read_U_b_Y3_3(void);)
PROTO(void Write_U_b_Y3_3(BOOL v);)

STATIC BOOL I_b_oneShot_0004 = 0;
#define Read_I_b_oneShot_0004() I_b_oneShot_0004
#define Write_I_b_oneShot_0004(x) I_b_oneShot_0004 = x
STATIC SWORD U_i_PED3 = 0;
STATIC BOOL I_b_parOut_0007 = 0;
#define Read_I_b_parOut_0007() I_b_parOut_0007
#define Write_I_b_parOut_0007(x) I_b_parOut_0007 = x
STATIC BOOL I_b_parThis_0007 = 0;
#define Read_I_b_parThis_0007() I_b_parThis_0007
#define Write_I_b_parThis_0007(x) I_b_parThis_0007 = x

/* You provide this function. */
PROTO(extern BOOL Read_U_b_X2_4(void);)


/* You provide these functions. */
PROTO(BOOL Read_U_b_Y3_4(void);)
PROTO(void Write_U_b_Y3_4(BOOL v);)

STATIC BOOL I_b_oneShot_0005 = 0;
#define Read_I_b_oneShot_0005() I_b_oneShot_0005
#define Write_I_b_oneShot_0005(x) I_b_oneShot_0005 = x
STATIC SWORD U_i_PED4 = 0;
STATIC BOOL I_b_parOut_0008 = 0;
#define Read_I_b_parOut_0008() I_b_parOut_0008
#define Write_I_b_parOut_0008(x) I_b_parOut_0008 = x
STATIC BOOL I_b_parThis_0008 = 0;
#define Read_I_b_parThis_0008() I_b_parThis_0008
#define Write_I_b_parThis_0008(x) I_b_parThis_0008 = x

/* You provide this function. */
PROTO(extern BOOL Read_U_b_X2_5(void);)


/* You provide these functions. */
PROTO(BOOL Read_U_b_Y3_5(void);)
PROTO(void Write_U_b_Y3_5(BOOL v);)

STATIC BOOL I_b_oneShot_0006 = 0;
#define Read_I_b_oneShot_0006() I_b_oneShot_0006
#define Write_I_b_oneShot_0006(x) I_b_oneShot_0006 = x
STATIC SWORD U_i_PED5 = 0;
STATIC BOOL U_b_RDESL_PARADA = 0;
#define Read_U_b_RDESL_PARADA() U_b_RDESL_PARADA
#define Write_U_b_RDESL_PARADA(x) U_b_RDESL_PARADA = x
STATIC BOOL U_b_Rmove = 0;
#define Read_U_b_Rmove() U_b_Rmove
#define Write_U_b_Rmove(x) U_b_Rmove = x
STATIC BOOL I_b_parOut_0009 = 0;
#define Read_I_b_parOut_0009() I_b_parOut_0009
#define Write_I_b_parOut_0009(x) I_b_parOut_0009 = x
STATIC BOOL I_b_parThis_0009 = 0;
#define Read_I_b_parThis_0009() I_b_parThis_0009
#define Write_I_b_parThis_0009(x) I_b_parThis_0009 = x
STATIC BOOL I_b_TPA_antiglitch = 0;
#define Read_I_b_TPA_antiglitch() I_b_TPA_antiglitch
#define Write_I_b_TPA_antiglitch(x) I_b_TPA_antiglitch = x
STATIC SWORD U_i_TPA = 0;

/* You provide these functions. */
PROTO(BOOL Read_U_b_Y1_3(void);)
PROTO(void Write_U_b_Y1_3(BOOL v);)


/* You provide these functions. */
PROTO(BOOL Read_U_b_Y1_4(void);)
PROTO(void Write_U_b_Y1_4(BOOL v);)


/* You provide these functions. */
PROTO(BOOL Read_U_b_Y1_5(void);)
PROTO(void Write_U_b_Y1_5(BOOL v);)


/* You provide these functions. */
PROTO(BOOL Read_U_b_Y1_6(void);)
PROTO(void Write_U_b_Y1_6(BOOL v);)


/* You provide these functions. */
PROTO(BOOL Read_U_b_Y1_7(void);)
PROTO(void Write_U_b_Y1_7(BOOL v);)

STATIC BOOL I_b_parOut_000a = 0;
#define Read_I_b_parOut_000a() I_b_parOut_000a
#define Write_I_b_parOut_000a(x) I_b_parOut_000a = x
STATIC BOOL I_b_parThis_000a = 0;
#define Read_I_b_parThis_000a() I_b_parThis_000a
#define Write_I_b_parThis_000a(x) I_b_parThis_000a = x
STATIC SWORD I_i_scratch2 = 0;
STATIC BOOL U_b_RDE = 0;
#define Read_U_b_RDE() U_b_RDE
#define Write_U_b_RDE(x) U_b_RDE = x
STATIC BOOL U_b_RSE = 0;
#define Read_U_b_RSE() U_b_RSE
#define Write_U_b_RSE(x) U_b_RSE = x
STATIC BOOL U_b_RFIM_PREF = 0;
#define Read_U_b_RFIM_PREF() U_b_RFIM_PREF
#define Write_U_b_RFIM_PREF(x) U_b_RFIM_PREF = x

/* You provide these functions. */
PROTO(BOOL Read_U_b_Y2_1(void);)
PROTO(void Write_U_b_Y2_1(BOOL v);)


/* You provide these functions. */
PROTO(BOOL Read_U_b_Y1_0(void);)
PROTO(void Write_U_b_Y1_0(BOOL v);)


/* You provide these functions. */
PROTO(BOOL Read_U_b_Y2_0(void);)
PROTO(void Write_U_b_Y2_0(BOOL v);)

STATIC BOOL U_b_RFIM_PREF_S = 0;
#define Read_U_b_RFIM_PREF_S() U_b_RFIM_PREF_S
#define Write_U_b_RFIM_PREF_S(x) U_b_RFIM_PREF_S = x
STATIC BOOL I_b_parOut_000b = 0;
#define Read_I_b_parOut_000b() I_b_parOut_000b
#define Write_I_b_parOut_000b(x) I_b_parOut_000b = x
STATIC BOOL I_b_parThis_000b = 0;
#define Read_I_b_parThis_000b() I_b_parThis_000b
#define Write_I_b_parThis_000b(x) I_b_parThis_000b = x
STATIC BOOL I_b_parOut_000c = 0;
#define Read_I_b_parOut_000c() I_b_parOut_000c
#define Write_I_b_parOut_000c(x) I_b_parOut_000c = x
STATIC BOOL I_b_parThis_000c = 0;
#define Read_I_b_parThis_000c() I_b_parThis_000c
#define Write_I_b_parThis_000c(x) I_b_parThis_000c = x
STATIC BOOL I_b_parOut_000d = 0;
#define Read_I_b_parOut_000d() I_b_parOut_000d
#define Write_I_b_parOut_000d(x) I_b_parOut_000d = x
STATIC BOOL I_b_parThis_000d = 0;
#define Read_I_b_parThis_000d() I_b_parThis_000d
#define Write_I_b_parThis_000d(x) I_b_parThis_000d = x
STATIC BOOL I_b_parOut_000e = 0;
#define Read_I_b_parOut_000e() I_b_parOut_000e
#define Write_I_b_parOut_000e(x) I_b_parOut_000e = x
STATIC BOOL I_b_parThis_000e = 0;
#define Read_I_b_parThis_000e() I_b_parThis_000e
#define Write_I_b_parThis_000e(x) I_b_parThis_000e = x
STATIC BOOL I_b_parOut_000f = 0;
#define Read_I_b_parOut_000f() I_b_parOut_000f
#define Write_I_b_parOut_000f(x) I_b_parOut_000f = x
STATIC BOOL I_b_parThis_000f = 0;
#define Read_I_b_parThis_000f() I_b_parThis_000f
#define Write_I_b_parThis_000f(x) I_b_parThis_000f = x
STATIC BOOL U_b_RFIM_PREF_D = 0;
#define Read_U_b_RFIM_PREF_D() U_b_RFIM_PREF_D
#define Write_U_b_RFIM_PREF_D(x) U_b_RFIM_PREF_D = x
STATIC BOOL I_b_parOut_0010 = 0;
#define Read_I_b_parOut_0010() I_b_parOut_0010
#define Write_I_b_parOut_0010(x) I_b_parOut_0010 = x
STATIC BOOL I_b_parThis_0010 = 0;
#define Read_I_b_parThis_0010() I_b_parThis_0010
#define Write_I_b_parThis_0010(x) I_b_parThis_0010 = x
STATIC BOOL U_b_RPREF_DESCER = 0;
#define Read_U_b_RPREF_DESCER() U_b_RPREF_DESCER
#define Write_U_b_RPREF_DESCER(x) U_b_RPREF_DESCER = x
STATIC BOOL U_b_RPREF_SOBE = 0;
#define Read_U_b_RPREF_SOBE() U_b_RPREF_SOBE
#define Write_U_b_RPREF_SOBE(x) U_b_RPREF_SOBE = x
STATIC BOOL I_b_parOut_0011 = 0;
#define Read_I_b_parOut_0011() I_b_parOut_0011
#define Write_I_b_parOut_0011(x) I_b_parOut_0011 = x
STATIC BOOL I_b_parThis_0011 = 0;
#define Read_I_b_parThis_0011() I_b_parThis_0011
#define Write_I_b_parThis_0011(x) I_b_parThis_0011 = x
STATIC BOOL I_b_parOut_0012 = 0;
#define Read_I_b_parOut_0012() I_b_parOut_0012
#define Write_I_b_parOut_0012(x) I_b_parOut_0012 = x
STATIC BOOL I_b_parThis_0012 = 0;
#define Read_I_b_parThis_0012() I_b_parThis_0012
#define Write_I_b_parThis_0012(x) I_b_parThis_0012 = x


/* Call this function once per PLC cycle. You are responsible for calling
   it at the interval that you specified in the MCU configuration when you
   generated this code. */
void PlcCycle(void)
{
  Write_I_b_mcr(1);

  /* start rung 3 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (Read_U_b_X1_1()) {
    Write_I_b_rung_top(0);
  }

  if (Read_U_b_RTRAVA()) {
    Write_I_b_rung_top(0);
  }

  if (!Read_U_b_RPL()) {
    Write_I_b_rung_top(0);
  }

  Write_U_b_RDO(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 5 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  /* start parallel [ */
  Write_I_b_parOut_0000(0);
  Write_I_b_parThis_0000(Read_I_b_rung_top());
  if (!Read_U_b_RDO()) {
    Write_I_b_parThis_0000(0);
  }

  if (Read_I_b_parThis_0000()) {
    Write_I_b_parOut_0000(1);
  }
  Write_I_b_parThis_0000(Read_I_b_rung_top());
  if (!Read_U_b_RADE()) {
    Write_I_b_parThis_0000(0);
  }

  if (Read_I_b_parThis_0000()) {
    Write_I_b_parOut_0000(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_0000());
  /* ] finish parallel */
  Write_U_b_Y1_1(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 7 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  /* start parallel [ */
  Write_I_b_parOut_0001(0);
  Write_I_b_parThis_0001(Read_I_b_rung_top());
  if (!Read_U_b_XSF03()) {
    Write_I_b_parThis_0001(0);
  }

  if (Read_I_b_parThis_0001()) {
    Write_I_b_parOut_0001(1);
  }
  Write_I_b_parThis_0001(Read_I_b_rung_top());
  /* start series [ */
  if (!Read_U_b_X1_7()) {
    Write_I_b_parThis_0001(0);
  }

  Write_I_b_scratch(Read_I_b_parThis_0001());
  if (!Read_I_b_parThis_0001()) {
    if (Read_I_b_oneShot_0000()) {
      Write_I_b_parThis_0001(1);
    }
  } else {
    Write_I_b_parThis_0001(0);
  }
  Write_I_b_oneShot_0000(Read_I_b_scratch());

  /* ] finish series */
  if (Read_I_b_parThis_0001()) {
    Write_I_b_parOut_0001(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_0001());
  /* ] finish parallel */
  if (Read_I_b_rung_top()) {
    Write_U_b_RPL(1);
  }

  /* ] finish series */

  /* start rung 9 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  /* start parallel [ */
  Write_I_b_parOut_0002(0);
  Write_I_b_parThis_0002(Read_I_b_rung_top());
  /* start series [ */
  if (!Read_U_b_X1_7()) {
    Write_I_b_parThis_0002(0);
  }

  Write_I_b_scratch(Read_I_b_parThis_0002());
  if (Read_I_b_oneShot_0001()) {
    Write_I_b_parThis_0002(0);
  }
  Write_I_b_oneShot_0001(Read_I_b_scratch());

  /* ] finish series */
  if (Read_I_b_parThis_0002()) {
    Write_I_b_parOut_0002(1);
  }
  Write_I_b_parThis_0002(Read_I_b_rung_top());
  /* start series [ */


  if (!Read_U_b_X1_1()) {
    Write_I_b_parThis_0002(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_0002()) {
    Write_I_b_parOut_0002(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_0002());
  /* ] finish parallel */
  if (Read_I_b_rung_top()) {
    Write_U_b_RPL(0);
  }

  /* ] finish series */

  /* start rung 11 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_X1_7()) {
    Write_I_b_rung_top(0);
  }

  Write_U_b_Y1_2(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 13 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  /* start parallel [ */
  Write_I_b_parOut_0003(0);
  Write_I_b_parThis_0003(Read_I_b_rung_top());
  if (!Read_U_b_X1_7()) {
    Write_I_b_parThis_0003(0);
  }

  if (Read_I_b_parThis_0003()) {
    Write_I_b_parOut_0003(1);
  }
  Write_I_b_parThis_0003(Read_I_b_rung_top());
  if (Read_U_b_X1_6()) {
    Write_I_b_parThis_0003(0);
  }

  if (Read_I_b_parThis_0003()) {
    Write_I_b_parOut_0003(1);
  }
  Write_I_b_parThis_0003(Read_I_b_rung_top());
  if (Read_U_b_X1_0()) {
    Write_I_b_parThis_0003(0);
  }

  if (Read_I_b_parThis_0003()) {
    Write_I_b_parOut_0003(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_0003());
  /* ] finish parallel */
  Write_U_b_RTRAVA(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 15 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_X1_1()) {
    Write_I_b_rung_top(0);
  }

  if (Read_I_b_rung_top()) {
    U_i_ANDAR = 1;
  }

  /* ] finish series */

  /* start rung 16 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_X1_2()) {
    Write_I_b_rung_top(0);
  }

  if (Read_I_b_rung_top()) {
    U_i_ANDAR = 2;
  }

  /* ] finish series */

  /* start rung 17 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_X1_3()) {
    Write_I_b_rung_top(0);
  }

  if (Read_I_b_rung_top()) {
    U_i_ANDAR = 3;
  }

  /* ] finish series */

  /* start rung 18 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_X1_4()) {
    Write_I_b_rung_top(0);
  }

  if (Read_I_b_rung_top()) {
    U_i_ANDAR = 4;
  }

  /* ] finish series */

  /* start rung 19 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_X1_5()) {
    Write_I_b_rung_top(0);
  }

  if (Read_I_b_rung_top()) {
    U_i_ANDAR = 5;
  }

  /* ] finish series */

  /* start rung 22 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  /* start parallel [ */
  Write_I_b_parOut_0004(0);
  Write_I_b_parThis_0004(Read_I_b_rung_top());
  if (!Read_U_b_X2_1()) {
    Write_I_b_parThis_0004(0);
  }

  if (Read_I_b_parThis_0004()) {
    Write_I_b_parOut_0004(1);
  }
  Write_I_b_parThis_0004(Read_I_b_rung_top());
  if (!Read_U_b_Y3_1()) {
    Write_I_b_parThis_0004(0);
  }

  if (Read_I_b_parThis_0004()) {
    Write_I_b_parOut_0004(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_0004());
  /* ] finish parallel */
  Write_I_b_scratch(Read_I_b_rung_top());
  if (Read_I_b_oneShot_0002()) {
    Write_I_b_rung_top(0);
  }
  Write_I_b_oneShot_0002(Read_I_b_scratch());

  if (Read_I_b_rung_top()) {
    U_i_PED1 = 1;
  }

  /* ] finish series */

  /* start rung 23 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  /* start parallel [ */
  Write_I_b_parOut_0005(0);
  Write_I_b_parThis_0005(Read_I_b_rung_top());
  if (!Read_U_b_X2_2()) {
    Write_I_b_parThis_0005(0);
  }

  if (Read_I_b_parThis_0005()) {
    Write_I_b_parOut_0005(1);
  }
  Write_I_b_parThis_0005(Read_I_b_rung_top());
  if (!Read_U_b_Y3_2()) {
    Write_I_b_parThis_0005(0);
  }

  if (Read_I_b_parThis_0005()) {
    Write_I_b_parOut_0005(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_0005());
  /* ] finish parallel */
  Write_I_b_scratch(Read_I_b_rung_top());
  if (Read_I_b_oneShot_0003()) {
    Write_I_b_rung_top(0);
  }
  Write_I_b_oneShot_0003(Read_I_b_scratch());

  if (Read_I_b_rung_top()) {
    U_i_PED2 = 2;
  }

  /* ] finish series */

  /* start rung 24 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  /* start parallel [ */
  Write_I_b_parOut_0006(0);
  Write_I_b_parThis_0006(Read_I_b_rung_top());
  if (!Read_U_b_X2_3()) {
    Write_I_b_parThis_0006(0);
  }

  if (Read_I_b_parThis_0006()) {
    Write_I_b_parOut_0006(1);
  }
  Write_I_b_parThis_0006(Read_I_b_rung_top());
  if (!Read_U_b_Y3_3()) {
    Write_I_b_parThis_0006(0);
  }

  if (Read_I_b_parThis_0006()) {
    Write_I_b_parOut_0006(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_0006());
  /* ] finish parallel */
  Write_I_b_scratch(Read_I_b_rung_top());
  if (Read_I_b_oneShot_0004()) {
    Write_I_b_rung_top(0);
  }
  Write_I_b_oneShot_0004(Read_I_b_scratch());

  if (Read_I_b_rung_top()) {
    U_i_PED3 = 3;
  }

  /* ] finish series */

  /* start rung 25 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  /* start parallel [ */
  Write_I_b_parOut_0007(0);
  Write_I_b_parThis_0007(Read_I_b_rung_top());
  if (!Read_U_b_X2_4()) {
    Write_I_b_parThis_0007(0);
  }

  if (Read_I_b_parThis_0007()) {
    Write_I_b_parOut_0007(1);
  }
  Write_I_b_parThis_0007(Read_I_b_rung_top());
  if (!Read_U_b_Y3_4()) {
    Write_I_b_parThis_0007(0);
  }

  if (Read_I_b_parThis_0007()) {
    Write_I_b_parOut_0007(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_0007());
  /* ] finish parallel */
  Write_I_b_scratch(Read_I_b_rung_top());
  if (Read_I_b_oneShot_0005()) {
    Write_I_b_rung_top(0);
  }
  Write_I_b_oneShot_0005(Read_I_b_scratch());

  if (Read_I_b_rung_top()) {
    U_i_PED4 = 4;
  }

  /* ] finish series */

  /* start rung 26 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  /* start parallel [ */
  Write_I_b_parOut_0008(0);
  Write_I_b_parThis_0008(Read_I_b_rung_top());
  if (!Read_U_b_X2_5()) {
    Write_I_b_parThis_0008(0);
  }

  if (Read_I_b_parThis_0008()) {
    Write_I_b_parOut_0008(1);
  }
  Write_I_b_parThis_0008(Read_I_b_rung_top());
  if (!Read_U_b_Y3_5()) {
    Write_I_b_parThis_0008(0);
  }

  if (Read_I_b_parThis_0008()) {
    Write_I_b_parOut_0008(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_0008());
  /* ] finish parallel */
  Write_I_b_scratch(Read_I_b_rung_top());
  if (Read_I_b_oneShot_0006()) {
    Write_I_b_rung_top(0);
  }
  Write_I_b_oneShot_0006(Read_I_b_scratch());

  if (Read_I_b_rung_top()) {
    U_i_PED5 = 5;
  }

  /* ] finish series */

  /* start rung 28 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_X1_1()) {
    Write_I_b_rung_top(0);
  }

  if (!Read_U_b_RDESL_PARADA()) {
    Write_I_b_rung_top(0);
  }

  if (Read_I_b_rung_top()) {
    U_i_PED1 = 0;
  }

  /* ] finish series */

  /* start rung 29 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_X1_2()) {
    Write_I_b_rung_top(0);
  }

  if (!Read_U_b_RDESL_PARADA()) {
    Write_I_b_rung_top(0);
  }

  if (Read_I_b_rung_top()) {
    U_i_PED2 = 0;
  }

  /* ] finish series */

  /* start rung 30 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_X1_3()) {
    Write_I_b_rung_top(0);
  }

  if (!Read_U_b_RDESL_PARADA()) {
    Write_I_b_rung_top(0);
  }

  if (Read_I_b_rung_top()) {
    U_i_PED3 = 0;
  }

  /* ] finish series */

  /* start rung 31 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_X1_4()) {
    Write_I_b_rung_top(0);
  }

  if (!Read_U_b_RDESL_PARADA()) {
    Write_I_b_rung_top(0);
  }

  if (Read_I_b_rung_top()) {
    U_i_PED4 = 0;
  }

  /* ] finish series */

  /* start rung 32 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_X1_5()) {
    Write_I_b_rung_top(0);
  }

  if (!Read_U_b_RDESL_PARADA()) {
    Write_I_b_rung_top(0);
  }

  if (Read_I_b_rung_top()) {
    U_i_PED5 = 0;
  }

  /* ] finish series */

  /* start rung 34 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (Read_U_b_X1_1()) {
    Write_I_b_rung_top(0);
  }

  if (Read_U_b_X1_2()) {
    Write_I_b_rung_top(0);
  }

  if (Read_U_b_X1_3()) {
    Write_I_b_rung_top(0);
  }

  if (Read_U_b_X1_4()) {
    Write_I_b_rung_top(0);
  }

  if (Read_U_b_X1_5()) {
    Write_I_b_rung_top(0);
  }

  Write_U_b_Rmove(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 36 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  /* start parallel [ */
  Write_I_b_parOut_0009(0);
  Write_I_b_parThis_0009(Read_I_b_rung_top());
  /* start series [ */
  if (U_i_PED1 == U_i_ANDAR) {
  } else {
    Write_I_b_parThis_0009(0);
  }

  if (Read_U_b_Rmove()) {
    Write_I_b_parThis_0009(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_0009()) {
    Write_I_b_parOut_0009(1);
  }
  Write_I_b_parThis_0009(Read_I_b_rung_top());
  /* start series [ */
  if (U_i_PED2 == U_i_ANDAR) {
  } else {
    Write_I_b_parThis_0009(0);
  }

  if (Read_U_b_Rmove()) {
    Write_I_b_parThis_0009(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_0009()) {
    Write_I_b_parOut_0009(1);
  }
  Write_I_b_parThis_0009(Read_I_b_rung_top());
  /* start series [ */
  if (U_i_PED3 == U_i_ANDAR) {
  } else {
    Write_I_b_parThis_0009(0);
  }

  if (Read_U_b_Rmove()) {
    Write_I_b_parThis_0009(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_0009()) {
    Write_I_b_parOut_0009(1);
  }
  Write_I_b_parThis_0009(Read_I_b_rung_top());
  /* start series [ */
  if (U_i_PED4 == U_i_ANDAR) {
  } else {
    Write_I_b_parThis_0009(0);
  }

  if (Read_U_b_Rmove()) {
    Write_I_b_parThis_0009(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_0009()) {
    Write_I_b_parOut_0009(1);
  }
  Write_I_b_parThis_0009(Read_I_b_rung_top());
  /* start series [ */
  if (U_i_PED5 == U_i_ANDAR) {
  } else {
    Write_I_b_parThis_0009(0);
  }

  if (Read_U_b_Rmove()) {
    Write_I_b_parThis_0009(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_0009()) {
    Write_I_b_parOut_0009(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_0009());
  /* ] finish parallel */
  if (!Read_I_b_TPA_antiglitch()) {
    U_i_TPA = 99;
  }
  Write_I_b_TPA_antiglitch(1);
  if (!Read_I_b_rung_top()) {
    if (U_i_TPA < 99) {
      U_i_TPA++;
      Write_I_b_rung_top(1);
    }
  } else {
    U_i_TPA = 0;
  }

  Write_U_b_RDESL_PARADA(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 38 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_X1_1()) {
    Write_I_b_rung_top(0);
  }

  if (!Read_U_b_RDESL_PARADA()) {
    Write_I_b_rung_top(0);
  }

  Write_U_b_Y1_3(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 39 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_X1_2()) {
    Write_I_b_rung_top(0);
  }

  if (!Read_U_b_RDESL_PARADA()) {
    Write_I_b_rung_top(0);
  }

  Write_U_b_Y1_4(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 40 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_X1_3()) {
    Write_I_b_rung_top(0);
  }

  if (!Read_U_b_RDESL_PARADA()) {
    Write_I_b_rung_top(0);
  }

  Write_U_b_Y1_5(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 41 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_X1_4()) {
    Write_I_b_rung_top(0);
  }

  if (!Read_U_b_RDESL_PARADA()) {
    Write_I_b_rung_top(0);
  }

  Write_U_b_Y1_6(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 42 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_X1_5()) {
    Write_I_b_rung_top(0);
  }

  if (!Read_U_b_RDESL_PARADA()) {
    Write_I_b_rung_top(0);
  }

  Write_U_b_Y1_7(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 44 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  /* start parallel [ */
  Write_I_b_parOut_000a(0);
  Write_I_b_parThis_000a(Read_I_b_rung_top());
  /* start series [ */
  I_i_scratch2 = 0;
  if (U_i_PED1 == I_i_scratch2) {
  } else {
    Write_I_b_parThis_000a(0);
  }

  I_i_scratch2 = 0;
  if (U_i_PED2 == I_i_scratch2) {
  } else {
    Write_I_b_parThis_000a(0);
  }

  I_i_scratch2 = 0;
  if (U_i_PED3 == I_i_scratch2) {
  } else {
    Write_I_b_parThis_000a(0);
  }

  I_i_scratch2 = 0;
  if (U_i_PED4 == I_i_scratch2) {
  } else {
    Write_I_b_parThis_000a(0);
  }

  I_i_scratch2 = 0;
  if (U_i_PED5 == I_i_scratch2) {
  } else {
    Write_I_b_parThis_000a(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_000a()) {
    Write_I_b_parOut_000a(1);
  }
  Write_I_b_parThis_000a(Read_I_b_rung_top());
  /* start series [ */
  if (!Read_U_b_RDE()) {
    Write_I_b_parThis_000a(0);
  }

  if (!Read_U_b_X1_1()) {
    Write_I_b_parThis_000a(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_000a()) {
    Write_I_b_parOut_000a(1);
  }
  Write_I_b_parThis_000a(Read_I_b_rung_top());
  /* start series [ */
  if (!Read_U_b_RSE()) {
    Write_I_b_parThis_000a(0);
  }

  if (!Read_U_b_X1_5()) {
    Write_I_b_parThis_000a(0);
  }





  /* ] finish series */
  if (Read_I_b_parThis_000a()) {
    Write_I_b_parOut_000a(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_000a());
  /* ] finish parallel */
  Write_U_b_RFIM_PREF(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 46 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_Y1_1()) {
    Write_I_b_rung_top(0);
  }

  Write_U_b_Y2_1(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 48 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_Y1_0()) {
    Write_I_b_rung_top(0);
  }

  Write_U_b_Y2_0(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 50 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (U_i_ANDAR > U_i_PED1) {
  } else {
    Write_I_b_rung_top(0);
  }

  if (U_i_ANDAR > U_i_PED2) {
  } else {
    Write_I_b_rung_top(0);
  }

  if (U_i_ANDAR > U_i_PED3) {
  } else {
    Write_I_b_rung_top(0);
  }

  if (U_i_ANDAR > U_i_PED4) {
  } else {
    Write_I_b_rung_top(0);
  }

  if (U_i_ANDAR > U_i_PED5) {
  } else {
    Write_I_b_rung_top(0);
  }

  Write_U_b_RFIM_PREF_S(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 52 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  /* start parallel [ */
  Write_I_b_parOut_000b(0);
  Write_I_b_parThis_000b(Read_I_b_rung_top());
  if (U_i_PED1 > U_i_ANDAR) {
  } else {
    Write_I_b_parThis_000b(0);
  }

  if (Read_I_b_parThis_000b()) {
    Write_I_b_parOut_000b(1);
  }
  Write_I_b_parThis_000b(Read_I_b_rung_top());
  I_i_scratch2 = 0;
  if (U_i_PED1 == I_i_scratch2) {
  } else {
    Write_I_b_parThis_000b(0);
  }

  if (Read_I_b_parThis_000b()) {
    Write_I_b_parOut_000b(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_000b());
  /* ] finish parallel */
  /* start parallel [ */
  Write_I_b_parOut_000c(0);
  Write_I_b_parThis_000c(Read_I_b_rung_top());
  if (U_i_PED2 > U_i_ANDAR) {
  } else {
    Write_I_b_parThis_000c(0);
  }

  if (Read_I_b_parThis_000c()) {
    Write_I_b_parOut_000c(1);
  }
  Write_I_b_parThis_000c(Read_I_b_rung_top());
  I_i_scratch2 = 0;
  if (U_i_PED2 == I_i_scratch2) {
  } else {
    Write_I_b_parThis_000c(0);
  }

  if (Read_I_b_parThis_000c()) {
    Write_I_b_parOut_000c(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_000c());
  /* ] finish parallel */
  /* start parallel [ */
  Write_I_b_parOut_000d(0);
  Write_I_b_parThis_000d(Read_I_b_rung_top());
  if (U_i_PED3 > U_i_ANDAR) {
  } else {
    Write_I_b_parThis_000d(0);
  }

  if (Read_I_b_parThis_000d()) {
    Write_I_b_parOut_000d(1);
  }
  Write_I_b_parThis_000d(Read_I_b_rung_top());
  I_i_scratch2 = 0;
  if (U_i_PED3 == I_i_scratch2) {
  } else {
    Write_I_b_parThis_000d(0);
  }

  if (Read_I_b_parThis_000d()) {
    Write_I_b_parOut_000d(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_000d());
  /* ] finish parallel */
  /* start parallel [ */
  Write_I_b_parOut_000e(0);
  Write_I_b_parThis_000e(Read_I_b_rung_top());
  if (U_i_PED4 > U_i_ANDAR) {
  } else {
    Write_I_b_parThis_000e(0);
  }

  if (Read_I_b_parThis_000e()) {
    Write_I_b_parOut_000e(1);
  }
  Write_I_b_parThis_000e(Read_I_b_rung_top());
  I_i_scratch2 = 0;
  if (U_i_PED4 == I_i_scratch2) {
  } else {
    Write_I_b_parThis_000e(0);
  }

  if (Read_I_b_parThis_000e()) {
    Write_I_b_parOut_000e(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_000e());
  /* ] finish parallel */
  /* start parallel [ */
  Write_I_b_parOut_000f(0);
  Write_I_b_parThis_000f(Read_I_b_rung_top());
  if (U_i_PED5 > U_i_ANDAR) {
  } else {
    Write_I_b_parThis_000f(0);
  }

  if (Read_I_b_parThis_000f()) {
    Write_I_b_parOut_000f(1);
  }
  Write_I_b_parThis_000f(Read_I_b_rung_top());
  I_i_scratch2 = 0;
  if (U_i_PED5 == I_i_scratch2) {
  } else {
    Write_I_b_parThis_000f(0);
  }

  if (Read_I_b_parThis_000f()) {
    Write_I_b_parOut_000f(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_000f());
  /* ] finish parallel */
  Write_U_b_RFIM_PREF_D(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 54 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  /* start parallel [ */
  Write_I_b_parOut_0010(0);
  Write_I_b_parThis_0010(Read_I_b_rung_top());
  /* start series [ */
  I_i_scratch2 = 0;
  if (U_i_PED1 == I_i_scratch2) {
    Write_I_b_parThis_0010(0);
  }

  if (U_i_ANDAR > U_i_PED1) {
  } else {
    Write_I_b_parThis_0010(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_0010()) {
    Write_I_b_parOut_0010(1);
  }
  Write_I_b_parThis_0010(Read_I_b_rung_top());
  /* start series [ */
  I_i_scratch2 = 0;
  if (U_i_PED2 == I_i_scratch2) {
    Write_I_b_parThis_0010(0);
  }

  if (U_i_ANDAR > U_i_PED2) {
  } else {
    Write_I_b_parThis_0010(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_0010()) {
    Write_I_b_parOut_0010(1);
  }
  Write_I_b_parThis_0010(Read_I_b_rung_top());
  /* start series [ */
  I_i_scratch2 = 0;
  if (U_i_PED3 == I_i_scratch2) {
    Write_I_b_parThis_0010(0);
  }

  if (U_i_ANDAR > U_i_PED3) {
  } else {
    Write_I_b_parThis_0010(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_0010()) {
    Write_I_b_parOut_0010(1);
  }
  Write_I_b_parThis_0010(Read_I_b_rung_top());
  /* start series [ */
  I_i_scratch2 = 0;
  if (U_i_PED4 == I_i_scratch2) {
    Write_I_b_parThis_0010(0);
  }

  if (U_i_ANDAR > U_i_PED4) {
  } else {
    Write_I_b_parThis_0010(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_0010()) {
    Write_I_b_parOut_0010(1);
  }
  Write_I_b_parThis_0010(Read_I_b_rung_top());
  /* start series [ */
  I_i_scratch2 = 0;
  if (U_i_PED5 == I_i_scratch2) {
    Write_I_b_parThis_0010(0);
  }

  if (U_i_ANDAR > U_i_PED5) {
  } else {
    Write_I_b_parThis_0010(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_0010()) {
    Write_I_b_parOut_0010(1);
  }
  Write_I_b_parThis_0010(Read_I_b_rung_top());
  if (!Read_U_b_RPREF_DESCER()) {
    Write_I_b_parThis_0010(0);
  }

  if (Read_I_b_parThis_0010()) {
    Write_I_b_parOut_0010(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_0010());
  /* ] finish parallel */
  if (Read_U_b_RPREF_SOBE()) {
    Write_I_b_rung_top(0);
  }

  if (Read_U_b_RFIM_PREF_D()) {
    Write_I_b_rung_top(0);
  }

  if (Read_U_b_RFIM_PREF()) {
    Write_I_b_rung_top(0);
  }

  Write_U_b_RPREF_DESCER(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 56 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  /* start parallel [ */
  Write_I_b_parOut_0011(0);
  Write_I_b_parThis_0011(Read_I_b_rung_top());
  /* start series [ */
  I_i_scratch2 = 0;
  if (U_i_PED1 == I_i_scratch2) {
    Write_I_b_parThis_0011(0);
  }

  if (U_i_ANDAR > U_i_PED1) {
  } else {
    Write_I_b_parThis_0011(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_0011()) {
    Write_I_b_parOut_0011(1);
  }
  Write_I_b_parThis_0011(Read_I_b_rung_top());
  /* start series [ */
  I_i_scratch2 = 0;
  if (U_i_PED2 == I_i_scratch2) {
    Write_I_b_parThis_0011(0);
  }

  if (U_i_ANDAR > U_i_PED2) {
  } else {
    Write_I_b_parThis_0011(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_0011()) {
    Write_I_b_parOut_0011(1);
  }
  Write_I_b_parThis_0011(Read_I_b_rung_top());
  /* start series [ */
  I_i_scratch2 = 0;
  if (U_i_PED3 == I_i_scratch2) {
    Write_I_b_parThis_0011(0);
  }

  if (U_i_ANDAR > U_i_PED3) {
  } else {
    Write_I_b_parThis_0011(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_0011()) {
    Write_I_b_parOut_0011(1);
  }
  Write_I_b_parThis_0011(Read_I_b_rung_top());
  /* start series [ */
  I_i_scratch2 = 0;
  if (U_i_PED4 == I_i_scratch2) {
    Write_I_b_parThis_0011(0);
  }

  if (U_i_ANDAR > U_i_PED4) {
  } else {
    Write_I_b_parThis_0011(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_0011()) {
    Write_I_b_parOut_0011(1);
  }
  Write_I_b_parThis_0011(Read_I_b_rung_top());
  /* start series [ */
  I_i_scratch2 = 0;
  if (U_i_PED5 == I_i_scratch2) {
    Write_I_b_parThis_0011(0);
  }

  if (U_i_ANDAR > U_i_PED5) {
  } else {
    Write_I_b_parThis_0011(0);
  }

  /* ] finish series */
  if (Read_I_b_parThis_0011()) {
    Write_I_b_parOut_0011(1);
  }
  Write_I_b_parThis_0011(Read_I_b_rung_top());
  if (!Read_U_b_RPREF_DESCER()) {
    Write_I_b_parThis_0011(0);
  }

  if (Read_I_b_parThis_0011()) {
    Write_I_b_parOut_0011(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_0011());
  /* ] finish parallel */
  if (Read_U_b_RPREF_SOBE()) {
    Write_I_b_rung_top(0);
  }

  if (Read_U_b_RTRAVA()) {
    Write_I_b_rung_top(0);
  }

  if (Read_U_b_RDESL_PARADA()) {
    Write_I_b_rung_top(0);
  }

  if (Read_U_b_RFIM_PREF()) {
    Write_I_b_rung_top(0);
  }

  Write_U_b_RADE(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 58 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  /* start parallel [ */
  Write_I_b_parOut_0012(0);
  Write_I_b_parThis_0012(Read_I_b_rung_top());
  if (U_i_PED2 > U_i_ANDAR) {
  } else {
    Write_I_b_parThis_0012(0);
  }

  if (Read_I_b_parThis_0012()) {
    Write_I_b_parOut_0012(1);
  }
  Write_I_b_parThis_0012(Read_I_b_rung_top());
  if (U_i_PED3 > U_i_ANDAR) {
  } else {
    Write_I_b_parThis_0012(0);
  }

  if (Read_I_b_parThis_0012()) {
    Write_I_b_parOut_0012(1);
  }
  Write_I_b_parThis_0012(Read_I_b_rung_top());
  if (U_i_PED4 > U_i_ANDAR) {
  } else {
    Write_I_b_parThis_0012(0);
  }

  if (Read_I_b_parThis_0012()) {
    Write_I_b_parOut_0012(1);
  }
  Write_I_b_parThis_0012(Read_I_b_rung_top());
  if (U_i_PED5 > U_i_ANDAR) {
  } else {
    Write_I_b_parThis_0012(0);
  }

  if (Read_I_b_parThis_0012()) {
    Write_I_b_parOut_0012(1);
  }
  Write_I_b_parThis_0012(Read_I_b_rung_top());
  if (!Read_U_b_RPREF_SOBE()) {
    Write_I_b_parThis_0012(0);
  }

  if (Read_I_b_parThis_0012()) {
    Write_I_b_parOut_0012(1);
  }
  Write_I_b_rung_top(Read_I_b_parOut_0012());
  /* ] finish parallel */
  if (Read_U_b_RPREF_DESCER()) {
    Write_I_b_rung_top(0);
  }

  if (Read_U_b_RFIM_PREF_S()) {
    Write_I_b_rung_top(0);
  }

  if (Read_U_b_RFIM_PREF()) {
    Write_I_b_rung_top(0);
  }

  Write_U_b_RPREF_SOBE(Read_I_b_rung_top());

  /* ] finish series */

  /* start rung 60 */
  Write_I_b_rung_top(Read_I_b_mcr());

  /* start series [ */
  if (!Read_U_b_RPREF_SOBE()) {
    Write_I_b_rung_top(0);
  }

  if (Read_U_b_RTRAVA()) {
    Write_I_b_rung_top(0);
  }

  if (Read_U_b_RDESL_PARADA()) {
    Write_I_b_rung_top(0);
  }

  if (Read_U_b_Y1_1()) {
    Write_I_b_rung_top(0);
  }

  Write_U_b_Y1_0(Read_I_b_rung_top());

  /* ] finish series */
}
