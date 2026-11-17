/* FUN_005e78db - 0x005e78db in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005e78db(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  HWND pHVar6;
  int iVar7;
  HWND pHVar8;
  int iVar9;
  int unaff_EBP;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  FUN_00879bb8();
  iVar9 = DAT_009794bc;
  iVar5 = *(int *)(unaff_EBP + 0xc);
  if (iVar5 == 0xf) {
    puVar1 = (undefined4 *)(DAT_009794bc + 0x10);
    *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(DAT_009794bc + 0xc);
    *(undefined4 *)(unaff_EBP + -0x38) = *puVar1;
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(iVar9 + 0x14);
    *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar9 + 0x18);
    uVar2 = (*DAT_0097b578)(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x7c);
    *(undefined4 *)(unaff_EBP + 0xc) = uVar2;
    (*DAT_0097b67c)(uVar2,1);
    piVar3 = (int *)FUN_00679e4e(unaff_EBP + -0x14,0x682);
    iVar5 = *piVar3;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    if (iVar5 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_00409205();
    }
    uVar2 = (*DAT_0097b678)(0xc,0,0,0,0,0,0,0,0x81,0,0,0,0,uVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
    }
    (*DAT_0097b674)(*(undefined4 *)(unaff_EBP + 0xc),uVar2);
    (*DAT_0097b5cc)(*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(iVar9 + 4),0xffffffff,
                    unaff_EBP + -0x3c,0x11);
    (*DAT_0097b670)(uVar2);
    (*DAT_0097b574)(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x7c);
    goto LAB_005e7bb9;
  }
  if (iVar5 != 0x10) {
    if (iVar5 == 0x110) {
      puVar1 = (undefined4 *)(DAT_009794bc + 0xc);
      *(undefined4 **)(unaff_EBP + -0x1c) = puVar1;
      *(undefined4 *)(unaff_EBP + -0x2c) = *puVar1;
      *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar9 + 0x10);
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar9 + 0x14);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar9 + 0x18);
      uVar2 = (*DAT_0097b5d0)(*(undefined4 *)(unaff_EBP + 8));
      *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
      (*DAT_0097b67c)(uVar2,1);
      piVar3 = (int *)FUN_00679e4e(unaff_EBP + 0x10,0x682);
      iVar5 = *piVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar5 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00409205();
      }
      uVar4 = (*DAT_0097b678)(0xc,0,0,0,0,0,0,0,0x81,0,0,0,0,uVar4);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
      if (*(int *)(unaff_EBP + 0x10) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + 0x10) = 0;
      }
      (*DAT_0097b674)(uVar2,*(undefined4 *)(unaff_EBP + 0xc));
      iVar5 = (*DAT_0097b5cc)(uVar2,*(undefined4 *)(iVar9 + 4),0xffffffff,unaff_EBP + -0x2c,0x10);
      iVar5 = iVar5 + *(int *)(unaff_EBP + -0x28);
      uVar12 = 0;
      uVar11 = 0x19;
      uVar10 = 0x50;
      *(int *)(unaff_EBP + -0x20) = iVar5;
      iVar5 = iVar5 + 0xf;
      uVar4 = 0x50;
      uVar2 = 0;
      pHVar6 = GetDlgItem(*(HWND *)(unaff_EBP + 8),6);
      (*DAT_0097b5c4)(pHVar6,uVar2,uVar4,iVar5,uVar10,uVar11,uVar12);
      uVar12 = 0;
      uVar11 = 0x19;
      uVar10 = 0x50;
      iVar5 = *(int *)(unaff_EBP + -0x20) + 0xf;
      uVar4 = 0xb4;
      uVar2 = 0;
      pHVar6 = GetDlgItem(*(HWND *)(unaff_EBP + 8),7);
      (*DAT_0097b5c4)(pHVar6,uVar2,uVar4,iVar5,uVar10,uVar11,uVar12);
      iVar9 = *(int *)(unaff_EBP + -0x20);
      iVar5 = iVar9 + 0x50;
      iVar7 = (*DAT_0097b544)(1,0x15e,iVar5,0);
      iVar5 = (*DAT_0097b544)(0,(iVar7 - iVar5) / 2);
      (*DAT_0097b5c4)(*(undefined4 *)(unaff_EBP + 8),0,(iVar5 + -0x15e) / 2);
      uVar12 = 0;
      iVar9 = iVar9 + 0x32;
      pHVar6 = *(HWND *)(unaff_EBP + 8);
      uVar11 = 0x14a;
      uVar10 = 0xfffffffe;
      uVar4 = 8;
      uVar2 = 0;
      pHVar8 = GetDlgItem(pHVar6,1000);
      (*DAT_0097b5c4)(pHVar8,uVar2,uVar4,uVar10,uVar11,iVar9,uVar12);
      (*DAT_0097b670)(*(undefined4 *)(unaff_EBP + 0xc));
      (*DAT_0097b5c0)(pHVar6,*(undefined4 *)(unaff_EBP + -0x18));
      piVar3 = (int *)FUN_00679e4e(unaff_EBP + -0x10,0x682);
      iVar5 = *piVar3;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar5 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00409205();
      }
      uVar2 = (*DAT_0097b678)(0xc,0,0,0,0,0,0,0,0x81,0,0,0,0,uVar2);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + 0xc) = uVar2;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      (*DAT_0097b5bc)(pHVar6,6,0x30,*(undefined4 *)(unaff_EBP + 0xc),1);
      (*DAT_0097b5bc)(pHVar6,7,0x30,*(undefined4 *)(unaff_EBP + 0xc),1);
      puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
      *puVar1 = *(undefined4 *)(unaff_EBP + -0x2c);
      puVar1[1] = *(undefined4 *)(unaff_EBP + -0x28);
      puVar1[2] = *(undefined4 *)(unaff_EBP + -0x24);
      puVar1[3] = *(undefined4 *)(unaff_EBP + -0x20);
      goto LAB_005e7bb9;
    }
    if (iVar5 != 0x111) goto LAB_005e7bb9;
    if (*(int *)(unaff_EBP + 0x10) == 6) {
      FUN_007d299b(*(undefined4 *)(DAT_009794bc + 8),0);
    }
    else if (*(int *)(unaff_EBP + 0x10) != 7) goto LAB_005e7bb9;
  }
  (*DAT_0097b5b8)(*(undefined4 *)(unaff_EBP + 8),0);
LAB_005e7bb9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


