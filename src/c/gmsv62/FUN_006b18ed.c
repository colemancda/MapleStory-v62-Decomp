/* FUN_006b18ed - 0x006b18ed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006b18ed(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int *piVar4;
  int unaff_EBP;
  undefined1 *puStack_6c;
  int iStack_68;
  undefined *puStack_64;
  int iStack_60;
  int *piStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  if (*(int *)(unaff_EBP + 8) == 0) {
    uStack_54 = 0;
    iStack_58 = 0x6b1913;
    FUN_0051c279();
    uStack_54 = 0;
    iStack_58 = 0x6b191c;
    FUN_008161f1();
    goto LAB_006b1bd3;
  }
  if (((((*(int *)(unaff_EBP + 0xc) < 0x2e) || (0x4e < *(int *)(unaff_EBP + 0xc))) ||
       (*(int *)(unaff_EBP + 0x10) < 0xb)) ||
      ((0x2b < *(int *)(unaff_EBP + 0x10) || (DAT_00978358 == 0)))) ||
     (iStack_58 = *(int *)(*(int *)(DAT_00978358 + 0x1744) + 4), iStack_58 == 0)) goto LAB_006b1bd3;
  uStack_54 = *(undefined4 *)(iStack_58 + 0x15c);
  iStack_58 = iStack_58 + 0x154;
  piStack_5c = (int *)0x6b1978;
  iVar2 = FUN_004cd670();
  if (iVar2 == 0) goto LAB_006b1bd3;
  uStack_54 = *(undefined4 *)(unaff_EBP + 8);
  iStack_58 = unaff_EBP + 0x10;
  piStack_5c = (int *)0x6b1994;
  FUN_00552e70();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    piStack_5c = (int *)0x6b19a4;
    FUN_004027eb();
    goto LAB_006b1bd3;
  }
  piStack_5c = (int *)0x0;
  iStack_60 = 0;
  puStack_6c = (undefined1 *)&puStack_64;
  *(undefined ***)(unaff_EBP + -0x18) = &puStack_64;
  iStack_68 = 0x8e8;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_68 = unaff_EBP + -0x30;
  puStack_6c = (undefined1 *)0x6b19d3;
  FUN_0040263d();
  puStack_6c = (undefined1 *)0x6b19da;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_64 = (undefined *)0x6b19e5;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  if (iVar2 != 0) {
    piStack_5c = (int *)(unaff_EBP + -0x14);
    iStack_60 = 0x6b19fb;
    piStack_5c = (int *)FUN_00404b30();
    if (((int)piStack_5c < 0) && (piStack_5c != (int *)0x80004002)) {
      iStack_60 = 0x6b1a0c;
      FUN_00878dfb();
    }
  }
  piStack_5c = (int *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_60 = 0x6b1a19;
  iVar2 = FUN_00402bc3();
  iStack_60 = (int)piStack_5c;
  if (iVar2 < 0) {
    iStack_60 = 0x6b1a24;
    piStack_5c = (int *)iVar2;
    FUN_00878dfb();
    iStack_60 = extraout_ECX_00;
  }
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    piStack_5c = (int *)0x0;
    *(int **)(unaff_EBP + -0x18) = &iStack_60;
    puStack_64 = &DAT_0096a9f8;
    iStack_68 = 0x6b1a3e;
    FUN_004033a1();
    puStack_64 = (undefined *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_68 = 0x6b1a4e;
    FUN_0040263d();
    iStack_68 = 0x6b1a55;
    iStack_60 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_64 = (undefined *)0x6b1a5f;
    iVar2 = FUN_00412550();
    iStack_60 = (int)piStack_5c;
    if (iVar2 == 0) {
      piStack_5c = (int *)0x0;
      *(int **)(unaff_EBP + -0x18) = &iStack_60;
      puStack_64 = &DAT_0096a9f0;
      iStack_68 = 0x6b1a76;
      FUN_004033a1();
      puStack_64 = (undefined *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_68 = 0x6b1a86;
      FUN_0040263d();
      iStack_68 = 0x6b1a8d;
      iStack_60 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_64 = (undefined *)0x6b1a97;
      iVar2 = FUN_00412550();
      puStack_64 = (undefined *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_68 = 0x6b1aac;
      piStack_5c = (int *)FUN_00402bc3();
      if ((int)piStack_5c < 0) {
        iStack_60 = 0x6b1ab9;
        FUN_00878dfb();
      }
      if (iVar2 != 0) goto LAB_006b1ac1;
      bVar1 = true;
    }
    else {
LAB_006b1ac1:
      bVar1 = false;
    }
    piStack_5c = (int *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_60 = 0x6b1ad0;
    iVar2 = FUN_00402bc3();
    piVar4 = piStack_5c;
    if (iVar2 < 0) {
      iStack_60 = 0x6b1adb;
      piStack_5c = (int *)iVar2;
      FUN_00878dfb();
      piVar4 = (int *)extraout_ECX_01;
    }
    if (bVar1) {
      piStack_5c = (int *)0x0;
      iStack_60 = 0;
      puStack_64 = (undefined *)0x0;
      iStack_68 = 0;
      *(undefined1 ***)(unaff_EBP + 8) = &puStack_6c;
      puStack_6c = (undefined1 *)piVar4;
      FUN_00679d22(&puStack_6c,0xad7);
      FUN_007db3ad();
    }
    else {
      piStack_5c = *(int **)(unaff_EBP + 8);
      if ((int *)*(int *)(DAT_00979110 + 0x380) != piStack_5c) {
        iStack_60 = 0x6b1b1e;
        FUN_0051c279();
        piStack_5c = (int *)0x0;
        iStack_60 = 0x6b1b27;
        FUN_008161f1();
        piStack_5c = (int *)0xd25;
        iStack_60 = unaff_EBP + 8;
        puStack_64 = (undefined *)0x6b1b37;
        iStack_60 = FUN_00679d22();
        piStack_5c = (int *)0xc;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        puStack_64 = (undefined *)0x6b1b43;
        FUN_00471102();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_5c = (int *)0x6b1b51;
        FUN_00414ebb();
        piStack_5c = (int *)0x14c;
        iStack_60 = 0x6b1b60;
        iVar2 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x18) = iVar2;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          piStack_5c = (int *)0x6b1b72;
          iVar2 = FUN_006b1be4();
        }
        uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
        *(uint *)(unaff_EBP + -0x1c) = -(uint)(uVar3 != 0) & uVar3 - 8;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_5c = (int *)0x6b1b99;
        FUN_006b4182();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        piStack_5c = (int *)0x6b1ba5;
        FUN_004bc6a2();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_5c = (int *)0x6b1bb1;
        FUN_006b419f();
      }
    }
    piStack_5c = *(int **)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piStack_5c != (int *)0x0) {
      iStack_60 = 0x6b1bc2;
      (**(code **)(*piStack_5c + 8))();
    }
  }
  piStack_5c = *(int **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_5c != (int *)0x0) {
    iStack_60 = 0x6b1bd3;
    (**(code **)(*piStack_5c + 8))();
  }
LAB_006b1bd3:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


