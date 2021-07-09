/* Generated automatically by the program `genrecog'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"

extern rtx gen_split_7 ();
extern rtx gen_split_8 ();
extern rtx gen_split_11 ();
extern rtx gen_split_12 ();
extern rtx gen_split_14 ();
extern rtx gen_split_15 ();
extern rtx gen_split_20 ();
extern rtx gen_split_21 ();
extern rtx gen_split_31 ();
extern rtx gen_split_32 ();
extern rtx gen_split_35 ();
extern rtx gen_split_36 ();
extern rtx gen_split_38 ();
extern rtx gen_split_39 ();
extern rtx gen_split_44 ();
extern rtx gen_split_45 ();
extern rtx gen_split_59 ();
extern rtx gen_split_60 ();
extern rtx gen_split_133 ();
extern rtx gen_split_140 ();
extern rtx gen_split_148 ();
extern rtx gen_split_156 ();
extern rtx gen_split_160 ();
extern rtx gen_split_226 ();
extern rtx gen_split_229 ();
extern rtx gen_split_232 ();
extern rtx gen_split_238 ();
extern rtx gen_split_239 ();
extern rtx gen_split_240 ();
extern rtx gen_split_258 ();
extern rtx gen_split_263 ();
extern rtx gen_split_273 ();
extern rtx gen_split_280 ();
extern rtx gen_split_288 ();
extern rtx gen_split_292 ();
extern rtx gen_split_293 ();
extern rtx gen_split_295 ();
extern rtx gen_split_296 ();
extern rtx gen_split_299 ();
extern rtx gen_split_303 ();
extern rtx gen_split_307 ();
extern rtx gen_split_308 ();
extern rtx gen_split_310 ();
extern rtx gen_split_311 ();
extern rtx gen_split_314 ();
extern rtx gen_split_318 ();
extern rtx gen_split_320 ();
extern rtx gen_split_324 ();
extern rtx gen_split_325 ();
extern rtx gen_split_327 ();
extern rtx gen_split_328 ();
extern rtx gen_split_331 ();
extern rtx gen_split_362 ();
extern rtx gen_split_364 ();
extern rtx gen_split_369 ();
extern rtx gen_split_371 ();
extern rtx gen_split_379 ();
extern rtx gen_split_381 ();
extern rtx gen_split_393 ();
extern rtx gen_split_395 ();
extern rtx gen_split_403 ();
extern rtx gen_split_405 ();
extern rtx gen_split_417 ();
extern rtx gen_split_419 ();

/* `recog' contains a decision tree
   that recognizes whether the rtx X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.
   If the rtx is valid, recog returns a nonnegative number
   which is the insn code number for the pattern that matched.
   This is the same as the order in the machine description of
   the entry that matched.  This number can be used as an index into various
   insn_* tables, such as insn_templates, insn_outfun, and insn_n_operands
   (found in insn-output.c).

   The third argument to recog is an optional pointer to an int.
   If present, recog will accept a pattern if it matches except for
   missing CLOBBER expressions at the end.  In that case, the value
   pointed to by the optional pointer will be set to the number of
   CLOBBERs that need to be added (it should be initialized to zero by
   the caller).  If it is set nonzero, the caller should allocate a
   PARALLEL of the appropriate size, copy the initial entries, and call
   add_clobbers (found in insn-emit.c) to fill in the CLOBBERs.

   The function split_insns returns 0 if the rtl could not
   be split or the split rtl in a SEQUENCE if it can be.*/

#define operands recog_operand

int
recog_1 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DFmode)
    goto ret0;
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L615;
    case MINUS:
      goto L629;
    case MULT:
      goto L271;
    case NEG:
      goto L643;
    case DIV:
      goto L683;
    case SQRT:
      goto L929;
    case ABS:
      goto L957;
    case FLOAT_EXTEND:
      goto L1269;
    case FLOAT:
      goto L1321;
    case MEM:
      goto L1436;
    case IF_THEN_ELSE:
      goto L2728;
    }
  goto ret0;

  L615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == MULT && 1)
    goto L616;
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L4;
    }
  goto ret0;

  L616: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      ro[1] = x3;
      goto L617;
    }
  goto ret0;

  L617: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      ro[2] = x3;
      goto L618;
    }
  goto ret0;

  L618: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 76;
      }
  goto ret0;

  L4: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 0;
      }
  goto ret0;

  L629: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == MULT && 1)
    goto L630;
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L660;
    }
  goto ret0;

  L630: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      ro[1] = x3;
      goto L631;
    }
  goto ret0;

  L631: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      ro[2] = x3;
      goto L632;
    }
  goto ret0;

  L632: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 78;
      }
  goto ret0;

  L660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == MULT && 1)
    goto L661;
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 24;
      }
  goto ret0;

  L661: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      ro[2] = x3;
      goto L662;
    }
  goto ret0;

  L662: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      ro[3] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 82;
      }
  goto ret0;

  L271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L272;
    }
  goto ret0;

  L272: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    goto L278;
  goto ret0;

  L278: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && mips_cpu != PROCESSOR_R4300)
    return 49;
  L279: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && mips_cpu == PROCESSOR_R4300)
    return 50;
  goto ret0;

  L643: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == PLUS && 1)
    goto L644;
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 129;
      }
  goto ret0;

  L644: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode && GET_CODE (x3) == MULT && 1)
    goto L645;
  goto ret0;

  L645: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DFmode))
    {
      ro[1] = x4;
      goto L646;
    }
  goto ret0;

  L646: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, DFmode))
    {
      ro[2] = x4;
      goto L647;
    }
  goto ret0;

  L647: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DFmode))
    {
      ro[3] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 80;
      }
  goto ret0;

  L683: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == CONST_DOUBLE && const_float_1_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L938;
    }
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L674;
    }
  goto ret0;

  L938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == SQRT && 1)
    goto L939;
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && flag_fast_math)
	return 86;
      }
  goto ret0;

  L939: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DFmode))
    {
      ro[2] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT && flag_fast_math)
	return 117;
      }
  goto ret0;

  L674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 84;
      }
  goto ret0;

  L929: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && HAVE_SQRT_P() && TARGET_DOUBLE_FLOAT)
	return 115;
      }
  goto ret0;

  L957: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 121;
      }
  goto ret0;

  L1269: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 200;
      }
  goto ret0;

  L1321: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (nonimmediate_operand (x2, SImode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	    return 205;
	  }
      break;
    case DImode:
      if (se_nonimmediate_operand (x2, DImode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	    return 206;
	  }
    }
  goto ret0;

  L1436: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != PLUS)
    goto ret0;
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      goto L1437;
    case DImode:
      goto L1443;
    }
  goto ret0;

  L1437: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1438;
    }
  goto ret0;

  L1438: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 248;
      }
  goto ret0;

  L1443: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1444;
    }
  goto ret0;

  L1444: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 249;
      }
  goto ret0;

  L2728: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (equality_op (x2, VOIDmode))
    {
      ro[4] = x2;
      goto L2729;
    }
  L2736: ATTRIBUTE_UNUSED_LABEL
  if (equality_op (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L2737;
    }
  goto ret0;

  L2729: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2730;
    }
  goto L2736;

  L2730: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2731;
  goto L2736;

  L2731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      goto L2732;
    }
  x2 = XEXP (x1, 0);
  goto L2736;

  L2732: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 487;
      }
  x2 = XEXP (x1, 0);
  goto L2736;

  L2737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      ro[4] = x3;
      goto L2738;
    }
  goto ret0;

  L2738: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2739;
  goto ret0;

  L2739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L2740;
    }
  goto ret0;

  L2740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 488;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_2 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SFmode)
    goto ret0;
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L622;
    case MINUS:
      goto L636;
    case MULT:
      goto L283;
    case NEG:
      goto L651;
    case DIV:
      goto L688;
    case SQRT:
      goto L933;
    case ABS:
      goto L961;
    case FLOAT_TRUNCATE:
      goto L1147;
    case FLOAT:
      goto L1329;
    case MEM:
      goto L1424;
    case IF_THEN_ELSE:
      goto L2712;
    }
  goto ret0;

  L622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SFmode)
    goto ret0;
  if (GET_CODE (x2) == MULT && 1)
    goto L623;
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L9;
    }
  goto ret0;

  L623: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      ro[1] = x3;
      goto L624;
    }
  goto ret0;

  L624: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      ro[2] = x3;
      goto L625;
    }
  goto ret0;

  L625: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 77;
      }
  goto ret0;

  L9: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 1;
      }
  goto ret0;

  L636: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SFmode)
    goto ret0;
  if (GET_CODE (x2) == MULT && 1)
    goto L637;
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L667;
    }
  goto ret0;

  L637: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      ro[1] = x3;
      goto L638;
    }
  goto ret0;

  L638: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      ro[2] = x3;
      goto L639;
    }
  goto ret0;

  L639: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 79;
      }
  goto ret0;

  L667: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SFmode)
    goto ret0;
  if (GET_CODE (x2) == MULT && 1)
    goto L668;
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 25;
      }
  goto ret0;

  L668: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      ro[2] = x3;
      goto L669;
    }
  goto ret0;

  L669: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      ro[3] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 83;
      }
  goto ret0;

  L283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L284;
    }
  goto ret0;

  L284: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    goto L290;
  goto ret0;

  L290: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_HARD_FLOAT && mips_cpu != PROCESSOR_R4300)
    return 52;
  L291: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_HARD_FLOAT && mips_cpu == PROCESSOR_R4300)
    return 53;
  goto ret0;

  L651: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SFmode)
    goto ret0;
  if (GET_CODE (x2) == PLUS && 1)
    goto L652;
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 130;
      }
  goto ret0;

  L652: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode && GET_CODE (x3) == MULT && 1)
    goto L653;
  goto ret0;

  L653: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SFmode))
    {
      ro[1] = x4;
      goto L654;
    }
  goto ret0;

  L654: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SFmode))
    {
      ro[2] = x4;
      goto L655;
    }
  goto ret0;

  L655: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SFmode))
    {
      ro[3] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 81;
      }
  goto ret0;

  L688: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SFmode)
    goto ret0;
  if (GET_CODE (x2) == CONST_DOUBLE && const_float_1_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L944;
    }
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L679;
    }
  goto ret0;

  L944: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SFmode)
    goto ret0;
  if (GET_CODE (x2) == SQRT && 1)
    goto L945;
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && flag_fast_math)
	return 87;
      }
  goto ret0;

  L945: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SFmode))
    {
      ro[2] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && flag_fast_math)
	return 118;
      }
  goto ret0;

  L679: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 85;
      }
  goto ret0;

  L933: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && HAVE_SQRT_P())
	return 116;
      }
  goto ret0;

  L961: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 122;
      }
  goto ret0;

  L1147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 161;
      }
  goto ret0;

  L1329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (nonimmediate_operand (x2, SImode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT)
	    return 207;
	  }
      break;
    case DImode:
      if (se_nonimmediate_operand (x2, DImode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	    return 208;
	  }
    }
  goto ret0;

  L1424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != PLUS)
    goto ret0;
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      goto L1425;
    case DImode:
      goto L1431;
    }
  goto ret0;

  L1425: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1426;
    }
  goto ret0;

  L1426: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 246;
      }
  goto ret0;

  L1431: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1432;
    }
  goto ret0;

  L1432: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 247;
      }
  goto ret0;

  L2712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (equality_op (x2, VOIDmode))
    {
      ro[4] = x2;
      goto L2713;
    }
  L2720: ATTRIBUTE_UNUSED_LABEL
  if (equality_op (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L2721;
    }
  goto ret0;

  L2713: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2714;
    }
  goto L2720;

  L2714: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2715;
  goto L2720;

  L2715: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      goto L2716;
    }
  x2 = XEXP (x1, 0);
  goto L2720;

  L2716: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      ro[3] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 485;
      }
  x2 = XEXP (x1, 0);
  goto L2720;

  L2721: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      ro[4] = x3;
      goto L2722;
    }
  goto ret0;

  L2722: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2723;
  goto ret0;

  L2723: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L2724;
    }
  goto ret0;

  L2724: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 486;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_3 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SImode)
    goto ret0;
  switch (GET_CODE (x1))
    {
    default:
      break;
    case MINUS:
      goto L157;
    case MULT:
      goto L307;
    case PLUS:
      goto L364;
    case TRUNCATE:
      goto L1163;
    case DIV:
      goto L819;
    case MOD:
      goto L849;
    case UDIV:
      goto L879;
    case UMOD:
      goto L909;
    case ABS:
      goto L949;
    case FFS:
      goto L974;
    case NEG:
      goto L991;
    case NOT:
      goto L1014;
    case AND:
      goto L1026;
    case IOR:
      goto L1058;
    case XOR:
      goto L1085;
    case ZERO_EXTEND:
      goto L1181;
    case SIGN_EXTEND:
      goto L1253;
    case UNSPEC:
      if (XINT (x1, 1) == 0 && XVECLEN (x1, 0) == 1 && 1)
	goto L1337;
      break;
    case HIGH:
      goto L1353;
    case LO_SUM:
      goto L1357;
    case ASHIFT:
      goto L1721;
    case ASHIFTRT:
      goto L1817;
    case LSHIFTRT:
      goto L1913;
    case EQ:
      goto L2083;
    case NE:
      goto L2127;
    case GT:
      goto L2157;
    case GE:
      goto L2177;
    case LT:
      goto L2197;
    case LE:
      goto L2221;
    case GTU:
      goto L2265;
    case GEU:
      goto L2285;
    case LTU:
      goto L2305;
    case LEU:
      goto L2329;
    case IF_THEN_ELSE:
      goto L2664;
    }
  goto ret0;

  L157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (GET_CODE (x2) == REG && XINT (x2, 0) == 29 && 1)
    goto L158;
  L162: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L163;
    }
  goto ret0;

  L158: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[1] = x2;
      if (TARGET_MIPS16
   && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768))
	return 29;
      }
  x2 = XEXP (x1, 0);
  goto L162;

  L163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_MIPS16
   && (GET_CODE (operands[2]) != CONST_INT
       || (INTVAL (operands[2]) != -32768 && INTVAL (operands[2]) != -0x4000)))
	return 30;
      }
  goto ret0;

  L307: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L308;
    }
  goto ret0;

  L308: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (register_operand (x2, SImode))
    goto L324;
  L342: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != 0 && register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (mips_cpu == PROCESSOR_R4000 && !TARGET_MIPS16)
	{
	  *pnum_clobbers = 3;
	  return 57;
	}
      }
  goto ret0;

  L324: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x2;
      if (GENERATE_MULT3
   || TARGET_MAD)
	{
	  *pnum_clobbers = 3;
	  return 55;
	}
      }
  L325: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x2;
      if (mips_cpu != PROCESSOR_R4000 || TARGET_MIPS16)
	{
	  *pnum_clobbers = 2;
	  return 56;
	}
      }
  goto L342;

  L364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MULT && 1)
    goto L365;
  goto ret0;

  L365: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L366;
    }
  goto ret0;

  L366: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L367;
    }
  goto ret0;

  L367: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (TARGET_MIPS3900
   && !TARGET_MIPS16)
	{
	  *pnum_clobbers = 4;
	  return 58;
	}
      }
  L565: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, ro[0]) && pnum_clobbers != 0 && 1)
    if (TARGET_MAD)
      {
	*pnum_clobbers = 2;
	return 73;
      }
  goto ret0;

  L1163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case ASHIFTRT:
      goto L1164;
    case LSHIFTRT:
      goto L1170;
    case ASHIFT:
      goto L1176;
    }
  L490: ATTRIBUTE_UNUSED_LABEL
  if (highpart_shift_operator (x2, DImode))
    {
      ro[5] = x2;
      goto L491;
    }
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_64BIT)
	return 162;
      }
  goto ret0;

  L1164: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1165;
    }
  goto L490;

  L1165: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      if (TARGET_64BIT && !TARGET_MIPS16)
	return 165;
      }
  goto L490;

  L1170: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1171;
    }
  goto L490;

  L1171: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      if (TARGET_64BIT && !TARGET_MIPS16)
	return 166;
      }
  goto L490;

  L1176: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1177;
    }
  goto ret0;

  L1177: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      if (TARGET_64BIT)
	return 167;
      }
  goto ret0;

  L491: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == MULT && 1)
    goto L492;
  goto ret0;

  L492: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (extend_operator (x4, DImode))
    {
      ro[3] = x4;
      goto L493;
    }
  goto ret0;

  L493: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L494;
    }
  goto ret0;

  L494: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (extend_operator (x4, DImode))
    {
      ro[4] = x4;
      goto L495;
    }
  goto ret0;

  L495: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L496;
    }
  goto ret0;

  L496: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 32 && pnum_clobbers != 0 && 1)
    if (GET_CODE (operands[3]) == GET_CODE (operands[4]))
      {
	*pnum_clobbers = 2;
	return 70;
      }
  goto ret0;

  L819: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L820;
    }
  goto ret0;

  L820: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!optimize)
	{
	  *pnum_clobbers = 2;
	  return 100;
	}
      }
  goto ret0;

  L849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L850;
    }
  goto ret0;

  L850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!optimize)
	{
	  *pnum_clobbers = 2;
	  return 104;
	}
      }
  goto ret0;

  L879: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L880;
    }
  goto ret0;

  L880: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!optimize)
	{
	  *pnum_clobbers = 2;
	  return 108;
	}
      }
  goto ret0;

  L909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L910;
    }
  goto ret0;

  L910: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!optimize)
	{
	  *pnum_clobbers = 2;
	  return 112;
	}
      }
  goto ret0;

  L949: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      if (!TARGET_MIPS16)
	return 119;
      }
  goto ret0;

  L974: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (pnum_clobbers != 0 && register_operand (x2, SImode))
    {
      ro[1] = x2;
      if (!TARGET_MIPS16)
	{
	  *pnum_clobbers = 2;
	  return 123;
	}
      }
  goto ret0;

  L991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 125;
    }
  goto ret0;

  L1014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 131;
    }
  goto ret0;

  L1026: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (uns_arith_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1027;
    }
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (GET_CODE (x2) == NOT && 1)
    goto L1127;
  L1031: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1032;
    }
  goto ret0;

  L1027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!TARGET_MIPS16)
	return 135;
      }
  x2 = XEXP (x1, 0);
  goto L1031;

  L1127: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1128;
    }
  goto ret0;

  L1128: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NOT && 1)
    goto L1129;
  goto ret0;

  L1129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      if (!TARGET_MIPS16)
	return 158;
      }
  goto ret0;

  L1032: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_MIPS16)
	return 136;
      }
  goto ret0;

  L1058: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (uns_arith_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1059;
    }
  L1063: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1064;
    }
  goto ret0;

  L1059: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!TARGET_MIPS16)
	return 143;
      }
  x2 = XEXP (x1, 0);
  goto L1063;

  L1064: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_MIPS16)
	return 144;
      }
  goto ret0;

  L1085: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (uns_arith_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1086;
    }
  goto ret0;

  L1086: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    goto L1092;
  goto ret0;

  L1092: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (!TARGET_MIPS16)
    return 150;
  L1093: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_MIPS16)
    return 151;
  goto ret0;

  L1181: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case HImode:
      if (GET_CODE (x2) == TRUNCATE && 1)
	goto L1182;
      if (nonimmediate_operand (x2, HImode))
	{
	  ro[1] = x2;
	  if (!TARGET_MIPS16)
	    return 174;
	  }
    L1204: ATTRIBUTE_UNUSED_LABEL
      if (memory_operand (x2, HImode))
	{
	  ro[1] = x2;
	  if (TARGET_MIPS16)
	    return 175;
	  }
      break;
    case QImode:
      if (GET_CODE (x2) == TRUNCATE && 1)
	goto L1187;
      if (nonimmediate_operand (x2, QImode))
	{
	  ro[1] = x2;
	  if (!TARGET_MIPS16)
	    return 183;
	  }
    L1228: ATTRIBUTE_UNUSED_LABEL
      if (memory_operand (x2, QImode))
	{
	  ro[1] = x2;
	  if (TARGET_MIPS16)
	    return 184;
	  }
    }
  goto ret0;

  L1182: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      if (TARGET_64BIT && !TARGET_MIPS16)
	return 168;
      }
  goto ret0;

  L1187: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      if (TARGET_64BIT && !TARGET_MIPS16)
	return 169;
      }
  goto ret0;

  L1253: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case HImode:
      if (memory_operand (x2, HImode))
	{
	  ro[1] = x2;
	  return 193;
	}
      break;
    case QImode:
      if (memory_operand (x2, QImode))
	{
	  ro[1] = x2;
	  return 197;
	}
    }
  goto ret0;

  L1337: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, BLKmode))
    {
      ro[1] = x2;
      if (!TARGET_MIPS16)
	return 216;
      }
  goto ret0;

  L1353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (immediate_operand (x2, SImode))
    {
      ro[1] = x2;
      if (mips_split_addresses && !TARGET_MIPS16)
	return 220;
      }
  goto ret0;

  L1357: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1358;
    }
  goto ret0;

  L1358: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      ro[2] = x2;
      if (mips_split_addresses && !TARGET_MIPS16)
	return 221;
      }
  goto ret0;

  L1721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1722;
    }
  goto ret0;

  L1722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    goto L1728;
  goto ret0;

  L1728: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (!TARGET_MIPS16)
    return 286;
  L1729: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_MIPS16)
    return 287;
  goto ret0;

  L1817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1818;
    }
  goto ret0;

  L1818: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    goto L1824;
  goto ret0;

  L1824: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (!TARGET_MIPS16)
    return 301;
  L1825: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_MIPS16)
    return 302;
  goto ret0;

  L1913: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1914;
    }
  L1930: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1931;
    }
  goto ret0;

  L1914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    goto L1920;
  x2 = XEXP (x1, 0);
  goto L1930;

  L1920: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (!TARGET_MIPS16)
    return 316;
  L1921: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_MIPS16)
    return 317;
  x2 = XEXP (x1, 0);
  goto L1930;

  L1931: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_MIPS16)
	return 319;
      }
  goto ret0;

  L2083: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2084;
    }
  goto ret0;

  L2084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    goto L2090;
  L2108: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_MIPS16)
	return 361;
      }
  goto ret0;

  L2090: ATTRIBUTE_UNUSED_LABEL
  if (!TARGET_MIPS16)
    return 357;
  L2091: ATTRIBUTE_UNUSED_LABEL
  if (TARGET_MIPS16)
    return 358;
  goto L2108;

  L2127: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2128;
    }
  goto ret0;

  L2128: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    if (!TARGET_MIPS16)
      return 366;
  L2138: ATTRIBUTE_UNUSED_LABEL
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_MIPS16)
	return 368;
      }
  goto ret0;

  L2157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2158;
    }
  goto ret0;

  L2158: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!TARGET_MIPS16)
	return 373;
      }
  L2163: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_MIPS16)
	return 374;
      }
  goto ret0;

  L2177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2178;
    }
  goto ret0;

  L2178: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_MIPS16)
	return 378;
      }
  goto ret0;

  L2197: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2198;
    }
  goto ret0;

  L2198: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    goto L2204;
  goto ret0;

  L2204: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (!TARGET_MIPS16)
    return 383;
  L2205: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_MIPS16)
    return 384;
  goto ret0;

  L2221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2246;
    }
  goto ret0;

  L2246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_MIPS16)
	return 392;
      }
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    goto L2228;
  goto ret0;

  L2228: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (!TARGET_MIPS16 && INTVAL (operands[2]) < 32767)
    return 388;
  L2229: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_MIPS16 && INTVAL (operands[2]) < 32767)
    return 389;
  goto ret0;

  L2265: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2266;
    }
  goto ret0;

  L2266: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[2] = x2;
      return 397;
    }
  L2271: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      return 398;
    }
  goto ret0;

  L2285: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2286;
    }
  goto ret0;

  L2286: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_MIPS16)
	return 402;
      }
  goto ret0;

  L2305: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2306;
    }
  goto ret0;

  L2306: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    goto L2312;
  goto ret0;

  L2312: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (!TARGET_MIPS16)
    return 407;
  L2313: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_MIPS16)
    return 408;
  goto ret0;

  L2329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2354;
    }
  goto ret0;

  L2354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_MIPS16)
	return 416;
      }
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    goto L2336;
  goto ret0;

  L2336: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (!TARGET_MIPS16 && INTVAL (operands[2]) < 32767)
    return 412;
  L2337: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_MIPS16 && INTVAL (operands[2]) < 32767)
    return 413;
  goto ret0;

  L2664: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (equality_op (x2, VOIDmode))
    {
      ro[4] = x2;
      goto L2665;
    }
  L2680: ATTRIBUTE_UNUSED_LABEL
  if (equality_op (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L2681;
    }
  goto ret0;

  L2665: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case SImode:
      if (register_operand (x3, SImode))
	{
	  ro[1] = x3;
	  goto L2666;
	}
      break;
    case DImode:
      if (se_register_operand (x3, DImode))
	{
	  ro[1] = x3;
	  goto L2674;
	}
    }
  goto L2680;

  L2666: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2667;
  goto L2680;

  L2667: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L2668;
    }
  x2 = XEXP (x1, 0);
  goto L2680;

  L2668: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[3] = x2;
      if (mips_isa >= 4)
	return 479;
      }
  x2 = XEXP (x1, 0);
  goto L2680;

  L2674: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2675;
  goto L2680;

  L2675: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L2676;
    }
  x2 = XEXP (x1, 0);
  goto L2680;

  L2676: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[3] = x2;
      if (mips_isa >= 4)
	return 480;
      }
  x2 = XEXP (x1, 0);
  goto L2680;

  L2681: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      ro[4] = x3;
      goto L2682;
    }
  goto ret0;

  L2682: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2683;
  goto ret0;

  L2683: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2684;
    }
  goto ret0;

  L2684: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[2] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 481;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_4 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DImode)
    goto ret0;
  switch (GET_CODE (x1))
    {
    default:
      break;
    case MINUS:
      goto L239;
    case SIGN_EXTEND:
      goto L259;
    case MULT:
      goto L413;
    case TRUNCATE:
      goto L515;
    case PLUS:
      goto L581;
    case DIV:
      goto L834;
    case MOD:
      goto L864;
    case UDIV:
      goto L894;
    case UMOD:
      goto L924;
    case ABS:
      goto L953;
    case FFS:
      goto L987;
    case NEG:
      goto L1002;
    case NOT:
      goto L1018;
    case AND:
      goto L1133;
    case IOR:
      goto L1068;
    case XOR:
      goto L1097;
    case ZERO_EXTEND:
      goto L1196;
    case UNSPEC:
      if (XINT (x1, 1) == 0 && XVECLEN (x1, 0) == 1 && 1)
	goto L1345;
      break;
    case ASHIFT:
      goto L1800;
    case ASHIFTRT:
      goto L1896;
    case LSHIFTRT:
      goto L2002;
    case EQ:
      goto L2095;
    case NE:
      goto L2132;
    case GT:
      goto L2167;
    case GE:
      goto L2187;
    case LT:
      goto L2209;
    case LE:
      goto L2233;
    case GTU:
      goto L2275;
    case GEU:
      goto L2295;
    case LTU:
      goto L2317;
    case LEU:
      goto L2341;
    case IF_THEN_ELSE:
      goto L2688;
    }
  goto ret0;

  L239: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  if (GET_CODE (x2) == REG && XINT (x2, 0) == 29 && 1)
    goto L240;
  L244: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L245;
    }
  goto ret0;

  L240: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_MIPS16
   && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768))
	return 42;
      }
  x2 = XEXP (x1, 0);
  goto L244;

  L245: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_MIPS16
   && (GET_CODE (operands[2]) != CONST_INT
       || (INTVAL (operands[2]) != -32768 && INTVAL (operands[2]) != -0x4000)))
	return 43;
      }
  goto ret0;

  L259: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      switch (GET_CODE (x2))
	{
	default:
	  break;
	case MINUS:
	  goto L260;
	case SUBREG:
	  if (XINT (x2, 1) == 0 && 1)
	    goto L1237;
	}
    L1245: ATTRIBUTE_UNUSED_LABEL
      if (nonimmediate_operand (x2, SImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 189;
	  }
      break;
    case HImode:
      if (memory_operand (x2, HImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 191;
	  }
      break;
    case QImode:
      if (memory_operand (x2, QImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 199;
	  }
    }
  goto ret0;

  L260: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L261;
    }
  L266: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L267;
    }
  goto ret0;

  L261: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      ro[2] = x3;
      if (TARGET_64BIT && !TARGET_MIPS16
   && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768))
	return 46;
      }
  x3 = XEXP (x2, 0);
  goto L266;

  L267: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      ro[2] = x3;
      if (TARGET_64BIT && TARGET_MIPS16
   && (GET_CODE (operands[2]) != CONST_INT
       || (INTVAL (operands[2]) != -32768 && INTVAL (operands[2]) != -0x4000)))
	return 47;
      }
  goto ret0;

  L1237: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, HImode))
    {
      ro[1] = x3;
      if (TARGET_64BIT)
	return 187;
      }
  goto L1245;

  L413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L414;
    }
  L447: ATTRIBUTE_UNUSED_LABEL
  if (extend_operator (x2, DImode))
    {
      ro[3] = x2;
      goto L448;
    }
  goto ret0;

  L414: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    goto L432;
  x2 = XEXP (x1, 0);
  goto L447;

  L432: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x2;
      if (TARGET_64BIT && mips_cpu != PROCESSOR_R4000 && !TARGET_MIPS16)
	{
	  *pnum_clobbers = 2;
	  return 62;
	}
      }
  L433: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x2;
      if (TARGET_64BIT && (GENERATE_MULT3 || mips_cpu == PROCESSOR_R4000 || TARGET_MIPS16))
	{
	  *pnum_clobbers = 3;
	  return 63;
	}
      }
  x2 = XEXP (x1, 0);
  goto L447;

  L448: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L449;
    }
  goto ret0;

  L449: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (extend_operator (x2, DImode))
    {
      ro[4] = x2;
      goto L450;
    }
  goto ret0;

  L450: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    goto L470;
  goto ret0;

  L470: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x3;
      if (!TARGET_64BIT && GET_CODE (operands[3]) == GET_CODE (operands[4]))
	{
	  *pnum_clobbers = 1;
	  return 66;
	}
      }
  L471: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x3;
      if (TARGET_64BIT && GET_CODE (operands[3]) == GET_CODE (operands[4]))
	{
	  *pnum_clobbers = 2;
	  return 67;
	}
      }
  goto ret0;

  L515: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode && GET_CODE (x2) == LSHIFTRT && 1)
    goto L516;
  goto ret0;

  L516: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode && GET_CODE (x3) == MULT && 1)
    goto L517;
  goto ret0;

  L517: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != TImode)
    goto ret0;
  switch (GET_CODE (x4))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L518;
    case ZERO_EXTEND:
      goto L543;
    }
  goto ret0;

  L518: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (se_register_operand (x5, DImode))
    {
      ro[1] = x5;
      goto L519;
    }
  goto ret0;

  L519: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode && GET_CODE (x4) == SIGN_EXTEND && 1)
    goto L520;
  goto ret0;

  L520: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (se_register_operand (x5, DImode))
    {
      ro[2] = x5;
      goto L521;
    }
  goto ret0;

  L521: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 64 && pnum_clobbers != 0 && 1)
    if (TARGET_64BIT)
      {
	*pnum_clobbers = 2;
	return 71;
      }
  goto ret0;

  L543: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (se_register_operand (x5, DImode))
    {
      ro[1] = x5;
      goto L544;
    }
  goto ret0;

  L544: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == TImode && GET_CODE (x4) == ZERO_EXTEND && 1)
    goto L545;
  goto ret0;

  L545: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (se_register_operand (x5, DImode))
    {
      ro[2] = x5;
      goto L546;
    }
  goto ret0;

  L546: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 64 && pnum_clobbers != 0 && 1)
    if (TARGET_64BIT)
      {
	*pnum_clobbers = 2;
	return 72;
      }
  goto ret0;

  L581: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == MULT && 1)
    goto L582;
  goto ret0;

  L582: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (extend_operator (x3, DImode))
    {
      ro[3] = x3;
      goto L583;
    }
  goto ret0;

  L583: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L584;
    }
  goto ret0;

  L584: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (extend_operator (x3, DImode))
    {
      ro[4] = x3;
      goto L585;
    }
  goto ret0;

  L585: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L586;
    }
  goto ret0;

  L586: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L610;
  goto ret0;

  L610: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != 0 && 1)
    if (TARGET_MAD
   && ! TARGET_64BIT
   && GET_CODE (operands[3]) == GET_CODE (operands[4]))
      {
	*pnum_clobbers = 1;
	return 74;
      }
  L611: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != 0 && 1)
    if (TARGET_MAD
   && TARGET_64BIT
   && GET_CODE (operands[3]) == GET_CODE (operands[4]))
      {
	*pnum_clobbers = 2;
	return 75;
      }
  goto ret0;

  L834: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L835;
    }
  goto ret0;

  L835: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && se_nonmemory_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && !optimize)
	{
	  *pnum_clobbers = 2;
	  return 102;
	}
      }
  goto ret0;

  L864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L865;
    }
  goto ret0;

  L865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && se_nonmemory_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && !optimize)
	{
	  *pnum_clobbers = 2;
	  return 106;
	}
      }
  goto ret0;

  L894: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L895;
    }
  goto ret0;

  L895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && se_nonmemory_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && !optimize)
	{
	  *pnum_clobbers = 2;
	  return 110;
	}
      }
  goto ret0;

  L924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L925;
    }
  goto ret0;

  L925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && se_nonmemory_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && !optimize)
	{
	  *pnum_clobbers = 2;
	  return 114;
	}
      }
  goto ret0;

  L953: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_64BIT && !TARGET_MIPS16)
	return 120;
      }
  goto ret0;

  L987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (pnum_clobbers != 0 && se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_64BIT && !TARGET_MIPS16)
	{
	  *pnum_clobbers = 2;
	  return 124;
	}
      }
  goto ret0;

  L1002: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_64BIT && !TARGET_MIPS16)
	return 128;
      }
  goto ret0;

  L1018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      return 132;
    }
  goto ret0;

  L1133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  if (GET_CODE (x2) == NOT && 1)
    goto L1134;
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1037;
    }
  goto ret0;

  L1134: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1135;
    }
  goto ret0;

  L1135: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == NOT && 1)
    goto L1136;
  goto ret0;

  L1136: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      if (!TARGET_MIPS16)
	return 159;
      }
  goto ret0;

  L1037: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_register_operand (x2, DImode))
    goto L1043;
  L1054: ATTRIBUTE_UNUSED_LABEL
  if (se_uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && !TARGET_MIPS16)
	return 141;
      }
  goto ret0;

  L1043: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if ((TARGET_64BIT || !TARGET_DEBUG_G_MODE) && !TARGET_MIPS16)
    return 138;
  L1044: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if ((TARGET_64BIT || !TARGET_DEBUG_G_MODE) && TARGET_MIPS16)
    return 139;
  goto L1054;

  L1068: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1069;
    }
  goto ret0;

  L1069: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_register_operand (x2, DImode))
    goto L1075;
  goto ret0;

  L1075: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if ((TARGET_64BIT || !TARGET_DEBUG_G_MODE) && !TARGET_MIPS16)
    return 146;
  L1076: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if ((TARGET_64BIT || !TARGET_DEBUG_G_MODE) && TARGET_MIPS16)
    return 147;
  goto ret0;

  L1097: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1098;
    }
  goto ret0;

  L1098: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_register_operand (x2, DImode))
    goto L1104;
  L1110: ATTRIBUTE_UNUSED_LABEL
  if (se_uns_arith_operand (x2, DImode))
    goto L1121;
  goto ret0;

  L1104: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if ((TARGET_64BIT || !TARGET_DEBUG_G_MODE) && !TARGET_MIPS16)
    return 153;
  L1105: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (!TARGET_64BIT && TARGET_MIPS16)
    return 154;
  goto L1110;

  L1121: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_64BIT && TARGET_MIPS16)
    return 155;
  L1122: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_64BIT && !TARGET_MIPS16)
    return 157;
  goto ret0;

  L1196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (memory_operand (x2, SImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT)
	    return 172;
	  }
      break;
    case HImode:
      if (nonimmediate_operand (x2, HImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT && !TARGET_MIPS16)
	    return 177;
	  }
    L1212: ATTRIBUTE_UNUSED_LABEL
      if (memory_operand (x2, HImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT && TARGET_MIPS16)
	    return 178;
	  }
      break;
    case QImode:
      if (nonimmediate_operand (x2, QImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT && !TARGET_MIPS16)
	    return 186;
	  }
    L1241: ATTRIBUTE_UNUSED_LABEL
      if (memory_operand (x2, QImode))
	{
	  ro[1] = x2;
	  if (TARGET_64BIT && TARGET_MIPS16)
	    return 188;
	  }
    }
  goto ret0;

  L1345: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (general_operand (x2, BLKmode))
    {
      ro[1] = x2;
      return 218;
    }
  goto ret0;

  L1800: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1801;
    }
  goto ret0;

  L1801: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    goto L1807;
  goto ret0;

  L1807: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_64BIT && !TARGET_MIPS16)
    return 297;
  L1808: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_64BIT && TARGET_MIPS16)
    return 298;
  goto ret0;

  L1896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1897;
    }
  goto ret0;

  L1897: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    goto L1903;
  goto ret0;

  L1903: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_64BIT && !TARGET_MIPS16)
    return 312;
  L1904: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_64BIT && TARGET_MIPS16)
    return 313;
  goto ret0;

  L2002: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2003;
    }
  goto ret0;

  L2003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    goto L2009;
  goto ret0;

  L2009: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_64BIT && !TARGET_MIPS16)
    return 329;
  L2010: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_64BIT && TARGET_MIPS16)
    return 330;
  goto ret0;

  L2095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2096;
    }
  goto ret0;

  L2096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    goto L2102;
  L2118: ATTRIBUTE_UNUSED_LABEL
  if (se_uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_MIPS16)
	return 363;
      }
  goto ret0;

  L2102: ATTRIBUTE_UNUSED_LABEL
  if (TARGET_64BIT && !TARGET_MIPS16)
    return 359;
  L2103: ATTRIBUTE_UNUSED_LABEL
  if (TARGET_64BIT && TARGET_MIPS16)
    return 360;
  goto L2118;

  L2132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2133;
    }
  goto ret0;

  L2133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    if (TARGET_64BIT && !TARGET_MIPS16)
      return 367;
  L2148: ATTRIBUTE_UNUSED_LABEL
  if (se_uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_MIPS16)
	return 370;
      }
  goto ret0;

  L2167: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2168;
    }
  goto ret0;

  L2168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && !TARGET_MIPS16)
	return 375;
      }
  L2173: ATTRIBUTE_UNUSED_LABEL
  if (se_register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_MIPS16)
	return 376;
      }
  goto ret0;

  L2187: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2188;
    }
  goto ret0;

  L2188: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_MIPS16)
	return 380;
      }
  goto ret0;

  L2209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2210;
    }
  goto ret0;

  L2210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_arith_operand (x2, DImode))
    goto L2216;
  goto ret0;

  L2216: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_64BIT && !TARGET_MIPS16)
    return 385;
  L2217: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_64BIT && TARGET_MIPS16)
    return 386;
  goto ret0;

  L2233: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2256;
    }
  goto ret0;

  L2256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_MIPS16)
	return 394;
      }
  if (GET_CODE (x2) == CONST_INT && small_int (x2, DImode))
    goto L2240;
  goto ret0;

  L2240: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) < 32767)
    return 390;
  L2241: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_64BIT && TARGET_MIPS16 && INTVAL (operands[2]) < 32767)
    return 391;
  goto ret0;

  L2275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2276;
    }
  goto ret0;

  L2276: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 399;
      }
  L2281: ATTRIBUTE_UNUSED_LABEL
  if (se_register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT)
	return 400;
      }
  goto ret0;

  L2295: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2296;
    }
  goto ret0;

  L2296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_MIPS16)
	return 404;
      }
  goto ret0;

  L2317: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2318;
    }
  goto ret0;

  L2318: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_arith_operand (x2, DImode))
    goto L2324;
  goto ret0;

  L2324: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_64BIT && !TARGET_MIPS16)
    return 409;
  L2325: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_64BIT && TARGET_MIPS16)
    return 410;
  goto ret0;

  L2341: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2364;
    }
  goto ret0;

  L2364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_MIPS16)
	return 418;
      }
  if (GET_CODE (x2) == CONST_INT && small_int (x2, DImode))
    goto L2348;
  goto ret0;

  L2348: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_64BIT && !TARGET_MIPS16 && INTVAL (operands[2]) < 32767)
    return 414;
  L2349: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_64BIT && TARGET_MIPS16 && INTVAL (operands[2]) < 32767)
    return 415;
  goto ret0;

  L2688: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (equality_op (x2, VOIDmode))
    {
      ro[4] = x2;
      goto L2689;
    }
  L2704: ATTRIBUTE_UNUSED_LABEL
  if (equality_op (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L2705;
    }
  goto ret0;

  L2689: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case SImode:
      if (register_operand (x3, SImode))
	{
	  ro[1] = x3;
	  goto L2690;
	}
      break;
    case DImode:
      if (se_register_operand (x3, DImode))
	{
	  ro[1] = x3;
	  goto L2698;
	}
    }
  goto L2704;

  L2690: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2691;
  goto L2704;

  L2691: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[2] = x2;
      goto L2692;
    }
  x2 = XEXP (x1, 0);
  goto L2704;

  L2692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[3] = x2;
      if (mips_isa >= 4)
	return 482;
      }
  x2 = XEXP (x1, 0);
  goto L2704;

  L2698: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2699;
  goto L2704;

  L2699: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[2] = x2;
      goto L2700;
    }
  x2 = XEXP (x1, 0);
  goto L2704;

  L2700: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[3] = x2;
      if (mips_isa >= 4)
	return 483;
      }
  x2 = XEXP (x1, 0);
  goto L2704;

  L2705: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      ro[4] = x3;
      goto L2706;
    }
  goto ret0;

  L2706: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2707;
  goto ret0;

  L2707: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2708;
    }
  goto ret0;

  L2708: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[2] = x2;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 484;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_5 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L2;
	}
    L1515: ATTRIBUTE_UNUSED_LABEL
      if (nonimmediate_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L1516;
	}
      break;
    case SFmode:
      if (GET_CODE (x1) == MEM && 1)
	goto L1447;
      if (register_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  goto L7;
	}
    L1504: ATTRIBUTE_UNUSED_LABEL
      if (nonimmediate_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  goto L1505;
	}
      break;
    case SImode:
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L12;
	}
    L16: ATTRIBUTE_UNUSED_LABEL
      if (GET_CODE (x1) == REG && XINT (x1, 0) == 29 && 1)
	goto L17;
    L21: ATTRIBUTE_UNUSED_LABEL
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L22;
	}
      break;
    case DImode:
      if (register_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L94;
	}
    L98: ATTRIBUTE_UNUSED_LABEL
      if (GET_CODE (x1) == REG && XINT (x1, 0) == 29 && 1)
	goto L99;
    L103: ATTRIBUTE_UNUSED_LABEL
      if (register_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L104;
	}
    }
  L150: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      if (GET_CODE (x1) == REG && XINT (x1, 0) == 29 && 1)
	goto L151;
    L155: ATTRIBUTE_UNUSED_LABEL
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L156;
	}
    L1280: ATTRIBUTE_UNUSED_LABEL
      if (general_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L1281;
	}
    L1391: ATTRIBUTE_UNUSED_LABEL
      if (memory_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L1392;
	}
    L1394: ATTRIBUTE_UNUSED_LABEL
      if (nonimmediate_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L1395;
	}
    L2760: ATTRIBUTE_UNUSED_LABEL
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L2761;
	}
      break;
    case DImode:
    L232: ATTRIBUTE_UNUSED_LABEL
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case REG:
	  if (XINT (x1, 0) == 29 && 1)
	    goto L233;
	  if (XINT (x1, 0) == 28 && 1)
	    goto L1543;
	}
    L237: ATTRIBUTE_UNUSED_LABEL
      if (register_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L238;
	}
    L1304: ATTRIBUTE_UNUSED_LABEL
      if (general_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L1305;
	}
    L1360: ATTRIBUTE_UNUSED_LABEL
      if (memory_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L1361;
	}
    L1363: ATTRIBUTE_UNUSED_LABEL
      if (nonimmediate_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L1364;
	}
    L2763: ATTRIBUTE_UNUSED_LABEL
      if (register_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L2764;
	}
      break;
    case HImode:
      if (register_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L1154;
	}
    L1470: ATTRIBUTE_UNUSED_LABEL
      if (nonimmediate_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L1471;
	}
      break;
    case QImode:
      if (register_operand (x1, QImode))
	{
	  ro[0] = x1;
	  goto L1158;
	}
    L1487: ATTRIBUTE_UNUSED_LABEL
      if (nonimmediate_operand (x1, QImode))
	{
	  ro[0] = x1;
	  goto L1488;
	}
      break;
    case BLKmode:
      if (memory_operand (x1, BLKmode))
	{
	  ro[0] = x1;
	  goto L1340;
	}
      break;
    case CCmode:
      if (nonimmediate_operand (x1, CCmode))
	{
	  ro[0] = x1;
	  goto L1420;
	}
    L2371: ATTRIBUTE_UNUSED_LABEL
      if (register_operand (x1, CCmode))
	{
	  ro[0] = x1;
	  goto L2372;
	}
      break;
    case DFmode:
    L1458: ATTRIBUTE_UNUSED_LABEL
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case MEM:
	  goto L1459;
	}
    }
  if (GET_CODE (x1) == PC && 1)
    goto L2430;
  L2509: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, VOIDmode))
    {
      ro[0] = x1;
      goto L2510;
    }
  goto ret0;
 L2: ATTRIBUTE_UNUSED_LABEL
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L1515;

  L1516: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DFmode))
    goto L1520;
  L1524: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, DFmode))
    goto L1528;
  x1 = XEXP (x0, 0);
  goto L1458;

  L1520: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (TARGET_HARD_FLOAT && !(TARGET_FLOAT64 && !TARGET_64BIT)
   && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (DFmode)))
    return 269;
  L1521: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (TARGET_HARD_FLOAT && (TARGET_FLOAT64 && !TARGET_64BIT)
   && TARGET_DOUBLE_FLOAT
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)
       || (GET_CODE (operands [0]) == MEM
	   && ((GET_CODE (operands[1]) == CONST_INT
		&& INTVAL (operands[1]) == 0)
	       || operands[1] == CONST0_RTX (DFmode)))))
    return 270;
  goto L1524;

  L1528: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if ((TARGET_SOFT_FLOAT || TARGET_SINGLE_FLOAT) && !TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (DFmode)))
    return 271;
  L1529: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (TARGET_MIPS16
   && (register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    return 272;
  x1 = XEXP (x0, 0);
  goto L1458;

  L1447: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != PLUS)
    {
    goto L1504;
    }
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      goto L1448;
    case DImode:
      goto L1454;
    }
  goto L1504;

  L1448: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1449;
    }
  goto L1504;

  L1449: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1450;
    }
  goto L1504;

  L1450: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      ro[0] = x1;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 250;
      }
  x1 = XEXP (x0, 0);
  goto L1504;

  L1454: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1455;
    }
  goto L1504;

  L1455: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L1456;
    }
  goto L1504;

  L1456: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, SFmode))
    {
      ro[0] = x1;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 251;
      }
  x1 = XEXP (x0, 0);
  goto L1504;
 L7: ATTRIBUTE_UNUSED_LABEL
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L1504;

  L1505: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SFmode))
    goto L1509;
  L1513: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, SFmode))
    {
      ro[1] = x1;
      if (TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)))
	return 267;
      }
  x1 = XEXP (x0, 0);
  goto L2509;

  L1509: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (TARGET_HARD_FLOAT
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (SFmode)))
    return 265;
  L1510: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (TARGET_SOFT_FLOAT && !TARGET_MIPS16
   && (register_operand (operands[0], SFmode)
       || register_operand (operands[1], SFmode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (SFmode)))
    return 266;
  goto L1513;

  L12: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode && GET_CODE (x1) == PLUS && 1)
    goto L13;
  x1 = XEXP (x0, 0);
  goto L16;

  L13: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L14;
    }
  x1 = XEXP (x0, 0);
  goto L16;

  L14: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (! TARGET_MIPS16
   && (TARGET_GAS
       || GET_CODE (operands[2]) != CONST_INT
       || INTVAL (operands[2]) != -32768))
	return 3;
      }
  x1 = XEXP (x0, 0);
  goto L16;

  L17: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode && GET_CODE (x1) == PLUS && 1)
    goto L18;
  x1 = XEXP (x0, 0);
  goto L21;

  L18: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 29 && 1)
    goto L19;
  x1 = XEXP (x0, 0);
  goto L21;

  L19: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[0] = x2;
      if (TARGET_MIPS16)
	return 4;
      }
  x1 = XEXP (x0, 0);
  goto L21;

  L22: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L150;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L23;
    case MINUS:
      goto L147;
    }
  x1 = XEXP (x0, 0);
  goto L150;

  L23: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L150;
    }
  if (GET_CODE (x2) == REG && XINT (x2, 0) == 29 && 1)
    goto L24;
  L28: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L29;
    }
  x1 = XEXP (x0, 0);
  goto L150;

  L24: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[1] = x2;
      if (TARGET_MIPS16)
	return 5;
      }
  x2 = XEXP (x1, 0);
  goto L28;

  L29: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_MIPS16
   && (GET_CODE (operands[1]) != REG
       || REGNO (operands[1]) >= FIRST_PSEUDO_REGISTER
       || M16_REG_P (REGNO (operands[1]))
       || REGNO (operands[1]) == ARG_POINTER_REGNUM
       || REGNO (operands[1]) == FRAME_POINTER_REGNUM
       || REGNO (operands[1]) == STACK_POINTER_REGNUM)
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) >= FIRST_PSEUDO_REGISTER
       || M16_REG_P (REGNO (operands[2]))
       || REGNO (operands[2]) == ARG_POINTER_REGNUM
       || REGNO (operands[2]) == FRAME_POINTER_REGNUM
       || REGNO (operands[2]) == STACK_POINTER_REGNUM))
	return 6;
      }
  x1 = XEXP (x0, 0);
  goto L150;

  L147: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L148;
    }
  x1 = XEXP (x0, 0);
  goto L150;

  L148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (!TARGET_MIPS16
   && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768))
	return 27;
      }
  x1 = XEXP (x0, 0);
  goto L150;

  L94: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode && GET_CODE (x1) == PLUS && 1)
    goto L95;
  x1 = XEXP (x0, 0);
  goto L98;

  L95: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L96;
    }
  x1 = XEXP (x0, 0);
  goto L98;

  L96: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT
   && !TARGET_MIPS16
   && (TARGET_GAS
       || GET_CODE (operands[2]) != CONST_INT
       || INTVAL (operands[2]) != -32768))
	return 16;
      }
  x1 = XEXP (x0, 0);
  goto L98;

  L99: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode && GET_CODE (x1) == PLUS && 1)
    goto L100;
  x1 = XEXP (x0, 0);
  goto L103;

  L100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == REG && XINT (x2, 0) == 29 && 1)
    goto L101;
  x1 = XEXP (x0, 0);
  goto L103;

  L101: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, DImode))
    {
      ro[0] = x2;
      if (TARGET_MIPS16 && TARGET_64BIT)
	return 17;
      }
  x1 = XEXP (x0, 0);
  goto L103;

  L104: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DImode)
    {
      x1 = XEXP (x0, 0);
      goto L232;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L105;
    case SIGN_EXTEND:
      goto L125;
    case MINUS:
      goto L229;
    }
  x1 = XEXP (x0, 0);
  goto L232;

  L105: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    {
      x1 = XEXP (x0, 0);
      goto L232;
    }
  if (GET_CODE (x2) == REG && XINT (x2, 0) == 29 && 1)
    goto L106;
  L110: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L111;
    }
  x1 = XEXP (x0, 0);
  goto L232;

  L106: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_MIPS16 && TARGET_64BIT)
	return 18;
      }
  x2 = XEXP (x1, 0);
  goto L110;

  L111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_MIPS16 && TARGET_64BIT
   && (GET_CODE (operands[1]) != REG
       || REGNO (operands[1]) >= FIRST_PSEUDO_REGISTER
       || M16_REG_P (REGNO (operands[1]))
       || REGNO (operands[1]) == ARG_POINTER_REGNUM
       || REGNO (operands[1]) == FRAME_POINTER_REGNUM
       || REGNO (operands[1]) == STACK_POINTER_REGNUM)
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) >= FIRST_PSEUDO_REGISTER
       || M16_REG_P (REGNO (operands[2]))
       || REGNO (operands[2]) == ARG_POINTER_REGNUM
       || REGNO (operands[2]) == FRAME_POINTER_REGNUM
       || REGNO (operands[2]) == STACK_POINTER_REGNUM))
	return 19;
      }
  x1 = XEXP (x0, 0);
  goto L232;

  L125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L126;
  x1 = XEXP (x0, 0);
  goto L232;

  L126: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (reg_or_0_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L127;
    }
  L132: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L133;
    }
  x1 = XEXP (x0, 0);
  goto L232;

  L127: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      ro[2] = x3;
      if (TARGET_64BIT
   && !TARGET_MIPS16
   && (TARGET_GAS
       || GET_CODE (operands[2]) != CONST_INT
       || INTVAL (operands[2]) != -32768))
	return 22;
      }
  x3 = XEXP (x2, 0);
  goto L132;

  L133: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arith_operand (x3, SImode))
    {
      ro[2] = x3;
      if (TARGET_MIPS16 && TARGET_64BIT)
	return 23;
      }
  x1 = XEXP (x0, 0);
  goto L232;

  L229: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_reg_or_0_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L230;
    }
  x1 = XEXP (x0, 0);
  goto L232;

  L230: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && !TARGET_MIPS16
   && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768))
	return 40;
      }
  x1 = XEXP (x0, 0);
  goto L232;

  L151: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode && GET_CODE (x1) == MINUS && 1)
    goto L152;
  x1 = XEXP (x0, 0);
  goto L155;

  L152: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 29 && 1)
    goto L153;
  x1 = XEXP (x0, 0);
  goto L155;

  L153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[0] = x2;
      if (TARGET_MIPS16
   && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768))
	return 28;
      }
  x1 = XEXP (x0, 0);
  goto L155;
 L156: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L1280;

  L1281: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode && GET_CODE (x1) == FIX && 1)
    goto L1282;
  x1 = XEXP (x0, 0);
  goto L1391;

  L1282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (pnum_clobbers != 0 && register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	    {
	      *pnum_clobbers = 2;
	      return 201;
	    }
	  }
      break;
    case SFmode:
      if (pnum_clobbers != 0 && register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT)
	    {
	      *pnum_clobbers = 2;
	      return 202;
	    }
	  }
    }
  x1 = XEXP (x0, 0);
  goto L1391;

  L1392: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode && GET_CODE (x1) == REG && XINT (x1, 0) == 31 && 1)
    if (TARGET_MIPS16)
      return 234;
  x1 = XEXP (x0, 0);
  goto L1394;

  L1395: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (move_operand (x1, SImode))
    goto L1399;
  L1403: ATTRIBUTE_UNUSED_LABEL
  if (move_operand (x1, SImode))
    {
      ro[1] = x1;
      if (TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)
       || (GET_CODE (operands[0]) == MEM
	   && GET_CODE (XEXP (operands[0], 0)) == PLUS
	   && GET_CODE (XEXP (XEXP (operands[0], 0), 1)) == CONST
	   && mips16_gp_offset_p (XEXP (XEXP (operands[0], 0), 1))
	   && GET_CODE (operands[1]) == CONST_INT
	   && (SMALL_INT (operands[1])
	       || SMALL_INT_UNSIGNED (operands[1])))))
	return 237;
      }
  x1 = XEXP (x0, 0);
  goto L2760;

  L1399: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (TARGET_DEBUG_H_MODE && !TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 235;
  L1400: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (!TARGET_DEBUG_H_MODE && !TARGET_MIPS16
   && (register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 236;
  goto L1403;

  L2761: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (address_operand (x1, SImode))
    {
      ro[1] = x1;
      if (Pmode == SImode)
	return 506;
      }
  x1 = XEXP (x0, 0);
  goto L2509;

  L233: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode && GET_CODE (x1) == MINUS && 1)
    goto L234;
  x1 = XEXP (x0, 0);
  goto L237;

  L234: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == REG && XINT (x2, 0) == 29 && 1)
    goto L235;
  x1 = XEXP (x0, 0);
  goto L237;

  L235: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, DImode))
    {
      ro[0] = x2;
      if (TARGET_MIPS16
   && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != -32768))
	return 41;
      }
  x1 = XEXP (x0, 0);
  goto L237;

  L1543: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode && GET_CODE (x1) == UNSPEC_VOLATILE && XINT (x1, 1) == 2 && XVECLEN (x1, 0) == 2 && 1)
    goto L1544;
  x1 = XEXP (x0, 0);
  goto L237;

  L1544: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (address_operand (x2, DImode))
    {
      ro[0] = x2;
      goto L1545;
    }
  x1 = XEXP (x0, 0);
  goto L237;

  L1545: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (pnum_clobbers != 0 && register_operand (x2, DImode))
    {
      ro[1] = x2;
      *pnum_clobbers = 1;
      return 274;
    }
  x1 = XEXP (x0, 0);
  goto L237;
 L238: ATTRIBUTE_UNUSED_LABEL
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L1304;

  L1305: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode && GET_CODE (x1) == FIX && 1)
    goto L1306;
  x1 = XEXP (x0, 0);
  goto L1360;

  L1306: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (pnum_clobbers != 0 && register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	    {
	      *pnum_clobbers = 1;
	      return 203;
	    }
	  }
      break;
    case SFmode:
      if (pnum_clobbers != 0 && register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	    {
	      *pnum_clobbers = 1;
	      return 204;
	    }
	  }
    }
  x1 = XEXP (x0, 0);
  goto L1360;

  L1361: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode && GET_CODE (x1) == REG && XINT (x1, 0) == 31 && 1)
    if (TARGET_MIPS16 && TARGET_64BIT)
      return 223;
  x1 = XEXP (x0, 0);
  goto L1363;

  L1364: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DImode))
    goto L1368;
  L1375: ATTRIBUTE_UNUSED_LABEL
  if (movdi_operand (x1, DImode))
    goto L1379;
  x1 = XEXP (x0, 0);
  goto L2763;

  L1368: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (!TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (DImode)))
    return 224;
  L1369: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (!TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    return 225;
  goto L1375;

  L1379: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (TARGET_64BIT && !TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || se_register_operand (operands[1], DImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)
       || operands[1] == CONST0_RTX (DImode)))
    return 227;
  L1380: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (TARGET_64BIT && TARGET_MIPS16
   && (register_operand (operands[0], DImode)
       || se_register_operand (operands[1], DImode)))
    return 228;
  x1 = XEXP (x0, 0);
  goto L2763;

  L2764: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (address_operand (x1, DImode))
    {
      ro[1] = x1;
      if (Pmode == DImode)
	return 507;
      }
  x1 = XEXP (x0, 0);
  goto L2509;

  L1154: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != HImode)
    {
      x1 = XEXP (x0, 0);
      goto L1470;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case TRUNCATE:
      goto L1155;
    case ZERO_EXTEND:
      goto L1191;
    case SIGN_EXTEND:
      goto L1257;
    }
  x1 = XEXP (x0, 0);
  goto L1470;

  L1155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_64BIT)
	return 163;
      }
  x1 = XEXP (x0, 0);
  goto L1470;

  L1191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != QImode)
    {
      x1 = XEXP (x0, 0);
      goto L1470;
    }
  if (GET_CODE (x2) == TRUNCATE && 1)
    goto L1192;
  if (nonimmediate_operand (x2, QImode))
    {
      ro[1] = x2;
      if (!TARGET_MIPS16)
	return 180;
      }
  L1220: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      ro[1] = x2;
      if (TARGET_MIPS16)
	return 181;
      }
  x1 = XEXP (x0, 0);
  goto L1470;

  L1192: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      if (TARGET_64BIT && !TARGET_MIPS16)
	return 170;
      }
  x1 = XEXP (x0, 0);
  goto L1470;

  L1257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, QImode))
    {
      ro[1] = x2;
      return 195;
    }
  x1 = XEXP (x0, 0);
  goto L1470;

  L1471: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    goto L1475;
  L1479: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, HImode))
    {
      ro[1] = x1;
      if (TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
	return 257;
      }
  x1 = XEXP (x0, 0);
  goto L2509;

  L1475: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (TARGET_DEBUG_H_MODE && !TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 255;
  L1476: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (!TARGET_DEBUG_H_MODE && !TARGET_MIPS16
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 256;
  goto L1479;

  L1158: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode && GET_CODE (x1) == TRUNCATE && 1)
    goto L1159;
  x1 = XEXP (x0, 0);
  goto L1487;

  L1159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (TARGET_64BIT)
	return 164;
      }
  x1 = XEXP (x0, 0);
  goto L1487;

  L1488: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, QImode))
    goto L1492;
  L1496: ATTRIBUTE_UNUSED_LABEL
  if (general_operand (x1, QImode))
    {
      ro[1] = x1;
      if (TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
	return 262;
      }
  x1 = XEXP (x0, 0);
  goto L2509;

  L1492: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (TARGET_DEBUG_H_MODE && !TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 260;
  L1493: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (!TARGET_DEBUG_H_MODE && !TARGET_MIPS16
   && (register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)
       || (GET_CODE (operands[1]) == CONST_INT && INTVAL (operands[1]) == 0)))
    return 261;
  goto L1496;

  L1340: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode && GET_CODE (x1) == UNSPEC && XINT (x1, 1) == 1 && XVECLEN (x1, 0) == 1 && 1)
    goto L1341;
  x1 = XEXP (x0, 0);
  goto L2509;

  L1341: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (reg_or_0_operand (x2, SImode))
    {
      ro[1] = x2;
      if (!TARGET_MIPS16)
	return 217;
      }
  L1349: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_0_operand (x2, DImode))
    {
      ro[1] = x2;
      return 219;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

  L1420: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, CCmode))
    {
      ro[1] = x1;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT)
	return 243;
      }
  x1 = XEXP (x0, 0);
  goto L2371;

  L2372: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != CCmode)
    {
      x1 = XEXP (x0, 0);
      goto L2509;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case EQ:
      goto L2373;
    case LT:
      goto L2378;
    case LE:
      goto L2383;
    case GT:
      goto L2388;
    case GE:
      goto L2393;
    }
  x1 = XEXP (x0, 0);
  goto L2509;

  L2373: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  goto L2374;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  goto L2399;
	}
    }
  x1 = XEXP (x0, 0);
  goto L2509;

  L2374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 420;
      }
  x1 = XEXP (x0, 0);
  goto L2509;

  L2399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 425;
      }
  x1 = XEXP (x0, 0);
  goto L2509;

  L2378: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  goto L2379;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  goto L2404;
	}
    }
  x1 = XEXP (x0, 0);
  goto L2509;

  L2379: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 421;
      }
  x1 = XEXP (x0, 0);
  goto L2509;

  L2404: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 426;
      }
  x1 = XEXP (x0, 0);
  goto L2509;

  L2383: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  goto L2384;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  goto L2409;
	}
    }
  x1 = XEXP (x0, 0);
  goto L2509;

  L2384: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 422;
      }
  x1 = XEXP (x0, 0);
  goto L2509;

  L2409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 427;
      }
  x1 = XEXP (x0, 0);
  goto L2509;

  L2388: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  goto L2389;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  goto L2414;
	}
    }
  x1 = XEXP (x0, 0);
  goto L2509;

  L2389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 423;
      }
  x1 = XEXP (x0, 0);
  goto L2509;

  L2414: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 428;
      }
  x1 = XEXP (x0, 0);
  goto L2509;

  L2393: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  goto L2394;
	}
      break;
    case SFmode:
      if (register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  goto L2419;
	}
    }
  x1 = XEXP (x0, 0);
  goto L2509;

  L2394: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 424;
      }
  x1 = XEXP (x0, 0);
  goto L2509;

  L2419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 429;
      }
  x1 = XEXP (x0, 0);
  goto L2509;

  L1459: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != PLUS)
    goto ret0;
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      goto L1460;
    case DImode:
      goto L1466;
    }
  goto ret0;

  L1460: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1461;
    }
  goto ret0;

  L1461: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1462;
    }
  goto ret0;

  L1462: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      ro[0] = x1;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 252;
      }
  goto ret0;

  L1466: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1467;
    }
  goto ret0;

  L1467: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L1468;
    }
  goto ret0;

  L1468: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      ro[0] = x1;
      if (mips_isa >= 4 && TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 253;
      }
  goto ret0;

  L2430: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  if (!(Pmode == DImode))
	    return 433;
	  }
      break;
    case DImode:
      if (se_register_operand (x1, DImode))
	{
	  ro[0] = x1;
	  if (Pmode == DImode)
	    return 434;
	  }
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case IF_THEN_ELSE:
      goto L2019;
    case LABEL_REF:
      goto L2423;
    }
  goto ret0;

  L2019: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case CCmode:
      switch (GET_CODE (x2))
	{
	default:
	  break;
	case NE:
	  goto L2020;
	case EQ:
	  goto L2028;
	}
      break;
    case SImode:
      if (cmp_op (x2, SImode))
	{
	  ro[0] = x2;
	  goto L2036;
	}
    L2043: ATTRIBUTE_UNUSED_LABEL
      if (equality_op (x2, SImode))
	{
	  ro[0] = x2;
	  goto L2044;
	}
      break;
    case DImode:
      if (cmp_op (x2, DImode))
	{
	  ro[0] = x2;
	  goto L2052;
	}
    L2059: ATTRIBUTE_UNUSED_LABEL
      if (equality_op (x2, DImode))
	{
	  ro[0] = x2;
	  goto L2060;
	}
    }
  goto ret0;

  L2020: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      ro[0] = x3;
      goto L2021;
    }
  goto ret0;

  L2021: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2022;
  goto ret0;

  L2022: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[1] = x2;
      goto L2023;
    }
  goto ret0;

  L2023: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 338;
      }
  goto ret0;

  L2028: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, CCmode))
    {
      ro[0] = x3;
      goto L2029;
    }
  goto ret0;

  L2029: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2030;
  goto ret0;

  L2030: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[1] = x2;
      goto L2031;
    }
  goto ret0;

  L2031: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 339;
      }
  goto ret0;

  L2036: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2037;
    }
  goto L2043;

  L2037: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2038;
  goto L2043;

  L2038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[2] = x2;
      goto L2039;
    }
  x2 = XEXP (x1, 0);
  goto L2043;

  L2039: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[3] = x2;
      if (!TARGET_MIPS16)
	return 340;
      }
  x2 = XEXP (x1, 0);
  goto L2043;

  L2044: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2069;
    }
  goto ret0;

  L2069: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2070;
    }
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2046;
  goto ret0;

  L2070: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L2071;
    }
  goto ret0;

  L2071: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[4] = x2;
      if (!TARGET_MIPS16)
	return 344;
      }
  goto ret0;

  L2046: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[2] = x2;
      goto L2047;
    }
  goto ret0;

  L2047: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[3] = x2;
      if (TARGET_MIPS16)
	return 341;
      }
  goto ret0;

  L2052: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L2053;
    }
  goto L2059;

  L2053: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2054;
  goto L2059;

  L2054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[2] = x2;
      goto L2055;
    }
  x2 = XEXP (x1, 0);
  goto L2059;

  L2055: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[3] = x2;
      if (!TARGET_MIPS16)
	return 342;
      }
  x2 = XEXP (x1, 0);
  goto L2059;

  L2060: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L2077;
    }
  goto ret0;

  L2077: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L2078;
    }
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2062;
  goto ret0;

  L2078: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L2079;
    }
  goto ret0;

  L2079: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[4] = x2;
      if (!TARGET_MIPS16)
	return 345;
      }
  goto ret0;

  L2062: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[2] = x2;
      goto L2063;
    }
  goto ret0;

  L2063: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pc_or_label_operand (x2, VOIDmode))
    {
      ro[3] = x2;
      if (TARGET_MIPS16)
	return 343;
      }
  goto ret0;

  L2423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  ro[0] = x2;
  if (!TARGET_MIPS16)
    return 430;
  L2427: ATTRIBUTE_UNUSED_LABEL
  ro[0] = x2;
  if (TARGET_MIPS16 && GET_CODE (operands[0]) != REG)
    return 431;
  goto ret0;

  L2510: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == UNSPEC && XINT (x1, 1) == 1 && XVECLEN (x1, 0) == 1 && 1)
    goto L2511;
  goto ret0;

  L2511: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (pnum_clobbers != 0 && 1)
    {
      ro[1] = x2;
      if (TARGET_EMBEDDED_PIC
   && GET_CODE (operands[1]) == SYMBOL_REF)
	{
	  *pnum_clobbers = 1;
	  return 455;
	}
      }
  goto ret0;
 ret0: return -1;
}

int
recog_6 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case PLUS:
      goto L570;
    case MINUS:
      goto L178;
    case MULT:
      goto L438;
    case DIV:
      goto L731;
    case UDIV:
      goto L779;
    case NEG:
      goto L996;
    case ASHIFT:
      goto L1739;
    case ASHIFTRT:
      goto L1835;
    case LSHIFTRT:
      goto L1941;
    }
  goto ret0;

  L570: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != DImode)
    goto ret0;
  if (GET_CODE (x3) == MULT && 1)
    goto L571;
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L45;
    }
  goto ret0;

  L571: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (extend_operator (x4, DImode))
    {
      ro[3] = x4;
      goto L572;
    }
  goto ret0;

  L572: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L573;
    }
  goto ret0;

  L573: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (extend_operator (x4, DImode))
    {
      ro[4] = x4;
      goto L574;
    }
  goto ret0;

  L574: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L575;
    }
  goto ret0;

  L575: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L576;
  goto ret0;

  L576: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L577;
  goto ret0;

  L577: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[5] = x2;
      if (TARGET_MAD
   && ! TARGET_64BIT
   && GET_CODE (operands[3]) == GET_CODE (operands[4]))
	return 74;
      }
  goto ret0;

  L45: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L46;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      goto L72;
    }
  goto ret0;

  L46: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L47;
  goto ret0;

  L47: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16)
	return 10;
      }
  goto ret0;

  L72: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L73;
  goto ret0;

  L73: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && (TARGET_GAS
       || GET_CODE (operands[2]) != CONST_INT
       || INTVAL (operands[2]) != -32768))
	return 13;
      }
  goto ret0;

  L178: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L179;
    }
  goto ret0;

  L179: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L180;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      goto L206;
    }
  goto ret0;

  L180: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L181;
  goto ret0;

  L181: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16)
	return 34;
      }
  goto ret0;

  L206: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L207;
  goto ret0;

  L207: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && INTVAL (operands[2]) != -32768)
	return 37;
      }
  goto ret0;

  L438: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (extend_operator (x3, DImode))
    {
      ro[3] = x3;
      goto L439;
    }
  goto ret0;

  L439: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L440;
    }
  goto ret0;

  L440: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (extend_operator (x3, DImode))
    {
      ro[4] = x3;
      goto L441;
    }
  goto ret0;

  L441: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L442;
    }
  goto ret0;

  L442: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L443;
  goto ret0;

  L443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[5] = x2;
      if (!TARGET_64BIT && GET_CODE (operands[3]) == GET_CODE (operands[4]))
	return 66;
      }
  goto ret0;

  L731: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L732;
    }
  goto ret0;

  L732: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L733;
    }
  goto ret0;

  L733: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L734;
  goto ret0;

  L734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L735;
    }
  goto ret0;

  L735: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == MOD && 1)
    goto L736;
  goto ret0;

  L736: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L737;
  goto ret0;

  L737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && pnum_clobbers != 0 && 1)
    if (TARGET_64BIT && optimize)
      {
	*pnum_clobbers = 1;
	return 91;
      }
  goto ret0;

  L779: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L780;
    }
  goto ret0;

  L780: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L781;
    }
  goto ret0;

  L781: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L782;
  goto ret0;

  L782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L783;
    }
  goto ret0;

  L783: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == UMOD && 1)
    goto L784;
  goto ret0;

  L784: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L785;
  goto ret0;

  L785: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && pnum_clobbers != 0 && 1)
    if (TARGET_64BIT && optimize)
      {
	*pnum_clobbers = 1;
	return 95;
      }
  goto ret0;

  L996: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L997;
    }
  goto ret0;

  L997: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L998;
  goto ret0;

  L998: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (! TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16)
	return 127;
      }
  goto ret0;

  L1739: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1740;
    }
  goto ret0;

  L1740: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1741;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1749;
    }
  goto ret0;

  L1741: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1742;
  goto ret0;

  L1742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16)
	return 290;
      }
  goto ret0;

  L1749: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1750;
  goto ret0;

  L1750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L1777;
  goto ret0;

  L1777: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && (INTVAL (operands[2]) & 32) != 0)
    return 291;
  L1778: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return 294;
  goto ret0;

  L1835: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1836;
    }
  goto ret0;

  L1836: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1837;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1845;
    }
  goto ret0;

  L1837: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1838;
  goto ret0;

  L1838: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16)
	return 305;
      }
  goto ret0;

  L1845: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1846;
  goto ret0;

  L1846: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L1873;
  goto ret0;

  L1873: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && (INTVAL (operands[2]) & 32) != 0)
    return 306;
  L1874: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return 309;
  goto ret0;

  L1941: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1942;
    }
  goto ret0;

  L1942: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1943;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1951;
    }
  goto ret0;

  L1943: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1944;
  goto ret0;

  L1944: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16)
	return 322;
      }
  goto ret0;

  L1951: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1952;
  goto ret0;

  L1952: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L1979;
  goto ret0;

  L1979: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && (INTVAL (operands[2]) & 32) != 0)
    return 323;
  L1980: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (!TARGET_64BIT && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return 326;
  goto ret0;
 ret0: return -1;
}

int
recog_7 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DImode:
      if (register_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L43;
	}
    L1298: ATTRIBUTE_UNUSED_LABEL
      if (general_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L1299;
	}
      break;
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L706;
	}
    }
  L1535: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    default:
      break;
    case REG:
      if (GET_MODE (x2) == DImode && XINT (x2, 0) == 28 && 1)
	goto L1536;
      break;
    case PC:
      goto L2437;
    }
  L2503: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      ro[0] = x2;
      goto L2504;
    }
  goto ret0;
 L43: ATTRIBUTE_UNUSED_LABEL
  tem = recog_6 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x2 = XEXP (x1, 0);
  goto L1298;

  L1299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == FIX && 1)
    goto L1300;
  x2 = XEXP (x1, 0);
  goto L1535;

  L1300: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x3, DFmode))
	{
	  ro[1] = x3;
	  goto L1301;
	}
      break;
    case SFmode:
      if (register_operand (x3, SFmode))
	{
	  ro[1] = x3;
	  goto L1312;
	}
    }
  x2 = XEXP (x1, 0);
  goto L1535;

  L1301: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1302;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1535;

  L1302: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	return 203;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1535;

  L1312: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1313;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1535;

  L1313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT && TARGET_64BIT && TARGET_DOUBLE_FLOAT)
	return 204;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1535;

  L706: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    {
      x2 = XEXP (x1, 0);
      goto L2503;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case DIV:
      goto L707;
    case UDIV:
      goto L755;
    }
  x2 = XEXP (x1, 0);
  goto L2503;

  L707: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L708;
    }
  x2 = XEXP (x1, 0);
  goto L2503;

  L708: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L709;
    }
  x2 = XEXP (x1, 0);
  goto L2503;

  L709: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L710;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2503;

  L710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L711;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2503;

  L711: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MOD && 1)
    goto L712;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2503;

  L712: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L713;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2503;

  L713: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && pnum_clobbers != 0 && 1)
    if (optimize)
      {
	*pnum_clobbers = 1;
	return 89;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2503;

  L755: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L756;
    }
  x2 = XEXP (x1, 0);
  goto L2503;

  L756: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L757;
    }
  x2 = XEXP (x1, 0);
  goto L2503;

  L757: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L758;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2503;

  L758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L759;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2503;

  L759: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == UMOD && 1)
    goto L760;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2503;

  L760: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L761;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2503;

  L761: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && pnum_clobbers != 0 && 1)
    if (optimize)
      {
	*pnum_clobbers = 1;
	return 93;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2503;

  L1536: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == UNSPEC_VOLATILE && XINT (x2, 1) == 2 && XVECLEN (x2, 0) == 2 && 1)
    goto L1537;
  x2 = XEXP (x1, 0);
  goto L2503;

  L1537: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (address_operand (x3, DImode))
    {
      ro[0] = x3;
      goto L1538;
    }
  x2 = XEXP (x1, 0);
  goto L2503;

  L1538: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1539;
    }
  x2 = XEXP (x1, 0);
  goto L2503;

  L1539: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1540;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2503;

  L1540: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == REG && XINT (x2, 0) == 1 && 1)
    return 274;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2503;

  L2437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L2438;
	}
      break;
    case DImode:
      if (GET_CODE (x2) == PLUS && 1)
	goto L2462;
      if (se_register_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L2445;
	}
    }
  if (GET_MODE (x2) != SImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case PLUS:
      goto L2452;
    case MEM:
      goto L2486;
    }
  goto ret0;

  L2438: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L2439;
  goto ret0;

  L2439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L2440;
  goto ret0;

  L2440: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  ro[1] = x3;
  if (!(Pmode == DImode))
    return 436;
  goto ret0;

  L2462: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[0] = x3;
      goto L2463;
    }
  goto ret0;

  L2463: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == LABEL_REF && 1)
    goto L2464;
  goto ret0;

  L2464: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  ro[1] = x4;
  goto L2465;

  L2465: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L2466;
  goto ret0;

  L2466: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == LABEL_REF && 1)
    goto L2467;
  goto ret0;

  L2467: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    if (Pmode == DImode && next_active_insn (insn) != 0
   && GET_CODE (PATTERN (next_active_insn (insn))) == ADDR_DIFF_VEC
   && PREV_INSN (next_active_insn (insn)) == operands[1])
      return 443;
  goto ret0;

  L2445: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L2446;
  goto ret0;

  L2446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L2447;
  goto ret0;

  L2447: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  ro[1] = x3;
  if (Pmode == DImode)
    return 437;
  goto ret0;

  L2452: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L2453;
    }
  goto ret0;

  L2453: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == LABEL_REF && 1)
    goto L2454;
  goto ret0;

  L2454: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  ro[1] = x4;
  goto L2455;

  L2455: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L2456;
  goto ret0;

  L2456: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == LABEL_REF && 1)
    goto L2457;
  goto ret0;

  L2457: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    if (!(Pmode == DImode) && next_active_insn (insn) != 0
   && GET_CODE (PATTERN (next_active_insn (insn))) == ADDR_DIFF_VEC
   && PREV_INSN (next_active_insn (insn)) == operands[1])
      return 441;
  goto ret0;

  L2486: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L2487;
  goto ret0;

  L2487: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && GET_CODE (x4) == MULT && 1)
    goto L2488;
  goto ret0;

  L2488: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[0] = x5;
      goto L2489;
    }
  goto ret0;

  L2489: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && XWINT (x5, 0) == 4 && 1)
    goto L2490;
  goto ret0;

  L2490: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == LABEL_REF && 1)
    goto L2491;
  goto ret0;

  L2491: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  ro[1] = x5;
  goto L2492;

  L2492: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2493;
  goto ret0;

  L2493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (pnum_clobbers != 0 && register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_EMBEDDED_PIC)
	{
	  *pnum_clobbers = 1;
	  return 445;
	}
      }
  goto ret0;

  L2504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case UNSPEC:
      if (XINT (x2, 1) == 1 && XVECLEN (x2, 0) == 1 && 1)
	goto L2505;
      break;
    case CALL:
      goto L2571;
    }
  goto ret0;

  L2505: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  ro[1] = x3;
  goto L2506;

  L2506: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2507;
  goto ret0;

  L2507: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 31 && 1)
    if (TARGET_EMBEDDED_PIC
   && GET_CODE (operands[1]) == SYMBOL_REF)
      return 455;
  goto ret0;

  L2571: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != MEM)
    goto ret0;
  goto L2572;
  L2600: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) != MEM)
    goto ret0;
  switch (GET_MODE (x3))
    {
    default:
      break;
    case SImode:
      goto L2601;
    case DImode:
      goto L2610;
    }
  goto ret0;

  L2572: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      ro[1] = x4;
      goto L2573;
    }
  goto L2600;

  L2573: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  ro[2] = x3;
  goto L2574;

  L2574: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2575;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2600;

  L2575: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    {
      x1 = XVECEXP (x0, 0, 0);
      x2 = XEXP (x1, 1);
      x3 = XEXP (x2, 0);
      goto L2600;
    }
  if (register_operand (x2, SImode))
    goto L2585;
  L2595: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (TARGET_ABICALLS && !TARGET_LONG_CALLS)
	return 469;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2600;

  L2585: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (TARGET_MIPS16 && !TARGET_ABICALLS && !TARGET_LONG_CALLS
   && GET_CODE (operands[3]) == REG && REGNO (operands[3]) == 31)
    return 467;
  L2586: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (!TARGET_ABICALLS && !TARGET_LONG_CALLS)
    return 468;
  goto L2595;

  L2601: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2602;
    }
  goto ret0;

  L2602: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  ro[2] = x3;
  goto L2603;

  L2603: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2604;
  goto ret0;

  L2604: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (register_operand (x2, SImode))
    goto L2623;
  L2633: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!(Pmode == DImode) && TARGET_ABICALLS && TARGET_LONG_CALLS)
	return 473;
      }
  goto ret0;

  L2623: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (!TARGET_MIPS16 
   && !(Pmode == DImode) && !TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 470;
  L2624: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (TARGET_MIPS16 && !(Pmode == DImode) && !TARGET_ABICALLS && TARGET_LONG_CALLS
   && GET_CODE (operands[3]) == REG && REGNO (operands[3]) == 31)
    return 472;
  goto L2633;

  L2610: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (se_register_operand (x4, DImode))
    {
      ro[1] = x4;
      goto L2611;
    }
  goto ret0;

  L2611: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  ro[2] = x3;
  goto L2612;

  L2612: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2613;
  goto ret0;

  L2613: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L2643;
  goto ret0;

  L2643: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (!TARGET_MIPS16 
   && Pmode == DImode && !TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 471;
  L2644: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (Pmode == DImode && TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 474;
  goto ret0;
 ret0: return -1;
}

int
recog_8 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case MULT:
      goto L313;
    case TRUNCATE:
      goto L476;
    case PLUS:
      goto L551;
    case DIV:
      goto L694;
    case UDIV:
      goto L742;
    case MOD:
      goto L840;
    case UMOD:
      goto L900;
    case FFS:
      goto L966;
    }
  goto ret0;

  L313: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L314;
    }
  goto ret0;

  L314: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L315;
    }
  goto ret0;

  L315: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L316;
  goto ret0;

  L316: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L317;
    }
  goto ret0;

  L317: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L318;
  goto ret0;

  L318: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (mips_cpu != PROCESSOR_R4000 || TARGET_MIPS16)
	return 56;
      }
  goto ret0;

  L476: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (highpart_shift_operator (x3, DImode))
    {
      ro[5] = x3;
      goto L477;
    }
  goto ret0;

  L477: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == MULT && 1)
    goto L478;
  goto ret0;

  L478: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (extend_operator (x5, DImode))
    {
      ro[3] = x5;
      goto L479;
    }
  goto ret0;

  L479: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      ro[1] = x6;
      goto L480;
    }
  goto ret0;

  L480: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (extend_operator (x5, DImode))
    {
      ro[4] = x5;
      goto L481;
    }
  goto ret0;

  L481: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      ro[2] = x6;
      goto L482;
    }
  goto ret0;

  L482: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 32 && 1)
    goto L483;
  goto ret0;

  L483: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L484;
  goto ret0;

  L484: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      goto L485;
    }
  goto ret0;

  L485: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L486;
  goto ret0;

  L486: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[7] = x2;
      if (GET_CODE (operands[3]) == GET_CODE (operands[4]))
	return 70;
      }
  goto ret0;

  L551: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == MULT && 1)
    goto L552;
  goto ret0;

  L552: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L553;
    }
  goto ret0;

  L553: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L554;
    }
  goto ret0;

  L554: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L555;
  goto ret0;

  L555: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L556;
  goto ret0;

  L556: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L557;
    }
  goto ret0;

  L557: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L558;
  goto ret0;

  L558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (TARGET_MAD)
	return 73;
      }
  goto ret0;

  L694: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L695;
    }
  goto ret0;

  L695: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L696;
    }
  L811: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L812;
    }
  goto ret0;

  L696: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L697;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L811;

  L697: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L698;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L811;

  L698: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MOD && 1)
    goto L699;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L811;

  L699: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L700;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L811;

  L700: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    goto L701;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L811;

  L701: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L702;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L811;

  L702: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      if (optimize)
	return 89;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L811;

  L812: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L813;
  goto ret0;

  L813: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L814;
    }
  goto ret0;

  L814: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L815;
  goto ret0;

  L815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (!optimize)
	return 100;
      }
  goto ret0;

  L742: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L743;
    }
  goto ret0;

  L743: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L744;
    }
  L871: ATTRIBUTE_UNUSED_LABEL
  if (nonmemory_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L872;
    }
  goto ret0;

  L744: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L745;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L871;

  L745: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L746;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L871;

  L746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == UMOD && 1)
    goto L747;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L871;

  L747: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L748;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L871;

  L748: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    goto L749;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L871;

  L749: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L750;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L871;

  L750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      if (optimize)
	return 93;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L871;

  L872: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L873;
  goto ret0;

  L873: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L874;
    }
  goto ret0;

  L874: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L875;
  goto ret0;

  L875: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (!optimize)
	return 108;
      }
  goto ret0;

  L840: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L841;
    }
  goto ret0;

  L841: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L842;
    }
  goto ret0;

  L842: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L843;
  goto ret0;

  L843: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L844;
    }
  goto ret0;

  L844: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L845;
  goto ret0;

  L845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (!optimize)
	return 104;
      }
  goto ret0;

  L900: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L901;
    }
  goto ret0;

  L901: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (nonmemory_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L902;
    }
  goto ret0;

  L902: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L903;
  goto ret0;

  L903: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L904;
    }
  goto ret0;

  L904: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L905;
  goto ret0;

  L905: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (!optimize)
	return 112;
      }
  goto ret0;

  L966: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L967;
    }
  goto ret0;

  L967: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L968;
  goto ret0;

  L968: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L969;
    }
  goto ret0;

  L969: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L970;
  goto ret0;

  L970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      if (!TARGET_MIPS16)
	return 123;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_9 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case MULT:
      goto L404;
    case TRUNCATE:
      goto L501;
    case PLUS:
      goto L591;
    case DIV:
      goto L718;
    case UDIV:
      goto L766;
    case MOD:
      goto L855;
    case UMOD:
      goto L915;
    case FFS:
      goto L979;
    }
  goto ret0;

  L404: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != DImode)
    goto ret0;
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L405;
    }
  L455: ATTRIBUTE_UNUSED_LABEL
  if (extend_operator (x3, DImode))
    {
      ro[3] = x3;
      goto L456;
    }
  goto ret0;

  L405: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L406;
    }
  x3 = XEXP (x2, 0);
  goto L455;

  L406: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L407;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L455;

  L407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L408;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L455;

  L408: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L409;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L455;

  L409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT && mips_cpu != PROCESSOR_R4000 && !TARGET_MIPS16)
	return 62;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L455;

  L456: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L457;
    }
  goto ret0;

  L457: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (extend_operator (x3, DImode))
    {
      ro[4] = x3;
      goto L458;
    }
  goto ret0;

  L458: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L459;
    }
  goto ret0;

  L459: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L460;
  goto ret0;

  L460: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[5] = x2;
      goto L461;
    }
  goto ret0;

  L461: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L462;
  goto ret0;

  L462: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[6] = x2;
      if (TARGET_64BIT && GET_CODE (operands[3]) == GET_CODE (operands[4]))
	return 67;
      }
  goto ret0;

  L501: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode && GET_CODE (x3) == LSHIFTRT && 1)
    goto L502;
  goto ret0;

  L502: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode && GET_CODE (x4) == MULT && 1)
    goto L503;
  goto ret0;

  L503: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != TImode)
    goto ret0;
  switch (GET_CODE (x5))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L504;
    case ZERO_EXTEND:
      goto L529;
    }
  goto ret0;

  L504: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (se_register_operand (x6, DImode))
    {
      ro[1] = x6;
      goto L505;
    }
  goto ret0;

  L505: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode && GET_CODE (x5) == SIGN_EXTEND && 1)
    goto L506;
  goto ret0;

  L506: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (se_register_operand (x6, DImode))
    {
      ro[2] = x6;
      goto L507;
    }
  goto ret0;

  L507: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 64 && 1)
    goto L508;
  goto ret0;

  L508: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L509;
  goto ret0;

  L509: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L510;
    }
  goto ret0;

  L510: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L511;
  goto ret0;

  L511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT)
	return 71;
      }
  goto ret0;

  L529: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (se_register_operand (x6, DImode))
    {
      ro[1] = x6;
      goto L530;
    }
  goto ret0;

  L530: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == TImode && GET_CODE (x5) == ZERO_EXTEND && 1)
    goto L531;
  goto ret0;

  L531: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (se_register_operand (x6, DImode))
    {
      ro[2] = x6;
      goto L532;
    }
  goto ret0;

  L532: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 64 && 1)
    goto L533;
  goto ret0;

  L533: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L534;
  goto ret0;

  L534: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L535;
    }
  goto ret0;

  L535: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L536;
  goto ret0;

  L536: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT)
	return 72;
      }
  goto ret0;

  L591: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == MULT && 1)
    goto L592;
  goto ret0;

  L592: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (extend_operator (x4, DImode))
    {
      ro[3] = x4;
      goto L593;
    }
  goto ret0;

  L593: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L594;
    }
  goto ret0;

  L594: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (extend_operator (x4, DImode))
    {
      ro[4] = x4;
      goto L595;
    }
  goto ret0;

  L595: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L596;
    }
  goto ret0;

  L596: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L597;
  goto ret0;

  L597: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L598;
  goto ret0;

  L598: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L599;
    }
  goto ret0;

  L599: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L600;
  goto ret0;

  L600: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      if (TARGET_MAD
   && TARGET_64BIT
   && GET_CODE (operands[3]) == GET_CODE (operands[4]))
	return 75;
      }
  goto ret0;

  L718: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L719;
    }
  goto ret0;

  L719: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L720;
    }
  L826: ATTRIBUTE_UNUSED_LABEL
  if (se_nonmemory_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L827;
    }
  goto ret0;

  L720: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L721;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L826;

  L721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L722;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L826;

  L722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == MOD && 1)
    goto L723;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L826;

  L723: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L724;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L826;

  L724: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    goto L725;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L826;

  L725: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L726;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L826;

  L726: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[6] = x2;
      if (TARGET_64BIT && optimize)
	return 91;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L826;

  L827: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L828;
  goto ret0;

  L828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L829;
    }
  goto ret0;

  L829: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L830;
  goto ret0;

  L830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT && !optimize)
	return 102;
      }
  goto ret0;

  L766: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L767;
    }
  goto ret0;

  L767: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (se_register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L768;
    }
  L886: ATTRIBUTE_UNUSED_LABEL
  if (se_nonmemory_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L887;
    }
  goto ret0;

  L768: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L769;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L886;

  L769: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L770;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L886;

  L770: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == UMOD && 1)
    goto L771;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L886;

  L771: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L772;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L886;

  L772: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    goto L773;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L886;

  L773: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L774;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L886;

  L774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[6] = x2;
      if (TARGET_64BIT && optimize)
	return 95;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L886;

  L887: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L888;
  goto ret0;

  L888: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L889;
    }
  goto ret0;

  L889: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L890;
  goto ret0;

  L890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT && !optimize)
	return 110;
      }
  goto ret0;

  L855: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L856;
    }
  goto ret0;

  L856: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (se_nonmemory_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L857;
    }
  goto ret0;

  L857: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L858;
  goto ret0;

  L858: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L859;
    }
  goto ret0;

  L859: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L860;
  goto ret0;

  L860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT && !optimize)
	return 106;
      }
  goto ret0;

  L915: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L916;
    }
  goto ret0;

  L916: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (se_nonmemory_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L917;
    }
  goto ret0;

  L917: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L918;
  goto ret0;

  L918: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L919;
    }
  goto ret0;

  L919: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L920;
  goto ret0;

  L920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (TARGET_64BIT && !optimize)
	return 114;
      }
  goto ret0;

  L979: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L980;
    }
  goto ret0;

  L980: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L981;
  goto ret0;

  L981: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[2] = x2;
      goto L982;
    }
  goto ret0;

  L982: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L983;
  goto ret0;

  L983: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      if (TARGET_64BIT && !TARGET_MIPS16)
	return 124;
      }
  goto ret0;
 ret0: return -1;
}

int
recog (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  L0: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x0))
    {
    default:
      break;
    case SET:
      goto L1;
    case PARALLEL:
      if (XVECLEN (x0, 0) == 2 && 1)
	goto L41;
      if (XVECLEN (x0, 0) == 4 && 1)
	goto L293;
      if (XVECLEN (x0, 0) == 3 && 1)
	goto L310;
      if (XVECLEN (x0, 0) == 5 && 1)
	goto L346;
      if (XVECLEN (x0, 0) == 8 && 1)
	goto L1547;
      break;
    case TRAP_IF:
      goto L787;
    case UNSPEC_VOLATILE:
      if (XINT (x0, 1) == 0 && XVECLEN (x0, 0) == 1 && 1)
	goto L2495;
      if (XINT (x0, 1) == 10 && XVECLEN (x0, 0) == 1 && 1)
	goto L2742;
      if (XINT (x0, 1) == 11 && XVECLEN (x0, 0) == 1 && 1)
	goto L2744;
      if (XINT (x0, 1) == 12 && XVECLEN (x0, 0) == 1 && 1)
	goto L2746;
      if (XINT (x0, 1) == 13 && XVECLEN (x0, 0) == 1 && 1)
	goto L2748;
      if (XINT (x0, 1) == 14 && XVECLEN (x0, 0) == 1 && 1)
	goto L2750;
      if (XINT (x0, 1) == 15 && XVECLEN (x0, 0) == 1 && 1)
	goto L2752;
      if (XINT (x0, 1) == 16 && XVECLEN (x0, 0) == 1 && 1)
	goto L2754;
      if (XINT (x0, 1) == 17 && XVECLEN (x0, 0) == 1 && 1)
	goto L2756;
      if (XINT (x0, 1) == 18 && XVECLEN (x0, 0) == 1 && 1)
	goto L2758;
      break;
    case RETURN:
      if (mips_can_use_return_insn ())
	return 453;
      break;
    case CONST_INT:
      if (XWINT (x0, 0) == 0 && 1)
	return 478;
    }
  goto ret0;
 L1: ATTRIBUTE_UNUSED_LABEL
  return recog_5 (x0, insn, pnum_clobbers);

  L41: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SET:
      goto L42;
    case TRAP_IF:
      goto L793;
    case USE:
      goto L2499;
    case CALL:
      goto L2514;
    }
  goto ret0;
 L42: ATTRIBUTE_UNUSED_LABEL
  return recog_7 (x0, insn, pnum_clobbers);

  L793: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == EQ && 1)
    goto L794;
  goto ret0;

  L794: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, VOIDmode))
    {
      ro[0] = x3;
      goto L795;
    }
  goto ret0;

  L795: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (true_reg_or_0_operand (x3, VOIDmode))
    {
      ro[1] = x3;
      goto L796;
    }
  goto ret0;

  L796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, VOIDmode))
    {
      ro[2] = x2;
      goto L797;
    }
  goto ret0;

  L797: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L798;
  goto ret0;

  L798: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    if (TARGET_MIPS16)
      return 98;
  goto ret0;

  L2499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      ro[0] = x2;
      goto L2500;
    }
  goto ret0;

  L2500: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == RETURN && 1)
    return 454;
  goto ret0;

  L2514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != MEM)
    goto ret0;
  goto L2515;
  L2537: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) != MEM)
    goto ret0;
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      goto L2538;
    case DImode:
      goto L2545;
    }
  goto ret0;

  L2515: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (call_insn_operand (x3, VOIDmode))
    {
      ro[0] = x3;
      goto L2516;
    }
  goto L2537;

  L2516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  ro[1] = x2;
  goto L2517;

  L2517: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2518;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2537;

  L2518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    {
      x1 = XVECEXP (x0, 0, 0);
      x2 = XEXP (x1, 0);
      goto L2537;
    }
  if (register_operand (x2, SImode))
    goto L2526;
  L2534: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_ABICALLS && !TARGET_LONG_CALLS)
	return 460;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2537;

  L2526: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (TARGET_MIPS16 && !TARGET_ABICALLS && !TARGET_LONG_CALLS
   && GET_CODE (operands[2]) == REG && REGNO (operands[2]) == 31)
    return 458;
  L2527: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (!TARGET_ABICALLS && !TARGET_LONG_CALLS)
    return 459;
  goto L2534;

  L2538: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L2539;
    }
  goto ret0;

  L2539: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  ro[1] = x2;
  goto L2540;

  L2540: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2541;
  goto ret0;

  L2541: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L2556;
  goto ret0;

  L2556: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (!(Pmode == DImode) && !TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 461;
  L2557: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (!(Pmode == DImode) && TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 463;
  goto ret0;

  L2545: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[0] = x3;
      goto L2546;
    }
  goto ret0;

  L2546: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  ro[1] = x2;
  goto L2547;

  L2547: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2548;
  goto ret0;

  L2548: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L2565;
  goto ret0;

  L2565: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (Pmode == DImode && !TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 462;
  L2566: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (Pmode == DImode && TARGET_ABICALLS && TARGET_LONG_CALLS)
    return 464;
  goto ret0;

  L293: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L294;
  goto ret0;

  L294: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L295;
	}
      break;
    case DImode:
      if (register_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L418;
	}
    }
  goto ret0;

  L295: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MULT && 1)
    goto L296;
  goto ret0;

  L296: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L297;
    }
  goto ret0;

  L297: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L298;
    }
  goto ret0;

  L298: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L299;
  goto ret0;

  L299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L300;
    }
  goto ret0;

  L300: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L301;
  goto ret0;

  L301: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L302;
    }
  goto ret0;

  L302: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L303;
  goto ret0;

  L303: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    goto L343;
  goto ret0;

  L343: ATTRIBUTE_UNUSED_LABEL
  ro[5] = x2;
  if (GENERATE_MULT3
   || TARGET_MAD)
    return 55;
  L344: ATTRIBUTE_UNUSED_LABEL
  ro[5] = x2;
  if (mips_cpu == PROCESSOR_R4000 && !TARGET_MIPS16)
    return 57;
  goto ret0;

  L418: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == MULT && 1)
    goto L419;
  goto ret0;

  L419: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (se_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L420;
    }
  goto ret0;

  L420: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L421;
    }
  goto ret0;

  L421: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L422;
  goto ret0;

  L422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[3] = x2;
      goto L423;
    }
  goto ret0;

  L423: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L424;
  goto ret0;

  L424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[4] = x2;
      goto L425;
    }
  goto ret0;

  L425: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L426;
  goto ret0;

  L426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DImode))
    {
      ro[5] = x2;
      if (TARGET_64BIT && (GENERATE_MULT3 || mips_cpu == PROCESSOR_R4000 || TARGET_MIPS16))
	return 63;
      }
  goto ret0;

  L310: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L311;
  goto ret0;

  L311: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L312;
	}
    L1272: ATTRIBUTE_UNUSED_LABEL
      if (general_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L1273;
	}
      break;
    case DImode:
      if (register_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L403;
	}
    }
  if (GET_CODE (x2) == PC && 1)
    goto L2471;
  L2647: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      ro[0] = x2;
      goto L2648;
    }
  goto ret0;
 L312: ATTRIBUTE_UNUSED_LABEL
  tem = recog_8 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x2 = XEXP (x1, 0);
  goto L1272;

  L1273: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == FIX && 1)
    goto L1274;
  x2 = XEXP (x1, 0);
  goto L2647;

  L1274: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case DFmode:
      if (register_operand (x3, DFmode))
	{
	  ro[1] = x3;
	  goto L1275;
	}
      break;
    case SFmode:
      if (register_operand (x3, SFmode))
	{
	  ro[1] = x3;
	  goto L1288;
	}
    }
  x2 = XEXP (x1, 0);
  goto L2647;

  L1275: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1276;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2647;

  L1276: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L1277;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2647;

  L1277: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1278;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2647;

  L1278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      ro[3] = x2;
      if (TARGET_HARD_FLOAT && TARGET_DOUBLE_FLOAT)
	return 201;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2647;

  L1288: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1289;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2647;

  L1289: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L1290;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2647;

  L1290: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1291;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2647;

  L1291: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SFmode))
    {
      ro[3] = x2;
      if (TARGET_HARD_FLOAT)
	return 202;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2647;
 L403: ATTRIBUTE_UNUSED_LABEL
  tem = recog_9 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x2 = XEXP (x1, 0);
  goto L2647;

  L2471: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L2472;
  goto ret0;

  L2472: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L2473;
  goto ret0;

  L2473: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && GET_CODE (x4) == MULT && 1)
    goto L2474;
  goto ret0;

  L2474: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      ro[0] = x5;
      goto L2475;
    }
  goto ret0;

  L2475: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && XWINT (x5, 0) == 4 && 1)
    goto L2476;
  goto ret0;

  L2476: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == LABEL_REF && 1)
    goto L2477;
  goto ret0;

  L2477: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  ro[1] = x5;
  goto L2478;

  L2478: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2479;
  goto ret0;

  L2479: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L2480;
    }
  goto ret0;

  L2480: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2481;
  goto ret0;

  L2481: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 31 && 1)
    if (TARGET_EMBEDDED_PIC)
      return 445;
  goto ret0;

  L2648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL && 1)
    goto L2649;
  goto ret0;

  L2649: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == MEM && 1)
    goto L2650;
  goto ret0;

  L2650: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (call_insn_operand (x4, VOIDmode))
    {
      ro[1] = x4;
      goto L2651;
    }
  goto ret0;

  L2651: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  ro[2] = x3;
  goto L2652;

  L2652: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2653;
  goto ret0;

  L2653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L2654;
    }
  goto ret0;

  L2654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL && 1)
    goto L2655;
  goto ret0;

  L2655: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == MEM && 1)
    goto L2656;
  goto ret0;

  L2656: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[1]) && 1)
    goto L2657;
  goto ret0;

  L2657: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    goto L2658;
  goto ret0;

  L2658: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2659;
  goto ret0;

  L2659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[4] = x2;
      if (TARGET_ABICALLS && !TARGET_LONG_CALLS)
	return 476;
      }
  goto ret0;

  L346: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L347;
  goto ret0;

  L347: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L348;
    }
  goto ret0;

  L348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L349;
  goto ret0;

  L349: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == MULT && 1)
    goto L350;
  goto ret0;

  L350: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L351;
    }
  goto ret0;

  L351: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L352;
    }
  goto ret0;

  L352: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L353;
    }
  goto ret0;

  L353: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L354;
  goto ret0;

  L354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L355;
    }
  goto ret0;

  L355: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L356;
  goto ret0;

  L356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L357;
    }
  goto ret0;

  L357: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L358;
  goto ret0;

  L358: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      goto L359;
    }
  goto ret0;

  L359: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L360;
  goto ret0;

  L360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[7] = x2;
      if (TARGET_MIPS3900
   && !TARGET_MIPS16)
	return 58;
      }
  goto ret0;

  L1547: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L1548;
  goto ret0;

  L1548: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, BLKmode))
    {
      ro[0] = x2;
      goto L1549;
    }
  goto ret0;

  L1549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, BLKmode))
    {
      ro[1] = x2;
      goto L1550;
    }
  goto ret0;

  L1550: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1551;
  goto ret0;

  L1551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L1552;
    }
  goto ret0;

  L1552: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1553;
  goto ret0;

  L1553: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L1554;
    }
  goto ret0;

  L1554: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1555;
  goto ret0;

  L1555: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      goto L1556;
    }
  goto ret0;

  L1556: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1557;
  goto ret0;

  L1557: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[7] = x2;
      goto L1558;
    }
  goto ret0;

  L1558: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE && 1)
    goto L1559;
  goto ret0;

  L1559: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[2] = x2;
      goto L1560;
    }
  goto ret0;

  L1560: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == USE && 1)
    goto L1561;
  goto ret0;

  L1561: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[3] = x2;
      goto L1562;
    }
  goto ret0;

  L1562: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 7);
  if (GET_CODE (x1) == USE && 1)
    goto L1563;
  goto ret0;

  L1563: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != CONST_INT)
    goto ret0;
  if (XWINT (x2, 0) == 0 && 1)
    goto L1582;
  if (GET_CODE (x2) != CONST_INT)
    goto ret0;
  if (XWINT (x2, 0) == 1 && 1)
    goto L1678;
  if (XWINT (x2, 0) == 2 && 1)
    goto L1716;
  goto ret0;

  L1582: ATTRIBUTE_UNUSED_LABEL
  return 276;
  L1583: ATTRIBUTE_UNUSED_LABEL
  if (TARGET_MIPS16)
    return 277;
  L1602: ATTRIBUTE_UNUSED_LABEL
  if (TARGET_MIPS16)
    return 278;
  L1621: ATTRIBUTE_UNUSED_LABEL
  if (TARGET_MIPS16)
    return 279;
  goto ret0;

  L1678: ATTRIBUTE_UNUSED_LABEL
  return 281;
  L1679: ATTRIBUTE_UNUSED_LABEL
  if (TARGET_MIPS16)
    return 282;
  goto ret0;

  L1716: ATTRIBUTE_UNUSED_LABEL
  return 283;
  L1717: ATTRIBUTE_UNUSED_LABEL
  if (TARGET_MIPS16)
    return 284;
  goto ret0;

  L787: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_CODE (x1) == EQ && 1)
    goto L788;
  goto ret0;

  L788: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      ro[0] = x2;
      goto L789;
    }
  goto ret0;

  L789: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (true_reg_or_0_operand (x2, VOIDmode))
    {
      ro[1] = x2;
      goto L790;
    }
  goto ret0;

  L790: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (immediate_operand (x1, VOIDmode))
    goto L804;
  goto ret0;

  L804: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x1;
  if (!TARGET_MIPS16)
    return 97;
  L805: ATTRIBUTE_UNUSED_LABEL
  if (pnum_clobbers != 0 && 1)
    {
      ro[2] = x1;
      if (TARGET_MIPS16)
	{
	  *pnum_clobbers = 1;
	  return 98;
	}
      }
  goto ret0;

  L2495: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT && XWINT (x1, 0) == 0 && 1)
    return 451;
  goto ret0;

  L2742: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, QImode))
    {
      ro[0] = x1;
      if (TARGET_MIPS16)
	return 493;
      }
  goto ret0;

  L2744: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, HImode))
    {
      ro[0] = x1;
      if (TARGET_MIPS16)
	return 494;
      }
  goto ret0;

  L2746: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, SImode))
    {
      ro[0] = x1;
      if (TARGET_MIPS16)
	return 495;
      }
  goto ret0;

  L2748: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, DImode))
    {
      ro[0] = x1;
      if (TARGET_MIPS16)
	return 496;
      }
  goto ret0;

  L2750: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, SFmode))
    {
      ro[0] = x1;
      if (TARGET_MIPS16)
	return 497;
      }
  goto ret0;

  L2752: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (consttable_operand (x1, DFmode))
    {
      ro[0] = x1;
      if (TARGET_MIPS16)
	return 498;
      }
  goto ret0;

  L2754: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT && XWINT (x1, 0) == 0 && 1)
    if (TARGET_MIPS16)
      return 499;
  goto ret0;

  L2756: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT && XWINT (x1, 0) == 0 && 1)
    if (TARGET_MIPS16)
      return 500;
  goto ret0;

  L2758: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT && XWINT (x1, 0) == 0 && 1)
    if (TARGET_MIPS16)
      return 501;
  goto ret0;
 ret0: return -1;
}

rtx
split_1 (x0, insn)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DImode)
    goto ret0;
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L115;
    case MINUS:
      goto L249;
    case NOT:
      goto L1022;
    case AND:
      goto L1140;
    case IOR:
      goto L1080;
    case XOR:
      goto L1114;
    case MEM:
      goto L1384;
    case ASHIFT:
      goto L1812;
    case ASHIFTRT:
      goto L1908;
    case LSHIFTRT:
      goto L2014;
    case EQ:
      goto L2122;
    case NE:
      goto L2152;
    case GE:
      goto L2192;
    case LE:
      goto L2260;
    case GEU:
      goto L2300;
    case LEU:
      goto L2368;
    case SUBREG:
    case REG:
      if (register_operand (x1, DImode))
	{
	  ro[1] = x1;
	  if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1])))
	    return gen_split_226 (operands);
	  }
    }
  goto ret0;

  L115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L116;
  L120: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L121;
    }
  goto ret0;

  L116: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[1] = x2;
      if (TARGET_MIPS16 && TARGET_64BIT && reload_completed
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0xf
	&& INTVAL (operands[1]) <= 0xf + 0xf)
       || (INTVAL (operands[1]) < - 0x10
	   && INTVAL (operands[1]) >= - 0x10 - 0x10)))
	return gen_split_20 (operands);
      }
  x2 = XEXP (x1, 0);
  goto L120;

  L121: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      if (TARGET_MIPS16 && TARGET_64BIT && reload_completed
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0xf)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x10)))
	return gen_split_21 (operands);
      }
  goto ret0;

  L249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L250;
  L254: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L255;
    }
  goto ret0;

  L250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[1] = x2;
      if (TARGET_MIPS16 && TARGET_64BIT && reload_completed
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0x10
	&& INTVAL (operands[1]) <= 0x10 + 0x10)
       || (INTVAL (operands[1]) < - 0xf
	   && INTVAL (operands[1]) >= - 0xf - 0xf)))
	return gen_split_44 (operands);
      }
  x2 = XEXP (x1, 0);
  goto L254;

  L255: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      if (TARGET_MIPS16 && TARGET_64BIT && reload_completed
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x8
	&& INTVAL (operands[2]) <= 0x8 + 0x10)
       || (INTVAL (operands[2]) < - 0x7
	   && INTVAL (operands[2]) >= - 0x7 - 0xf)))
	return gen_split_45 (operands);
      }
  goto ret0;

  L1022: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1])))
	return gen_split_133 (operands);
      }
  goto ret0;

  L1140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  if (GET_CODE (x2) == NOT && 1)
    goto L1141;
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1049;
    }
  goto ret0;

  L1141: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1142;
    }
  goto ret0;

  L1142: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == NOT && 1)
    goto L1143;
  goto ret0;

  L1143: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      if (reload_completed && !TARGET_MIPS16 && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
	return gen_split_160 (operands);
      }
  goto ret0;

  L1049: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
	return gen_split_140 (operands);
      }
  goto ret0;

  L1080: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1081;
    }
  goto ret0;

  L1081: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
	return gen_split_148 (operands);
      }
  goto ret0;

  L1114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1115;
    }
  goto ret0;

  L1115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
	return gen_split_156 (operands);
      }
  goto ret0;

  L1384: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == PLUS && 1)
    goto L1385;
  goto ret0;

  L1385: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L1386;
  goto ret0;

  L1386: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && 1)
    {
      ro[1] = x3;
      if (TARGET_64BIT && TARGET_MIPS16 && reload_completed
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x10)
       || (INTVAL (operands[1]) >= 32 * 8
	   && INTVAL (operands[1]) <= 31 * 8 + 0x8)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 8
	   && (INTVAL (operands[1]) & 7) != 0)))
	return gen_split_229 (operands);
      }
  goto ret0;

  L1812: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1813;
    }
  goto ret0;

  L1813: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      if (TARGET_MIPS16 && TARGET_64BIT
   && reload_completed
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16)
	return gen_split_299 (operands);
      }
  goto ret0;

  L1908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L1909;
    }
  goto ret0;

  L1909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      if (TARGET_MIPS16 && TARGET_64BIT
   && reload_completed
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16)
	return gen_split_314 (operands);
      }
  goto ret0;

  L2014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2015;
    }
  goto ret0;

  L2015: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      if (TARGET_MIPS16
   && reload_completed
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16)
	return gen_split_331 (operands);
      }
  goto ret0;

  L2122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2123;
    }
  goto ret0;

  L2123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE
    && !TARGET_MIPS16
    && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0))
	return gen_split_364 (operands);
      }
  goto ret0;

  L2152: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2153;
    }
  goto ret0;

  L2153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_uns_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE
    && !TARGET_MIPS16
    && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0))
	return gen_split_371 (operands);
      }
  goto ret0;

  L2192: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2193;
    }
  goto ret0;

  L2193: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE
   && !TARGET_MIPS16)
	return gen_split_381 (operands);
      }
  goto ret0;

  L2260: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2261;
    }
  goto ret0;

  L2261: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE
   && !TARGET_MIPS16)
	return gen_split_395 (operands);
      }
  goto ret0;

  L2300: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2301;
    }
  goto ret0;

  L2301: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_arith_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE
   && !TARGET_MIPS16)
	return gen_split_405 (operands);
      }
  goto ret0;

  L2368: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (se_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L2369;
    }
  goto ret0;

  L2369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (se_register_operand (x2, DImode))
    {
      ro[2] = x2;
      if (TARGET_64BIT && TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE
   && !TARGET_MIPS16)
	return gen_split_419 (operands);
      }
  goto ret0;
 ret0: return 0;
}

rtx
split_2 (x0, insn)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L32;
	}
      break;
    case DImode:
      if (register_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L114;
	}
      break;
    case HImode:
      if (register_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L1482;
	}
      break;
    case QImode:
      if (register_operand (x1, QImode))
	{
	  ro[0] = x1;
	  goto L1499;
	}
      break;
    case DFmode:
      if (register_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L1532;
	}
    }
  goto ret0;

  L32: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case PLUS:
	  goto L33;
	case MINUS:
	  goto L167;
	case MEM:
	  goto L1407;
	case ASHIFT:
	  goto L1733;
	case ASHIFTRT:
	  goto L1829;
	case LSHIFTRT:
	  goto L1925;
	case EQ:
	  goto L2112;
	case NE:
	  goto L2142;
	case GE:
	  goto L2182;
	case LE:
	  goto L2250;
	case GEU:
	  goto L2290;
	case LEU:
	  goto L2358;
	}
    }
  if (GET_CODE (x1) != CONST_INT)
    goto ret0;
  if (large_int (x1, SImode))
    {
      ro[1] = x1;
      if (!TARGET_DEBUG_D_MODE && !TARGET_MIPS16)
	return gen_split_232 (operands);
      }
  L1412: ATTRIBUTE_UNUSED_LABEL
  goto L1416;

  L33: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L34;
  L38: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L39;
    }
  goto ret0;

  L34: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[1] = x2;
      if (TARGET_MIPS16 && reload_completed
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0x7f
	&& INTVAL (operands[1]) <= 0x7f + 0x7f)
       || (INTVAL (operands[1]) < - 0x80
	   && INTVAL (operands[1]) >= - 0x80 - 0x80)))
	return gen_split_7 (operands);
      }
  x2 = XEXP (x1, 0);
  goto L38;

  L39: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      if (TARGET_MIPS16 && reload_completed
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x7
	&& INTVAL (operands[2]) <= 0x7 + 0x7f)
       || (INTVAL (operands[2]) < - 0x8
	   && INTVAL (operands[2]) >= - 0x8 - 0x80)))
	return gen_split_8 (operands);
      }
  goto ret0;

  L167: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L168;
  L172: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L173;
    }
  goto ret0;

  L168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[1] = x2;
      if (TARGET_MIPS16 && reload_completed
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) > 0x80
	&& INTVAL (operands[1]) <= 0x80 + 0x80)
       || (INTVAL (operands[1]) < - 0x7f
	   && INTVAL (operands[1]) >= - 0x7f - 0x7f)))
	return gen_split_31 (operands);
      }
  x2 = XEXP (x1, 0);
  goto L172;

  L173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      if (TARGET_MIPS16 && reload_completed
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG
   && M16_REG_P (REGNO (operands[1]))
   && REGNO (operands[0]) != REGNO (operands[1])
   && GET_CODE (operands[2]) == CONST_INT
   && ((INTVAL (operands[2]) > 0x8
	&& INTVAL (operands[2]) <= 0x8 + 0x80)
       || (INTVAL (operands[2]) < - 0x7
	   && INTVAL (operands[2]) >= - 0x7 - 0x7f)))
	return gen_split_32 (operands);
      }
  goto ret0;

  L1407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1408;
  goto ret0;

  L1408: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L1409;
  goto ret0;

  L1409: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && 1)
    {
      ro[1] = x3;
      if (TARGET_MIPS16 && reload_completed
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 4
	   && INTVAL (operands[1]) <= 31 * 4 + 0x7c)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 4
	   && (INTVAL (operands[1]) & 3) != 0)))
	return gen_split_238 (operands);
      }
  goto ret0;

  L1733: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1734;
    }
  goto ret0;

  L1734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      if (TARGET_MIPS16
   && reload_completed
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16)
	return gen_split_288 (operands);
      }
  goto ret0;

  L1829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1830;
    }
  goto ret0;

  L1830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      if (TARGET_MIPS16
   && reload_completed
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16)
	return gen_split_303 (operands);
      }
  goto ret0;

  L1925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1926;
    }
  L1935: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1936;
    }
  goto ret0;

  L1926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      if (TARGET_MIPS16
   && reload_completed
   && GET_CODE (operands[2]) == CONST_INT
   && INTVAL (operands[2]) > 8
   && INTVAL (operands[2]) <= 16)
	return gen_split_318 (operands);
      }
  x2 = XEXP (x1, 0);
  goto L1935;

  L1936: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (immediate_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_MIPS16)
	return gen_split_320 (operands);
      }
  goto ret0;

  L2112: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2113;
    }
  goto ret0;

  L2113: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE && !TARGET_MIPS16
    && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0))
	return gen_split_362 (operands);
      }
  goto ret0;

  L2142: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2143;
    }
  goto ret0;

  L2143: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (uns_arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE && !TARGET_MIPS16
    && (GET_CODE (operands[2]) != CONST_INT || INTVAL (operands[2]) != 0))
	return gen_split_369 (operands);
      }
  goto ret0;

  L2182: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2183;
    }
  goto ret0;

  L2183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE && !TARGET_MIPS16)
	return gen_split_379 (operands);
      }
  goto ret0;

  L2250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2251;
    }
  goto ret0;

  L2251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE && !TARGET_MIPS16)
	return gen_split_393 (operands);
      }
  goto ret0;

  L2290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2291;
    }
  goto ret0;

  L2291: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arith_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE && !TARGET_MIPS16)
	return gen_split_403 (operands);
      }
  goto ret0;

  L2358: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2359;
    }
  goto ret0;

  L2359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (TARGET_DEBUG_C_MODE && !TARGET_DEBUG_D_MODE && !TARGET_MIPS16)
	return gen_split_417 (operands);
      }
  goto ret0;

  L1416: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (TARGET_MIPS16 && reload_completed
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) >= 0x100
   && INTVAL (operands[1]) <= 0xff + 0x7f)
    return gen_split_239 (operands);
  L1417: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (TARGET_MIPS16 && reload_completed
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && INTVAL (operands[1]) < 0
   && INTVAL (operands[1]) > - 0x8000)
    return gen_split_240 (operands);
  goto ret0;
 L114: ATTRIBUTE_UNUSED_LABEL
  return split_1 (x0, insn);

  L1482: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode && GET_CODE (x1) == MEM && 1)
    goto L1483;
  goto ret0;

  L1483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1484;
  goto ret0;

  L1484: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L1485;
  goto ret0;

  L1485: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && 1)
    {
      ro[1] = x3;
      if (TARGET_MIPS16 && reload_completed
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32 * 2
	   && INTVAL (operands[1]) <= 31 * 2 + 0x7e)
       || (INTVAL (operands[1]) >= 0
	   && INTVAL (operands[1]) < 32 * 2
	   && (INTVAL (operands[1]) & 1) != 0)))
	return gen_split_258 (operands);
      }
  goto ret0;

  L1499: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == QImode && GET_CODE (x1) == MEM && 1)
    goto L1500;
  goto ret0;

  L1500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1501;
  goto ret0;

  L1501: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L1502;
  goto ret0;

  L1502: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && 1)
    {
      ro[1] = x3;
      if (TARGET_MIPS16 && reload_completed
   && GET_CODE (operands[0]) == REG
   && M16_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == CONST_INT
   && ((INTVAL (operands[1]) < 0
	&& INTVAL (operands[1]) >= -0x80)
       || (INTVAL (operands[1]) >= 32
	   && INTVAL (operands[1]) <= 31 + 0x7f)))
	return gen_split_263 (operands);
      }
  goto ret0;

  L1532: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (register_operand (x1, DFmode))
    {
      ro[1] = x1;
      if (reload_completed && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1])))
	return gen_split_273 (operands);
      }
  goto ret0;
 ret0: return 0;
}

rtx
split_3 (x0, insn)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case PLUS:
      goto L52;
    case MINUS:
      goto L186;
    case ASHIFT:
      goto L1755;
    case ASHIFTRT:
      goto L1851;
    case LSHIFTRT:
      goto L1957;
    }
  goto ret0;

  L52: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L53;
    }
  goto ret0;

  L53: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L54;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      goto L80;
    }
  goto ret0;

  L54: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L55;
  goto ret0;

  L55: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L64;
  goto ret0;

  L64: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))
   && (REGNO (operands[0]) != REGNO (operands[1])
       || REGNO (operands[0]) != REGNO (operands[2])))
    return gen_split_11 (operands);
  L65: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2]))
   && (REGNO (operands[0]) != REGNO (operands[1])
       || REGNO (operands[0]) != REGNO (operands[2])))
    return gen_split_12 (operands);
  goto ret0;

  L80: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L81;
  goto ret0;

  L81: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L90;
  goto ret0;

  L90: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && INTVAL (operands[2]) > 0)
    return gen_split_14 (operands);
  L91: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && INTVAL (operands[2]) > 0)
    return gen_split_15 (operands);
  goto ret0;

  L186: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L187;
    }
  goto ret0;

  L187: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L188;
    }
  if (GET_CODE (x3) == CONST_INT && small_int (x3, DImode))
    {
      ro[2] = x3;
      goto L214;
    }
  goto ret0;

  L188: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L189;
  goto ret0;

  L189: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L198;
  goto ret0;

  L198: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
    return gen_split_35 (operands);
  L199: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && GET_CODE (operands[2]) == REG && GP_REG_P (REGNO (operands[2])))
    return gen_split_36 (operands);
  goto ret0;

  L214: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L215;
  goto ret0;

  L215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    goto L224;
  goto ret0;

  L224: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && INTVAL (operands[2]) > 0)
    return gen_split_38 (operands);
  L225: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && GP_REG_P (REGNO (operands[0]))
   && GET_CODE (operands[1]) == REG && GP_REG_P (REGNO (operands[1]))
   && INTVAL (operands[2]) > 0)
    return gen_split_39 (operands);
  goto ret0;

  L1755: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1756;
    }
  goto ret0;

  L1756: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1757;
    }
  goto ret0;

  L1757: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1758;
  goto ret0;

  L1758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (register_operand (x2, SImode))
    goto L1767;
  L1786: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    goto L1795;
  goto ret0;

  L1767: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_292 (operands);
  L1768: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_293 (operands);
  goto L1786;

  L1795: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_295 (operands);
  L1796: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_296 (operands);
  goto ret0;

  L1851: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1852;
    }
  goto ret0;

  L1852: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1853;
    }
  goto ret0;

  L1853: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1854;
  goto ret0;

  L1854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (register_operand (x2, SImode))
    goto L1863;
  L1882: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    goto L1891;
  goto ret0;

  L1863: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_307 (operands);
  L1864: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_308 (operands);
  goto L1882;

  L1891: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_310 (operands);
  L1892: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_311 (operands);
  goto ret0;

  L1957: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L1958;
    }
  goto ret0;

  L1958: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && small_int (x3, SImode))
    {
      ro[2] = x3;
      goto L1959;
    }
  goto ret0;

  L1959: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1960;
  goto ret0;

  L1960: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (register_operand (x2, SImode))
    goto L1969;
  L1988: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    goto L1997;
  goto ret0;

  L1969: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_324 (operands);
  L1970: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 32) != 0)
    return gen_split_325 (operands);
  goto L1988;

  L1997: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && !WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_327 (operands);
  L1998: ATTRIBUTE_UNUSED_LABEL
  ro[3] = x2;
  if (reload_completed && WORDS_BIG_ENDIAN && !TARGET_64BIT
   && !TARGET_DEBUG_D_MODE && !TARGET_DEBUG_G_MODE && !TARGET_MIPS16
   && GET_CODE (operands[0]) == REG && REGNO (operands[0]) < FIRST_PSEUDO_REGISTER
   && GET_CODE (operands[1]) == REG && REGNO (operands[1]) < FIRST_PSEUDO_REGISTER
   && (INTVAL (operands[2]) & 63) < 32
   && (INTVAL (operands[2]) & 63) != 0)
    return gen_split_328 (operands);
  goto ret0;
 ret0: return 0;
}

rtx
split_insns (x0, insn)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  L30: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x0))
    {
    default:
      break;
    case SET:
      goto L31;
    case PARALLEL:
      if (XVECLEN (x0, 0) == 2 && 1)
	goto L49;
      if (XVECLEN (x0, 0) == 5 && 1)
	goto L369;
      if (XVECLEN (x0, 0) == 8 && 1)
	goto L1623;
    }
  goto ret0;
 L31: ATTRIBUTE_UNUSED_LABEL
  return split_2 (x0, insn);

  L49: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L50;
  goto ret0;

  L50: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      ro[0] = x2;
      goto L51;
    }
  goto ret0;
 L51: ATTRIBUTE_UNUSED_LABEL
  return split_3 (x0, insn);

  L369: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L370;
  goto ret0;

  L370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L371;
    }
  goto ret0;

  L371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case PLUS:
      goto L372;
    case MINUS:
      goto L388;
    }
  goto ret0;

  L372: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == MULT && 1)
    goto L373;
  goto ret0;

  L373: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L374;
    }
  goto ret0;

  L374: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L375;
    }
  goto ret0;

  L375: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L376;
    }
  goto ret0;

  L376: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L377;
  goto ret0;

  L377: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L378;
    }
  goto ret0;

  L378: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L379;
  goto ret0;

  L379: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L380;
    }
  goto ret0;

  L380: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L381;
  goto ret0;

  L381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      goto L382;
    }
  goto ret0;

  L382: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L383;
  goto ret0;

  L383: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[7] = x2;
      if (reload_completed && GP_REG_P (true_regnum (operands[0])) && GP_REG_P (true_regnum (operands[3])))
	return gen_split_59 (operands);
      }
  goto ret0;

  L388: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L389;
    }
  goto ret0;

  L389: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == MULT && 1)
    goto L390;
  goto ret0;

  L390: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L391;
    }
  goto ret0;

  L391: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L392;
    }
  goto ret0;

  L392: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L393;
  goto ret0;

  L393: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L394;
    }
  goto ret0;

  L394: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L395;
  goto ret0;

  L395: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L396;
    }
  goto ret0;

  L396: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L397;
  goto ret0;

  L397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[6] = x2;
      goto L398;
    }
  goto ret0;

  L398: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L399;
  goto ret0;

  L399: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[7] = x2;
      if (reload_completed && GP_REG_P (true_regnum (operands[0])) && GP_REG_P (true_regnum (operands[1])))
	return gen_split_60 (operands);
      }
  goto ret0;

  L1623: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L1624;
  goto ret0;

  L1624: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == BLKmode && GET_CODE (x2) == MEM && 1)
    goto L1625;
  goto ret0;

  L1625: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L1626;
    }
  goto ret0;

  L1626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode && GET_CODE (x2) == MEM && 1)
    goto L1627;
  goto ret0;

  L1627: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1628;
    }
  goto ret0;

  L1628: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1629;
  goto ret0;

  L1629: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[4] = x2;
      goto L1630;
    }
  goto ret0;

  L1630: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1631;
  goto ret0;

  L1631: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L1632;
    }
  goto ret0;

  L1632: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1633;
  goto ret0;

  L1633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[6] = x2;
      goto L1634;
    }
  goto ret0;

  L1634: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1635;
  goto ret0;

  L1635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[7] = x2;
      goto L1636;
    }
  goto ret0;

  L1636: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == USE && 1)
    goto L1637;
  goto ret0;

  L1637: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[2] = x2;
      goto L1638;
    }
  goto ret0;

  L1638: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == USE && 1)
    goto L1639;
  goto ret0;

  L1639: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && small_int (x2, SImode))
    {
      ro[3] = x2;
      goto L1640;
    }
  goto ret0;

  L1640: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 7);
  if (GET_CODE (x1) == USE && 1)
    goto L1641;
  goto ret0;

  L1641: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    if (reload_completed && !TARGET_DEBUG_D_MODE && INTVAL (operands[2]) > 0)
      return gen_split_280 (operands);
  goto ret0;
 ret0: return 0;
}

