/* FUN_00615b8e - 0x00615b8e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00615b8e(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar6;
  int unaff_EBP;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) < 0) goto LAB_00615dbb;
  local_28 = 0x615bc8;
  iVar2 = FUN_006158e9();
  uVar6 = extraout_ECX_00;
  if (iVar2 == 0) {
    local_28 = 0x615bdc;
    iVar2 = FUN_00615923();
    uVar6 = extraout_ECX_01;
    if (iVar2 != 0) goto LAB_00615be0;
  }
  else {
LAB_00615be0:
    *(undefined4 *)(unaff_EBP + 0xc) = 8;
  }
  iVar2 = *(int *)(unaff_EBP + 0xc);
  if (iVar2 < 9) {
    *(int *)(extraout_ECX + 0xe4) = iVar2;
  }
  else {
    *(int *)(extraout_ECX + 0xe8) = iVar2;
    local_28 = 0x615c04;
    FUN_006142ef();
    uVar6 = extraout_ECX_02;
    if (*(int *)(unaff_EBP + 8) == 0) {
      local_28 = iVar2 + -9;
      iStack_2c = unaff_EBP + -0x14;
      iStack_30 = 0x615c19;
      piVar3 = (int *)FUN_0061d126();
      puVar4 = (undefined4 *)*piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (puVar4 == (undefined4 *)0x0) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x10) = *puVar4;
      }
      uVar6 = **(undefined4 **)(extraout_ECX + 0x78);
      local_28 = 0x615c3d;
      iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      local_28 = *(int *)(iVar2 + 4);
      iStack_2c = 0x615c47;
      puVar4 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      iStack_2c = *puVar4;
      iStack_30 = 0x615c4e;
      iStack_30 = FUN_007d3c48();
      uStack_34 = *(undefined4 *)(unaff_EBP + -0x10);
      uStack_3c = 0x615c58;
      uStack_38 = uVar6;
      FUN_007d48c3();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uVar6 = 0;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        local_28 = 0x615c6b;
        FUN_004030b1();
        uVar6 = extraout_ECX_03;
      }
      iVar2 = *(int *)(unaff_EBP + 0xc);
    }
  }
  if ((*(int **)(unaff_EBP + 0x10) == (int *)0x0) ||
     (iVar1 = **(int **)(unaff_EBP + 0x10), iVar1 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(iVar1 + -4) >> 1;
  }
  if (uVar5 != 0) {
    piVar3 = *(int **)(extraout_ECX + 0x78);
    uStack_3c = uVar6;
    if ((*piVar3 == 0x4c4b5a) && (iVar2 == 0x14)) {
      if (*(int *)(unaff_EBP + 0x18) == 0) {
        iStack_30 = 0;
      }
      else {
        iStack_30 = piVar3[5];
      }
      local_28 = 0x5a;
      iStack_2c = 0;
      uStack_34 = 0x3ea;
      uStack_38 = 5000;
      iStack_40 = extraout_ECX + 0x80;
      *(undefined4 **)(unaff_EBP + 0xc) = &uStack_3c;
      iStack_44 = 0x615cca;
      FUN_00433bdf();
      iStack_44 = extraout_ECX + 0x114;
      *(int **)(unaff_EBP + 0xc) = &iStack_40;
      FUN_0041160e();
      *(int **)(unaff_EBP + 0xc) = &iStack_44;
    }
    else {
      if (*(int *)(unaff_EBP + 0x18) == 0) {
        iStack_30 = 0;
      }
      else {
        iStack_30 = piVar3[5];
      }
      local_28 = 0;
      iStack_2c = 0;
      uStack_34 = 0x3ea;
      uStack_38 = 5000;
      iStack_40 = extraout_ECX + 0x80;
      *(undefined4 **)(unaff_EBP + 0xc) = &uStack_3c;
      iStack_44 = 0x615d0f;
      FUN_00433bdf();
      iStack_44 = extraout_ECX + 0x114;
      *(int **)(unaff_EBP + 0xc) = &iStack_40;
      FUN_0041160e();
      *(int **)(unaff_EBP + 0xc) = &iStack_44;
    }
    FUN_004059fd(unaff_EBP + 0x10);
    FUN_0046c293();
  }
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    local_28 = 0;
    iStack_2c = 0;
    iStack_30 = 0x8d;
    uStack_34 = 0x615d4c;
    FUN_0060142b();
    local_28 = 8;
    iStack_2c = extraout_ECX + 0x90;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_30 = 0x615d61;
    FUN_00457fa0();
    local_28 = *(int *)(unaff_EBP + 8);
    iStack_2c = 0x615d6c;
    FUN_00457cda();
    if (iVar2 < 9) {
      iVar2 = 0;
    }
    iStack_2c = 0x615d80;
    local_28 = iVar2;
    FUN_00457cda();
    local_28 = 0x615d88;
    iStack_30 = FUN_00615dd8();
    *(int **)(unaff_EBP + 0xc) = &local_28;
    iStack_2c = 0xffffffff;
    local_28 = 0;
    uStack_34 = 0x615d98;
    FUN_00414edd();
    iStack_2c = 0x615da0;
    FUN_00459cb5();
    local_28 = unaff_EBP + -0x24;
    iStack_2c = 0x615daf;
    FUN_004751b2();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    local_28 = 0x615dbb;
    FUN_0045ebca();
  }
LAB_00615dbb:
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    local_28 = 0x615dc7;
    FUN_004030b1();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


