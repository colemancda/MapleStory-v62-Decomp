/* FUN_007518a4 - 0x007518a4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007518a4(void)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 extraout_ECX;
  int unaff_EBP;
  uint local_30;
  
  FUN_00879bb8();
  iVar9 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  if (iVar9 == 0) goto LAB_00751b87;
  FUN_0045e2eb();
  local_30 = 0x7518da;
  iVar5 = FUN_0054e7b3();
  if (iVar5 == 0) goto LAB_00751b87;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar6 = FUN_0045e2eb();
  iVar6 = (iVar6 / 1000) % 10;
  if (iVar6 == 0) {
    local_30 = unaff_EBP - 0x14;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_30 = 0x751951;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_00751958:
    FUN_00414ebb();
  }
  else if (iVar6 == 1) {
    local_30 = unaff_EBP + 8;
    FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    local_30 = 0x75192b;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    goto LAB_00751958;
  }
  local_30 = iVar9 + 0x2e;
  cVar3 = FUN_0045f03e();
  pcVar1 = *(char **)(unaff_EBP + -0x10);
  if (cVar3 == '\0') {
    if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
      local_30 = unaff_EBP + 8;
      puVar7 = (uint *)FUN_00679d22();
      local_30 = *puVar7;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00434e21(*(undefined4 *)(unaff_EBP + 0xc));
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
      local_30 = unaff_EBP + 8;
      puVar8 = (undefined4 *)FUN_00679d22();
      uVar10 = *puVar8;
      local_30 = *(uint *)(iVar5 + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00434e21(*(undefined4 *)(unaff_EBP + 0xc),uVar10);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    FUN_00414ebb();
    puVar8 = *(undefined4 **)(unaff_EBP + 0x10);
    *puVar8 = 1;
  }
  else {
    if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
      local_30 = iVar9 + 0x2e;
      uVar4 = FUN_0045f03e();
      *(undefined1 *)(unaff_EBP + 0xb) = uVar4;
      local_30 = unaff_EBP - 0x14;
      puVar8 = (undefined4 *)FUN_00679d22();
      uVar10 = *puVar8;
      local_30 = *(uint *)(iVar5 + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00434e21(*(undefined4 *)(unaff_EBP + 0xc),uVar10);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
      local_30 = iVar9 + 0x2e;
      uVar4 = FUN_0045f03e();
      *(undefined1 *)(unaff_EBP + 0xb) = uVar4;
      local_30 = unaff_EBP - 0x14;
      puVar8 = (undefined4 *)FUN_00679d22();
      local_30 = (uint)*(byte *)(unaff_EBP + 0xb);
      uVar10 = *puVar8;
      uVar2 = *(undefined4 *)(iVar5 + 0x10);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00434e21(*(undefined4 *)(unaff_EBP + 0xc),uVar10,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    FUN_00414ebb();
    puVar8 = *(undefined4 **)(unaff_EBP + 0x10);
    *puVar8 = 3;
  }
  *(uint **)(unaff_EBP + 0x10) = &local_30;
  InterlockedIncrement((LONG *)(iVar9 + 4));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0048b97b();
  iVar9 = FUN_0055540f();
  if (iVar9 == -1) {
    *puVar8 = 4;
  }
  else if (iVar9 == 1) {
    *puVar8 = 5;
  }
  else if (iVar9 == 2) {
    *puVar8 = 6;
  }
  else if (iVar9 == 3) {
    *puVar8 = 2;
  }
  local_30 = 0x751ae9;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  local_30 = unaff_EBP - 0x28;
  iVar9 = FUN_00402e32();
  if (iVar9 < 0) {
    local_30 = 0x751b03;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  local_30 = 0x751b13;
  uVar10 = FUN_00449713();
  *(uint **)(unaff_EBP + 0xc) = &local_30;
  FUN_00448a17(uVar10);
  uVar10 = *puVar8;
  iVar9 = *(int *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00756efd(unaff_EBP + 0x10,uVar10);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0044974c();
  iVar5 = FUN_00448ebb();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    local_30 = 0x751b58;
    (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_30 = 0x751b65;
  iVar6 = FUN_00402bc3();
  if (iVar6 < 0) {
    local_30 = 0x751b70;
    FUN_00878dfb();
  }
  if (*(int *)(iVar9 + 0xc) < iVar5 + 0x14) {
    *(int *)(iVar9 + 0xc) = iVar5 + 0x14;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
LAB_00751b87:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


