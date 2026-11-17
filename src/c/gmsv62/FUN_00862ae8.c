/* FUN_00862ae8 - 0x00862ae8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00862ae8(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *param_3;
  if ((((param_2[2] < iVar3) || (param_2[3] < param_3[1])) || (iVar1 = *param_2, param_3[2] < iVar1)
      ) || (param_3[3] < param_2[1])) {
    uVar2 = 0;
  }
  else {
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    *param_1 = iVar3;
    iVar3 = param_3[1];
    if (param_3[1] < param_2[1]) {
      iVar3 = param_2[1];
    }
    param_1[1] = iVar3;
    iVar3 = param_3[2];
    if (param_2[2] < param_3[2]) {
      iVar3 = param_2[2];
    }
    param_1[2] = iVar3;
    iVar3 = param_2[3];
    if (param_3[3] <= param_2[3]) {
      iVar3 = param_3[3];
    }
    param_1[3] = iVar3;
    uVar2 = 1;
  }
  return uVar2;
}


