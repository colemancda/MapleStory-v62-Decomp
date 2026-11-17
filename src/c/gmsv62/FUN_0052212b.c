/* FUN_0052212b - 0x0052212b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0052212b(int param_1)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = DAT_00978368;
  puVar1 = (ushort *)(DAT_00978368 + 0x2cc7);
  if (*(short *)(DAT_00978368 + 0x2cc7) == 0) {
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0xe4) = 1000;
    *(undefined4 *)(param_1 + 0xe8) = 1;
    *(undefined4 *)(param_1 + 0xec) = 2000;
  }
  else {
    *(uint *)(param_1 + 0xe4) = (uint)*(ushort *)(DAT_00978368 + 0x2cc4);
    *(uint *)(param_1 + 0xe8) = (uint)*(byte *)(iVar3 + 0x2cc6);
    *(uint *)(param_1 + 0xec) = (uint)*puVar1;
    uVar2 = (uint)*(byte *)(iVar3 + 0x2cc9);
  }
  *(uint *)(param_1 + 0xf0) = uVar2;
  iVar3 = *(int *)(param_1 + 0xec) / 1000;
  if (iVar3 == 9) {
    iVar3 = *(int *)(*(int *)(param_1 + 200) + 0x3c) + -1;
  }
  else {
    iVar3 = iVar3 + -2;
  }
  *(int *)(*(int *)(param_1 + 200) + 0x60) = iVar3;
  FUN_00522531();
  FUN_005221cb();
  return;
}


