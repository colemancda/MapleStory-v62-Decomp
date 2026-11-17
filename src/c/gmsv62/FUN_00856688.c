/* FUN_00856688 - 0x00856688 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00856688(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  piVar1 = (int *)(param_1 + 0xc);
  while( true ) {
    iVar2 = 0;
    if (*piVar1 != 0) {
      iVar2 = *(int *)(*piVar1 + -4);
    }
    iVar4 = param_2;
    if ((iVar2 <= iVar3) || (iVar4 = iVar3, *(int *)(*piVar1 + iVar3 * 4) == param_2)) break;
    iVar3 = iVar3 + 1;
  }
  iVar2 = 0;
  if (*piVar1 != 0) {
    iVar2 = *(int *)(*piVar1 + -4);
  }
  if (iVar3 < iVar2) {
    FUN_0047d008(*piVar1 + iVar4 * 4);
    FUN_008587df(iVar4 * 0x25 + *(int *)(param_1 + 0x10));
  }
  return;
}


