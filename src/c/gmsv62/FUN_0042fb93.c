/* FUN_0042fb93 - 0x0042fb93 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042fb93(void)

{
  char cVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  int iStack_b8;
  int iStack_b4;
  int *piStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  
  FUN_00879bb8();
  uStack_a8 = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_ac = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_b0 = (int *)0x42fbbd;
  FUN_00552e70();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_b0 = (int *)0x0;
    iStack_b4 = 0;
    *(int **)(unaff_EBP + -0x18) = &iStack_b8;
    FUN_00679e4e(&iStack_b8,0x3d3);
    iVar2 = unaff_EBP + -0x84;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_b8 = 0x42fc07;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x1c) = iVar2;
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    if (iVar2 != 0) {
      piStack_b0 = (int *)(unaff_EBP + -0x1c);
      iStack_b4 = 0x42fc1d;
      piStack_b0 = (int *)FUN_00404b30();
      if (((int)piStack_b0 < 0) && (piStack_b0 != (int *)0x80004002)) {
        iStack_b4 = 0x42fc2e;
        FUN_00878dfb();
      }
    }
    piStack_b0 = (int *)(unaff_EBP + -0x84);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_b4 = 0x42fc3e;
    piStack_b0 = (int *)FUN_00402bc3();
    if ((int)piStack_b0 < 0) {
      iStack_b4 = 0x42fc49;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      piStack_b0 = (int *)0x42fc72;
      iVar2 = FUN_0040cf4d();
      iVar3 = 0;
      *(int *)(unaff_EBP + -0x18) = iVar2;
      if (0 < iVar2) {
        do {
          piStack_b0 = (int *)0x42fc8c;
          FUN_0087a1b0();
          iStack_b8 = 0x42fc95;
          iStack_b4 = iVar3;
          piStack_b0 = &iStack_ac;
          iStack_b4 = FUN_00412335();
          *(int ***)(unaff_EBP + -0x24) = &piStack_b0;
          iStack_b8 = 0x42fca3;
          FUN_00402e8e();
          iStack_b4 = unaff_EBP + -0x94;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iStack_b8 = 0x42fcb6;
          FUN_0040263d();
          iStack_b8 = 0x42fcbd;
          piStack_b0 = (int *)FUN_004048a4();
          iStack_b4 = unaff_EBP + -0x20;
          *(undefined1 *)(unaff_EBP + -4) = 7;
          iStack_b8 = 0x42fccb;
          piStack_b0 = (int *)FUN_00412348();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          iStack_b4 = 0x42fcda;
          FUN_004172b7();
          piStack_b0 = (int *)0x42fce2;
          FUN_004027b3();
          piStack_b0 = (int *)(unaff_EBP + -0x94);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          iStack_b4 = 0x42fcf2;
          piStack_b0 = (int *)FUN_00402bc3();
          if ((int)piStack_b0 < 0) {
            iStack_b4 = 0x42fcfd;
            FUN_00878dfb();
          }
          piStack_b0 = (int *)0x0;
          iStack_b4 = 0x42fd06;
          cVar1 = FUN_004115ef();
          if (cVar1 == '\0') {
            piStack_b0 = &DAT_00980690;
            iStack_b4 = 0x42fd17;
            FUN_00403191();
            piStack_b0 = &DAT_00980690;
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            iStack_b4 = 0x42fd24;
            FUN_00403191();
            piStack_b0 = &DAT_00980690;
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            iStack_b4 = 0x42fd31;
            FUN_00403191();
            piStack_b0 = &DAT_00980690;
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            iStack_b4 = 0x42fd3e;
            FUN_00403191();
            piStack_b0 = (int *)0x3;
            iStack_b4 = 0x3c;
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            iStack_b8 = 0x42fd4e;
            FUN_004031b7();
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            if (*(int *)(unaff_EBP + 8) == 0) {
              piStack_b0 = (int *)0x80004003;
              iStack_b4 = 0x42fd61;
              FUN_00878dfb();
            }
            piStack_b0 = (int *)(unaff_EBP + -0x44);
            iStack_b4 = unaff_EBP + -100;
            iStack_b8 = unaff_EBP + -0x74;
            FUN_004250ac(unaff_EBP + -0xa4,*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x34,
                         unaff_EBP + -0x54);
            piStack_b0 = (int *)(unaff_EBP + -0xa4);
            iStack_b4 = 0x42fd93;
            piStack_b0 = (int *)FUN_00402bc3();
            if ((int)piStack_b0 < 0) {
              iStack_b4 = 0x42fd9e;
              FUN_00878dfb();
            }
            piStack_b0 = (int *)(unaff_EBP + -0x34);
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            iStack_b4 = 0x42fdab;
            piStack_b0 = (int *)FUN_00402bc3();
            if ((int)piStack_b0 < 0) {
              iStack_b4 = 0x42fdb6;
              FUN_00878dfb();
            }
            piStack_b0 = (int *)(unaff_EBP + -0x54);
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            iStack_b4 = 0x42fdc3;
            piStack_b0 = (int *)FUN_00402bc3();
            if ((int)piStack_b0 < 0) {
              iStack_b4 = 0x42fdce;
              FUN_00878dfb();
            }
            piStack_b0 = (int *)(unaff_EBP + -0x74);
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            iStack_b4 = 0x42fddb;
            piStack_b0 = (int *)FUN_00402bc3();
            if ((int)piStack_b0 < 0) {
              iStack_b4 = 0x42fde6;
              FUN_00878dfb();
            }
            piStack_b0 = (int *)(unaff_EBP + -100);
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            iStack_b4 = 0x42fdf3;
            piStack_b0 = (int *)FUN_00402bc3();
            if ((int)piStack_b0 < 0) {
              iStack_b4 = 0x42fdfe;
              FUN_00878dfb();
            }
            piStack_b0 = (int *)(unaff_EBP + -0x44);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            iStack_b4 = 0x42fe0b;
            piStack_b0 = (int *)FUN_00402bc3();
            if ((int)piStack_b0 < 0) {
              iStack_b4 = 0x42fe16;
              FUN_00878dfb();
            }
          }
          piStack_b0 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          if (piStack_b0 != (int *)0x0) {
            iStack_b4 = 0x42fe27;
            (**(code **)(*piStack_b0 + 8))();
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(unaff_EBP + -0x18));
      }
      piStack_b0 = *(int **)(unaff_EBP + 0xc);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piStack_b0 != (int *)0x0) {
        iStack_b4 = 0x42fe42;
        (**(code **)(*piStack_b0 + 8))();
      }
      piStack_b0 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_b0 != (int *)0x0) {
        iStack_b4 = 0x42fe52;
        (**(code **)(*piStack_b0 + 8))();
      }
      piStack_b0 = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piStack_b0 != (int *)0x0) {
        iStack_b4 = 0x42fe63;
        (**(code **)(*piStack_b0 + 8))();
      }
      goto LAB_0042fe63;
    }
    piStack_b0 = (int *)0x42fc58;
    FUN_004027eb();
  }
  piStack_b0 = (int *)0x42fc60;
  FUN_004027eb();
  piStack_b0 = (int *)0x42fc68;
  FUN_00412600();
LAB_0042fe63:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


