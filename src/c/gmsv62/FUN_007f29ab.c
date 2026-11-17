/* FUN_007f29ab - 0x007f29ab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007f29ab(double *param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  if (_DAT_008e8a80 <= param_4) {
    if (param_2 <= _DAT_008e8a80) {
      param_4 = -param_4;
      if ((param_4 < *param_1) &&
         (dVar1 = (param_2 / param_3) * param_5 + *param_1, *param_1 = dVar1, dVar1 < param_4))
      goto LAB_007f2a14;
    }
    else if ((*param_1 < param_4) &&
            (dVar1 = (param_2 / param_3) * param_5 + *param_1, *param_1 = dVar1, param_4 < dVar1)) {
LAB_007f2a14:
      *param_1 = param_4;
      return;
    }
  }
  return;
}


