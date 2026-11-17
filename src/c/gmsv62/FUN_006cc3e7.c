/* FUN_006cc3e7 - 0x006cc3e7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006cc3e7(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  FUN_00879bb8();
  if (-1 < *(int *)(extraout_ECX + 0xa8)) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    uStack_24 = 0x6c7;
    iStack_28 = unaff_EBP + -0x20;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_2c = 0x6cc422;
    puVar1 = (undefined4 *)FUN_00679d22();
    uStack_24 = *puVar1;
    iStack_28 = *(undefined4 *)(extraout_ECX + 0xb0 + *(int *)(extraout_ECX + 0xa8) * 4);
    iStack_2c = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_30 = 0x6cc444;
    uVar2 = FUN_00550c58();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    uStack_24 = 0xb49;
    iStack_28 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_2c = 0x6cc45b;
    puVar1 = (undefined4 *)FUN_00679d22();
    uStack_24 = **(undefined4 **)(unaff_EBP + -0x14);
    iStack_28 = *puVar1;
    iStack_2c = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_30 = 0x6cc470;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_24 = 0x6cc47f;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_24 = 0x6cc48b;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    uStack_24 = 0x6cc496;
    FUN_00414ebb();
    uStack_24 = 0;
    iStack_28 = 0;
    iStack_2c = 0;
    uStack_30 = 0;
    *(undefined1 **)(unaff_EBP + -0x14) = auStack_34;
    FUN_00450368(unaff_EBP + -0x10);
    iVar3 = FUN_007db791();
    if (iVar3 == 6) {
      uStack_24 = *(undefined4 *)(extraout_ECX + 0xe8);
      iStack_28 = *(undefined4 *)(extraout_ECX + 0xb0 + *(int *)(extraout_ECX + 0xa8) * 4);
      iStack_2c = 0;
      uStack_30 = 0x6cc4d5;
      FUN_0084ae96();
      *(undefined4 *)(extraout_ECX + 0xa8) = 0xffffffff;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_24 = 0x6cc4e8;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


