/* ptr_007db54c - 0x007db54c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_007db54c(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x70) == 0x3e9) || (*(int *)(param_1 + 0x70) == 0x3eb)) &&
     ((param_3 & 0x80000000) == 0)) {
    if (param_2 == 0xd) {
      cVar1 = (*(int *)(param_1 + 0xa0) != 0) + '\x06';
      if (cVar1 == '\0') goto LAB_007db5bb;
    }
    else if ((param_2 == 0x1b) || (param_2 == 0x4e)) {
      cVar1 = '\a';
    }
    else {
      if (param_2 != 0x59) goto LAB_007db5bb;
      cVar1 = '\x06';
    }
    iVar2 = FUN_00816395(cVar1);
    if ((iVar2 == 0) || (iVar2 = (**(code **)(*(int *)(iVar2 + 4) + 0x20))(), iVar2 != 0)) {
      (**(code **)(*(int *)(param_1 + -4) + 0x34))(cVar1);
    }
  }
  else {
LAB_007db5bb:
    FUN_004bc822(param_2,param_3);
  }
  return;
}


