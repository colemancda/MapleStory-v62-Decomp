/* FUN_0087c96a - 0x0087c96a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


short * FUN_0087c96a(short *param_1,short *param_2)

{
  short *psVar1;
  
  do {
    if (*param_1 == 0) {
      return (short *)0x0;
    }
    psVar1 = param_2;
    do {
      if ((*psVar1 == 0) || (*(short *)(((int)param_1 - (int)param_2) + (int)psVar1) != *psVar1))
      break;
      psVar1 = psVar1 + 1;
    } while (*(short *)(((int)param_1 - (int)param_2) + (int)psVar1) != 0);
    if (*psVar1 == 0) {
      return param_1;
    }
    param_1 = param_1 + 1;
  } while( true );
}


