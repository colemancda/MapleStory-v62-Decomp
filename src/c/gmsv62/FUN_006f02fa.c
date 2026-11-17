/* FUN_006f02fa - 0x006f02fa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f02fa(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  uint uVar3;
  undefined4 uStack_14;
  uint uStack_10;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  for (uVar3 = 0;
      (*(int *)(extraout_ECX + 0x578) != 0 &&
      (uVar3 < *(uint *)(*(int *)(extraout_ECX + 0x578) + -4))); uVar3 = uVar3 + 1) {
    uStack_10 = unaff_EBP + 8;
    uStack_14 = 0x6f032f;
    iVar2 = FUN_0045ec92();
    if (iVar2 != 0) {
      piVar1 = (int *)(*(int *)(extraout_ECX + 0x578) + uVar3 * 8);
      *piVar1 = *piVar1 + 1;
      uStack_10 = *(int *)(extraout_ECX + 0x578) + 4 + uVar3 * 8;
      uStack_14 = 0x6f0358;
      FUN_00414f8b();
      if (*(int *)(extraout_ECX + 0x5e0) == 0) goto LAB_006f0373;
      uStack_10 = 0x6f0367;
      FUN_006efa7e();
      uStack_10 = uVar3;
      goto LAB_006f036e;
    }
  }
  uStack_10 = 1;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_14;
  FUN_00450368(unaff_EBP + 8);
  FUN_006f0280();
  uStack_10 = unaff_EBP + 8;
  uStack_14 = 0x6f03c7;
  FUN_00414f8b();
  if (*(int *)(extraout_ECX + 0x5e0) != 0) {
    uStack_10 = 0x6f03d6;
    FUN_006efa7e();
    iVar2 = 0;
    if (*(int *)(extraout_ECX + 0x578) != 0) {
      iVar2 = *(int *)(*(int *)(extraout_ECX + 0x578) + -4);
    }
    uStack_10 = iVar2 + 1;
LAB_006f036e:
    uStack_14 = 0x6f0373;
    FUN_006efae9();
  }
LAB_006f0373:
  if (*(int *)(extraout_ECX + 0x5e0) != 0) {
    uStack_10 = 0;
    uStack_14 = 0x6f0384;
    FUN_008161f1();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_10 = 0x6f0390;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


