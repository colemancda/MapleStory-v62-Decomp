/* FUN_005a83bd - 0x005a83bd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005a83bd(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  
  FUN_00879bb8();
  iStack_64 = unaff_EBP + -0x40;
  iStack_68 = 0x5a83d9;
  (*DAT_0097b508)();
  iStack_68 = 0;
  iStack_6c = unaff_EBP + 0xc;
  iStack_70 = 0x5a83eb;
  piVar1 = (int *)FUN_005aa390();
  if (piVar1 == (int *)0x0) {
    puVar4 = *(undefined4 **)(unaff_EBP + 8);
    *puVar4 = *(undefined4 *)(unaff_EBP + -0x40);
    puVar4[1] = *(undefined4 *)(unaff_EBP + -0x3c);
    puVar4[2] = *(undefined4 *)(unaff_EBP + -0x38);
    puVar4[3] = *(undefined4 *)(unaff_EBP + -0x34);
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(piVar1[1] + 8 + *piVar1 * 0xc);
    iStack_68 = 0x5a8419;
    FUN_00424ed4();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      iStack_68 = 0x80004003;
      iStack_6c = 0x5a842c;
      FUN_00878dfb();
    }
    iStack_68 = unaff_EBP + -0x28;
    iStack_6c = 0x5a8438;
    piVar1 = (int *)FUN_004113e5();
    *(bool *)(unaff_EBP + -0xd) = *piVar1 == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_68 = 0x5a8449;
    FUN_004125d9();
    if (*(char *)(unaff_EBP + -0xd) == '\0') {
      iStack_68 = 3;
      iStack_6c = 0;
      iStack_70 = 0x5a8468;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        iStack_68 = 0x80004003;
        iStack_6c = 0x5a8477;
        FUN_00878dfb();
      }
      iStack_68 = unaff_EBP + -0x50;
      iStack_6c = unaff_EBP + -0x20;
      iStack_70 = 0x5a8487;
      FUN_00425067();
      iStack_68 = unaff_EBP + -0x50;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_6c = 0x5a8494;
      iStack_68 = FUN_00402bc3();
      if (iStack_68 < 0) {
        iStack_6c = 0x5a849f;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        iStack_68 = 0x80004003;
        iStack_6c = 0x5a84aa;
        FUN_00878dfb();
      }
      iStack_68 = unaff_EBP + -0x24;
      iStack_6c = 0x5a84b6;
      FUN_00404e7f();
      iStack_68 = 0;
      iStack_6c = 0;
      *(int **)(unaff_EBP + -0x2c) = &iStack_70;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00679e4e(&iStack_70,0x3ba);
      iVar2 = unaff_EBP + -0x50;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_0040263d(iVar2);
      FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_70 = 0x5a84f6;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x28) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      if (iVar2 != 0) {
        iStack_68 = unaff_EBP + -0x28;
        iStack_6c = 0x5a850c;
        iStack_68 = FUN_0041a4e5();
        if ((iStack_68 < 0) && (iStack_68 != -0x7fffbffe)) {
          iStack_6c = 0x5a851d;
          FUN_00878dfb();
        }
      }
      iStack_68 = unaff_EBP + -0x50;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_6c = 0x5a852a;
      iVar3 = FUN_00402bc3();
      iVar2 = iStack_68;
      if (iVar3 < 0) {
        iStack_6c = 0x5a8535;
        iStack_68 = iVar3;
        FUN_00878dfb();
        iVar2 = extraout_ECX;
      }
      iStack_68 = 0;
      iStack_6c = 0;
      *(int **)(unaff_EBP + -0x30) = &iStack_70;
      iStack_70 = iVar2;
      FUN_00679e4e(&iStack_70,0x3bb);
      iVar2 = unaff_EBP + -0x60;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_0040263d(iVar2);
      FUN_004048a4(iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_70 = 0x5a856c;
      iVar2 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x2c) = iVar2;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar2 != 0) {
        iStack_68 = unaff_EBP + -0x2c;
        iStack_6c = 0x5a8582;
        iStack_68 = FUN_0041a4e5();
        if ((iStack_68 < 0) && (iStack_68 != -0x7fffbffe)) {
          iStack_6c = 0x5a8593;
          FUN_00878dfb();
        }
      }
      iStack_68 = unaff_EBP + -0x60;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_6c = 0x5a85a0;
      iStack_68 = FUN_00402bc3();
      if (iStack_68 < 0) {
        iStack_6c = 0x5a85ab;
        FUN_00878dfb();
      }
      if ((*(int *)(unaff_EBP + -0x1c) != 0) && (*(int *)(unaff_EBP + -0x18) != 0)) {
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          iStack_68 = 0x80004003;
          iStack_6c = 0x5a85c8;
          FUN_00878dfb();
        }
        iStack_68 = 0x5a85d0;
        iVar2 = FUN_0043210d();
        if (iVar2 == 0) {
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            iStack_68 = 0x80004003;
            iStack_6c = 0x5a863c;
            FUN_00878dfb();
          }
          iStack_68 = 0x5a8644;
          iStack_68 = FUN_00404abb();
          iStack_6c = 0x5a864d;
          FUN_00424df4();
          iStack_6c = 0x5a8654;
          iStack_6c = FUN_00404a94();
          iStack_70 = 0x5a865d;
          FUN_00424df4();
          iStack_70 = 0x5a8664;
          iStack_70 = FUN_00404abb();
          FUN_00424df4();
          iVar2 = FUN_00404a94();
        }
        else {
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            iStack_68 = 0x80004003;
            iStack_6c = 0x5a85df;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x1c) == 0) {
            iStack_68 = 0x80004003;
            iStack_6c = 0x5a85ea;
            FUN_00878dfb();
          }
          *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x1c);
          if (*(int *)(unaff_EBP + -0x1c) == 0) {
            iStack_68 = 0x80004003;
            iStack_6c = 0x5a85fa;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            iStack_68 = 0x80004003;
            iStack_6c = 0x5a8608;
            FUN_00878dfb();
          }
          iStack_68 = 0x5a8612;
          iStack_68 = FUN_00404abb();
          iStack_6c = 0x5a861b;
          iStack_6c = FUN_00404a94();
          iStack_6c = -iStack_6c;
          iStack_70 = 0x5a8625;
          iStack_70 = FUN_00404abb();
          iVar2 = FUN_00404a94();
          iVar2 = -iVar2;
        }
        (*DAT_0097b504)(unaff_EBP + -0x40,iVar2);
        FUN_00424e27();
        iVar2 = FUN_00404abb();
        FUN_004115d9();
        iVar3 = FUN_0040eed0();
        FUN_00424e27(iVar2 + iVar3);
        iVar2 = FUN_00404a94();
        FUN_004115d9();
        iVar3 = FUN_0040eea9();
        (*DAT_0097b54c)(unaff_EBP + -0x40,iVar2 + iVar3);
      }
      puVar4 = *(undefined4 **)(unaff_EBP + 8);
      *puVar4 = *(undefined4 *)(unaff_EBP + -0x40);
      puVar4[1] = *(undefined4 *)(unaff_EBP + -0x3c);
      puVar4[2] = *(undefined4 *)(unaff_EBP + -0x38);
      puVar4[3] = *(undefined4 *)(unaff_EBP + -0x34);
      iStack_68 = 0x5a86e1;
      FUN_004125d9();
      iStack_68 = 0x5a86e9;
      FUN_004125d9();
      iStack_68 = 0x5a86f1;
      FUN_004027eb();
      iStack_68 = 0x5a86f9;
      FUN_004125e6();
    }
    else {
      puVar4 = *(undefined4 **)(unaff_EBP + 8);
      *puVar4 = *(undefined4 *)(unaff_EBP + -0x40);
      puVar4[1] = *(undefined4 *)(unaff_EBP + -0x3c);
      puVar4[2] = *(undefined4 *)(unaff_EBP + -0x38);
      puVar4[3] = *(undefined4 *)(unaff_EBP + -0x34);
    }
    iStack_68 = 0x5a8701;
    FUN_00412600();
    puVar4 = *(undefined4 **)(unaff_EBP + 8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar4;
}


