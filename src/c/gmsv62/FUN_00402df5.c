/* FUN_00402df5 - 0x00402df5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_00402df5(undefined4 param_1,int param_2)

{
  int *piVar1;
  int unaff_retaddr;
  
  piVar1 = (int *)(*DAT_0097b648)(param_2 * 2 + 6);
  if (piVar1 != (int *)0x0) {
    param_2 = param_2 * 2;
    *piVar1 = param_2;
    piVar1 = piVar1 + 1;
    if (unaff_retaddr != 0) {
      FUN_00879c20(piVar1,unaff_retaddr,param_2);
    }
    *(undefined2 *)(param_2 + (int)piVar1) = 0;
  }
  return piVar1;
}


