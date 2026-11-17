/* FUN_005375e2 - 0x005375e2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005375e2(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int unaff_EBP;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  FUN_00879bb8();
  iStack_18 = 0xd0;
  uStack_1c = 0x537600;
  iVar5 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iStack_18 = *(undefined4 *)(unaff_EBP + 0x10);
    uStack_1c = *(undefined4 *)(unaff_EBP + 0xc);
    uStack_20 = *(undefined4 *)(unaff_EBP + 8);
    uStack_24 = 0x53761b;
    iVar5 = FUN_0053651f();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar6 = -(uint)(iVar5 != 0) & iVar5 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar6 != 0) & uVar6 - 8;
  iStack_18 = 0x537642;
  FUN_00537a31();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  iStack_18 = 0x537651;
  iVar5 = FUN_004bc6a2();
  *(int *)(unaff_EBP + 0xc) = iVar5;
  if (iVar5 == 1) {
    iStack_18 = unaff_EBP + 0x10;
    uStack_1c = 0x53766f;
    puVar7 = (undefined4 *)FUN_0045b90e();
    iStack_18 = *puVar7;
    uStack_1c = 0x537676;
    uVar8 = FUN_0087b6ab();
    **(undefined4 **)(unaff_EBP + 0x1c) = uVar8;
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      iStack_18 = *(int *)(unaff_EBP + 0x10) + -0xc;
      uStack_1c = 0x53768c;
      FUN_00434e38();
    }
    iStack_18 = unaff_EBP + 0x10;
    uStack_1c = 0x53769f;
    puVar7 = (undefined4 *)FUN_0045b90e();
    iStack_18 = *puVar7;
    uStack_1c = 0x5376a6;
    iVar5 = FUN_0087b6ab();
    piVar1 = *(int **)(unaff_EBP + 0x14);
    *piVar1 = iVar5;
    iStack_18 = 0x5376b4;
    FUN_00414ebb();
    iStack_18 = unaff_EBP + 0x10;
    uStack_1c = 0x5376c6;
    puVar7 = (undefined4 *)FUN_0045b90e();
    iStack_18 = *puVar7;
    uStack_1c = 0x5376cd;
    iVar5 = FUN_0087b6ab();
    piVar2 = *(int **)(unaff_EBP + 0x18);
    *piVar2 = iVar5;
    iStack_18 = 0x5376db;
    FUN_00414ebb();
    iStack_18 = unaff_EBP + 0x10;
    uStack_1c = 0x5376ed;
    puVar7 = (undefined4 *)FUN_0045b90e();
    iStack_18 = *puVar7;
    uStack_1c = 0x5376f4;
    uVar4 = FUN_0087b6ab();
    **(undefined1 **)(unaff_EBP + 0x20) = uVar4;
    iStack_18 = 0x537702;
    FUN_00414ebb();
    **(undefined1 **)(unaff_EBP + 0x24) = 1;
    iStack_18 = *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x14) + 0xc4) + 0x60);
    uStack_1c = 0x537719;
    iVar9 = FUN_0049e5a8();
    **(int **)(unaff_EBP + 0x28) = iVar9;
    iVar5 = *piVar1;
    if ((((iVar5 < 10000000) && (0x6d < iVar5)) && (iVar3 = *piVar2, iVar3 < 10000000)) &&
       (0x6d < iVar3)) {
      if (iVar5 + iVar9 <= iVar3) goto LAB_0053777b;
      *(undefined4 **)(unaff_EBP + 0xc) = &uStack_28;
      uVar8 = 0x1183;
    }
    else {
      *(undefined4 **)(unaff_EBP + 0xc) = &uStack_28;
      uVar8 = 0x1171;
    }
    iStack_18 = 0;
    uStack_1c = 0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 9999999;
    FUN_00679d22(&uStack_28,uVar8);
    FUN_007db3ad();
    uVar8 = 4;
  }
  else {
LAB_0053777b:
    uVar8 = *(undefined4 *)(unaff_EBP + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_18 = 0x53778a;
  FUN_00537a4e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}


