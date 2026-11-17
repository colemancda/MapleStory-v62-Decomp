/* ptr_007268aa - 0x007268aa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_007268aa(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 < 0x7da) || (0x7dd < param_2)) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        return;
      }
      iVar1 = *param_1;
      uVar2 = 2;
      goto LAB_007268e0;
    }
  }
  else {
    FUN_00727659(param_2 - 0x7da);
  }
  iVar1 = *param_1;
  uVar2 = 1;
LAB_007268e0:
  (**(code **)(iVar1 + 0x34))(uVar2);
  return;
}


