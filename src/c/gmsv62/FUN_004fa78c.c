/* FUN_004fa78c - 0x004fa78c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004fa78c(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  int iStack00000004;
  
  sVar2 = FUN_00424561();
  uVar3 = FUN_00424561();
  bVar1 = FUN_0042452b();
  iVar4 = FUN_007d1e08();
  if (sVar2 < 0) {
    iStack00000004 = 0;
    if (0 < *(int *)(param_1 + 0x73c)) {
      do {
        piVar5 = (int *)FUN_004faecb();
        *piVar5 = iStack00000004;
        iStack00000004 = iStack00000004 + 1;
        piVar5[1] = (uint)bVar1;
        piVar5[2] = (uint)uVar3 + iVar4;
      } while (iStack00000004 < *(int *)(param_1 + 0x73c));
    }
  }
  else {
    piVar5 = (int *)FUN_004faecb();
    *piVar5 = (int)sVar2;
    piVar5[1] = (uint)bVar1;
    piVar5[2] = iVar4 + (uint)uVar3;
  }
  return;
}


