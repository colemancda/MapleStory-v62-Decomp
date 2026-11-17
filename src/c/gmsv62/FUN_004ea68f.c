/* FUN_004ea68f - 0x004ea68f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ea68f(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  int local_24;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  local_24 = *(int *)(DAT_00978368 + 0x2098);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (local_24 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = local_24 + 4;
  }
  iVar2 = FUN_004a3109();
  if (iVar2 == 0) {
    local_24 = 0x173;
    uVar3 = FUN_00679d22(unaff_EBP + -0x10);
    local_24 = 0xc;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00471102(uVar3);
    local_24 = *(int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (*(int *)(iVar1 + 0x2cac) == 0) {
    local_24 = 0x16e;
    uVar3 = FUN_00679d22(unaff_EBP + -0x10);
    local_24 = 0xc;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00471102(uVar3);
    local_24 = *(int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    local_24 = *(int *)(iVar1 + 0x2088);
    if (**(int **)(iVar1 + 0x2cb8) != local_24) {
      iVar2 = FUN_004ea83d();
      if (iVar2 != 2) {
        local_24 = 0x172;
        uVar3 = FUN_00679d22(unaff_EBP + -0x10);
        local_24 = 0xc;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00471102(uVar3);
        local_24 = *(int *)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        goto LAB_004ea7af;
      }
    }
    if (*(int *)(iVar1 + 0x2cb8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar1 + 0x2cb8) + -4);
    }
    if (iVar2 < *(int *)(iVar1 + 0x2cc0)) {
      local_24 = 0;
      FUN_0060142b(0x72,0);
      local_24 = 5;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00457cda();
      *(int **)(unaff_EBP + -0x14) = &local_24;
      local_24 = 0;
      FUN_00414f8b(unaff_EBP + 8);
      FUN_00459cb5();
      local_24 = unaff_EBP + -0x24;
      FUN_004751b2();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      local_24 = 0x4ea821;
      FUN_0045ebca();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_24 = 0x4ea82d;
      FUN_00414ebb();
      goto LAB_004ea82d;
    }
    local_24 = 0x178;
    uVar3 = FUN_00679d22(unaff_EBP + -0x10);
    local_24 = 0xc;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00471102(uVar3);
    local_24 = *(int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
LAB_004ea7af:
  if (local_24 != 0) {
    local_24 = local_24 + -0xc;
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 8) != 0) {
    local_24 = *(int *)(unaff_EBP + 8) + -0xc;
    FUN_00434e38();
  }
LAB_004ea82d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


