/* FUN_0079bb45 - 0x0079bb45 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0079bb45(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar5;
  int iVar6;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piVar4 = (int *)(extraout_ECX + 0x1818);
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(int **)(unaff_EBP + -0x14) = piVar4;
  iVar2 = extraout_ECX;
  do {
    if ((((*(int *)(unaff_EBP + -0x10) < 0x35) || (0x3e < *(int *)(unaff_EBP + -0x10))) &&
        (*piVar4 != 0)) && (piVar4[-2] == 0)) {
      if (*(int *)(iVar2 + 0xd3c) == 0) {
        FUN_00878dfb(0x80004003);
      }
      if (*piVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = (int *)*piVar4;
      uVar1 = FUN_0043210d();
      iVar2 = (**(code **)(*piVar3 + 0xd8))(piVar3,uVar1);
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar3,&DAT_00963df8);
      }
      if (*(int *)(unaff_EBP + -0x10) != 0x3c) {
        *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x18) + 0x78;
        iVar2 = FUN_005a9936();
        if (iVar2 != 0) {
          if (*piVar4 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x1c);
          iVar2 = *piVar3;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          if (iVar2 == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar2 = FUN_00404a94();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_004125d9();
          if (0 < iVar2) {
            FUN_00403191(&DAT_00980690);
            *(undefined4 *)(unaff_EBP + -4) = 1;
            FUN_00403191(&DAT_00980690);
            iVar2 = *piVar4;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            if (iVar2 == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar4 = (int *)FUN_004113e5(unaff_EBP + -0x20);
            iVar2 = *piVar4;
            *(undefined1 *)(unaff_EBP + -4) = 3;
            if (iVar2 == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar4 = (int *)*piVar4;
            iVar2 = (**(code **)(*piVar4 + 0x90))
                              (piVar4,0,0,*(undefined4 *)(unaff_EBP + -0x3c),
                               *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34)
                               ,*(undefined4 *)(unaff_EBP + -0x30),
                               *(undefined4 *)(unaff_EBP + -0x4c),*(undefined4 *)(unaff_EBP + -0x48)
                               ,*(undefined4 *)(unaff_EBP + -0x44),
                               *(undefined4 *)(unaff_EBP + -0x40));
            if (iVar2 < 0) {
              FUN_00878e09(iVar2,piVar4,&DAT_00963de8);
            }
            FUN_004125d9();
            *(undefined1 *)(unaff_EBP + -4) = 1;
            iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
            if (iVar2 < 0) {
              FUN_00878dfb(iVar2);
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
            if (iVar2 < 0) {
              FUN_00878dfb(iVar2);
            }
            piVar4 = *(int **)(unaff_EBP + -0x14);
            goto LAB_0079bd0a;
          }
        }
        iVar2 = FUN_005a9936();
        if (iVar2 == 0) {
          if (*piVar4 == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar3 = (int *)FUN_004113e5(unaff_EBP + -0x28);
          iVar2 = *piVar3;
          *(undefined4 *)(unaff_EBP + -4) = 4;
          if (iVar2 == 0) {
            FUN_00878dfb(0x80004003);
          }
          iVar2 = FUN_00404a94();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_004125d9();
          if (iVar2 == 0) {
            FUN_00424aee(&DAT_00980690);
            *(undefined4 *)(unaff_EBP + -4) = 5;
            FUN_00424aee(&DAT_00980690);
            iVar2 = unaff_EBP + -0x2c;
            *(undefined1 *)(unaff_EBP + -4) = 6;
            FUN_00424e27(iVar2);
            FUN_004113e5(iVar2);
            iVar2 = unaff_EBP + -0x6c;
            iVar6 = unaff_EBP + -0x5c;
            uVar5 = 0;
            uVar1 = 0xff;
            *(undefined1 *)(unaff_EBP + -4) = 7;
            FUN_00424df4(0xff,0,iVar6,iVar2);
            FUN_00424f2f(uVar1,uVar5,iVar6,iVar2);
            FUN_004125d9();
            *(undefined1 *)(unaff_EBP + -4) = 5;
            iVar2 = FUN_00402bc3(unaff_EBP + -0x5c);
            if (iVar2 < 0) {
              FUN_00878dfb(iVar2);
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            iVar2 = FUN_00402bc3(unaff_EBP + -0x6c);
            if (iVar2 < 0) {
              FUN_00878dfb(iVar2);
            }
          }
        }
      }
    }
LAB_0079bd0a:
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    piVar4 = piVar4 + 6;
    *(int **)(unaff_EBP + -0x14) = piVar4;
    if (0x3e < *(int *)(unaff_EBP + -0x10)) {
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    iVar2 = *(int *)(unaff_EBP + -0x18);
  } while( true );
}


