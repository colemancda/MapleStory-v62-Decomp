/* ptr_007e12ec - 0x007e12ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_007e12ec(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1000) {
    (**(code **)(*param_1 + 0x34))(1);
LAB_007e130b:
    if (param_2 == 1) {
      iVar1 = *param_1;
      uVar2 = 1;
      goto LAB_007e131e;
    }
    if (param_2 != 2) {
      return;
    }
  }
  else if (param_2 != 0x3e9) goto LAB_007e130b;
  iVar1 = *param_1;
  uVar2 = 2;
LAB_007e131e:
  (**(code **)(iVar1 + 0x34))(uVar2);
  return;
}


