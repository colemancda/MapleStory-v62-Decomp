/* FUN_005e4f36 - 0x005e4f36 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005e4f36(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar2 = *(int *)(param_1 + 0x18);
  FUN_0045f084(param_1,*(undefined4 *)(param_1 + 4));
  FUN_0045f084(param_1 + 8,*(undefined4 *)(param_1 + 0xc));
  FUN_005e3f4c(param_2);
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 4) = uVar1;
  uVar1 = FUN_004b8c34();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  for (iVar2 = *(int *)(param_1 + 0x18) - iVar2; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_00413367(param_1 + 0x8c,*(undefined4 *)(param_1 + 0x94));
    uVar1 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x94) = uVar1;
  }
  iVar3 = __ftol();
  FUN_00413367(param_1 + 0x8c,*(undefined4 *)(param_1 + 0x94));
  __ftol();
  uVar4 = FUN_004133b5();
  uVar1 = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  puVar6 = *(undefined4 **)(param_1 + 0x20);
  puVar5 = (undefined4 *)(param_1 + 0x44);
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = FUN_00413367(param_1 + 0x8c,uVar1);
  if (iVar3 + 5000 < iVar2) {
    FUN_005e532d();
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined1 *)(param_1 + 0x44) = 3;
    uVar1 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x94) = uVar1;
    puVar5 = (undefined4 *)FUN_005e5129();
    puVar6 = (undefined4 *)(param_1 + 0x44);
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}


