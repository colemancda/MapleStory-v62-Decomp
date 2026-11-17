/* FUN_00858384 - 0x00858384 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00858384(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_2 == *(int *)(param_1 + 0x2cac)) {
    FUN_00858137(param_2);
    uVar2 = 0;
    iVar3 = 0;
    while( true ) {
      iVar1 = *(int *)(param_1 + 0x2cf8);
      if (iVar1 == 0) {
        return;
      }
      if (*(uint *)(iVar1 + -4) <= uVar2) {
        return;
      }
      if (*(int *)(iVar1 + iVar3) == *param_2) break;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x2a;
    }
    if (-1 < (int)uVar2) {
      FUN_0085889d(uVar2 * 0x2a + *(int *)(param_1 + 0x2cf8));
    }
  }
  else {
    iVar3 = 0;
    for (uVar2 = 0;
        (iVar1 = *(int *)(param_1 + 0x2cf8), iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)));
        uVar2 = uVar2 + 1) {
      if (*(int *)(iVar1 + iVar3) == *param_2) goto LAB_0085840a;
      iVar3 = iVar3 + 0x2a;
    }
    FUN_00858818(0xffffffff);
LAB_0085840a:
    FUN_00858137(param_2);
  }
  return;
}


