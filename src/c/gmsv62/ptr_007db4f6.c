/* ptr_007db4f6 - 0x007db4f6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_007db4f6(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x1d];
  if ((iVar1 == 0x3e9) || (iVar1 == 0x3eb)) {
    if (param_2 == 6) {
      iVar1 = *param_1;
      goto LAB_007db546;
    }
    if (param_2 == 7) {
      iVar1 = *param_1;
      goto LAB_007db546;
    }
LAB_007db532:
    if (param_2 == 1) {
LAB_007db537:
      iVar1 = *param_1;
      param_2 = 1;
      goto LAB_007db546;
    }
    if (param_2 != 2) {
      return;
    }
  }
  else {
    if (iVar1 != 0x3ea) goto LAB_007db532;
    if (param_2 == 6) goto LAB_007db537;
    if (param_2 != 7) goto LAB_007db532;
  }
  iVar1 = *param_1;
  param_2 = 2;
LAB_007db546:
  (**(code **)(iVar1 + 0x34))(param_2);
  return;
}


