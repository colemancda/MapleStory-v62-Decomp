/* FUN_00740b38 - 0x00740b38 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00740b38(void)

{
  int iVar1;
  undefined1 uVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int local_30;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  local_30 = unaff_EBP + -0x24;
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar5 = FUN_00455c59();
  iVar5 = *(int *)(iVar5 + 4);
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    local_30 = 0;
    FUN_0045e7c2();
  }
  if (iVar5 != 0) {
    local_30 = unaff_EBP + -0x2c;
    iVar5 = FUN_00455c59();
    iVar5 = *(int *)(iVar5 + 4);
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      local_30 = 0;
      FUN_0045e7c2();
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
    }
    *(int **)(unaff_EBP + -0x20) = &local_30;
    local_30 = 0;
    FUN_00414edd(iVar5 + 4,0xffffffff);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    sVar4 = FUN_00740cce();
    iVar6 = (int)sVar4;
    uVar2 = FUN_00740cbf(iVar6);
    FUN_00740cdd(uVar2,iVar6);
    local_30 = *(int *)(iVar5 + 0x35);
    bVar3 = FUN_0045f03e(iVar5 + 0x33);
    if (bVar3 < 0x33) {
      local_30 = *(int *)(iVar5 + 0xb9);
      uVar9 = FUN_00413367(iVar5 + 0xb1);
      *(undefined4 *)(unaff_EBP + -0x14) = uVar9;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
    local_30 = *(int *)(iVar5 + 0x35);
    uVar2 = FUN_0045f03e(iVar5 + 0x33);
    iVar6 = FUN_0066ba5e(uVar2);
    *(int *)(unaff_EBP + -0x18) = iVar6;
    if (iVar6 < 2) {
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
    }
    local_30 = *(int *)(iVar5 + 0x99);
    uVar7 = FUN_00413367(iVar5 + 0x91);
    uVar8 = FUN_00413367(iVar1 + 0x2108,*(undefined4 *)(iVar1 + 0x2110));
    uVar9 = *(undefined4 *)(iVar5 + 0x75);
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar8;
    uVar8 = FUN_0045f084(iVar5 + 0x71,uVar9);
    uVar9 = *(undefined4 *)(iVar1 + 0x2104);
    *(undefined4 *)(unaff_EBP + -0x20) = uVar8;
    uVar9 = FUN_00413367(iVar1 + 0x20fc,uVar9);
    sVar4 = FUN_0045f084(iVar5 + 0x61,*(undefined4 *)(iVar5 + 0x65));
    local_30 = *(int *)(unaff_EBP + -0x14);
    FUN_00740f30((int)sVar4,uVar9,(int)*(short *)(unaff_EBP + -0x20),
                 *(undefined4 *)(unaff_EBP + -0x1c),uVar7,*(undefined4 *)(unaff_EBP + -0x18));
    iVar5 = FUN_00745827();
    if (iVar5 == 0) {
      FUN_00745acd();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


