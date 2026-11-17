/* FUN_005e4cd8 - 0x005e4cd8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e4cd8(int param_1,int param_2,double *param_3,double *param_4,double *param_5,
                 double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)param_1 / (double)param_2;
  dVar4 = dVar3 * dVar3;
  dVar2 = dVar4 * dVar3 + dVar4 * dVar3;
  dVar1 = dVar4 * _DAT_008ea308;
  *param_3 = (dVar2 - dVar1) + _DAT_008e8a78;
  *param_4 = dVar1 - dVar2;
  dVar1 = (double)param_1 * _DAT_008e8a90;
  *param_6 = dVar1;
  *param_5 = ((dVar4 - (dVar3 + dVar3)) + _DAT_008e8a78) * dVar1;
  *param_6 = (dVar4 - dVar3) * *param_6;
  return;
}


