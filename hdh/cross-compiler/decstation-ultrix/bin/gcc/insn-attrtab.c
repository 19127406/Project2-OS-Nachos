/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "insn-attr.h"
#include "toplev.h"

#define operands recog_operand

int
insn_current_length (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_variable_length_p (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_default_length (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 272:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 4;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 271:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 270:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return 1;
        }
      else if ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))
        {
	  return 2;
        }
      else if (which_alternative == 9)
        {
	  return 1;
        }
      else if (which_alternative == 10)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 269:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return 4;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 2;
        }
      else if (which_alternative == 10)
        {
	  return 4;
        }
      else if (which_alternative == 11)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 267:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return 1;
        }
      else if (which_alternative == 4)
        {
	  return 2;
        }
      else if (which_alternative == 5)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 266:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 265:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 1;
        }
      else if (which_alternative == 10)
        {
	  return 2;
        }
      else if (which_alternative == 11)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 262:
    case 257:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  if (m16_uimm8_1 (operands[1], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else if (which_alternative == 4)
        {
	  if (m16_nuimm8_1 (operands[1], VOIDmode))
	    {
	      return 2;
	    }
	  else
	    {
	      return 3;
	    }
        }
      else if (which_alternative == 5)
        {
	  return 1;
        }
      else if (which_alternative == 6)
        {
	  return 2;
        }
      else if (which_alternative == 7)
        {
	  return 1;
        }
      else if (which_alternative == 8)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 261:
    case 256:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 260:
    case 255:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 243:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 1;
        }
      else if (which_alternative == 10)
        {
	  return 2;
        }
      else if (which_alternative == 11)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 237:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  if (m16_uimm8_1 (operands[1], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else if (which_alternative == 5)
        {
	  if (m16_nuimm8_1 (operands[1], VOIDmode))
	    {
	      return 2;
	    }
	  else
	    {
	      return 3;
	    }
        }
      else if (which_alternative == 6)
        {
	  if (m16_usym8_4 (operands[1], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else if (which_alternative == 7)
        {
	  return 1;
        }
      else if (which_alternative == 8)
        {
	  return 2;
        }
      else if (which_alternative == 9)
        {
	  return 1;
        }
      else if (which_alternative == 10)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 236:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if (which_alternative == 6)
        {
	  return 1;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else if ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || (which_alternative == 12)))))
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 235:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if (which_alternative == 6)
        {
	  return 1;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else if ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || (which_alternative == 11))))
        {
	  return 1;
        }
      else if (which_alternative == 12)
        {
	  return 2;
        }
      else if (which_alternative == 13)
        {
	  return 1;
        }
      else if (which_alternative == 14)
        {
	  return 2;
        }
      else if ((which_alternative == 15) || ((which_alternative == 16) || (which_alternative == 17)))
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 228:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  if (m16_uimm8_1 (operands[1], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else if (which_alternative == 4)
        {
	  if (m16_nuimm8_1 (operands[1], VOIDmode))
	    {
	      return 2;
	    }
	  else
	    {
	      return 3;
	    }
        }
      else if (which_alternative == 5)
        {
	  if (m16_usym5_4 (operands[1], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else if (which_alternative == 6)
        {
	  return 1;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else if (which_alternative == 8)
        {
	  return 1;
        }
      else if (which_alternative == 9)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 227:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if (which_alternative == 6)
        {
	  return 1;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else if ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10)))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 225:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 3;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if (which_alternative == 6)
        {
	  return 4;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else if (which_alternative == 8)
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 224:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 4;
        }
      else if (which_alternative == 4)
        {
	  return 2;
        }
      else if (which_alternative == 5)
        {
	  return 4;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return 2;
        }
      else
        {
	  return 2;
        }

    case 189:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative != 5)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 186:
    case 183:
    case 180:
    case 177:
    case 174:
    case 58:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative != 2)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 507:
    case 506:
      return 10 /* 0xa */;

    case 505:
    case 504:
    case 503:
    case 502:
    case 500:
    case 499:
    case 497:
    case 495:
    case 494:
    case 493:
    case 476:
    case 474:
    case 473:
    case 469:
    case 467:
    case 464:
    case 463:
    case 460:
    case 458:
    case 441:
    case 431:
    case 418:
    case 416:
    case 404:
    case 402:
    case 394:
    case 392:
    case 380:
    case 378:
    case 370:
    case 368:
    case 363:
    case 361:
    case 343:
    case 341:
    case 323:
    case 306:
    case 291:
    case 167:
    case 166:
    case 165:
    case 154:
    case 53:
    case 50:
      return 2;

    case 501:
    case 274:
    case 120:
    case 119:
    case 98:
    case 97:
    case 57:
      return 3;

    case 498:
    case 496:
    case 455:
    case 326:
    case 309:
    case 294:
    case 127:
    case 34:
    case 10:
      return 4;

    case 451:
      return 0;

    case 445:
    case 124:
    case 123:
      return 6;

    case 415:
    case 413:
    case 391:
    case 389:
      extract_insn (insn);
      if (m16_uimm8_m1_1 (operands[2], VOIDmode))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 410:
    case 408:
    case 386:
    case 384:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  if (m16_uimm8_1 (operands[2], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }
        }

    case 330:
    case 317:
    case 313:
    case 302:
    case 298:
    case 287:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  if (m16_uimm3_b (operands[2], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }
        }

    case 322:
    case 305:
    case 290:
      return 12 /* 0xc */;

    case 319:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  if (m16_uimm3_b (operands[2], VOIDmode))
	    {
	      return 2;
	    }
	  else
	    {
	      return 3;
	    }
        }
      else
        {
	  if (m16_uimm3_b (operands[2], VOIDmode))
	    {
	      return 3;
	    }
	  else
	    {
	      return 4;
	    }
        }

    case 282:
    case 281:
    case 279:
    case 278:
    case 277:
    case 276:
      return 20 /* 0x14 */;

    case 234:
    case 223:
    case 199:
    case 197:
    case 195:
    case 193:
    case 191:
    case 188:
    case 187:
    case 184:
    case 181:
    case 178:
    case 175:
    case 172:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 219:
    case 218:
    case 217:
    case 216:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 208:
    case 207:
    case 206:
    case 205:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else
        {
	  return 3;
        }

    case 204:
    case 203:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 202:
    case 201:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 11 /* 0xb */;
        }
      else if (which_alternative == 1)
        {
	  return 9;
        }
      else if (which_alternative == 2)
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 164:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((mips16) == (0))
        {
	  return 1;
        }
      else
        {
	  return 4;
        }

    case 163:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((mips16) == (0))
        {
	  return 1;
        }
      else
        {
	  return 4;
        }

    case 162:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((mips16) == (0))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 159:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((TARGET_64BIT) != (0))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 155:
    case 151:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  if (m16_uimm8_1 (operands[2], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else
        {
	  return 1;
        }

    case 153:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((TARGET_64BIT) != (0))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 147:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((mips_isa) >= (3))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 146:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((TARGET_64BIT) != (0))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 139:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((mips_isa) >= (3))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 138:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((TARGET_64BIT) != (0))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 132:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((mips_isa) >= (3))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 63:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((GENERATE_MULT3) != (0))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 47:
    case 30:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  if (m16_nsimm8_1 (operands[2], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else if (which_alternative == 1)
        {
	  if (m16_nsimm4_1 (operands[2], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else
        {
	  return 1;
        }

    case 43:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  if (m16_nsimm5_1 (operands[2], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else if (which_alternative == 1)
        {
	  if (m16_nsimm4_1 (operands[2], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else
        {
	  return 1;
        }

    case 42:
      extract_insn (insn);
      if (m16_nuimm5_4 (operands[0], VOIDmode))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 41:
    case 28:
      extract_insn (insn);
      if (m16_nsimm8_8 (operands[0], VOIDmode))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 37:
    case 13:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 29:
      extract_insn (insn);
      if (m16_nuimm8_4 (operands[1], VOIDmode))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 23:
    case 6:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  if (m16_simm8_1 (operands[2], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else if (which_alternative == 1)
        {
	  if (m16_simm4_1 (operands[2], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else
        {
	  return 1;
        }

    case 19:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  if (m16_simm5_1 (operands[2], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else if (which_alternative == 1)
        {
	  if (m16_simm4_1 (operands[2], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else
        {
	  return 1;
        }

    case 18:
      extract_insn (insn);
      if (m16_uimm5_4 (operands[0], VOIDmode))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 17:
    case 4:
      extract_insn (insn);
      if (m16_simm8_8 (operands[0], VOIDmode))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 5:
      extract_insn (insn);
      if (m16_uimm8_4 (operands[1], VOIDmode))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

int
result_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 429:
    case 428:
    case 427:
    case 426:
    case 425:
    case 424:
    case 423:
    case 422:
    case 421:
    case 420:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R6000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R6000)))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 270:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 269:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000)))))))))) || ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 272:
    case 267:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 3) || (which_alternative == 4))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 3) || (which_alternative == 4))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 271:
    case 266:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || (which_alternative == 2)) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 1) || (which_alternative == 2)) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 265:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000)))))))))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 261:
    case 260:
    case 256:
    case 255:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative == 2) || (which_alternative == 3)) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000)))))))))) || ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 243:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else if (((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000)))))))))) || (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 237:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 3) || (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8)))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 3) || (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8)))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 236:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000)))))))))) || ((which_alternative == 8) || (which_alternative == 9)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 235:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000)))))))))) || ((which_alternative == 8) || (which_alternative == 9)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 228:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 227:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 262:
    case 257:
    case 225:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 5) || (which_alternative == 6))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 5) || (which_alternative == 6))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 224:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 2) || (which_alternative == 3)) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 189:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && (which_alternative != 3))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && (which_alternative != 3))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 186:
    case 183:
    case 180:
    case 177:
    case 174:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative != 0) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 3;
        }
      else if ((which_alternative != 0) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 319:
    case 249:
    case 248:
    case 247:
    case 246:
    case 218:
    case 216:
    case 199:
    case 197:
    case 195:
    case 193:
    case 191:
    case 188:
    case 187:
    case 184:
    case 181:
    case 178:
    case 175:
    case 172:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 130:
    case 129:
    case 122:
    case 121:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 118:
    case 116:
      if ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))
        {
	  return 54 /* 0x36 */;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R4650))))
        {
	  return 31 /* 0x1f */;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  return 21 /* 0x15 */;
        }
      else
        {
	  return 1;
        }

    case 117:
    case 115:
      if ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))
        {
	  return 112 /* 0x70 */;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R4650))))
        {
	  return 60 /* 0x3c */;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 1;
        }

    case 114:
    case 110:
    case 106:
    case 102:
      if ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R4300))))
        {
	  return 69 /* 0x45 */;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((mips_cpu_attr) == (CPU_R4100)))
        {
	  return 67 /* 0x43 */;
        }
      else if (((mips_cpu_attr) == (CPU_R4600)))
        {
	  return 42 /* 0x2a */;
        }
      else if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R4650))))))
        {
	  return 38 /* 0x26 */;
        }
      else if (((mips_cpu_attr) == (CPU_R4650)))
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 35 /* 0x23 */;
        }

    case 112:
    case 108:
    case 104:
    case 100:
    case 95:
    case 93:
    case 91:
    case 89:
      if (((mips_cpu_attr) == (CPU_R4000)))
        {
	  return 69 /* 0x45 */;
        }
      else if (((mips_cpu_attr) == (CPU_R4600)))
        {
	  return 42 /* 0x2a */;
        }
      else if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))
        {
	  return 38 /* 0x26 */;
        }
      else if (((mips_cpu_attr) == (CPU_R4300)))
        {
	  return 37 /* 0x25 */;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R5000))))
        {
	  return 36 /* 0x24 */;
        }
      else if (((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900)))) || (((mips_cpu_attr) == (CPU_R4100))))
        {
	  return 35 /* 0x23 */;
        }
      else
        {
	  return 1;
        }

    case 87:
    case 85:
      if ((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R4650))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R6000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000))))))))
        {
	  return 23 /* 0x17 */;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  return 21 /* 0x15 */;
        }
      else if (((mips_cpu_attr) == (CPU_R6000)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 1;
        }

    case 86:
    case 84:
      if ((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R4650))))
        {
	  return 61 /* 0x3d */;
        }
      else if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R6000)))) && (! (((mips_cpu_attr) == (CPU_R4300)))))))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  return 19 /* 0x13 */;
        }
      else if (((mips_cpu_attr) == (CPU_R6000)))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 1;
        }

    case 72:
    case 71:
    case 63:
    case 62:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4000)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R4600))))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  return 9;
        }
      else if (((mips_cpu_attr) == (CPU_R4300)))
        {
	  return 8;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4100))))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 58:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative != 2) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4000)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000))))))))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((which_alternative != 2) && ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900)))))
        {
	  return 12 /* 0xc */;
        }
      else if ((which_alternative != 2) && ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R4600)))))
        {
	  return 10 /* 0xa */;
        }
      else if ((which_alternative != 2) && ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000)))))
        {
	  return 5;
        }
      else if ((which_alternative != 2) && (((mips_cpu_attr) == (CPU_R4650))))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 75:
    case 74:
    case 73:
    case 70:
    case 67:
    case 66:
    case 57:
    case 56:
    case 55:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4000)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  return 17 /* 0x11 */;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R4600))))
        {
	  return 10 /* 0xa */;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))
        {
	  return 5;
        }
      else if (((mips_cpu_attr) == (CPU_R4650)))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 53:
    case 52:
      if ((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R4650))))
        {
	  return 8;
        }
      else if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R6000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000))))))))
        {
	  return 7;
        }
      else if ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_R4300))))
        {
	  return 5;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R5000)))))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 50:
    case 49:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R6000)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))
        {
	  return 8;
        }
      else if (((mips_cpu_attr) == (CPU_R6000)))
        {
	  return 6;
        }
      else
        {
	  return 5;
        }

    case 25:
    case 24:
    case 1:
    case 0:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R6000)))) && (! (((mips_cpu_attr) == (CPU_R4300)))))))
        {
	  return 4;
        }
      else if ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_R4300))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

int
divide_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 118:
    case 116:
      if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600))))
        {
	  return 31 /* 0x1f */;
        }
      else if (! (((mips_cpu_attr) == (CPU_R4300))))
        {
	  return 54 /* 0x36 */;
        }
      else
        {
	  return 112 /* 0x70 */;
        }

    case 117:
    case 115:
      if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600))))
        {
	  return 60 /* 0x3c */;
        }
      else
        {
	  return 112 /* 0x70 */;
        }

    case 87:
    case 85:
      if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  return 21 /* 0x15 */;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600))))
        {
	  return 32 /* 0x20 */;
        }
      else if (((mips_cpu_attr) == (CPU_R6000)))
        {
	  return 15 /* 0xf */;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 12 /* 0xc */;
        }
      else if (! (((mips_cpu_attr) == (CPU_R4300))))
        {
	  return 23 /* 0x17 */;
        }
      else
        {
	  return 112 /* 0x70 */;
        }

    case 86:
    case 84:
      if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600))))
        {
	  return 61 /* 0x3d */;
        }
      else if (((mips_cpu_attr) == (CPU_R6000)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 19 /* 0x13 */;
        }
      else if (! (((mips_cpu_attr) == (CPU_R4300))))
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 112 /* 0x70 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 112 /* 0x70 */;

    }
}

unsigned int
divide_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 786544 /* min 12, max 112 */;

    }
}

int
mult_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 53:
    case 52:
      if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  return 4;
        }
      else if (((mips_cpu_attr) == (CPU_R6000)))
        {
	  return 5;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 4;
        }
      else if ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && (! (((mips_cpu_attr) == (CPU_R4600))))))
        {
	  return 7;
        }
      else
        {
	  return 8;
        }

    case 50:
    case 49:
      if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  return 5;
        }
      else if (((mips_cpu_attr) == (CPU_R6000)))
        {
	  return 6;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 5;
        }
      else
        {
	  return 8;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 8;

    }
}

unsigned int
mult_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 262152 /* min 4, max 8 */;

    }
}

int
adder_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 429:
    case 428:
    case 427:
    case 426:
    case 425:
    case 424:
    case 423:
    case 422:
    case 421:
    case 420:
      if ((((mips_cpu_attr) == (CPU_R6000))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))
        {
	  return 2;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  return 1;
        }
      else if (! (((mips_cpu_attr) == (CPU_R4300))))
        {
	  return 3;
        }
      else
        {
	  return 4;
        }

    case 130:
    case 129:
    case 122:
    case 121:
      if (((mips_cpu_attr) == (CPU_R6000)))
        {
	  return 2;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))))))
        {
	  return 1;
        }
      else if (! (((mips_cpu_attr) == (CPU_R4300))))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 25:
    case 24:
    case 1:
    case 0:
      if (((mips_cpu_attr) == (CPU_R6000)))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 4;

    }
}

unsigned int
adder_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65540 /* min 1, max 4 */;

    }
}

int
imuldiv_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 262:
    case 257:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 9) && ((((((mips_cpu_attr) == (CPU_R4300))) || ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R5000))))) || (((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R3900)))))) || (((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R8000)))) || ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 261:
    case 256:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7)))))))) && ((((((mips_cpu_attr) == (CPU_R4300))) || ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R5000))))) || (((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R3900)))))) || (((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R8000)))) || ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 260:
    case 255:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8))))))))) && ((((((mips_cpu_attr) == (CPU_R4300))) || ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R5000))))) || (((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R3900)))))) || (((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R8000)))) || ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 237:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10)))))))))) && (((((mips_cpu_attr) == (CPU_R4300))) || (((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R5000)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4600)))))) || ((((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R8000))))) || ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 236:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))))) && (((((mips_cpu_attr) == (CPU_R4300))) || (((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R5000)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4600)))))) || ((((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R8000))))) || ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 235:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((which_alternative != 10) && ((which_alternative != 11) && ((which_alternative != 12) && ((which_alternative != 13) && (which_alternative != 14))))))))))))))) && (((((mips_cpu_attr) == (CPU_R4300))) || (((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R5000)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4600)))))) || ((((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R8000))))) || ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 228:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 10) && (((((mips_cpu_attr) == (CPU_R4300))) || ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R5000))))) || ((((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R3900))))) || (((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R8000)))) || ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 227:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7)))))))) && (((((mips_cpu_attr) == (CPU_R4300))) || ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R5000))))) || ((((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R3900))))) || (((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R8000)))) || ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 225:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 9) && (((((mips_cpu_attr) == (CPU_R4300))) || ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R5000))))) || ((((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R3900))))) || (((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R8000)))) || ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 224:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && (which_alternative != 5)))))) && (((((mips_cpu_attr) == (CPU_R4300))) || ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R5000))))) || ((((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R3900))))) || (((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R8000)))) || ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 189:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 3) && (((((mips_cpu_attr) == (CPU_R4300))) || ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R5000))))) || ((((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R3900))))) || (((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R8000)))) || ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 429:
    case 428:
    case 427:
    case 426:
    case 425:
    case 424:
    case 423:
    case 422:
    case 421:
    case 420:
    case 130:
    case 129:
    case 122:
    case 121:
      if (((mips_cpu_attr) == (CPU_R4300)))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 114:
    case 110:
    case 106:
    case 102:
      if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  return 68 /* 0x44 */;
        }
      else if (((mips_cpu_attr) == (CPU_R4100)))
        {
	  return 67 /* 0x43 */;
        }
      else if (((mips_cpu_attr) == (CPU_R4600)))
        {
	  return 42 /* 0x2a */;
        }
      else if (((mips_cpu_attr) == (CPU_R4650)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((mips_cpu_attr) == (CPU_R8000))) || ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))
        {
	  return 38 /* 0x26 */;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 112:
    case 108:
    case 104:
    case 100:
    case 95:
    case 93:
    case 91:
    case 89:
      if (((mips_cpu_attr) == (CPU_R4300)))
        {
	  return 37 /* 0x25 */;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  return 36 /* 0x24 */;
        }
      else if (((mips_cpu_attr) == (CPU_R4100)))
        {
	  return 35 /* 0x23 */;
        }
      else if (((mips_cpu_attr) == (CPU_R4600)))
        {
	  return 42 /* 0x2a */;
        }
      else if (((mips_cpu_attr) == (CPU_R4650)))
        {
	  return 36 /* 0x24 */;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 35 /* 0x23 */;
        }
      else if ((((mips_cpu_attr) == (CPU_R8000))) || ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))
        {
	  return 38 /* 0x26 */;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 72:
    case 71:
    case 63:
    case 62:
      if (((mips_cpu_attr) == (CPU_R4300)))
        {
	  return 8;
        }
      else if (((mips_cpu_attr) == (CPU_R4000)))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  return 9;
        }
      else if (((mips_cpu_attr) == (CPU_R4100)))
        {
	  return 4;
        }
      else if (((mips_cpu_attr) == (CPU_R4600)))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_cpu_attr) == (CPU_R4650)))
        {
	  return 4;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((mips_cpu_attr) == (CPU_R8000))) || ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 58:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative != 2) && (((mips_cpu_attr) == (CPU_R4300))))
        {
	  return 5;
        }
      else if ((which_alternative != 2) && (((mips_cpu_attr) == (CPU_R4000))))
        {
	  return 10 /* 0xa */;
        }
      else if ((which_alternative != 2) && (((mips_cpu_attr) == (CPU_R5000))))
        {
	  return 5;
        }
      else if ((which_alternative != 2) && (((mips_cpu_attr) == (CPU_R4100))))
        {
	  return 1;
        }
      else if ((which_alternative != 2) && (((mips_cpu_attr) == (CPU_R4600))))
        {
	  return 10 /* 0xa */;
        }
      else if ((which_alternative != 2) && (((mips_cpu_attr) == (CPU_R4650))))
        {
	  return 4;
        }
      else if ((which_alternative != 2) && ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))
        {
	  return 12 /* 0xc */;
        }
      else if ((which_alternative != 2) && (((((mips_cpu_attr) == (CPU_R8000))) || (((mips_cpu_attr) == (CPU_R6000)))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 75:
    case 74:
    case 73:
    case 70:
    case 67:
    case 66:
    case 57:
    case 56:
    case 55:
      if (((mips_cpu_attr) == (CPU_R4300)))
        {
	  return 5;
        }
      else if (((mips_cpu_attr) == (CPU_R4000)))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  return 5;
        }
      else if (((mips_cpu_attr) == (CPU_R4100)))
        {
	  return 1;
        }
      else if (((mips_cpu_attr) == (CPU_R4600)))
        {
	  return 10 /* 0xa */;
        }
      else if (((mips_cpu_attr) == (CPU_R4650)))
        {
	  return 4;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((mips_cpu_attr) == (CPU_R8000))) || ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 53:
    case 52:
      if (((mips_cpu_attr) == (CPU_R4300)))
        {
	  return 5;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 50:
    case 49:
      if (((mips_cpu_attr) == (CPU_R4300)))
        {
	  return 8;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 25:
    case 24:
    case 1:
    case 0:
      if (((mips_cpu_attr) == (CPU_R4300)))
        {
	  return 3;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 69 /* 0x45 */;

    }
}

unsigned int
imuldiv_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65605 /* min 1, max 69 */;

    }
}

int
memory_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 270:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((mips_cpu_attr) == (CPU_R5000))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))
        {
	  return 1;
        }
      else if (((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))))) || (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))))
        {
	  return 3;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))
        {
	  return 1;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 269:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((mips_cpu_attr) == (CPU_R5000))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if (((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10)))))))))))) || (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10)))))))
        {
	  return 3;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 272:
    case 267:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4)))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))) && ((which_alternative != 3) && (which_alternative != 4)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4)))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))) && ((which_alternative != 3) && (which_alternative != 4)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4)))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))) && ((which_alternative != 3) && (which_alternative != 4)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4)))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))) && ((which_alternative != 3) && (which_alternative != 4)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4)))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))) && ((which_alternative != 3) && (which_alternative != 4)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4)))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))) && ((which_alternative != 3) && (which_alternative != 4)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4)))))
        {
	  return 1;
        }
      else if (((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))) && ((which_alternative != 3) && (which_alternative != 4))))) || (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 3) || (which_alternative == 4)))))
        {
	  return 3;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative != 3) && (which_alternative != 4))))
        {
	  return 1;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))) && ((which_alternative != 3) && (which_alternative != 4)))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 271:
    case 266:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((mips_cpu_attr) == (CPU_R5000))) && ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) && ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  return 1;
        }
      else if (((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))) || (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 1) || (which_alternative == 2))))
        {
	  return 3;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  return 1;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 265:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((mips_cpu_attr) == (CPU_R5000))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if (((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10)))))))))))) || (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10))))))
        {
	  return 3;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))))
        {
	  return 1;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 261:
    case 260:
    case 256:
    case 255:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((mips_cpu_attr) == (CPU_R5000))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if (((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5))))) || (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return 3;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5)))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 243:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((mips_cpu_attr) == (CPU_R5000))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R5000))) && ((((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && ((((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && ((((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && ((((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && ((((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && ((((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))))
        {
	  return 1;
        }
      else if (((((mips_cpu_attr) == (CPU_R3000))) && ((((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12)))))) || (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))))))
        {
	  return 3;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12))))
        {
	  return 1;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10)))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 11) && (which_alternative != 12))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 237:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 9) || (which_alternative == 10))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 3) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 7) && (which_alternative != 8)))) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 9) && (which_alternative != 10)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 9) || (which_alternative == 10))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 3) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 7) && (which_alternative != 8)))) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 9) && (which_alternative != 10)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 9) || (which_alternative == 10))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 3) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 7) && (which_alternative != 8)))) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 9) && (which_alternative != 10)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 9) || (which_alternative == 10))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 3) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 7) && (which_alternative != 8)))) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 9) && (which_alternative != 10)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 9) || (which_alternative == 10))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 3) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 7) && (which_alternative != 8)))) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 9) && (which_alternative != 10)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 9) || (which_alternative == 10))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 3) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 7) && (which_alternative != 8)))) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 9) && (which_alternative != 10)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 9) || (which_alternative == 10))))
        {
	  return 1;
        }
      else if (((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 3) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 7) && (which_alternative != 8)))) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 9) && (which_alternative != 10))))) || (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 3) || (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8))))))
        {
	  return 3;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 9) || (which_alternative == 10))))
        {
	  return 1;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 3) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 7) && (which_alternative != 8)))) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 9) && (which_alternative != 10)))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 236:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((mips_cpu_attr) == (CPU_R5000))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if (((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7))))) || (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5)))))
        {
	  return 3;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 235:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((mips_cpu_attr) == (CPU_R5000))) && ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) && ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))))
        {
	  return 1;
        }
      else if (((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14))))))) || (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12)))))))
        {
	  return 3;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))))
        {
	  return 1;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 228:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 1;
        }
      else if (((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7))))) || (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7)))))
        {
	  return 3;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 1;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 227:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((mips_cpu_attr) == (CPU_R5000))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if (((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7)))) || (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5)))))
        {
	  return 3;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 1;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 262:
    case 257:
    case 225:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 7) && (which_alternative != 8)) && ((which_alternative != 5) && (which_alternative != 6)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 7) && (which_alternative != 8)) && ((which_alternative != 5) && (which_alternative != 6)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 7) && (which_alternative != 8)) && ((which_alternative != 5) && (which_alternative != 6)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 7) && (which_alternative != 8)) && ((which_alternative != 5) && (which_alternative != 6)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 7) && (which_alternative != 8)) && ((which_alternative != 5) && (which_alternative != 6)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8))))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 7) && (which_alternative != 8)) && ((which_alternative != 5) && (which_alternative != 6)))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8))))
        {
	  return 1;
        }
      else if (((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 7) && (which_alternative != 8)) && ((which_alternative != 5) && (which_alternative != 6))))) || (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 5) || (which_alternative == 6)))))
        {
	  return 3;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 7) || (which_alternative == 8))))
        {
	  return 1;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 7) && (which_alternative != 8)) && ((which_alternative != 5) && (which_alternative != 6)))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 224:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((mips_cpu_attr) == (CPU_R5000))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))))
        {
	  return 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if (((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5)))) || (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return 3;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return 1;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 284:
    case 283:
    case 281:
    case 276:
    case 253:
    case 252:
    case 251:
    case 250:
    case 234:
    case 223:
    case 219:
    case 217:
      return 1;

    case 189:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || (which_alternative == 3))) || (((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || (which_alternative == 3))) || (((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || (which_alternative == 3))) || (((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || (which_alternative == 3))) || (((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || (which_alternative == 3))) || (((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || (which_alternative == 3))) || (((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative == 2) || (which_alternative == 3)))) || (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && (which_alternative != 3))) || (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative == 2) || (which_alternative == 3))))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 186:
    case 183:
    case 180:
    case 177:
    case 174:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && (which_alternative == 0)) || (((((mips_cpu_attr) == (CPU_R4300))) && (which_alternative == 0)) || (((((mips_cpu_attr) == (CPU_R4100))) && (which_alternative == 0)) || (((((mips_cpu_attr) == (CPU_R4650))) && (which_alternative == 0)) || (((((mips_cpu_attr) == (CPU_R4600))) && (which_alternative == 0)) || (((((mips_cpu_attr) == (CPU_R3900))) && (which_alternative == 0)) || (((((mips_cpu_attr) == (CPU_R3000))) && (which_alternative == 0)) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 319:
    case 249:
    case 248:
    case 247:
    case 246:
    case 218:
    case 216:
    case 199:
    case 197:
    case 195:
    case 193:
    case 191:
    case 188:
    case 187:
    case 184:
    case 181:
    case 178:
    case 175:
    case 172:
      if ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 3;

    }
}

unsigned int
memory_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 270:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))) || (((((mips_cpu_attr) == (CPU_R4300))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))) || (((((mips_cpu_attr) == (CPU_R4100))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))) || (((((mips_cpu_attr) == (CPU_R4650))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))) || (((((mips_cpu_attr) == (CPU_R4600))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))) || (((((mips_cpu_attr) == (CPU_R3900))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))) || ((((mips_cpu_attr) == (CPU_R3000))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))
        {
	  return 65537 /* min 1, max 1 */;
        }
      else
        {
	  return 65539 /* min 1, max 3 */;
        }

    case 269:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) || ((which_alternative == 6) || (which_alternative == 7)))) || ((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) || ((which_alternative == 6) || (which_alternative == 7))))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))))
        {
	  return 65537 /* min 1, max 1 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else
        {
	  return 65539 /* min 1, max 3 */;
        }

    case 272:
    case 267:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 3) || (which_alternative == 4)))) || (((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))) || (((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))) || (((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))) || (((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))) || (((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))) || ((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))))
        {
	  return 65537 /* min 1, max 1 */;
        }
      else
        {
	  return 65539 /* min 1, max 3 */;
        }

    case 271:
    case 266:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && ((which_alternative == 1) || (which_alternative == 2))) || (((((mips_cpu_attr) == (CPU_R4300))) && ((which_alternative == 1) || (which_alternative == 2))) || (((((mips_cpu_attr) == (CPU_R4100))) && ((which_alternative == 1) || (which_alternative == 2))) || (((((mips_cpu_attr) == (CPU_R4650))) && ((which_alternative == 1) || (which_alternative == 2))) || (((((mips_cpu_attr) == (CPU_R4600))) && ((which_alternative == 1) || (which_alternative == 2))) || (((((mips_cpu_attr) == (CPU_R3900))) && ((which_alternative == 1) || (which_alternative == 2))) || ((((mips_cpu_attr) == (CPU_R3000))) && ((which_alternative == 1) || (which_alternative == 2)))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 65537 /* min 1, max 1 */;
        }
      else
        {
	  return 65539 /* min 1, max 3 */;
        }

    case 265:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))) || ((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7)))))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))))
        {
	  return 65537 /* min 1, max 1 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else
        {
	  return 65539 /* min 1, max 3 */;
        }

    case 261:
    case 260:
    case 256:
    case 255:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 6) || (which_alternative == 7)))) || (((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 6) || (which_alternative == 7)))) || ((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 6) || (which_alternative == 7))))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return 65537 /* min 1, max 1 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else
        {
	  return 65539 /* min 1, max 3 */;
        }

    case 243:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 0) && (which_alternative != 1)) && ((((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 0) && (which_alternative != 1)) && ((((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 0) && (which_alternative != 1)) && ((((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 0) && (which_alternative != 1)) && ((((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 0) && (which_alternative != 1)) && ((((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))) || ((which_alternative == 6) || (which_alternative == 7))))) || (((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 0) && (which_alternative != 1)) && ((((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))) || ((which_alternative == 6) || (which_alternative == 7))))) || ((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 0) && (which_alternative != 1)) && ((((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10))) || ((which_alternative == 6) || (which_alternative == 7)))))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))))
        {
	  return 65537 /* min 1, max 1 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else
        {
	  return 65539 /* min 1, max 3 */;
        }

    case 237:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && ((which_alternative == 3) || (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8))))) || (((((mips_cpu_attr) == (CPU_R4300))) && ((which_alternative == 3) || (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 7) || (which_alternative == 8))))) || (((((mips_cpu_attr) == (CPU_R4100))) && ((which_alternative == 3) || (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 7) || (which_alternative == 8))))) || (((((mips_cpu_attr) == (CPU_R4650))) && ((which_alternative == 3) || (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 7) || (which_alternative == 8))))) || (((((mips_cpu_attr) == (CPU_R4600))) && ((which_alternative == 3) || (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 7) || (which_alternative == 8))))) || (((((mips_cpu_attr) == (CPU_R3900))) && ((which_alternative == 3) || (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 7) || (which_alternative == 8))))) || ((((mips_cpu_attr) == (CPU_R3000))) && ((which_alternative == 3) || (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 7) || (which_alternative == 8)))))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 3) || (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 7) || (which_alternative == 8)))))
        {
	  return 65537 /* min 1, max 1 */;
        }
      else
        {
	  return 65539 /* min 1, max 3 */;
        }

    case 236:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 8) || (which_alternative == 9)))) || ((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 8) || (which_alternative == 9))))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))))
        {
	  return 65537 /* min 1, max 1 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 8) || (which_alternative == 9)))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else
        {
	  return 65539 /* min 1, max 3 */;
        }

    case 235:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) || ((which_alternative == 8) || (which_alternative == 9)))) || (((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) || ((which_alternative == 8) || (which_alternative == 9)))) || ((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) || ((which_alternative == 8) || (which_alternative == 9))))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))))
        {
	  return 65537 /* min 1, max 1 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 8) || (which_alternative == 9)))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else
        {
	  return 65539 /* min 1, max 3 */;
        }

    case 228:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7)))) || (((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 6) || (which_alternative == 7)))) || (((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 6) || (which_alternative == 7)))) || (((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 6) || (which_alternative == 7)))) || (((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 6) || (which_alternative == 7)))) || (((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 6) || (which_alternative == 7)))) || ((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 6) || (which_alternative == 7))))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 6) || (which_alternative == 7))))
        {
	  return 65537 /* min 1, max 1 */;
        }
      else
        {
	  return 65539 /* min 1, max 3 */;
        }

    case 227:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5)))) || (((((mips_cpu_attr) == (CPU_R4300))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5)))) || (((((mips_cpu_attr) == (CPU_R4100))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5)))) || (((((mips_cpu_attr) == (CPU_R4650))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5)))) || (((((mips_cpu_attr) == (CPU_R4600))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5)))) || (((((mips_cpu_attr) == (CPU_R3900))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5)))) || ((((mips_cpu_attr) == (CPU_R3000))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))))
        {
	  return 65537 /* min 1, max 1 */;
        }
      else
        {
	  return 65539 /* min 1, max 3 */;
        }

    case 262:
    case 257:
    case 225:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 5) || (which_alternative == 6)))) || (((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || (which_alternative == 6)))) || (((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || (which_alternative == 6)))) || (((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || (which_alternative == 6)))) || (((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || (which_alternative == 6)))) || (((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || (which_alternative == 6)))) || ((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || (which_alternative == 6))))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || (which_alternative == 6))))
        {
	  return 65537 /* min 1, max 1 */;
        }
      else
        {
	  return 65539 /* min 1, max 3 */;
        }

    case 224:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && ((which_alternative == 2) || (which_alternative == 3))) || (((((mips_cpu_attr) == (CPU_R4300))) && ((which_alternative == 2) || (which_alternative == 3))) || (((((mips_cpu_attr) == (CPU_R4100))) && ((which_alternative == 2) || (which_alternative == 3))) || (((((mips_cpu_attr) == (CPU_R4650))) && ((which_alternative == 2) || (which_alternative == 3))) || (((((mips_cpu_attr) == (CPU_R4600))) && ((which_alternative == 2) || (which_alternative == 3))) || (((((mips_cpu_attr) == (CPU_R3900))) && ((which_alternative == 2) || (which_alternative == 3))) || ((((mips_cpu_attr) == (CPU_R3000))) && ((which_alternative == 2) || (which_alternative == 3)))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return 65537 /* min 1, max 1 */;
        }
      else
        {
	  return 65539 /* min 1, max 3 */;
        }

    case 189:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && (which_alternative != 3)))) || (((((mips_cpu_attr) == (CPU_R4300))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (which_alternative != 3))) || (((((mips_cpu_attr) == (CPU_R4100))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (which_alternative != 3))) || (((((mips_cpu_attr) == (CPU_R4650))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (which_alternative != 3))) || (((((mips_cpu_attr) == (CPU_R4600))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (which_alternative != 3))) || (((((mips_cpu_attr) == (CPU_R3900))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (which_alternative != 3))) || ((((mips_cpu_attr) == (CPU_R3000))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (which_alternative != 3)))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (which_alternative != 3)))
        {
	  return 65537 /* min 1, max 1 */;
        }
      else
        {
	  return 65539 /* min 1, max 3 */;
        }

    case 186:
    case 183:
    case 180:
    case 177:
    case 174:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((mips_cpu_attr) == (CPU_R5000))) && (which_alternative != 0)) || (((((mips_cpu_attr) == (CPU_R4300))) && (which_alternative != 0)) || (((((mips_cpu_attr) == (CPU_R4100))) && (which_alternative != 0)) || (((((mips_cpu_attr) == (CPU_R4650))) && (which_alternative != 0)) || (((((mips_cpu_attr) == (CPU_R4600))) && (which_alternative != 0)) || (((((mips_cpu_attr) == (CPU_R3900))) && (which_alternative != 0)) || ((((mips_cpu_attr) == (CPU_R3000))) && (which_alternative != 0))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else if (((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))) && (which_alternative != 0))
        {
	  return 65537 /* min 1, max 1 */;
        }
      else
        {
	  return 65539 /* min 1, max 3 */;
        }

    case 319:
    case 249:
    case 248:
    case 247:
    case 246:
    case 218:
    case 216:
    case 199:
    case 197:
    case 195:
    case 193:
    case 191:
    case 188:
    case 187:
    case 184:
    case 181:
    case 178:
    case 175:
    case 172:
      if ((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))))))
        {
	  return 65538 /* min 1, max 2 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65539 /* min 1, max 3 */;

    }
}

int
function_units_used (insn)
     rtx insn;
{
  register enum attr_mode attr_mode = get_attr_mode (insn);
  register enum attr_type attr_type = get_attr_type (insn);
  register unsigned long accum = 0;

  accum |= ((((attr_type == TYPE_LOAD) && ((! ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000)))))))))) || ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))) || ((attr_type == TYPE_STORE) || (attr_type == TYPE_XFER))) ? (1) : (0));
  accum |= (((attr_type == TYPE_HILO) || (((attr_type == TYPE_IMUL) && (((((((((! ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4000))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))) || ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))) || ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R4600))))) || (((mips_cpu_attr) == (CPU_R4650)))) || ((attr_mode == MODE_SI) && (((mips_cpu_attr) == (CPU_R4100))))) || ((attr_mode == MODE_DI) && (((mips_cpu_attr) == (CPU_R4100))))) || ((attr_mode == MODE_SI) && ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000)))))) || ((attr_mode == MODE_DI) && (((mips_cpu_attr) == (CPU_R4300))))) || ((attr_mode == MODE_DI) && (((mips_cpu_attr) == (CPU_R5000)))))) || (((attr_type == TYPE_IDIV) && (((((((((((! ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4000))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))) || ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))) || (((mips_cpu_attr) == (CPU_R4600)))) || (((mips_cpu_attr) == (CPU_R4650)))) || (((mips_cpu_attr) == (CPU_R4000)))) || ((attr_mode == MODE_SI) && (((mips_cpu_attr) == (CPU_R4100))))) || ((attr_mode == MODE_DI) && (((mips_cpu_attr) == (CPU_R4100))))) || ((attr_mode == MODE_SI) && (((mips_cpu_attr) == (CPU_R4300))))) || ((attr_mode == MODE_DI) && (((mips_cpu_attr) == (CPU_R4300))))) || ((attr_mode == MODE_SI) && (((mips_cpu_attr) == (CPU_R5000))))) || ((attr_mode == MODE_DI) && (((mips_cpu_attr) == (CPU_R5000)))))) || (((attr_type == TYPE_FADD) && (((mips_cpu_attr) == (CPU_R4300)))) || ((((attr_type == TYPE_FCMP) || ((attr_type == TYPE_FABS) || (attr_type == TYPE_FNEG))) && (((mips_cpu_attr) == (CPU_R4300)))) || (((attr_type == TYPE_FMUL) && (((attr_mode == MODE_SF) && (((mips_cpu_attr) == (CPU_R4300)))) || ((attr_mode == MODE_DF) && (((mips_cpu_attr) == (CPU_R4300)))))) || (((attr_type == TYPE_FDIV) && (attr_type == TYPE_FSQRT)) && (((attr_mode == MODE_SF) && (((mips_cpu_attr) == (CPU_R4300)))) || ((attr_mode == MODE_DF) && (((mips_cpu_attr) == (CPU_R4300)))))))))))) ? (2) : (0));
  accum |= ((((attr_type == TYPE_FCMP) && (((! ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R6000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000)))))))) || ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R6000)))))) || (((mips_cpu_attr) == (CPU_R5000))))) || (((attr_type == TYPE_FADD) && (((! ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R6000))) || (((mips_cpu_attr) == (CPU_R4300))))))) || ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))) || (((mips_cpu_attr) == (CPU_R6000))))) || (((attr_type == TYPE_FABS) || (attr_type == TYPE_FNEG)) && ((! ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))) || ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R5000))))))))))) ? (4) : (0));
  accum |= ((((attr_type == TYPE_FDIV) && ((((((attr_mode == MODE_SF) && (((((! ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R6000))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000)))))))))) || ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))) || (((mips_cpu_attr) == (CPU_R6000)))) || ((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((mips_cpu_attr) == (CPU_R5000))))) || ((attr_mode == MODE_DF) && (! ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R6000))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4300))))))))))) || ((attr_mode == MODE_DF) && ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900)))))) || ((attr_mode == MODE_DF) && (((mips_cpu_attr) == (CPU_R6000))))) || ((attr_mode == MODE_DF) && ((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R4650))))))) || ((attr_type == TYPE_FSQRT) && (((((attr_mode == MODE_SF) && (((! ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))) || ((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((mips_cpu_attr) == (CPU_R5000))))) || ((attr_mode == MODE_DF) && (! ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))) || ((attr_mode == MODE_DF) && ((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R4650)))))) || ((attr_mode == MODE_DF) && (((mips_cpu_attr) == (CPU_R5000))))))) ? (16) : (0));
  accum |= (((attr_type == TYPE_FMUL) && (((((attr_mode == MODE_SF) && ((((! ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R6000))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000)))))))))) || ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R5000)))))) || (((mips_cpu_attr) == (CPU_R6000)))) || ((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R4650)))))) || ((attr_mode == MODE_DF) && (! ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R6000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000)))))))))) || ((attr_mode == MODE_DF) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R5000))))))) || ((attr_mode == MODE_DF) && (((mips_cpu_attr) == (CPU_R6000)))))) ? (8) : (0));

  if (accum && accum == (accum & -accum))
    {
      int i;
      for (i = 0; accum >>= 1; ++i) continue;
      accum = i;
    }
  else
    accum = ~accum;
  return accum;
}

int
num_delay_slots (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 476:
    case 474:
    case 473:
    case 472:
    case 471:
    case 470:
    case 469:
    case 468:
    case 467:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 455:
      if (((mips_abicalls_attr) == (ABICALLS_NO)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 454:
    case 453:
    case 445:
    case 443:
    case 441:
    case 437:
    case 436:
    case 434:
    case 433:
    case 430:
      return 1;

    case 505:
    case 504:
    case 503:
    case 502:
    case 431:
    case 345:
    case 344:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((mips16) == (0))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

enum attr_dslot
get_attr_dslot (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 270:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900)))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 269:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 6) || (which_alternative == 7)) || (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 272:
    case 267:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 3) || (which_alternative == 4))) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900)))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 271:
    case 266:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || (which_alternative == 2)) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900)))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 265:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))) || (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 262:
    case 257:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))) || ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 5) || (which_alternative == 6))) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 261:
    case 256:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 6) || (which_alternative == 7)) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7))))))))) || (((which_alternative == 2) || (which_alternative == 3)) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 260:
    case 255:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 6) || (which_alternative == 7)) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))))) || (((which_alternative == 2) || (which_alternative == 3)) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 243:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))) || ((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 237:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10)))))))))) || (((which_alternative == 3) || (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8)))) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 236:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 8) || (which_alternative == 9)) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))))))))) || (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 235:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 8) || (which_alternative == 9)) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((which_alternative != 10) && ((which_alternative != 11) && ((which_alternative != 12) && ((which_alternative != 13) && (which_alternative != 14)))))))))))))))) || (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 228:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 10) || ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 227:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7)))))))) || (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 225:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 9) || ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 5) || (which_alternative == 6))) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 224:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && (which_alternative != 5)))))) || (((which_alternative == 2) || (which_alternative == 3)) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 189:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 3) || ((((which_alternative != 0) && (which_alternative != 1)) && (which_alternative != 2)) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 186:
    case 183:
    case 180:
    case 177:
    case 174:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative != 0) && (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900)))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 319:
    case 249:
    case 248:
    case 247:
    case 246:
    case 218:
    case 216:
    case 199:
    case 197:
    case 195:
    case 193:
    case 191:
    case 188:
    case 187:
    case 184:
    case 181:
    case 178:
    case 175:
    case 172:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((mips_isa) == (1)) && (((mips16) == (0)) && (! (((mips_cpu_attr) == (CPU_R3900))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 505:
    case 504:
    case 503:
    case 502:
    case 476:
    case 474:
    case 473:
    case 472:
    case 471:
    case 470:
    case 469:
    case 468:
    case 467:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 455:
    case 454:
    case 453:
    case 445:
    case 443:
    case 441:
    case 437:
    case 436:
    case 434:
    case 433:
    case 431:
    case 430:
    case 429:
    case 428:
    case 427:
    case 426:
    case 425:
    case 424:
    case 423:
    case 422:
    case 421:
    case 420:
    case 345:
    case 344:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
      return DSLOT_YES;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return DSLOT_NO;

    }
}

enum attr_mode
get_attr_mode (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 420:
    case 421:
    case 422:
    case 423:
    case 424:
    case 425:
    case 426:
    case 427:
    case 428:
    case 429:
      return MODE_FPSW;

    case 0:
    case 24:
    case 49:
    case 50:
    case 76:
    case 78:
    case 80:
    case 82:
    case 84:
    case 86:
    case 115:
    case 117:
    case 121:
    case 129:
    case 200:
    case 201:
    case 203:
    case 205:
    case 206:
    case 248:
    case 249:
    case 252:
    case 253:
    case 269:
    case 270:
    case 271:
    case 272:
    case 487:
    case 488:
    case 498:
      return MODE_DF;

    case 1:
    case 25:
    case 52:
    case 53:
    case 77:
    case 79:
    case 81:
    case 83:
    case 85:
    case 87:
    case 116:
    case 118:
    case 122:
    case 130:
    case 161:
    case 202:
    case 204:
    case 207:
    case 208:
    case 246:
    case 247:
    case 250:
    case 251:
    case 265:
    case 266:
    case 267:
    case 485:
    case 486:
    case 497:
      return MODE_SF;

    case 10:
    case 13:
    case 16:
    case 17:
    case 18:
    case 19:
    case 34:
    case 37:
    case 40:
    case 41:
    case 42:
    case 43:
    case 46:
    case 62:
    case 63:
    case 71:
    case 72:
    case 102:
    case 106:
    case 110:
    case 114:
    case 120:
    case 124:
    case 127:
    case 128:
    case 132:
    case 138:
    case 139:
    case 141:
    case 146:
    case 147:
    case 153:
    case 154:
    case 155:
    case 157:
    case 159:
    case 172:
    case 177:
    case 178:
    case 186:
    case 187:
    case 188:
    case 189:
    case 191:
    case 199:
    case 223:
    case 224:
    case 225:
    case 227:
    case 228:
    case 274:
    case 291:
    case 294:
    case 297:
    case 298:
    case 305:
    case 306:
    case 309:
    case 312:
    case 313:
    case 322:
    case 323:
    case 326:
    case 329:
    case 330:
    case 359:
    case 360:
    case 363:
    case 367:
    case 370:
    case 375:
    case 376:
    case 380:
    case 385:
    case 386:
    case 390:
    case 391:
    case 394:
    case 399:
    case 400:
    case 404:
    case 409:
    case 410:
    case 414:
    case 415:
    case 418:
    case 482:
    case 483:
    case 484:
    case 496:
    case 501:
    case 507:
      return MODE_DI;

    case 163:
    case 170:
    case 180:
    case 181:
    case 255:
    case 256:
    case 257:
    case 494:
    case 499:
      return MODE_HI;

    case 164:
    case 260:
    case 261:
    case 262:
    case 493:
      return MODE_QI;

    case 276:
    case 277:
    case 278:
    case 279:
    case 281:
    case 282:
    case 283:
    case 284:
    case 338:
    case 339:
    case 340:
    case 341:
    case 342:
    case 343:
    case 344:
    case 345:
    case 430:
    case 431:
    case 433:
    case 434:
    case 436:
    case 437:
    case 441:
    case 443:
    case 445:
    case 451:
    case 453:
    case 454:
    case 455:
    case 458:
    case 459:
    case 460:
    case 461:
    case 462:
    case 463:
    case 464:
    case 467:
    case 468:
    case 469:
    case 470:
    case 471:
    case 472:
    case 473:
    case 474:
    case 476:
    case 478:
    case 502:
    case 503:
    case 504:
    case 505:
      return MODE_NONE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 97:
    case 98:
    case 220:
      return MODE_UNKNOWN;

    default:
      return MODE_SI;

    }
}

enum attr_type
get_attr_type (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 270:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || (which_alternative == 5))))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 269:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 9) || (which_alternative == 10))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 272:
    case 267:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 271:
    case 266:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 265:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_XFER;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 9) || (which_alternative == 10))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 261:
    case 256:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 260:
    case 255:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 243:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 9) || (which_alternative == 10))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 237:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || ((which_alternative == 5) || (which_alternative == 6)))
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 7) || (which_alternative == 8))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 9) || (which_alternative == 10))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 236:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 8) || (which_alternative == 9))
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 235:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 8) || (which_alternative == 9))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 11) || (which_alternative == 12))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 13) || (which_alternative == 14))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 228:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 3) || ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 8) || (which_alternative == 9))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 227:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 262:
    case 257:
    case 225:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 5) || (which_alternative == 6))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 7) || (which_alternative == 8))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 224:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 189:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_HILO;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 186:
    case 183:
    case 180:
    case 177:
    case 174:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ARITH;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 58:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative != 2)
        {
	  return TYPE_IMUL;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 478:
      return TYPE_NOP;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 119:
    case 120:
    case 123:
    case 124:
    case 277:
    case 278:
    case 279:
    case 282:
      return TYPE_MULTI;

    case 115:
    case 116:
    case 117:
    case 118:
      return TYPE_FSQRT;

    case 161:
    case 200:
    case 201:
    case 202:
    case 203:
    case 204:
    case 205:
    case 206:
    case 207:
    case 208:
      return TYPE_FCVT;

    case 420:
    case 421:
    case 422:
    case 423:
    case 424:
    case 425:
    case 426:
    case 427:
    case 428:
    case 429:
      return TYPE_FCMP;

    case 129:
    case 130:
      return TYPE_FNEG;

    case 121:
    case 122:
      return TYPE_FABS;

    case 84:
    case 85:
    case 86:
    case 87:
      return TYPE_FDIV;

    case 76:
    case 77:
    case 78:
    case 79:
    case 80:
    case 81:
    case 82:
    case 83:
      return TYPE_FMADD;

    case 49:
    case 50:
    case 52:
    case 53:
      return TYPE_FMUL;

    case 0:
    case 1:
    case 24:
    case 25:
      return TYPE_FADD;

    case 89:
    case 91:
    case 93:
    case 95:
    case 100:
    case 102:
    case 104:
    case 106:
    case 108:
    case 110:
    case 112:
    case 114:
      return TYPE_IDIV;

    case 55:
    case 56:
    case 57:
    case 62:
    case 63:
    case 66:
    case 67:
    case 70:
    case 71:
    case 72:
    case 73:
    case 74:
    case 75:
      return TYPE_IMUL;

    case 10:
    case 13:
    case 16:
    case 34:
    case 37:
    case 40:
    case 127:
    case 132:
    case 138:
    case 139:
    case 146:
    case 147:
    case 153:
    case 154:
    case 159:
    case 162:
    case 163:
    case 164:
    case 165:
    case 166:
    case 167:
    case 168:
    case 169:
    case 170:
    case 290:
    case 291:
    case 294:
    case 305:
    case 306:
    case 309:
    case 322:
    case 323:
    case 326:
      return TYPE_DARITH;

    case 220:
    case 274:
    case 479:
    case 480:
    case 481:
    case 482:
    case 483:
    case 484:
    case 485:
    case 486:
    case 487:
    case 488:
      return TYPE_MOVE;

    case 217:
    case 219:
    case 223:
    case 234:
    case 250:
    case 251:
    case 252:
    case 253:
    case 276:
    case 281:
    case 283:
    case 284:
      return TYPE_STORE;

    case 172:
    case 175:
    case 178:
    case 181:
    case 184:
    case 187:
    case 188:
    case 191:
    case 193:
    case 195:
    case 197:
    case 199:
    case 216:
    case 218:
    case 246:
    case 247:
    case 248:
    case 249:
    case 319:
      return TYPE_LOAD;

    case 455:
    case 458:
    case 459:
    case 460:
    case 461:
    case 462:
    case 463:
    case 464:
    case 467:
    case 468:
    case 469:
    case 470:
    case 471:
    case 472:
    case 473:
    case 474:
    case 476:
      return TYPE_CALL;

    case 430:
    case 433:
    case 434:
    case 436:
    case 437:
    case 441:
    case 443:
    case 445:
    case 453:
    case 454:
      return TYPE_JUMP;

    case 338:
    case 339:
    case 340:
    case 341:
    case 342:
    case 343:
    case 344:
    case 345:
    case 431:
    case 502:
    case 503:
    case 504:
    case 505:
      return TYPE_BRANCH;

    case 97:
    case 98:
    case 451:
    case 493:
    case 494:
    case 495:
    case 496:
    case 497:
    case 498:
    case 499:
    case 500:
    case 501:
      return TYPE_UNKNOWN;

    default:
      return TYPE_ARITH;

    }
}

int
eligible_for_delay (delay_insn, slot, candidate_insn, flags)
     rtx delay_insn;
     int slot;
     rtx candidate_insn;
     int flags;
{
  rtx insn;

  if (slot >= 1)
    abort ();

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 476:
    case 474:
    case 473:
    case 472:
    case 471:
    case 470:
    case 469:
    case 468:
    case 467:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 455:
      if (((mips_abicalls_attr) == (ABICALLS_NO)))
        {
	  slot += 3 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 454:
    case 453:
    case 445:
    case 443:
    case 441:
    case 437:
    case 436:
    case 434:
    case 433:
    case 430:
      slot += 2 * 1;
      break;
      break;

    case 505:
    case 504:
    case 503:
    case 502:
    case 431:
    case 345:
    case 344:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((mips16) == (0))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      slot += 0 * 1;
      break;
      break;

    }

  if (slot < 1)
    abort ();

  insn = candidate_insn;
  switch (slot)
    {
    case 3:
      switch (recog_memoized (insn))
	{
        case 415:
        case 413:
        case 391:
        case 389:
	  extract_insn (insn);
	  if (m16_uimm8_m1_1 (operands[2], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 330:
        case 317:
        case 313:
        case 302:
        case 298:
        case 287:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((which_alternative != 1) || (m16_uimm3_b (operands[2], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 270:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))) && ((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 10))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 267:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) || ((which_alternative == 1) || (((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 5))) && ((which_alternative != 3) && (which_alternative != 4))))) || (((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 5))))) && ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 266:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && (which_alternative != 2)) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 3))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 265:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 262:
        case 257:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 9) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 5) && (which_alternative != 6))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && (((which_alternative == 3) && (m16_uimm8_1 (operands[1], VOIDmode))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 6) && (which_alternative != 8))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 261:
        case 256:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7))))))))) && (((which_alternative != 2) && (which_alternative != 3)) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative != 3) && (which_alternative != 5)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 260:
        case 255:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))))) && (((which_alternative != 2) && (which_alternative != 3)) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative != 3) && (which_alternative != 5)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 249:
        case 248:
        case 247:
        case 246:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 243:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((which_alternative == 1) || (((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))) && (((((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))) && ((which_alternative != 6) && (which_alternative != 7)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 237:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10)))))))))) && (((which_alternative != 3) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 7) && (which_alternative != 8)))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && (((which_alternative == 4) && (m16_uimm8_1 (operands[1], VOIDmode))) || (((which_alternative == 6) && (m16_usym8_4 (operands[1], VOIDmode))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 8) && (which_alternative != 10)))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 236:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative != 1) && ((which_alternative != 3) && ((which_alternative != 5) && (which_alternative != 7)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 235:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 12) || ((which_alternative == 13) || (which_alternative == 14)))))))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 13) || ((which_alternative == 15) || ((which_alternative == 16) || ((which_alternative == 17) || (which_alternative == 18))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 228:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 10) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (((which_alternative == 3) && (m16_uimm8_1 (operands[1], VOIDmode))) || (((which_alternative == 5) && (m16_usym5_4 (operands[1], VOIDmode))) || ((which_alternative == 6) || ((which_alternative == 8) || (which_alternative == 10)))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 227:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 269:
        case 234:
        case 223:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 204:
        case 203:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 1)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 189:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 3) && ((((which_alternative == 0) || (which_alternative == 1)) || (which_alternative == 2)) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && (which_alternative != 5))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 186:
        case 183:
        case 180:
        case 177:
        case 174:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))) && (which_alternative != 2))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 199:
        case 197:
        case 195:
        case 193:
        case 191:
        case 188:
        case 187:
        case 184:
        case 181:
        case 178:
        case 175:
        case 172:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))) && (which_alternative == 0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 164:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips16) == (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 163:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips16) == (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 159:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 153:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 410:
        case 408:
        case 386:
        case 384:
        case 155:
        case 151:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((which_alternative != 1) || (m16_uimm8_1 (operands[2], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 147:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 146:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 139:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 138:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 132:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 63:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((GENERATE_MULT3) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 58:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative != 2)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 43:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) && (m16_nsimm5_1 (operands[2], VOIDmode))) || (((which_alternative == 1) && (m16_nsimm4_1 (operands[2], VOIDmode))) || (which_alternative == 2)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 42:
	  extract_insn (insn);
	  if (m16_nuimm5_4 (operands[0], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 47:
        case 30:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) && (m16_nsimm8_1 (operands[2], VOIDmode))) || (((which_alternative == 1) && (m16_nsimm4_1 (operands[2], VOIDmode))) || (which_alternative == 2)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 29:
	  extract_insn (insn);
	  if (m16_nuimm8_4 (operands[1], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 41:
        case 28:
	  extract_insn (insn);
	  if (m16_nsimm8_8 (operands[0], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 19:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) && (m16_simm5_1 (operands[2], VOIDmode))) || (((which_alternative == 1) && (m16_simm4_1 (operands[2], VOIDmode))) || (which_alternative == 2)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 18:
	  extract_insn (insn);
	  if (m16_uimm5_4 (operands[0], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 23:
        case 6:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) && (m16_simm8_1 (operands[2], VOIDmode))) || (((which_alternative == 1) && (m16_simm4_1 (operands[2], VOIDmode))) || (which_alternative == 2)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 5:
	  extract_insn (insn);
	  if (m16_uimm8_4 (operands[1], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 17:
        case 4:
	  extract_insn (insn);
	  if (m16_simm8_8 (operands[0], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 488:
        case 487:
        case 486:
        case 485:
        case 484:
        case 483:
        case 482:
        case 481:
        case 480:
        case 479:
        case 478:
        case 414:
        case 412:
        case 409:
        case 407:
        case 400:
        case 399:
        case 398:
        case 397:
        case 390:
        case 388:
        case 385:
        case 383:
        case 376:
        case 375:
        case 374:
        case 373:
        case 367:
        case 366:
        case 360:
        case 359:
        case 358:
        case 357:
        case 329:
        case 316:
        case 312:
        case 301:
        case 297:
        case 286:
        case 284:
        case 283:
        case 253:
        case 252:
        case 251:
        case 250:
        case 221:
        case 220:
        case 200:
        case 170:
        case 169:
        case 168:
        case 161:
        case 158:
        case 157:
        case 150:
        case 144:
        case 143:
        case 141:
        case 136:
        case 135:
        case 131:
        case 130:
        case 129:
        case 128:
        case 125:
        case 122:
        case 121:
        case 118:
        case 117:
        case 116:
        case 115:
        case 114:
        case 112:
        case 110:
        case 108:
        case 106:
        case 104:
        case 102:
        case 100:
        case 95:
        case 93:
        case 91:
        case 89:
        case 87:
        case 86:
        case 85:
        case 84:
        case 83:
        case 82:
        case 81:
        case 80:
        case 79:
        case 78:
        case 77:
        case 76:
        case 75:
        case 74:
        case 73:
        case 72:
        case 71:
        case 70:
        case 67:
        case 66:
        case 62:
        case 56:
        case 55:
        case 52:
        case 49:
        case 46:
        case 40:
        case 27:
        case 25:
        case 24:
        case 22:
        case 16:
        case 3:
        case 1:
        case 0:
	  return 1;

        default:
	  return 0;

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case 415:
        case 413:
        case 391:
        case 389:
	  extract_insn (insn);
	  if (m16_uimm8_m1_1 (operands[2], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 330:
        case 317:
        case 313:
        case 302:
        case 298:
        case 287:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((which_alternative != 1) || (m16_uimm3_b (operands[2], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 270:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))) && ((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 10))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 267:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) || ((which_alternative == 1) || (((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 5))) && ((which_alternative != 3) && (which_alternative != 4))))) || (((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 5))))) && ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 266:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && (which_alternative != 2)) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 3))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 265:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 262:
        case 257:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 9) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 5) && (which_alternative != 6))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && (((which_alternative == 3) && (m16_uimm8_1 (operands[1], VOIDmode))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 6) && (which_alternative != 8))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 261:
        case 256:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7))))))))) && (((which_alternative != 2) && (which_alternative != 3)) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative != 3) && (which_alternative != 5)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 260:
        case 255:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))))) && (((which_alternative != 2) && (which_alternative != 3)) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative != 3) && (which_alternative != 5)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 249:
        case 248:
        case 247:
        case 246:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 243:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((which_alternative == 1) || (((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))) && (((((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))) && ((which_alternative != 6) && (which_alternative != 7)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 237:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10)))))))))) && (((which_alternative != 3) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 7) && (which_alternative != 8)))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && (((which_alternative == 4) && (m16_uimm8_1 (operands[1], VOIDmode))) || (((which_alternative == 6) && (m16_usym8_4 (operands[1], VOIDmode))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 8) && (which_alternative != 10)))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 236:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative != 1) && ((which_alternative != 3) && ((which_alternative != 5) && (which_alternative != 7)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 235:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 12) || ((which_alternative == 13) || (which_alternative == 14)))))))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 13) || ((which_alternative == 15) || ((which_alternative == 16) || ((which_alternative == 17) || (which_alternative == 18))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 228:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 10) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (((which_alternative == 3) && (m16_uimm8_1 (operands[1], VOIDmode))) || (((which_alternative == 5) && (m16_usym5_4 (operands[1], VOIDmode))) || ((which_alternative == 6) || ((which_alternative == 8) || (which_alternative == 10)))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 227:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 269:
        case 234:
        case 223:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 204:
        case 203:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 1)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 189:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 3) && ((((which_alternative == 0) || (which_alternative == 1)) || (which_alternative == 2)) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && (which_alternative != 5))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 186:
        case 183:
        case 180:
        case 177:
        case 174:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))) && (which_alternative != 2))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 199:
        case 197:
        case 195:
        case 193:
        case 191:
        case 188:
        case 187:
        case 184:
        case 181:
        case 178:
        case 175:
        case 172:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))) && (which_alternative == 0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 164:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips16) == (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 163:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips16) == (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 159:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 153:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 410:
        case 408:
        case 386:
        case 384:
        case 155:
        case 151:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((which_alternative != 1) || (m16_uimm8_1 (operands[2], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 147:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 146:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 139:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 138:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 132:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 63:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((GENERATE_MULT3) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 58:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative != 2)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 43:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) && (m16_nsimm5_1 (operands[2], VOIDmode))) || (((which_alternative == 1) && (m16_nsimm4_1 (operands[2], VOIDmode))) || (which_alternative == 2)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 42:
	  extract_insn (insn);
	  if (m16_nuimm5_4 (operands[0], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 47:
        case 30:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) && (m16_nsimm8_1 (operands[2], VOIDmode))) || (((which_alternative == 1) && (m16_nsimm4_1 (operands[2], VOIDmode))) || (which_alternative == 2)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 29:
	  extract_insn (insn);
	  if (m16_nuimm8_4 (operands[1], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 41:
        case 28:
	  extract_insn (insn);
	  if (m16_nsimm8_8 (operands[0], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 19:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) && (m16_simm5_1 (operands[2], VOIDmode))) || (((which_alternative == 1) && (m16_simm4_1 (operands[2], VOIDmode))) || (which_alternative == 2)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 18:
	  extract_insn (insn);
	  if (m16_uimm5_4 (operands[0], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 23:
        case 6:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) && (m16_simm8_1 (operands[2], VOIDmode))) || (((which_alternative == 1) && (m16_simm4_1 (operands[2], VOIDmode))) || (which_alternative == 2)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 5:
	  extract_insn (insn);
	  if (m16_uimm8_4 (operands[1], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 17:
        case 4:
	  extract_insn (insn);
	  if (m16_simm8_8 (operands[0], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 488:
        case 487:
        case 486:
        case 485:
        case 484:
        case 483:
        case 482:
        case 481:
        case 480:
        case 479:
        case 478:
        case 414:
        case 412:
        case 409:
        case 407:
        case 400:
        case 399:
        case 398:
        case 397:
        case 390:
        case 388:
        case 385:
        case 383:
        case 376:
        case 375:
        case 374:
        case 373:
        case 367:
        case 366:
        case 360:
        case 359:
        case 358:
        case 357:
        case 329:
        case 316:
        case 312:
        case 301:
        case 297:
        case 286:
        case 284:
        case 283:
        case 253:
        case 252:
        case 251:
        case 250:
        case 221:
        case 220:
        case 200:
        case 170:
        case 169:
        case 168:
        case 161:
        case 158:
        case 157:
        case 150:
        case 144:
        case 143:
        case 141:
        case 136:
        case 135:
        case 131:
        case 130:
        case 129:
        case 128:
        case 125:
        case 122:
        case 121:
        case 118:
        case 117:
        case 116:
        case 115:
        case 114:
        case 112:
        case 110:
        case 108:
        case 106:
        case 104:
        case 102:
        case 100:
        case 95:
        case 93:
        case 91:
        case 89:
        case 87:
        case 86:
        case 85:
        case 84:
        case 83:
        case 82:
        case 81:
        case 80:
        case 79:
        case 78:
        case 77:
        case 76:
        case 75:
        case 74:
        case 73:
        case 72:
        case 71:
        case 70:
        case 67:
        case 66:
        case 62:
        case 56:
        case 55:
        case 52:
        case 49:
        case 46:
        case 40:
        case 27:
        case 25:
        case 24:
        case 22:
        case 16:
        case 3:
        case 1:
        case 0:
	  return 1;

        default:
	  return 0;

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case 415:
        case 413:
        case 391:
        case 389:
	  extract_insn (insn);
	  if (m16_uimm8_m1_1 (operands[2], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 330:
        case 317:
        case 313:
        case 302:
        case 298:
        case 287:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((which_alternative != 1) || (m16_uimm3_b (operands[2], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 270:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))) && ((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 10))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 267:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) || ((which_alternative == 1) || (((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 5))) && ((which_alternative != 3) && (which_alternative != 4))))) || (((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 5))))) && ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 266:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && (which_alternative != 2)) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 3))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 265:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 262:
        case 257:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 9) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 5) && (which_alternative != 6))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && (((which_alternative == 3) && (m16_uimm8_1 (operands[1], VOIDmode))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 6) && (which_alternative != 8))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 261:
        case 256:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7))))))))) && (((which_alternative != 2) && (which_alternative != 3)) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative != 3) && (which_alternative != 5)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 260:
        case 255:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))))) && (((which_alternative != 2) && (which_alternative != 3)) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative != 3) && (which_alternative != 5)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 249:
        case 248:
        case 247:
        case 246:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 243:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((which_alternative == 1) || (((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))) && (((((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))) && ((which_alternative != 6) && (which_alternative != 7)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 237:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10)))))))))) && (((which_alternative != 3) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 7) && (which_alternative != 8)))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && (((which_alternative == 4) && (m16_uimm8_1 (operands[1], VOIDmode))) || (((which_alternative == 6) && (m16_usym8_4 (operands[1], VOIDmode))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 8) && (which_alternative != 10)))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 236:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative != 1) && ((which_alternative != 3) && ((which_alternative != 5) && (which_alternative != 7)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 235:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 12) || ((which_alternative == 13) || (which_alternative == 14)))))))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 13) || ((which_alternative == 15) || ((which_alternative == 16) || ((which_alternative == 17) || (which_alternative == 18))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 228:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 10) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (((which_alternative == 3) && (m16_uimm8_1 (operands[1], VOIDmode))) || (((which_alternative == 5) && (m16_usym5_4 (operands[1], VOIDmode))) || ((which_alternative == 6) || ((which_alternative == 8) || (which_alternative == 10)))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 227:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 269:
        case 234:
        case 223:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 204:
        case 203:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 1)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 189:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 3) && ((((which_alternative == 0) || (which_alternative == 1)) || (which_alternative == 2)) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && (which_alternative != 5))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 186:
        case 183:
        case 180:
        case 177:
        case 174:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))) && (which_alternative != 2))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 199:
        case 197:
        case 195:
        case 193:
        case 191:
        case 188:
        case 187:
        case 184:
        case 181:
        case 178:
        case 175:
        case 172:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))) && (which_alternative == 0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 164:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips16) == (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 163:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips16) == (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 159:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 153:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 410:
        case 408:
        case 386:
        case 384:
        case 155:
        case 151:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((which_alternative != 1) || (m16_uimm8_1 (operands[2], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 147:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 146:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 139:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 138:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((TARGET_64BIT) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 132:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 63:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((GENERATE_MULT3) != (0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 58:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative != 2)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 43:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) && (m16_nsimm5_1 (operands[2], VOIDmode))) || (((which_alternative == 1) && (m16_nsimm4_1 (operands[2], VOIDmode))) || (which_alternative == 2)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 42:
	  extract_insn (insn);
	  if (m16_nuimm5_4 (operands[0], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 47:
        case 30:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) && (m16_nsimm8_1 (operands[2], VOIDmode))) || (((which_alternative == 1) && (m16_nsimm4_1 (operands[2], VOIDmode))) || (which_alternative == 2)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 29:
	  extract_insn (insn);
	  if (m16_nuimm8_4 (operands[1], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 41:
        case 28:
	  extract_insn (insn);
	  if (m16_nsimm8_8 (operands[0], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 19:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) && (m16_simm5_1 (operands[2], VOIDmode))) || (((which_alternative == 1) && (m16_simm4_1 (operands[2], VOIDmode))) || (which_alternative == 2)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 18:
	  extract_insn (insn);
	  if (m16_uimm5_4 (operands[0], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 23:
        case 6:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) && (m16_simm8_1 (operands[2], VOIDmode))) || (((which_alternative == 1) && (m16_simm4_1 (operands[2], VOIDmode))) || (which_alternative == 2)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 5:
	  extract_insn (insn);
	  if (m16_uimm8_4 (operands[1], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 17:
        case 4:
	  extract_insn (insn);
	  if (m16_simm8_8 (operands[0], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 488:
        case 487:
        case 486:
        case 485:
        case 484:
        case 483:
        case 482:
        case 481:
        case 480:
        case 479:
        case 478:
        case 414:
        case 412:
        case 409:
        case 407:
        case 400:
        case 399:
        case 398:
        case 397:
        case 390:
        case 388:
        case 385:
        case 383:
        case 376:
        case 375:
        case 374:
        case 373:
        case 367:
        case 366:
        case 360:
        case 359:
        case 358:
        case 357:
        case 329:
        case 316:
        case 312:
        case 301:
        case 297:
        case 286:
        case 284:
        case 283:
        case 253:
        case 252:
        case 251:
        case 250:
        case 221:
        case 220:
        case 200:
        case 170:
        case 169:
        case 168:
        case 161:
        case 158:
        case 157:
        case 150:
        case 144:
        case 143:
        case 141:
        case 136:
        case 135:
        case 131:
        case 130:
        case 129:
        case 128:
        case 125:
        case 122:
        case 121:
        case 118:
        case 117:
        case 116:
        case 115:
        case 114:
        case 112:
        case 110:
        case 108:
        case 106:
        case 104:
        case 102:
        case 100:
        case 95:
        case 93:
        case 91:
        case 89:
        case 87:
        case 86:
        case 85:
        case 84:
        case 83:
        case 82:
        case 81:
        case 80:
        case 79:
        case 78:
        case 77:
        case 76:
        case 75:
        case 74:
        case 73:
        case 72:
        case 71:
        case 70:
        case 67:
        case 66:
        case 62:
        case 56:
        case 55:
        case 52:
        case 49:
        case 46:
        case 40:
        case 27:
        case 25:
        case 24:
        case 22:
        case 16:
        case 3:
        case 1:
        case 0:
	  return 1;

        default:
	  return 0;

      }
    default:
      abort ();
    }
}

int
eligible_for_annul_false (delay_insn, slot, candidate_insn, flags)
     rtx delay_insn;
     int slot;
     rtx candidate_insn;
     int flags;
{
  rtx insn;

  if (slot >= 1)
    abort ();

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 476:
    case 474:
    case 473:
    case 472:
    case 471:
    case 470:
    case 469:
    case 468:
    case 467:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 455:
      if (((mips_abicalls_attr) == (ABICALLS_NO)))
        {
	  slot += 3 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 454:
    case 453:
    case 445:
    case 443:
    case 441:
    case 437:
    case 436:
    case 434:
    case 433:
    case 430:
      slot += 2 * 1;
      break;
      break;

    case 505:
    case 504:
    case 503:
    case 502:
    case 431:
    case 345:
    case 344:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((mips16) == (0))
        {
	  slot += 1 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      slot += 0 * 1;
      break;
      break;

    }

  if (slot < 1)
    abort ();

  insn = candidate_insn;
  switch (slot)
    {
    case 3:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case 415:
        case 413:
        case 391:
        case 389:
	  extract_insn (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (m16_uimm8_m1_1 (operands[2], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 330:
        case 317:
        case 313:
        case 302:
        case 298:
        case 287:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((which_alternative != 1) || (m16_uimm3_b (operands[2], VOIDmode))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 270:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))) && ((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 10)))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 267:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative == 0) || ((which_alternative == 1) || (((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 5))) && ((which_alternative != 3) && (which_alternative != 4))))) || (((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 5))))) && ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 266:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 1) && (which_alternative != 2)) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 3)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 265:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && (((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 262:
        case 257:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative != 9) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 5) && (which_alternative != 6))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && (((which_alternative == 3) && (m16_uimm8_1 (operands[1], VOIDmode))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 6) && (which_alternative != 8)))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 261:
        case 256:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7))))))))) && (((which_alternative != 2) && (which_alternative != 3)) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative != 3) && (which_alternative != 5))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 260:
        case 255:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))))) && (((which_alternative != 2) && (which_alternative != 3)) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative != 3) && (which_alternative != 5))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 249:
        case 248:
        case 247:
        case 246:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 243:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((which_alternative == 1) || (((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))) && (((((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 9) && (which_alternative != 10))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))) && ((which_alternative != 6) && (which_alternative != 7))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 237:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10)))))))))) && (((which_alternative != 3) && (((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 7) && (which_alternative != 8)))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && (((which_alternative == 4) && (m16_uimm8_1 (operands[1], VOIDmode))) || (((which_alternative == 6) && (m16_usym8_4 (operands[1], VOIDmode))) || ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 8) && (which_alternative != 10))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 236:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative != 1) && ((which_alternative != 3) && ((which_alternative != 5) && (which_alternative != 7))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 235:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 12) || ((which_alternative == 13) || (which_alternative == 14)))))))))))))))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 13) || ((which_alternative == 15) || ((which_alternative == 16) || ((which_alternative == 17) || (which_alternative == 18)))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 228:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative != 10) && ((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative != 6) && (which_alternative != 7))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (((which_alternative == 3) && (m16_uimm8_1 (operands[1], VOIDmode))) || (((which_alternative == 5) && (m16_usym5_4 (operands[1], VOIDmode))) || ((which_alternative == 6) || ((which_alternative == 8) || (which_alternative == 10))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 227:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))))))) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10)))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 269:
        case 234:
        case 223:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (which_alternative == 0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 204:
        case 203:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (which_alternative == 1))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 189:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative != 3) && ((((which_alternative == 0) || (which_alternative == 1)) || (which_alternative == 2)) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))))) && (which_alternative != 5)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 186:
        case 183:
        case 180:
        case 177:
        case 174:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative == 0) || ((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900)))))) && (which_alternative != 2)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 199:
        case 197:
        case 195:
        case 193:
        case 191:
        case 188:
        case 187:
        case 184:
        case 181:
        case 178:
        case 175:
        case 172:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((! ((mips_isa) == (1))) || ((! ((mips16) == (0))) || (((mips_cpu_attr) == (CPU_R3900))))) && (which_alternative == 0)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 164:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((mips16) == (0)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 163:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((mips16) == (0)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 159:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((TARGET_64BIT) != (0)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 153:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((TARGET_64BIT) != (0)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 410:
        case 408:
        case 386:
        case 384:
        case 155:
        case 151:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((which_alternative != 1) || (m16_uimm8_1 (operands[2], VOIDmode))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 147:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((mips_isa) >= (3)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 146:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((TARGET_64BIT) != (0)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 139:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((mips_isa) >= (3)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 138:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((TARGET_64BIT) != (0)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 132:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((mips_isa) >= (3)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 63:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && ((GENERATE_MULT3) != (0)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 58:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (which_alternative != 2))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 43:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative == 0) && (m16_nsimm5_1 (operands[2], VOIDmode))) || (((which_alternative == 1) && (m16_nsimm4_1 (operands[2], VOIDmode))) || (which_alternative == 2))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 42:
	  extract_insn (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (m16_nuimm5_4 (operands[0], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 47:
        case 30:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative == 0) && (m16_nsimm8_1 (operands[2], VOIDmode))) || (((which_alternative == 1) && (m16_nsimm4_1 (operands[2], VOIDmode))) || (which_alternative == 2))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 29:
	  extract_insn (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (m16_nuimm8_4 (operands[1], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 41:
        case 28:
	  extract_insn (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (m16_nsimm8_8 (operands[0], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 19:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative == 0) && (m16_simm5_1 (operands[2], VOIDmode))) || (((which_alternative == 1) && (m16_simm4_1 (operands[2], VOIDmode))) || (which_alternative == 2))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 18:
	  extract_insn (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (m16_uimm5_4 (operands[0], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 23:
        case 6:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (((which_alternative == 0) && (m16_simm8_1 (operands[2], VOIDmode))) || (((which_alternative == 1) && (m16_simm4_1 (operands[2], VOIDmode))) || (which_alternative == 2))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 5:
	  extract_insn (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (m16_uimm8_4 (operands[1], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 17:
        case 4:
	  extract_insn (insn);
	  if ((((GENERATE_BRANCHLIKELY) != (0))) && (m16_simm8_8 (operands[0], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 488:
        case 487:
        case 486:
        case 485:
        case 484:
        case 483:
        case 482:
        case 481:
        case 480:
        case 479:
        case 478:
        case 414:
        case 412:
        case 409:
        case 407:
        case 400:
        case 399:
        case 398:
        case 397:
        case 390:
        case 388:
        case 385:
        case 383:
        case 376:
        case 375:
        case 374:
        case 373:
        case 367:
        case 366:
        case 360:
        case 359:
        case 358:
        case 357:
        case 329:
        case 316:
        case 312:
        case 301:
        case 297:
        case 286:
        case 284:
        case 283:
        case 253:
        case 252:
        case 251:
        case 250:
        case 221:
        case 220:
        case 200:
        case 170:
        case 169:
        case 168:
        case 161:
        case 158:
        case 157:
        case 150:
        case 144:
        case 143:
        case 141:
        case 136:
        case 135:
        case 131:
        case 130:
        case 129:
        case 128:
        case 125:
        case 122:
        case 121:
        case 118:
        case 117:
        case 116:
        case 115:
        case 114:
        case 112:
        case 110:
        case 108:
        case 106:
        case 104:
        case 102:
        case 100:
        case 95:
        case 93:
        case 91:
        case 89:
        case 87:
        case 86:
        case 85:
        case 84:
        case 83:
        case 82:
        case 81:
        case 80:
        case 79:
        case 78:
        case 77:
        case 76:
        case 75:
        case 74:
        case 73:
        case 72:
        case 71:
        case 70:
        case 67:
        case 66:
        case 62:
        case 56:
        case 55:
        case 52:
        case 49:
        case 46:
        case 40:
        case 27:
        case 25:
        case 24:
        case 22:
        case 16:
        case 3:
        case 1:
        case 0:
	  if (((GENERATE_BRANCHLIKELY) != (0)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  return 0;

      }
    default:
      abort ();
    }
}

static int
divide_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 118:
    case 116:
      if ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))
        {
	  casenum = 9;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R4650))))
        {
	  casenum = 10 /* 0xa */;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  casenum = 11 /* 0xb */;
        }
      else
        {
	  casenum = 14 /* 0xe */;
        }
      break;

    case 117:
    case 115:
      if ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))
        {
	  casenum = 12 /* 0xc */;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R4650))))
        {
	  casenum = 13 /* 0xd */;
        }
      else
        {
	  casenum = 14 /* 0xe */;
        }
      break;

    case 87:
    case 85:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R6000)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 0;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  casenum = 1;
        }
      else if (((mips_cpu_attr) == (CPU_R6000)))
        {
	  casenum = 2;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R4650))))
        {
	  casenum = 3;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 14 /* 0xe */;
        }
      break;

    case 86:
    case 84:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R6000)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && (! (((mips_cpu_attr) == (CPU_R4300)))))))))
        {
	  casenum = 5;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  casenum = 6;
        }
      else if (((mips_cpu_attr) == (CPU_R6000)))
        {
	  casenum = 7;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R4650))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 14 /* 0xe */;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 14 /* 0xe */;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 23 /* 0x17 */;

    case 1:
      return 12 /* 0xc */;

    case 2:
      return 15 /* 0xf */;

    case 3:
      return 32 /* 0x20 */;

    case 4:
      return 21 /* 0x15 */;

    case 5:
      return 36 /* 0x24 */;

    case 6:
      return 19 /* 0x13 */;

    case 7:
      return 16 /* 0x10 */;

    case 8:
      return 61 /* 0x3d */;

    case 9:
      return 54 /* 0x36 */;

    case 10:
      return 31 /* 0x1f */;

    case 11:
      return 21 /* 0x15 */;

    case 12:
      return 112 /* 0x70 */;

    case 13:
      return 60 /* 0x3c */;

    case 14:
      return 36 /* 0x24 */;

    default:
      abort ();
    }
}

static int
mult_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 53:
    case 52:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R6000)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 0;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R5000)))))
        {
	  casenum = 1;
        }
      else if (((mips_cpu_attr) == (CPU_R6000)))
        {
	  casenum = 2;
        }
      else if ((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R4650))))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 6;
        }
      break;

    case 50:
    case 49:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R6000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000))))))))
        {
	  casenum = 4;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R5000)))))
        {
	  casenum = 5;
        }
      else
        {
	  casenum = 6;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 6;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 7;

    case 1:
      return 4;

    case 2:
      return 5;

    case 3:
      return 8;

    case 4:
      return 8;

    case 5:
      return 5;

    case 6:
      return 6;

    default:
      abort ();
    }
}

static int
adder_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 429:
    case 428:
    case 427:
    case 426:
    case 425:
    case 424:
    case 423:
    case 422:
    case 421:
    case 420:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R6000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000))))))))
        {
	  casenum = 0;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R6000)))))
        {
	  casenum = 1;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 130:
    case 129:
    case 122:
    case 121:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 25:
    case 24:
    case 1:
    case 0:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R6000)))) && (! (((mips_cpu_attr) == (CPU_R4300)))))))
        {
	  casenum = 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  casenum = 4;
        }
      else if (((mips_cpu_attr) == (CPU_R6000)))
        {
	  casenum = 5;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 7;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 2;

    case 2:
      return 1;

    case 3:
      return 4;

    case 4:
      return 2;

    case 5:
      return 3;

    case 6:
      return 2;

    case 7:
      return 1;

    default:
      abort ();
    }
}

static int
imuldiv_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 262:
    case 257:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 260:
    case 255:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 237:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 236:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 235:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 228:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 261:
    case 256:
    case 227:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 225:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 224:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 189:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 429:
    case 428:
    case 427:
    case 426:
    case 425:
    case 424:
    case 423:
    case 422:
    case 421:
    case 420:
    case 130:
    case 129:
    case 122:
    case 121:
      casenum = 23 /* 0x17 */;
      break;

    case 114:
    case 110:
    case 106:
    case 102:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4000)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 11 /* 0xb */;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  casenum = 12 /* 0xc */;
        }
      else if (((mips_cpu_attr) == (CPU_R4600)))
        {
	  casenum = 13 /* 0xd */;
        }
      else if (((mips_cpu_attr) == (CPU_R4650)))
        {
	  casenum = 14 /* 0xe */;
        }
      else if (((mips_cpu_attr) == (CPU_R4000)))
        {
	  casenum = 15 /* 0xf */;
        }
      else if (((mips_cpu_attr) == (CPU_R4100)))
        {
	  casenum = 17 /* 0x11 */;
        }
      else if (((mips_cpu_attr) == (CPU_R4300)))
        {
	  casenum = 19 /* 0x13 */;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  casenum = 21 /* 0x15 */;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 112:
    case 108:
    case 104:
    case 100:
    case 95:
    case 93:
    case 91:
    case 89:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4000)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 11 /* 0xb */;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  casenum = 12 /* 0xc */;
        }
      else if (((mips_cpu_attr) == (CPU_R4600)))
        {
	  casenum = 13 /* 0xd */;
        }
      else if (((mips_cpu_attr) == (CPU_R4650)))
        {
	  casenum = 14 /* 0xe */;
        }
      else if (((mips_cpu_attr) == (CPU_R4000)))
        {
	  casenum = 15 /* 0xf */;
        }
      else if (((mips_cpu_attr) == (CPU_R4100)))
        {
	  casenum = 16 /* 0x10 */;
        }
      else if (((mips_cpu_attr) == (CPU_R4300)))
        {
	  casenum = 18 /* 0x12 */;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  casenum = 20 /* 0x14 */;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 72:
    case 71:
    case 63:
    case 62:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4000)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  casenum = 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R4600))))
        {
	  casenum = 4;
        }
      else if (((mips_cpu_attr) == (CPU_R4650)))
        {
	  casenum = 5;
        }
      else if (((mips_cpu_attr) == (CPU_R4100)))
        {
	  casenum = 7;
        }
      else if (((mips_cpu_attr) == (CPU_R4300)))
        {
	  casenum = 9;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 58:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4000)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  casenum = 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R4600))))
        {
	  casenum = 4;
        }
      else if (((mips_cpu_attr) == (CPU_R4650)))
        {
	  casenum = 5;
        }
      else if (((mips_cpu_attr) == (CPU_R4100)))
        {
	  casenum = 6;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 75:
    case 74:
    case 73:
    case 70:
    case 67:
    case 66:
    case 57:
    case 56:
    case 55:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4000)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  casenum = 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R4600))))
        {
	  casenum = 4;
        }
      else if (((mips_cpu_attr) == (CPU_R4650)))
        {
	  casenum = 5;
        }
      else if (((mips_cpu_attr) == (CPU_R4100)))
        {
	  casenum = 6;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 53:
    case 52:
      casenum = 24 /* 0x18 */;
      break;

    case 50:
    case 49:
      casenum = 25 /* 0x19 */;
      break;

    case 25:
    case 24:
    case 1:
    case 0:
      casenum = 22 /* 0x16 */;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 27 /* 0x1b */;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 17 /* 0x11 */;

    case 2:
      return 5;

    case 3:
      return 12 /* 0xc */;

    case 4:
      return 10 /* 0xa */;

    case 5:
      return 4;

    case 6:
      return 1;

    case 7:
      return 4;

    case 8:
      return 5;

    case 9:
      return 8;

    case 10:
      return 9;

    case 11:
      return 38 /* 0x26 */;

    case 12:
      return 35 /* 0x23 */;

    case 13:
      return 42 /* 0x2a */;

    case 14:
      return 36 /* 0x24 */;

    case 15:
      return 69 /* 0x45 */;

    case 16:
      return 35 /* 0x23 */;

    case 17:
      return 67 /* 0x43 */;

    case 18:
      return 37 /* 0x25 */;

    case 19:
      return 69 /* 0x45 */;

    case 20:
      return 36 /* 0x24 */;

    case 21:
      return 68 /* 0x44 */;

    case 22:
      return 3;

    case 23:
      return 1;

    case 24:
      return 5;

    case 25:
      return 8;

    case 27:
      return 58 /* 0x3a */;

    default:
      abort ();
    }
}

static int
imuldiv_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 262:
    case 257:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 260:
    case 255:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 237:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 236:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 235:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 228:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 261:
    case 256:
    case 227:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 225:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 224:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 189:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 429:
    case 428:
    case 427:
    case 426:
    case 425:
    case 424:
    case 423:
    case 422:
    case 421:
    case 420:
    case 130:
    case 129:
    case 122:
    case 121:
      casenum = 23 /* 0x17 */;
      break;

    case 114:
    case 110:
    case 106:
    case 102:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4000)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 11 /* 0xb */;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  casenum = 12 /* 0xc */;
        }
      else if (((mips_cpu_attr) == (CPU_R4600)))
        {
	  casenum = 13 /* 0xd */;
        }
      else if (((mips_cpu_attr) == (CPU_R4650)))
        {
	  casenum = 14 /* 0xe */;
        }
      else if (((mips_cpu_attr) == (CPU_R4000)))
        {
	  casenum = 15 /* 0xf */;
        }
      else if (((mips_cpu_attr) == (CPU_R4100)))
        {
	  casenum = 17 /* 0x11 */;
        }
      else if (((mips_cpu_attr) == (CPU_R4300)))
        {
	  casenum = 19 /* 0x13 */;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  casenum = 21 /* 0x15 */;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 112:
    case 108:
    case 104:
    case 100:
    case 95:
    case 93:
    case 91:
    case 89:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4000)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 11 /* 0xb */;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  casenum = 12 /* 0xc */;
        }
      else if (((mips_cpu_attr) == (CPU_R4600)))
        {
	  casenum = 13 /* 0xd */;
        }
      else if (((mips_cpu_attr) == (CPU_R4650)))
        {
	  casenum = 14 /* 0xe */;
        }
      else if (((mips_cpu_attr) == (CPU_R4000)))
        {
	  casenum = 15 /* 0xf */;
        }
      else if (((mips_cpu_attr) == (CPU_R4100)))
        {
	  casenum = 16 /* 0x10 */;
        }
      else if (((mips_cpu_attr) == (CPU_R4300)))
        {
	  casenum = 18 /* 0x12 */;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  casenum = 20 /* 0x14 */;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 72:
    case 71:
    case 63:
    case 62:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4000)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  casenum = 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R4600))))
        {
	  casenum = 4;
        }
      else if (((mips_cpu_attr) == (CPU_R4650)))
        {
	  casenum = 5;
        }
      else if (((mips_cpu_attr) == (CPU_R4100)))
        {
	  casenum = 7;
        }
      else if (((mips_cpu_attr) == (CPU_R4300)))
        {
	  casenum = 9;
        }
      else if (((mips_cpu_attr) == (CPU_R5000)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 58:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4000)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  casenum = 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R4600))))
        {
	  casenum = 4;
        }
      else if (((mips_cpu_attr) == (CPU_R4650)))
        {
	  casenum = 5;
        }
      else if (((mips_cpu_attr) == (CPU_R4100)))
        {
	  casenum = 6;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 75:
    case 74:
    case 73:
    case 70:
    case 67:
    case 66:
    case 57:
    case 56:
    case 55:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4000)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 1;
        }
      else if ((((mips_cpu_attr) == (CPU_R3000))) || (((mips_cpu_attr) == (CPU_R3900))))
        {
	  casenum = 3;
        }
      else if ((((mips_cpu_attr) == (CPU_R4000))) || (((mips_cpu_attr) == (CPU_R4600))))
        {
	  casenum = 4;
        }
      else if (((mips_cpu_attr) == (CPU_R4650)))
        {
	  casenum = 5;
        }
      else if (((mips_cpu_attr) == (CPU_R4100)))
        {
	  casenum = 6;
        }
      else if ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 27 /* 0x1b */;
        }
      break;

    case 53:
    case 52:
      casenum = 24 /* 0x18 */;
      break;

    case 50:
    case 49:
      casenum = 25 /* 0x19 */;
      break;

    case 25:
    case 24:
    case 1:
    case 0:
      casenum = 22 /* 0x16 */;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 27 /* 0x1b */;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 17 /* 0x11 */;

    case 2:
      return 5;

    case 3:
      return 12 /* 0xc */;

    case 4:
      return 10 /* 0xa */;

    case 5:
      return 4;

    case 6:
      return 1;

    case 7:
      return 4;

    case 8:
      return 5;

    case 9:
      return 8;

    case 10:
      return 9;

    case 11:
      return 38 /* 0x26 */;

    case 12:
      return 35 /* 0x23 */;

    case 13:
      return 42 /* 0x2a */;

    case 14:
      return 36 /* 0x24 */;

    case 15:
      return 69 /* 0x45 */;

    case 16:
      return 35 /* 0x23 */;

    case 17:
      return 67 /* 0x43 */;

    case 18:
      return 37 /* 0x25 */;

    case 19:
      return 69 /* 0x45 */;

    case 20:
      return 36 /* 0x24 */;

    case 21:
      return 68 /* 0x44 */;

    case 22:
      return 3;

    case 23:
      return 1;

    case 24:
      return 5;

    case 25:
      return 8;

    case 27:
      return 58 /* 0x3a */;

    default:
      abort ();
    }
}

static int
memory_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 270:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 269:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10)))))))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 272:
    case 267:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 3) || (which_alternative == 4))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 0;
        }
      else if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 3) || (which_alternative == 4))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 1;
        }
      else if (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 271:
    case 266:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || (which_alternative == 2)) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 1) || (which_alternative == 2)) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 265:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10)))))))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 243:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 0;
        }
      else if ((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 1;
        }
      else if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative == 11) || (which_alternative == 12)))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 237:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 3) || (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8)))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 3) || (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8)))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 1;
        }
      else if (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 9) || (which_alternative == 10)))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 235:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 228:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 0;
        }
      else if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 1;
        }
      else if (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 8) || (which_alternative == 9)))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 236:
    case 227:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 262:
    case 257:
    case 225:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 5) || (which_alternative == 6))) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 0;
        }
      else if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 5) || (which_alternative == 6))) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 1;
        }
      else if (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8)))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 261:
    case 260:
    case 256:
    case 255:
    case 224:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000)))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 2) || (which_alternative == 3)) && ((((mips_cpu_attr) == (CPU_R3000))) || ((((mips_cpu_attr) == (CPU_R3900))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 284:
    case 283:
    case 281:
    case 276:
    case 253:
    case 252:
    case 251:
    case 250:
    case 234:
    case 223:
    case 219:
    case 217:
      casenum = 2;
      break;

    case 189:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 186:
    case 183:
    case 180:
    case 177:
    case 174:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 319:
    case 249:
    case 248:
    case 247:
    case 246:
    case 218:
    case 216:
    case 199:
    case 197:
    case 195:
    case 193:
    case 191:
    case 188:
    case 187:
    case 184:
    case 181:
    case 178:
    case 175:
    case 172:
      if ((! (((mips_cpu_attr) == (CPU_R3000)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && (! (((mips_cpu_attr) == (CPU_R5000))))))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      switch (recog_memoized (insn))
	{
        case 270:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 269:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || (which_alternative == 7)) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || (((mips_cpu_attr) == (CPU_R3000)))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 272:
        case 267:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 3) || (which_alternative == 4))) && (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))))
	    {
	      return 2;
	    }
	  else if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 271:
        case 266:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || (which_alternative == 2)) && (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || (which_alternative == 2)) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 265:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || (((mips_cpu_attr) == (CPU_R3000)))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 261:
        case 260:
        case 256:
        case 255:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || (which_alternative == 7)) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || (((which_alternative == 2) || (which_alternative == 3)) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || (((mips_cpu_attr) == (CPU_R3000)))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 243:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || ((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || (((mips_cpu_attr) == (CPU_R3000)))))))
	    {
	      return 2;
	    }
	  else if ((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 237:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 3) || (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8)))) && (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 3) || (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 7) || (which_alternative == 8)))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 236:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 8) || (which_alternative == 9)) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || (((mips_cpu_attr) == (CPU_R3000)))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 235:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 8) || (which_alternative == 9)) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || (((mips_cpu_attr) == (CPU_R3000)))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 228:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))) && (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))))
	    {
	      return 2;
	    }
	  else if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 6) || (which_alternative == 7))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 227:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 262:
        case 257:
        case 225:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 5) || (which_alternative == 6))) && (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))))
	    {
	      return 2;
	    }
	  else if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || (which_alternative == 6))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 224:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 2) || (which_alternative == 3)) && (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 189:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 186:
        case 183:
        case 180:
        case 177:
        case 174:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 319:
        case 249:
        case 248:
        case 247:
        case 246:
        case 218:
        case 216:
        case 199:
        case 197:
        case 195:
        case 193:
        case 191:
        case 188:
        case 187:
        case 184:
        case 181:
        case 178:
        case 175:
        case 172:
	  if ((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || ((((mips_cpu_attr) == (CPU_R4100))) || ((((mips_cpu_attr) == (CPU_R4650))) || ((((mips_cpu_attr) == (CPU_R4600))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 3;

      }

    case 1:
      switch (recog_memoized (insn))
	{
        case 270:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 269:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || (which_alternative == 7)) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 272:
        case 267:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 3) || (which_alternative == 4))) && (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 271:
        case 266:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || (which_alternative == 2)) && ((((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 265:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 261:
        case 260:
        case 256:
        case 255:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || (which_alternative == 7)) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || (((which_alternative == 2) || (which_alternative == 3)) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 243:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || ((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 237:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 3) || (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8)))) && (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))))) || (((which_alternative == 3) || (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 7) || (which_alternative == 8)))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 236:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 8) || (which_alternative == 9)) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 235:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 8) || (which_alternative == 9)) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 228:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))) && (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 6) || (which_alternative == 7))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 227:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 262:
        case 257:
        case 225:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 5) || (which_alternative == 6))) && (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || (which_alternative == 6))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 224:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 2) || (which_alternative == 3)) && ((((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 189:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 186:
        case 183:
        case 180:
        case 177:
        case 174:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 319:
        case 249:
        case 248:
        case 247:
        case 246:
        case 218:
        case 216:
        case 199:
        case 197:
        case 195:
        case 193:
        case 191:
        case 188:
        case 187:
        case 184:
        case 181:
        case 178:
        case 175:
        case 172:
	  return 1;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 2;

      }

    case 2:
      return 1;

    case 3:
      switch (recog_memoized (insn))
	{
        case 270:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 269:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || (which_alternative == 7)) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 272:
        case 267:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 3) || (which_alternative == 4))) && (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 271:
        case 266:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || (which_alternative == 2)) && ((((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 265:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 261:
        case 260:
        case 256:
        case 255:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || (which_alternative == 7)) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || (((which_alternative == 2) || (which_alternative == 3)) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 243:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || ((((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 237:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 3) || (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 7) || (which_alternative == 8)))) && (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))))) || (((which_alternative == 3) || (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 7) || (which_alternative == 8)))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 236:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 8) || (which_alternative == 9)) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 235:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 8) || (which_alternative == 9)) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))) || (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((((((mips_cpu_attr) == (CPU_R5000))) || (((mips_cpu_attr) == (CPU_R4300)))) || ((((mips_cpu_attr) == (CPU_R4100))) || (((mips_cpu_attr) == (CPU_R4650))))) || (((((mips_cpu_attr) == (CPU_R4600))) || (((mips_cpu_attr) == (CPU_R3900)))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && (! (((mips_cpu_attr) == (CPU_R3900)))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 228:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 6) || (which_alternative == 7))) && (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 6) || (which_alternative == 7))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 227:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 262:
        case 257:
        case 225:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 5) || (which_alternative == 6))) && (((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000))))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || (which_alternative == 6))) && ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 224:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 2) || (which_alternative == 3)) && ((((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 189:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 186:
        case 183:
        case 180:
        case 177:
        case 174:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((((mips_cpu_attr) == (CPU_R5000))) || ((((mips_cpu_attr) == (CPU_R4300))) || (((mips_cpu_attr) == (CPU_R4100))))) || (((((mips_cpu_attr) == (CPU_R4650))) || (((mips_cpu_attr) == (CPU_R4600)))) || ((((mips_cpu_attr) == (CPU_R3900))) || (((mips_cpu_attr) == (CPU_R3000)))))) || ((! (((mips_cpu_attr) == (CPU_R5000)))) && ((! (((mips_cpu_attr) == (CPU_R4300)))) && ((! (((mips_cpu_attr) == (CPU_R4100)))) && ((! (((mips_cpu_attr) == (CPU_R4650)))) && ((! (((mips_cpu_attr) == (CPU_R4600)))) && ((! (((mips_cpu_attr) == (CPU_R3900)))) && (! (((mips_cpu_attr) == (CPU_R3000)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 2;
	    }

        case 319:
        case 249:
        case 248:
        case 247:
        case 246:
        case 218:
        case 216:
        case 199:
        case 197:
        case 195:
        case 193:
        case 191:
        case 188:
        case 187:
        case 184:
        case 181:
        case 178:
        case 175:
        case 172:
	  return 1;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 2;

      }

    default:
      abort ();
    }
}

struct function_unit_desc function_units[] = {
  {"memory", 1, 1, 0, 1, 1, memory_unit_ready_cost, 0, 3, memory_unit_blockage_range, memory_unit_blockage}, 
  {"imuldiv", 2, 1, 0, 0, 69, imuldiv_unit_ready_cost, imuldiv_unit_conflict_cost, 69, imuldiv_unit_blockage_range, imuldiv_unit_blockage}, 
  {"adder", 4, 1, 1, 1, 1, adder_unit_ready_cost, 0, 4, adder_unit_blockage_range, adder_unit_blockage}, 
  {"mult", 8, 1, 1, 1, 1, mult_unit_ready_cost, 0, 8, mult_unit_blockage_range, mult_unit_blockage}, 
  {"divide", 16, 1, 1, 1, 1, divide_unit_ready_cost, 0, 112, divide_unit_blockage_range, divide_unit_blockage}, 
};

int
const_num_delay_slots (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    default:
      return 1;
    }
}

int length_unit_log = 0;
