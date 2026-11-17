/* ptr_007e022c - 0x007e022c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_007e022c(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1000) {
    param_1[0x1f] = *(int *)(param_1[0x27] + 0x60);
    iVar1 = *param_1;
    uVar2 = 1;
  }
  else {
    if ((param_2 < 0x3e9) || (0x3ea < param_2)) goto LAB_007e0262;
    iVar1 = *param_1;
    uVar2 = 2;
  }
  (**(code **)(iVar1 + 0x34))(uVar2);
LAB_007e0262:
  if (param_2 == 1) {
    iVar1 = *param_1;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    iVar1 = *param_1;
  }
  (**(code **)(iVar1 + 0x34))(param_2);
  return;
}


