/* FUN_0060ef54 - 0x0060ef54 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0060ef54(int param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = FUN_0042452b();
  *(uint *)(param_1 + 0x188) = uVar3 & 0xff;
  uVar2 = FUN_00424561();
  uVar3 = (uint)uVar2;
  if ((int)uVar3 < *(int *)(param_1 + 0x188)) {
    iVar4 = uVar3 * 0x14;
    do {
      FUN_004db745(iVar4 + 0x14 + *(int *)(param_1 + 0x18c));
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while ((int)uVar3 < *(int *)(param_1 + 0x188));
  }
  *(undefined4 *)(*(int *)(param_1 + 0x18c) + *(int *)(param_1 + 0x188) * 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18c) + 4 + *(int *)(param_1 + 0x188) * 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18c) + 8 + *(int *)(param_1 + 0x188) * 0x14) = 0;
  iVar4 = *(int *)(param_1 + 0x188);
  iVar1 = *(int *)(param_1 + 0x18c);
  if (*(int *)(iVar1 + 0x10 + iVar4 * 0x14) != 0) {
    FUN_00449913(0);
    *(undefined4 *)(iVar1 + iVar4 * 0x14 + 0x10) = 0;
  }
  FUN_0060f8d6();
  FUN_008161f1(0);
  return;
}


