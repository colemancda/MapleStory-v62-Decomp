/* FUN_005ccfe7 - 0x005ccfe7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005ccfe7(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_005c4e46();
  if (iVar3 == 0) {
    FUN_005c4d13(1);
  }
  FUN_00424561();
  FUN_0042452b();
  FUN_00424561();
  uVar4 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x16c) = uVar4;
  bVar1 = FUN_0042452b();
  bVar2 = FUN_0042452b();
  if ((*(int *)(param_1 + 0x118) == 0) || (bVar1 != 0)) {
    *(uint *)(param_1 + 0x118) = (uint)bVar1;
    *(uint *)(param_1 + 0x11c) = (uint)bVar2;
  }
  FUN_0045f084(param_1 + 0x110,*(undefined4 *)(param_1 + 0x114));
  uVar4 = FUN_004133b5();
  *(undefined4 *)(param_1 + 0x10c) = uVar4;
  return;
}


