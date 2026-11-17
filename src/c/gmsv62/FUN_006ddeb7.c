/* FUN_006ddeb7 - 0x006ddeb7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006ddeb7(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  bVar2 = (byte)*(undefined4 *)(param_1 + 0x598);
  iVar4 = *(int *)(param_1 + 0x578) << (bVar2 & 0x1f);
  iVar3 = *(int *)(param_1 + 0x59c) - iVar4 / 2;
  iVar1 = *(int *)(param_1 + 0x590);
  *(int *)(param_1 + 0x5ac) = iVar3;
  if (iVar3 < -iVar1) {
    *(int *)(param_1 + 0x5ac) = -iVar1;
  }
  iVar4 = (*(int *)(param_1 + 0x588) - iVar1) - iVar4;
  if (iVar4 < *(int *)(param_1 + 0x5ac)) {
    *(int *)(param_1 + 0x5ac) = iVar4;
  }
  iVar4 = *(int *)(param_1 + 0x57c) << (bVar2 & 0x1f);
  *(int *)(param_1 + 0x5ac) = iVar1 + *(int *)(param_1 + 0x5ac) >> (bVar2 & 0x1f);
  iVar3 = *(int *)(param_1 + 0x5a0) - iVar4 / 2;
  iVar1 = *(int *)(param_1 + 0x594);
  *(int *)(param_1 + 0x5b0) = iVar3;
  if (iVar3 < -iVar1) {
    *(int *)(param_1 + 0x5b0) = -iVar1;
  }
  iVar4 = (*(int *)(param_1 + 0x58c) - iVar1) - iVar4;
  if (iVar4 < *(int *)(param_1 + 0x5b0)) {
    *(int *)(param_1 + 0x5b0) = iVar4;
  }
  *(int *)(param_1 + 0x5b0) = *(int *)(param_1 + 0x5b0) + iVar1 >> (bVar2 & 0x1f);
  return;
}


