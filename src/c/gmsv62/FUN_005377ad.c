/* FUN_005377ad - 0x005377ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005377ad(void)

{
  int iVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 1) {
    local_24 = *(undefined4 *)(extraout_ECX + 0x70);
    *(int **)(unaff_EBP + -0x14) = &iStack_28;
    iStack_2c = 0x5377dd;
    FUN_005379ae();
    iVar1 = **(int **)(extraout_ECX + 0xcc);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_2c = 0x5377ec;
    iStack_2c = (**(code **)(iVar1 + 0x18))();
    uStack_30 = 1;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_38;
    FUN_00537987(extraout_ECX + 0xb8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_00532516();
    if (iVar1 == 0) goto LAB_0053792d;
    local_24 = *(undefined4 *)(extraout_ECX + 0x70);
    *(int **)(unaff_EBP + -0x18) = &iStack_28;
    iStack_2c = 0x537827;
    FUN_005379ae();
    iStack_2c = 9999999;
    uStack_30 = 1;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_38;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00537987(extraout_ECX + 0xa0);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_00532516();
    if (iVar1 == 0) goto LAB_0053792d;
    local_24 = *(undefined4 *)(extraout_ECX + 0x70);
    *(int **)(unaff_EBP + -0x18) = &iStack_28;
    iStack_2c = 0x53786a;
    FUN_005379ae();
    iStack_2c = 9999999;
    uStack_30 = 1;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_38;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_00537987(extraout_ECX + 0xa8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_00532516();
    if (iVar1 == 0) goto LAB_0053792d;
    local_24 = unaff_EBP + -0x20;
    iStack_28 = 0x5378ab;
    iVar1 = FUN_00455c59();
    local_24 = *(undefined4 *)(*(int *)(iVar1 + 4) + 0xad);
    iStack_28 = *(int *)(iVar1 + 4) + 0xa5;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    iStack_2c = 0x5378c6;
    iVar1 = FUN_00413367();
    *(bool *)(unaff_EBP + -0xd) = iVar1 < *(int *)(extraout_ECX + 0x74);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_34 = local_24;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      local_24 = 0;
      iStack_28 = 0x5378e1;
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      uStack_34 = extraout_ECX_00;
    }
    if (*(char *)(unaff_EBP + -0xd) != '\0') {
      local_24 = 0;
      iStack_28 = 0;
      iStack_2c = extraout_ECX + 0x6c;
      uStack_30 = 0;
      *(undefined4 **)(unaff_EBP + 8) = &uStack_34;
      uStack_38 = 0x116;
      FUN_00679d22(&uStack_34);
      uStack_38 = 0x53790c;
      FUN_007db3ad();
      goto LAB_0053792d;
    }
  }
  if (*(int *)(extraout_ECX + 0x68) == 0) {
    *(undefined4 *)(extraout_ECX + 100) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(extraout_ECX + 0x68) = 1;
    if (*(int *)(extraout_ECX + 0x14) != 0) {
      local_24 = 0x53792d;
      FUN_00815de9();
    }
  }
LAB_0053792d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


