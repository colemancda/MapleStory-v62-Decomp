/* FUN_0059d7f7 - 0x0059d7f7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0059d7f7(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_0097c1ac == (int *)0x0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = DAT_0097c1ac;
  iVar2 = (**(code **)(*DAT_0097c1ac + 0x6c))(DAT_0097c1ac,param_1,param_2);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00964018);
  }
  return;
}


