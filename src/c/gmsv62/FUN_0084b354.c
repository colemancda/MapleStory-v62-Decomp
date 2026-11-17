/* FUN_0084b354 - 0x0084b354 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084b354(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int extraout_ECX;
  int iVar9;
  int iVar10;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  uVar4 = FUN_0042452b();
  uVar4 = uVar4 & 0xff;
  *(uint *)(unaff_EBP + -0x24) = uVar4;
  if (uVar4 == 5) {
    if ((DAT_0097bce8 != 0) && (FUN_00815de9(), DAT_0097bce8 != 0)) {
      (*(code *)**(undefined4 **)(DAT_0097bce8 + 8))(1);
      goto LAB_0084b39d;
    }
LAB_0084b3a2:
    FUN_0084b56f(uVar4);
    iVar10 = extraout_ECX;
  }
  else {
LAB_0084b39d:
    if (uVar4 != 4) goto LAB_0084b3a2;
    FUN_0045cdbc(unaff_EBP + -0x10);
    iVar10 = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4);
    }
    if (iVar9 != 0xb) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      goto LAB_0084b55e;
    }
    uVar4 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x20) = uVar4 & 0xff;
    if ((uVar4 & 0xff) != 0) {
      *(undefined4 *)(extraout_ECX + 0x3294) = 30000;
    }
    puVar5 = (undefined4 *)(unaff_EBP + -0x3c);
    for (iVar9 = 6; iVar8 = 6, iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    do {
      puVar5 = (undefined4 *)FUN_0045e053(unaff_EBP + 8,iVar8 + -6,iVar8 + -5);
      iVar9 = FUN_0087b6ab(*puVar5);
      FUN_00414ebb();
      puVar5 = (undefined4 *)FUN_0045e053(unaff_EBP + -0x18,iVar8 + -1,iVar8);
      uVar6 = FUN_0087b6ab(*puVar5);
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar6;
      FUN_00414ebb();
      iVar10 = iVar10 + iVar9;
      while (iVar10 = iVar10 % 6, *(int *)(unaff_EBP + -0x3c + iVar10 * 4) != -1) {
        iVar10 = iVar10 + 1;
      }
      iVar1 = iVar8 + -5;
      *(int *)(unaff_EBP + -0x3c + iVar10 * 4) = (*(int *)(unaff_EBP + -0x1c) + iVar9) % 10;
      iVar8 = iVar8 + 1;
    } while (iVar1 < 5);
    iVar10 = 0;
    piVar7 = (int *)(unaff_EBP + -0x3c);
    do {
      if (*piVar7 == -1) {
        puVar5 = (undefined4 *)FUN_0045e053(unaff_EBP + 8,4,5);
        iVar9 = FUN_0087b6ab(*puVar5);
        FUN_00414ebb();
        puVar5 = (undefined4 *)FUN_0045e053(unaff_EBP + 8,10,0xb);
        iVar8 = FUN_0087b6ab(*puVar5);
        FUN_00414ebb();
        *(int *)(unaff_EBP + -0x3c + iVar10 * 4) = (iVar8 + iVar9) % 10;
        break;
      }
      iVar10 = iVar10 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar10 < 6);
    iVar10 = *(int *)(unaff_EBP + -0x3c);
    iVar9 = *(int *)(unaff_EBP + -0x38);
    iVar8 = *(int *)(unaff_EBP + -0x34);
    iVar1 = *(int *)(unaff_EBP + -0x30);
    iVar2 = *(int *)(unaff_EBP + -0x2c);
    iVar3 = *(int *)(unaff_EBP + -0x28);
    FUN_0084ea01();
    FUN_0069e2c7(iVar8 + (iVar9 + iVar10 * 10) * 10,iVar3 + (iVar2 + iVar1 * 10) * 10,
                 *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x3294),
                 *(undefined4 *)(unaff_EBP + -0x20));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    iVar10 = *(int *)(unaff_EBP + -0x14);
    uVar4 = *(uint *)(unaff_EBP + -0x24);
  }
  if (((uVar4 == 5) || (uVar4 == 6)) || (uVar4 == 8)) {
    *(undefined4 *)(iVar10 + 0x3294) = 0;
  }
LAB_0084b55e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


