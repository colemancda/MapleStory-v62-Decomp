/* FUN_00486191 - 0x00486191 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00486191(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_30;
  int iStack_2c;
  int *piStack_28;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  if (iVar2 == 0) goto LAB_004863f9;
  iStack_2c = unaff_EBP + -0x10;
  iStack_30 = 0x4861c0;
  piStack_28 = (int *)iVar2;
  FUN_004497f5();
  piStack_28 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piStack_28 == (int *)0x0) goto LAB_004863f9;
  if ((*(int *)(extraout_ECX + 0x29c) == iVar2) && (*(int *)(unaff_EBP + 0x10) == 0)) {
    *(undefined4 *)(extraout_ECX + 0x2a0) = 0;
    *(undefined4 *)(extraout_ECX + 0x29c) = 0;
LAB_00486202:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if ((*(int *)(extraout_ECX + 0x2a4) == iVar2) && (*(int *)(unaff_EBP + 0x10) == 0)) {
      *(undefined4 *)(extraout_ECX + 0x2a8) = 0;
      *(undefined4 *)(extraout_ECX + 0x2a4) = 0;
      goto LAB_00486202;
    }
    piStack_28 = (int *)0x0;
    *(int **)(unaff_EBP + 0x10) = &iStack_2c;
    iStack_30 = 0x959;
    FUN_00679e4e(&iStack_2c);
    iStack_30 = unaff_EBP + -0x24;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0040263d();
    iStack_2c = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_30 = 0x486244;
    uVar1 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + 0x10) = uVar1;
    iStack_30 = unaff_EBP + -0x24;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      iStack_2c = 0x486260;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      *(undefined4 *)(extraout_ECX + 0x29c) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 0x2a0) = *(undefined4 *)(unaff_EBP + 0xc);
    }
    piStack_28 = (int *)0x0;
    *(int **)(unaff_EBP + 0x10) = &iStack_2c;
    iStack_30 = 0x95a;
    FUN_00679e4e(&iStack_2c);
    iStack_30 = unaff_EBP + -0x24;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0040263d();
    iStack_2c = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_30 = 0x4862ab;
    uVar1 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + 0x10) = uVar1;
    iStack_30 = unaff_EBP + -0x24;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      iStack_2c = 0x4862c7;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      *(undefined4 *)(extraout_ECX + 0x2a4) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 0x2a8) = *(undefined4 *)(unaff_EBP + 0xc);
    }
    piStack_28 = (int *)0x0;
    iStack_2c = 0;
    *(int **)(unaff_EBP + 0x10) = &iStack_30;
    FUN_00679e4e(&iStack_30,0x674);
    iVar2 = unaff_EBP + -0x24;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_30 = 0x486314;
    iVar2 = FUN_004032b4();
    piStack_28 = (int *)(unaff_EBP + -0x24);
    *(bool *)(unaff_EBP + 0x13) = iVar2 != 0;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_2c = 0x486326;
    piStack_28 = (int *)FUN_00402bc3();
    if ((int)piStack_28 < 0) {
      iStack_2c = 0x486331;
      FUN_00878dfb();
    }
    if (*(char *)(unaff_EBP + 0x13) != '\0') {
      piStack_28 = *(int **)(extraout_ECX + 0x29c);
      iStack_2c = unaff_EBP + -0x14;
      iStack_30 = 0x48634f;
      FUN_004497f5();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (*(int *)(unaff_EBP + -0x14) == 0) {
LAB_004863c6:
        *(undefined4 *)(extraout_ECX + 0x29c) = *(undefined4 *)(unaff_EBP + 8);
        *(undefined4 *)(extraout_ECX + 0x2a0) = *(undefined4 *)(unaff_EBP + 0xc);
      }
      else {
        piStack_28 = (int *)0x0;
        iStack_2c = 0;
        *(int **)(unaff_EBP + 0x10) = &iStack_30;
        FUN_00679e4e(&iStack_30,0x674);
        iVar2 = unaff_EBP + -0x24;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_0040263d(iVar2);
        FUN_004048a4(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_30 = 0x48638f;
        iVar2 = FUN_004032b4();
        piStack_28 = (int *)(unaff_EBP + -0x24);
        *(bool *)(unaff_EBP + 0x13) = iVar2 != 0;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iStack_2c = 0x4863a2;
        piStack_28 = (int *)FUN_00402bc3();
        if ((int)piStack_28 < 0) {
          iStack_2c = 0x4863ad;
          FUN_00878dfb();
        }
        if (*(char *)(unaff_EBP + 0x13) == '\0') goto LAB_004863c6;
        *(undefined4 *)(extraout_ECX + 0x2a4) = *(undefined4 *)(unaff_EBP + 8);
        *(undefined4 *)(extraout_ECX + 0x2a8) = *(undefined4 *)(unaff_EBP + 0xc);
      }
      piStack_28 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_28 != (int *)0x0) {
        iStack_2c = 0x4863e8;
        (**(code **)(*piStack_28 + 8))();
      }
    }
    piStack_28 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_28 == (int *)0x0) goto LAB_004863f9;
  }
  iStack_2c = 0x4863f9;
  (**(code **)(*piStack_28 + 8))();
LAB_004863f9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


