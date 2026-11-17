/* FUN_005e71d5 - 0x005e71d5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005e71d5(void)

{
  uint uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  HWND pHVar9;
  int unaff_EBP;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  FUN_00879bb8();
  iVar10 = DAT_009794b8;
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  *(int *)(unaff_EBP + -0x10) = DAT_009794b8;
  if (uVar1 < 0x112) {
    if (uVar1 == 0x111) {
      if (*(int *)(unaff_EBP + 0x10) == 1) {
LAB_005e7675:
        (*DAT_0097b5b8)(*(undefined4 *)(unaff_EBP + 8),0);
      }
    }
    else if (uVar1 == 0xf) {
      *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(iVar10 + 0x10);
      *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(iVar10 + 0x14);
      *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(iVar10 + 0x18);
      *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar10 + 0x1c);
      *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(iVar10 + 0x20);
      *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(iVar10 + 0x24);
      *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(iVar10 + 0x28);
      *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(iVar10 + 0x2c);
      uVar4 = (*DAT_0097b578)(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x8c);
      *(undefined4 *)(unaff_EBP + 0x14) = uVar4;
      (*DAT_0097b67c)(uVar4,1);
      piVar5 = (int *)FUN_00679e4e(unaff_EBP + -0x14,10);
      iVar10 = *piVar5;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      if (iVar10 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_00409205();
      }
      uVar4 = (*DAT_0097b678)(0xc,0,0,0,0,0,0,0,0x81,0,0,0,0,uVar4);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      (*DAT_0097b674)(*(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + -0x1c));
      iVar10 = *(int *)(unaff_EBP + -0x10);
      (*DAT_0097b5cc)(*(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(iVar10 + 4),0xffffffff,
                      unaff_EBP + -0x3c,0x11);
      if ((*(char **)(iVar10 + 8) != (char *)0x0) && (**(char **)(iVar10 + 8) != '\0')) {
        piVar5 = (int *)FUN_00679e4e(unaff_EBP + -0x18,10);
        iVar7 = *piVar5;
        *(undefined4 *)(unaff_EBP + -4) = 3;
        if (iVar7 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_00409205();
        }
        uVar4 = (*DAT_0097b678)(0xc,0,0,0,0,0,1,0,0x81,0,0,0,0,uVar4);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
        uVar4 = *(undefined4 *)(unaff_EBP + 0x14);
        (*DAT_0097b674)(uVar4,*(undefined4 *)(unaff_EBP + -0x10));
        (*DAT_0097b66c)(uVar4,0xff0000);
        if ((*(char **)(iVar10 + 0xc) == (char *)0x0) || (**(char **)(iVar10 + 0xc) == '\0')) {
          uVar6 = *(undefined4 *)(iVar10 + 8);
        }
        else {
          uVar6 = *(undefined4 *)(iVar10 + 0xc);
        }
        (*DAT_0097b5cc)(uVar4,uVar6,0xffffffff,unaff_EBP + -0x4c,0x40011);
        (*DAT_0097b670)(*(undefined4 *)(unaff_EBP + -0x10));
      }
      (*DAT_0097b670)(*(undefined4 *)(unaff_EBP + -0x1c));
      (*DAT_0097b574)(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x8c);
    }
    else {
      if (uVar1 == 0x10) goto LAB_005e7675;
      if (uVar1 == 0x20) {
        if ((*(char **)(iVar10 + 8) != (char *)0x0) && (**(char **)(iVar10 + 8) != '\0')) {
          (*DAT_0097b5b0)(unaff_EBP + -0x2c);
          (*DAT_0097b5ac)(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x2c);
          iVar10 = *(int *)(unaff_EBP + -0x10);
          if ((*(int *)(iVar10 + 0x30) == 0) &&
             (iVar7 = (*DAT_0097b57c)(iVar10 + 0x20,*(undefined4 *)(unaff_EBP + -0x2c),
                                      *(undefined4 *)(unaff_EBP + -0x28)), iVar7 == 0)) {
            uVar4 = *(undefined4 *)(iVar10 + 0x38);
          }
          else {
            uVar4 = *(undefined4 *)(iVar10 + 0x34);
          }
          goto LAB_005e7778;
        }
      }
      else if (uVar1 == 0x110) {
        *(undefined4 **)(unaff_EBP + -0x20) = (undefined4 *)(iVar10 + 0x10);
        *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(iVar10 + 0x10);
        *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(iVar10 + 0x14);
        *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(iVar10 + 0x18);
        *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(iVar10 + 0x1c);
        *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(iVar10 + 0x20);
        *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(iVar10 + 0x24);
        *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(iVar10 + 0x28);
        *(undefined4 **)(unaff_EBP + -0x24) = (undefined4 *)(iVar10 + 0x20);
        *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar10 + 0x2c);
        uVar4 = (*DAT_0097b5d0)(*(undefined4 *)(unaff_EBP + 8));
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
        (*DAT_0097b67c)(uVar4,1);
        piVar5 = (int *)FUN_00679e4e(unaff_EBP + 0xc,10);
        iVar10 = *piVar5;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (iVar10 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_00409205();
        }
        uVar6 = (*DAT_0097b678)(0xc,0,0,0,0,0,0,0,0x81,0,0,0,0,uVar6);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(unaff_EBP + 0x14) = uVar6;
        if (*(int *)(unaff_EBP + 0xc) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + 0xc) = 0;
        }
        (*DAT_0097b674)(uVar4,*(undefined4 *)(unaff_EBP + 0x14));
        iVar10 = *(int *)(unaff_EBP + -0x10);
        iVar7 = (*DAT_0097b5cc)(uVar4,*(undefined4 *)(iVar10 + 4),0xffffffff,unaff_EBP + -0x4c,0x10)
        ;
        iVar7 = iVar7 + *(int *)(unaff_EBP + -0x48);
        pcVar2 = *(char **)(iVar10 + 8);
        *(int *)(unaff_EBP + -0x40) = iVar7;
        if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
          uVar13 = 0;
          uVar12 = 0x19;
          uVar11 = 0x50;
          iVar7 = iVar7 + 0xf;
          uVar6 = 0x87;
          uVar4 = 0;
          pHVar9 = GetDlgItem(*(HWND *)(unaff_EBP + 8),1);
          (*DAT_0097b5c4)(pHVar9,uVar4,uVar6,iVar7,uVar11,uVar12,uVar13);
          iVar10 = *(int *)(unaff_EBP + -0x40);
        }
        else {
          *(int *)(unaff_EBP + -0x38) = iVar7 + 0xf;
          if ((*(char **)(iVar10 + 0xc) == (char *)0x0) || (**(char **)(iVar10 + 0xc) == '\0')) {
            uVar6 = *(undefined4 *)(iVar10 + 8);
          }
          else {
            uVar6 = *(undefined4 *)(iVar10 + 0xc);
          }
          iVar7 = (*DAT_0097b5cc)(uVar4,uVar6,0xffffffff,unaff_EBP + -0x3c,0x400);
          iVar10 = *(int *)(unaff_EBP + -0x34);
          iVar7 = iVar7 + *(int *)(unaff_EBP + -0x38);
          *(int *)(unaff_EBP + -0x30) = iVar7;
          if (0x14a < iVar10) {
            iVar10 = 0x14a;
          }
          uVar13 = 8;
          uVar12 = 0x19;
          uVar11 = 0x50;
          iVar7 = iVar7 + 0xf;
          uVar6 = 0x87;
          uVar4 = 0;
          iVar8 = (0x172 - iVar10) / 2;
          *(int *)(unaff_EBP + -0x3c) = iVar8;
          *(int *)(unaff_EBP + -0x34) = iVar10 + -0x14 + iVar8;
          pHVar9 = GetDlgItem(*(HWND *)(unaff_EBP + 8),1);
          (*DAT_0097b5c4)(pHVar9,uVar4,uVar6,iVar7,uVar11,uVar12,uVar13);
          iVar10 = *(int *)(unaff_EBP + -0x30);
        }
        iVar7 = (*DAT_0097b544)(1,0x15e,iVar10 + 0x50,0);
        iVar7 = (*DAT_0097b544)(0,(iVar7 - (iVar10 + 0x50)) / 2);
        (*DAT_0097b5c4)(*(undefined4 *)(unaff_EBP + 8),0,(iVar7 + -0x15e) / 2);
        uVar13 = 0;
        iVar10 = iVar10 + 0x32;
        uVar12 = 0x14a;
        uVar11 = 0xfffffffe;
        uVar6 = 8;
        uVar4 = 0;
        pHVar9 = GetDlgItem(*(HWND *)(unaff_EBP + 8),1000);
        (*DAT_0097b5c4)(pHVar9,uVar4,uVar6,uVar11,uVar12,iVar10,uVar13);
        (*DAT_0097b670)(*(undefined4 *)(unaff_EBP + 0x14));
        (*DAT_0097b5c0)(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + -0x1c));
        piVar5 = (int *)FUN_00679e4e(unaff_EBP + 0x10,10);
        iVar10 = *piVar5;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (iVar10 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_00409205();
        }
        uVar4 = (*DAT_0097b678)(0xc,0,0,0,700,0,0,0,0x81,0,0,0,0,uVar4);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + 0x10) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + 0x10) = 0;
        }
        (*DAT_0097b5bc)(*(undefined4 *)(unaff_EBP + 8),1,0x30,uVar4,1);
        (*DAT_0097b5bc)(*(undefined4 *)(unaff_EBP + 8),6,0x30,uVar4,1);
        (*DAT_0097b5bc)(*(undefined4 *)(unaff_EBP + 8),7,0x30,uVar4,1);
        puVar3 = *(undefined4 **)(unaff_EBP + -0x20);
        *puVar3 = *(undefined4 *)(unaff_EBP + -0x4c);
        puVar3[1] = *(undefined4 *)(unaff_EBP + -0x48);
        puVar3[2] = *(undefined4 *)(unaff_EBP + -0x44);
        puVar3[3] = *(undefined4 *)(unaff_EBP + -0x40);
        puVar3 = *(undefined4 **)(unaff_EBP + -0x24);
        *puVar3 = *(undefined4 *)(unaff_EBP + -0x3c);
        puVar3[1] = *(undefined4 *)(unaff_EBP + -0x38);
        puVar3[2] = *(undefined4 *)(unaff_EBP + -0x34);
        puVar3[3] = *(undefined4 *)(unaff_EBP + -0x30);
      }
    }
  }
  else if (uVar1 == 0x200) {
    if ((*(char **)(iVar10 + 8) != (char *)0x0) && (**(char **)(iVar10 + 8) != '\0')) {
      if (*(int *)(iVar10 + 0x30) == 0) {
        iVar7 = (*DAT_0097b57c)(iVar10 + 0x20,*(uint *)(unaff_EBP + 0x14) & 0xffff,
                                *(uint *)(unaff_EBP + 0x14) >> 0x10);
        iVar10 = *(int *)(unaff_EBP + -0x10);
        if (iVar7 == 0) {
          uVar4 = *(undefined4 *)(iVar10 + 0x38);
          goto LAB_005e7778;
        }
      }
      uVar4 = *(undefined4 *)(iVar10 + 0x34);
LAB_005e7778:
      (*DAT_0097b5b4)(uVar4);
    }
  }
  else if (uVar1 == 0x201) {
    if ((*(char **)(iVar10 + 8) != (char *)0x0) && (**(char **)(iVar10 + 8) != '\0')) {
      iVar7 = (*DAT_0097b57c)(iVar10 + 0x20,*(uint *)(unaff_EBP + 0x14) & 0xffff,
                              *(uint *)(unaff_EBP + 0x14) >> 0x10);
      iVar10 = *(int *)(unaff_EBP + -0x10);
      if (iVar7 == 0) {
        uVar4 = *(undefined4 *)(iVar10 + 0x38);
      }
      else {
        uVar4 = *(undefined4 *)(iVar10 + 0x34);
        *(undefined4 *)(iVar10 + 0x30) = 1;
      }
      (*DAT_0097b5b4)(uVar4);
LAB_005e76ea:
      uVar4 = 1;
      goto LAB_005e7780;
    }
  }
  else if (((uVar1 == 0x202) && (*(char **)(iVar10 + 8) != (char *)0x0)) &&
          (**(char **)(iVar10 + 8) != '\0')) {
    if (*(int *)(iVar10 + 0x30) != 0) {
      iVar10 = (*DAT_0097b57c)(iVar10 + 0x20,*(uint *)(unaff_EBP + 0x14) & 0xffff,
                               *(uint *)(unaff_EBP + 0x14) >> 0x10);
      if (iVar10 != 0) {
        FUN_007d299b(*(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 8),0);
        (*DAT_0097b5b8)(*(undefined4 *)(unaff_EBP + 8),0);
        goto LAB_005e76ea;
      }
      iVar10 = *(int *)(unaff_EBP + -0x10);
    }
    uVar4 = *(undefined4 *)(iVar10 + 0x38);
    *(undefined4 *)(iVar10 + 0x30) = 0;
    goto LAB_005e7778;
  }
  uVar4 = 0;
LAB_005e7780:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


