/* FUN_0065af97 - 0x0065af97 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0065af97(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_retaddr;
  
  piVar1 = (int *)(*DAT_0097b64c)(*param_1 + -4,param_3 * 2 + 6);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    param_3 = param_3 * 2;
    *piVar1 = param_3;
    piVar1 = piVar1 + 1;
    if (unaff_retaddr != 0) {
      FUN_00879c20(piVar1,unaff_retaddr,param_3);
    }
    *(undefined2 *)(param_3 + (int)piVar1) = 0;
    *param_1 = (int)piVar1;
    uVar2 = 1;
  }
  return uVar2;
}


