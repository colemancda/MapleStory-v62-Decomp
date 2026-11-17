/* FUN_0047961e - 0x0047961e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0047961e(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (*DAT_0097b704)();
  if (*(int *)(param_1 + 100) == 0) {
    if (iVar4 - *(int *)(param_1 + 0xa0) < 1000) {
      return;
    }
    *(int *)(param_1 + 0xa0) = iVar4;
    iVar5 = FUN_004796f1();
    if (iVar5 == 0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x80);
    iVar5 = *(int *)(param_1 + 0x84);
    iVar2 = *(int *)(param_1 + 0x88);
    iVar3 = *(int *)(param_1 + 0x8c);
    FUN_0047971c(iVar4 - *(int *)(param_1 + 0x7c));
    if (((*(int *)(param_1 + 0x94) == iVar5) && (*(int *)(param_1 + 0x98) == iVar2)) &&
       (*(int *)(param_1 + 0x9c) == iVar3)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x90) = uVar1;
    *(int *)(param_1 + 0x94) = iVar5;
    *(int *)(param_1 + 0x98) = iVar2;
    *(int *)(param_1 + 0x9c) = iVar3;
  }
  else {
    if (*(int *)(param_1 + 0x70) == 0) {
      return;
    }
    iVar4 = (*(int *)(param_1 + 0x74) - iVar4) / 1000;
    if (iVar4 == *(int *)(param_1 + 0x78)) {
      return;
    }
    *(int *)(param_1 + 0x78) = iVar4;
  }
  FUN_008161f1(0);
  return;
}


