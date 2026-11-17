/* FUN_00598e63 - 0x00598e63 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00598e63(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  if ((((-1 < (int)param_2) && (*(int *)(param_1 + 0x2c) != 0)) &&
      (param_2 < *(uint *)(*(int *)(param_1 + 0x2c) + -4))) && (*(int *)(param_1 + 0xc) == 0)) {
    iVar4 = param_2 * 0x1d;
    local_8 = 1;
    local_c = 3;
    do {
      iVar2 = local_8;
      iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + iVar4);
      if ((iVar1 != 0) && ((iVar1 / 1000) % 10 != 0)) {
        if (local_8 != 0) {
          local_8 = 0;
        }
        piVar3 = (int *)FUN_00599155();
        *piVar3 = iVar1;
        piVar3[1] = param_2;
        piVar3[2] = iVar2;
      }
      iVar4 = iVar4 + 4;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}


