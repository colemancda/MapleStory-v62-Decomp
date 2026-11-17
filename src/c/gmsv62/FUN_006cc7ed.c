/* FUN_006cc7ed - 0x006cc7ed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006cc7ed(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (-(uint)(*(int *)(param_1 + 0xe8) != 0) & 5) + 5;
  piVar1 = (int *)(param_1 + 0xb0);
  FUN_00879c20(piVar1,param_2,iVar2 * 4);
  *(undefined4 *)(param_1 + 0xac) = 0;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*piVar1 != 999999999) {
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
    }
    piVar1 = piVar1 + 1;
  }
  FUN_008161f1(0);
  return;
}


