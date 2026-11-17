/* FUN_00455c7c - 0x00455c7c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00455c7c(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_00879bb8();
  uStack_1c = 0xb4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_20 = 0x455ca0;
  iVar3 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar3;
  puVar1 = *(uint **)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    uStack_1c = *(undefined4 *)(unaff_EBP + 0x18);
    uStack_20 = *(undefined4 *)(unaff_EBP + 0x14);
    uStack_24 = *puVar1;
    uStack_28 = *(undefined4 *)(unaff_EBP + 0xc);
    *(int **)(unaff_EBP + 0x10) = &iStack_2c;
    iStack_2c = extraout_ECX;
    FUN_00450368(unaff_EBP + 8);
    iVar3 = FUN_00455d9b();
  }
  uVar4 = -(uint)(iVar3 != 0) & iVar3 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar4 != 0) & uVar4 - 8;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_1c = 0x455cf6;
  FUN_0045e6bf();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_1c = 0x455d02;
  iVar3 = FUN_004bc6a2();
  if (iVar3 == 1) {
    iVar2 = *(int *)(unaff_EBP + -0x14);
    uVar4 = 0;
    if (*(int *)(*(int *)(iVar2 + 0x9c) + 0x48) != 0) {
      uVar4 = 2;
    }
    if (*(int *)(*(int *)(iVar2 + 0xac) + 0x48) != 0) {
      uVar4 = uVar4 | 1;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0xa4) + 0x48);
    if (iVar2 != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((((*(int *)(unaff_EBP + 0x18) == 0) && (uVar4 != 2)) && (uVar4 != 1)) && (uVar4 != 4)) {
      uStack_1c = 0;
      uStack_20 = 0;
      uStack_24 = 0;
      uStack_28 = 0;
      *(int **)(unaff_EBP + 0x18) = &iStack_2c;
      iStack_2c = iVar2;
      FUN_0045f0f3(s_You_should_choose_only_one_of_th_009642cc,0xffffffff);
      FUN_007db3ad();
      iVar3 = 2;
    }
    else {
      *puVar1 = uVar4;
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_1c = 0x455d7e;
  FUN_0045e6dc();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_1c = 0x455d8a;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


