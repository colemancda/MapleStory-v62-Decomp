/* ptr_006cf094 - 0x006cf094 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_006cf094(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 < 1000) || (0x3eb < param_2)) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        return;
      }
      iVar1 = *param_1;
      uVar2 = 2;
      goto LAB_006cf0c7;
    }
  }
  else {
    param_1[0x3d] = param_2 - 1000;
  }
  iVar1 = *param_1;
  uVar2 = 1;
LAB_006cf0c7:
  (**(code **)(iVar1 + 0x34))(uVar2);
  return;
}


