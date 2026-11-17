/* FUN_005a8f92 - 0x005a8f92 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a8f92(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int unaff_EBP;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_004031b7(0,3);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = (int *)FUN_00425067(unaff_EBP + -0x18,unaff_EBP + -0x38);
    *(bool *)(unaff_EBP + -0xd) = *piVar1 == 0;
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    if (*(char *)(unaff_EBP + -0xd) == '\0') {
      FUN_004031b7(0,3);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + 0xc) == 0) {
        FUN_00878dfb(0x80004003);
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          FUN_00878dfb(0x80004003);
        }
      }
      piVar1 = (int *)FUN_00425067(unaff_EBP + -0x1c,unaff_EBP + -0x38);
      iVar2 = *piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (iVar2 == 0) {
        FUN_00878dfb(0x80004003);
      }
      *(int *)(unaff_EBP + -0x18) = *piVar1;
      iVar3 = FUN_0042fb0a();
      iVar2 = *(int *)(unaff_EBP + 0x10);
      piVar1 = *(int **)(unaff_EBP + 0x18);
      iVar5 = *piVar1;
      iVar4 = FUN_0040eea9();
      iVar4 = ((iVar2 - iVar5) - iVar3) + iVar4;
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x38);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      if (*(int *)(unaff_EBP + 0x1c) == 0) {
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_004031b7(0,3);
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (-1 < iVar4) {
          FUN_004031b7(0,3);
          *(undefined4 *)(unaff_EBP + -0x14) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          if (*(int *)(unaff_EBP + 0xc) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar7 = (int *)FUN_00425067(unaff_EBP + -0x28,unaff_EBP + -0x68);
          *(undefined4 *)(unaff_EBP + -0x14) = 3;
          iVar5 = *piVar7;
          *(undefined4 *)(unaff_EBP + -4) = 0xe;
          if (iVar5 == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar5 = FUN_0040eea9();
          if (iVar5 + iVar2 < piVar1[2]) {
            iVar4 = 0;
          }
          else {
            FUN_004295f1(0,3);
            *(undefined4 *)(unaff_EBP + -0x14) = 7;
            iVar5 = unaff_EBP + -0x38;
            iVar3 = unaff_EBP + -0x24;
            *(undefined4 *)(unaff_EBP + -4) = 0xf;
            FUN_00424e27(iVar3,iVar5);
            FUN_00425067(iVar3,iVar5);
            *(undefined4 *)(unaff_EBP + -0x14) = 0xf;
            *(undefined4 *)(unaff_EBP + -4) = 0x10;
            FUN_004115d9();
            iVar4 = FUN_0040eea9();
            iVar4 = iVar4 + (iVar2 - piVar1[2]);
          }
        }
        FUN_004295f1(0,3);
        *(undefined4 *)(unaff_EBP + -4) = 0x11;
        FUN_004295f1(0,3);
        iVar5 = unaff_EBP + -0x78;
        iVar3 = unaff_EBP + -0x20;
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_00424e27(iVar3,iVar5);
        uVar8 = FUN_00425067(iVar3,iVar5);
        *(undefined4 *)(unaff_EBP + 0x10) = uVar8;
        iVar5 = unaff_EBP + -0x48;
        iVar3 = unaff_EBP + -0x18;
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        FUN_00424e27(iVar3,iVar5);
        puVar6 = (undefined4 *)FUN_00425067(iVar3,iVar5);
        *(undefined4 *)(unaff_EBP + 0x18) = *puVar6;
        iVar5 = unaff_EBP + -0x58;
        iVar3 = unaff_EBP + -0x1c;
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_00424e27(iVar3,iVar5);
        uVar8 = FUN_00425067(iVar3,iVar5);
        *(undefined4 *)(unaff_EBP + 0x1c) = uVar8;
        iVar5 = unaff_EBP + -0x88;
        uVar18 = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        FUN_004115d9(0,iVar5);
        iVar9 = FUN_0040e48b();
        iVar9 = -iVar9;
        uVar17 = 0;
        uVar16 = 0;
        uVar15 = 0;
        iVar10 = *(int *)(unaff_EBP + 0x14) - piVar1[1];
        uVar14 = 0xff;
        uVar8 = *(undefined4 *)(unaff_EBP + 0x18);
        FUN_00424e27(iVar10,uVar8,0xff,0,0,iVar4,0,iVar9);
        iVar11 = FUN_0042fb0a();
        iVar3 = *piVar1;
        FUN_004115d9();
        iVar12 = FUN_0040eea9();
        iVar12 = ((iVar2 - iVar3) - iVar11) + iVar12;
        FUN_004115d9(iVar12);
        FUN_00503995(iVar12,iVar10,uVar8,uVar14,uVar15,uVar16,iVar4,uVar17,iVar9,uVar18,iVar5);
        FUN_004125e6();
        FUN_004125e6();
        FUN_004125e6();
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        uVar13 = *(uint *)(unaff_EBP + -0x14);
        if ((uVar13 & 8) != 0) {
          uVar13 = uVar13 & 0xfffffff7;
          FUN_004125e6();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xe;
        if ((uVar13 & 4) != 0) {
          uVar13 = uVar13 & 0xfffffffb;
          *(uint *)(unaff_EBP + -0x14) = uVar13;
          iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
        }
        if ((uVar13 & 2) != 0) {
          uVar13 = uVar13 & 0xfffffffd;
          FUN_004125e6();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xc;
        if ((uVar13 & 1) != 0) {
          iVar2 = FUN_00402bc3(unaff_EBP + -0x68);
          if (iVar2 < 0) {
            FUN_00878dfb(iVar2);
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x78);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iVar2 = unaff_EBP + -0x88;
      }
      else {
        FUN_004031b7(0xff,3);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_004031b7(0,3);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_004031b7(0,3);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          FUN_00878dfb(0x80004003);
        }
        puVar6 = (undefined4 *)FUN_00425067(unaff_EBP + -0x18,unaff_EBP + -0x48);
        uVar8 = *puVar6;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        *(undefined4 *)(unaff_EBP + 0x1c) = uVar8;
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar7 = (int *)FUN_00425067(unaff_EBP + -0x1c,unaff_EBP + -0x38);
        iVar5 = *piVar7;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (iVar5 == 0) {
          FUN_00878dfb(0x80004003);
        }
        *(int *)(unaff_EBP + 0x18) = *piVar7;
        if (*(int *)(unaff_EBP + 8) == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar5 = *(int *)(unaff_EBP + 0x14);
        iVar3 = piVar1[1];
        *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 8);
        iVar4 = FUN_0040eea9();
        iVar2 = (**(code **)(**(int **)(unaff_EBP + 0x10) + 0x80))
                          (*(int **)(unaff_EBP + 0x10),(iVar2 - *piVar1) - iVar4,iVar5 - iVar3,
                           *(undefined4 *)(unaff_EBP + 0x1c),*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963cc8);
        }
        FUN_004125e6();
        FUN_004125e6();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iVar2 = unaff_EBP + -0x58;
      }
      iVar2 = FUN_00402bc3(iVar2);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
    }
  }
  FUN_004125e6();
  FUN_00412600();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


