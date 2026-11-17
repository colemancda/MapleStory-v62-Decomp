/* FUN_0080726d - 0x0080726d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0080726d(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x1bc);
  FUN_004f1993(param_1 + 0x20,*(undefined4 *)(param_1 + 0x30));
  iVar3 = __ftol();
  uVar4 = FUN_004f1a11((double)iVar3);
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  uVar2 = __ftol();
  *(undefined2 *)(iVar1 + 2) = uVar2;
  FUN_004f1993(param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
  iVar3 = __ftol();
  uVar4 = FUN_004f1a11((double)iVar3);
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  uVar2 = __ftol();
  *(undefined2 *)(iVar1 + 4) = uVar2;
  FUN_004f1993(param_1 + 0x50,*(undefined4 *)(param_1 + 0x60));
  iVar3 = __ftol();
  uVar4 = FUN_004f1a11((double)iVar3);
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  uVar2 = __ftol();
  *(undefined2 *)(iVar1 + 6) = uVar2;
  FUN_004f1993(param_1 + 0x68,*(undefined4 *)(param_1 + 0x78));
  iVar3 = __ftol();
  uVar4 = FUN_004f1a11((double)iVar3);
  *(undefined4 *)(param_1 + 0x78) = uVar4;
  uVar2 = __ftol();
  *(undefined2 *)(iVar1 + 8) = uVar2;
  if (*(int *)(param_1 + 0x110) != 0) {
    FUN_007f13de(param_1 + 0x20,*(int *)(param_1 + 0x110));
  }
  return;
}


