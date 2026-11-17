/* FUN_00517bba - 0x00517bba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00517bba(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int unaff_EBP;
  int iVar5;
  int iStack_64;
  undefined1 *puStack_60;
  int *piStack_5c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    piStack_5c = (int *)0x517bdf;
    FUN_004027eb();
    uVar1 = 0;
  }
  else {
    piStack_5c = (int *)0x0;
    puStack_60 = (undefined1 *)0x0;
    *(int **)(unaff_EBP + -0x24) = &iStack_64;
    FUN_00448a17(s_class_00964fe4);
    iVar2 = unaff_EBP + -0x38;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_64 = 0x517c19;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar2 != 0) {
      piStack_5c = (int *)(unaff_EBP + -0x20);
      puStack_60 = (undefined1 *)0x517c2f;
      piStack_5c = (int *)FUN_00404b30();
      if (((int)piStack_5c < 0) && (piStack_5c != (int *)0x80004002)) {
        puStack_60 = (undefined1 *)0x517c40;
        FUN_00878dfb();
      }
    }
    piStack_5c = (int *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_60 = (undefined1 *)0x517c4d;
    piStack_5c = (int *)FUN_00402bc3();
    if ((int)piStack_5c < 0) {
      puStack_60 = (undefined1 *)0x517c58;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iVar2 = 0;
    }
    else {
      piStack_5c = (int *)0x517c64;
      uVar1 = FUN_0040cf4d();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
      iVar2 = extraout_ECX_00;
    }
    iVar5 = 0;
    if (0 < *(int *)(unaff_EBP + -0x10)) {
      do {
        piStack_5c = (int *)0x517c7b;
        FUN_0087a1b0();
        piStack_5c = (int *)0xffffffff;
        iStack_64 = iVar5;
        puStack_60 = &stack0xffffffa8;
        iStack_64 = FUN_00412335();
        *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_60;
        FUN_004033a1();
        iStack_64 = unaff_EBP + -0x48;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_0040263d();
        puStack_60 = (undefined1 *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_64 = 0x517cb3;
        uVar1 = FUN_00412550();
        iStack_64 = unaff_EBP + -0x48;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_5c = (int *)FUN_00402bc3();
        iVar2 = extraout_ECX_01;
        if ((int)piStack_5c < 0) {
          puStack_60 = (undefined1 *)0x517ccf;
          FUN_00878dfb();
          iVar2 = extraout_ECX_02;
        }
        if (iVar5 != -1) {
          piStack_5c = (int *)0x517cdc;
          puVar3 = (undefined4 *)FUN_00518b2e();
          *puVar3 = uVar1;
          iVar2 = extraout_ECX_03;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(unaff_EBP + -0x10));
    }
    piStack_5c = (int *)0x0;
    puStack_60 = (undefined1 *)0x0;
    *(int **)(unaff_EBP + -0x10) = &iStack_64;
    iStack_64 = iVar2;
    FUN_00448a17(s_skill_00964fdc);
    iVar2 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_64 = 0x517d18;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x24) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar2 != 0) {
      piStack_5c = (int *)(unaff_EBP + -0x24);
      puStack_60 = (undefined1 *)0x517d2e;
      piStack_5c = (int *)FUN_00404b30();
      if (((int)piStack_5c < 0) && (piStack_5c != (int *)0x80004002)) {
        puStack_60 = (undefined1 *)0x517d3f;
        FUN_00878dfb();
      }
    }
    piStack_5c = (int *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_60 = (undefined1 *)0x517d4c;
    piStack_5c = (int *)FUN_00402bc3();
    if ((int)piStack_5c < 0) {
      puStack_60 = (undefined1 *)0x517d57;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    else {
      piStack_5c = (int *)0x517d63;
      uVar1 = FUN_0040cf4d();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
    }
    iVar2 = 0;
    if (0 < *(int *)(unaff_EBP + -0x10)) {
      do {
        piStack_5c = (int *)0x517d7a;
        FUN_0087a1b0();
        piStack_5c = (int *)0x0;
        iStack_64 = iVar2;
        puStack_60 = &stack0xffffffa8;
        iStack_64 = FUN_00412335();
        *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_60;
        FUN_004033a1();
        iStack_64 = unaff_EBP + -0x58;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_0040263d();
        puStack_60 = (undefined1 *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        iStack_64 = 0x517db1;
        iVar5 = FUN_00412550();
        iStack_64 = unaff_EBP + -0x58;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        piStack_5c = (int *)FUN_00402bc3();
        if ((int)piStack_5c < 0) {
          puStack_60 = (undefined1 *)0x517dcd;
          FUN_00878dfb();
        }
        if (iVar5 != 0) {
          piStack_5c = (int *)0x517ddc;
          piVar4 = (int *)FUN_00518b2e();
          *piVar4 = iVar5;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(unaff_EBP + -0x10));
    }
    piStack_5c = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (piStack_5c != (int *)0x0) {
      puStack_60 = (undefined1 *)0x517df5;
      (**(code **)(*piStack_5c + 8))();
    }
    piStack_5c = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piStack_5c != (int *)0x0) {
      puStack_60 = (undefined1 *)0x517e05;
      (**(code **)(*piStack_5c + 8))();
    }
    piStack_5c = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_5c != (int *)0x0) {
      puStack_60 = (undefined1 *)0x517e16;
      (**(code **)(*piStack_5c + 8))();
    }
    uVar1 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


