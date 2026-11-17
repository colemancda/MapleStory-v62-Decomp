/* FUN_00493e2d - 0x00493e2d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00493e2d(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  piVar2 = (int *)(param_1 + 0x70);
  local_8 = 10;
  do {
    iVar1 = 3;
    do {
      if (*piVar2 != 0) {
        FUN_004991c5(0);
      }
      piVar2 = piVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if ((((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x164))) && (-1 < param_3)) &&
     ((param_3 < 3 && (*(int *)(param_1 + 0x70 + param_3 * 8 + param_2 * 0x18) != 0)))) {
    FUN_004991c5(1);
  }
  return;
}


