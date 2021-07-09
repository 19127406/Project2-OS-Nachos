/* Generated automatically by the program `genpeep'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "insn-config.h"
#include "rtl.h"
#include "regs.h"
#include "output.h"
#include "real.h"
#include "recog.h"
#include "except.h"

extern rtx peep_operand[];

#define operands peep_operand

rtx
peephole (ins1)
     rtx ins1;
{
  rtx insn ATTRIBUTE_UNUSED, x ATTRIBUTE_UNUSED, pat ATTRIBUTE_UNUSED;

  if (NEXT_INSN (ins1)
      && GET_CODE (NEXT_INSN (ins1)) == BARRIER)
    return 0;

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L502;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, SImode)) goto L502;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! register_operand (x, SImode)) goto L502;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L502; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L502;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L502;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L502;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L502;
  x = XEXP (XEXP (pat, 1), 0);
  operands[2] = x;
  if (! equality_op (x, SImode)) goto L502;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L502;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L502;
  if (XWINT (x, 0) != 0) goto L502;
  x = XEXP (XEXP (pat, 1), 1);
  operands[3] = x;
  if (! pc_or_label_operand (x, VOIDmode)) goto L502;
  x = XEXP (XEXP (pat, 1), 2);
  operands[4] = x;
  if (! pc_or_label_operand (x, VOIDmode)) goto L502;
  if (! (TARGET_MIPS16
   && GET_CODE (operands[0]) == REG
   && REGNO (operands[0]) == 24
   && dead_or_set_p (insn, operands[0])
   && GET_CODE (operands[1]) == REG
   && M16_REG_P (REGNO (operands[1])))) goto L502;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (5, operands));
  INSN_CODE (ins1) = 502;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L502:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L503;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, DImode)) goto L503;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! register_operand (x, DImode)) goto L503;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L503; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L503;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L503;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L503;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L503;
  x = XEXP (XEXP (pat, 1), 0);
  operands[2] = x;
  if (! equality_op (x, DImode)) goto L503;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L503;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L503;
  if (XWINT (x, 0) != 0) goto L503;
  x = XEXP (XEXP (pat, 1), 1);
  operands[3] = x;
  if (! pc_or_label_operand (x, VOIDmode)) goto L503;
  x = XEXP (XEXP (pat, 1), 2);
  operands[4] = x;
  if (! pc_or_label_operand (x, VOIDmode)) goto L503;
  if (! (TARGET_MIPS16 && TARGET_64BIT
   && GET_CODE (operands[0]) == REG
   && REGNO (operands[0]) == 24
   && dead_or_set_p (insn, operands[0])
   && GET_CODE (operands[1]) == REG
   && M16_REG_P (REGNO (operands[1])))) goto L503;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (5, operands));
  INSN_CODE (ins1) = 503;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L503:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L504;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, SImode)) goto L504;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! register_operand (x, SImode)) goto L504;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L504; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L504;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L504;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L504;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L504;
  x = XEXP (XEXP (pat, 1), 0);
  operands[2] = x;
  if (! equality_op (x, SImode)) goto L504;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L504;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L504;
  if (XWINT (x, 0) != 0) goto L504;
  x = XEXP (XEXP (pat, 1), 1);
  operands[3] = x;
  if (! pc_or_label_operand (x, VOIDmode)) goto L504;
  x = XEXP (XEXP (pat, 1), 2);
  operands[4] = x;
  if (! pc_or_label_operand (x, VOIDmode)) goto L504;
  if (! (TARGET_MIPS16
   && GET_CODE (operands[1]) == REG
   && REGNO (operands[1]) == 24
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && dead_or_set_p (insn, operands[0]))) goto L504;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (5, operands));
  INSN_CODE (ins1) = 504;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L504:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L505;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, DImode)) goto L505;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! register_operand (x, DImode)) goto L505;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L505; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L505;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L505;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L505;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L505;
  x = XEXP (XEXP (pat, 1), 0);
  operands[2] = x;
  if (! equality_op (x, DImode)) goto L505;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L505;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L505;
  if (XWINT (x, 0) != 0) goto L505;
  x = XEXP (XEXP (pat, 1), 1);
  operands[3] = x;
  if (! pc_or_label_operand (x, VOIDmode)) goto L505;
  x = XEXP (XEXP (pat, 1), 2);
  operands[4] = x;
  if (! pc_or_label_operand (x, VOIDmode)) goto L505;
  if (! (TARGET_MIPS16 && TARGET_64BIT
   && GET_CODE (operands[1]) == REG
   && REGNO (operands[1]) == 24
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && dead_or_set_p (insn, operands[0]))) goto L505;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (5, operands));
  INSN_CODE (ins1) = 505;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L505:

  return 0;
}

rtx peep_operand[5];
