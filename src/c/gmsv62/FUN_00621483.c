/* FUN_00621483 - 0x00621483 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_00621483(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int *piVar3;
  int unaff_EBP;
  undefined1 *puStack_74;
  int iStack_70;
  int aiStack_6c [2];
  int *piStack_64;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x28);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(int **)(unaff_EBP + -0x14) = (int *)(extraout_ECX + 0x28);
  if (iVar1 == 0) {
    piStack_64 = &DAT_00980690;
    aiStack_6c[1] = 0x6214b4;
    FUN_00403191();
    piStack_64 = &DAT_00980690;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    aiStack_6c[1] = 0x6214c0;
    FUN_00403191();
    piStack_64 = (int *)0x0;
    aiStack_6c[1] = 0;
    aiStack_6c[0] = unaff_EBP + -0x40;
    iStack_70 = unaff_EBP + -0x30;
    *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_74;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00679e4e(&puStack_74,0x6b5);
    iVar1 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    aiStack_6c[0] = 0x62150c;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x18) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar1 != 0) {
      piStack_64 = (int *)(unaff_EBP + -0x18);
      aiStack_6c[1] = 0x621527;
      piStack_64 = (int *)FUN_00404b30();
      if (((int)piStack_64 < 0) && (piStack_64 != (int *)0x80004002)) {
        aiStack_6c[1] = 0x621535;
        FUN_00878dfb();
      }
    }
    piStack_64 = (int *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    aiStack_6c[1] = 0x621542;
    piStack_64 = (int *)FUN_00402bc3();
    if ((int)piStack_64 < 0) {
      aiStack_6c[1] = 0x62154d;
      FUN_00878dfb();
    }
    piStack_64 = (int *)(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    aiStack_6c[1] = 0x62155a;
    piStack_64 = (int *)FUN_00402bc3();
    if ((int)piStack_64 < 0) {
      aiStack_6c[1] = 0x621565;
      FUN_00878dfb();
    }
    piStack_64 = (int *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    aiStack_6c[1] = 0x621572;
    iVar1 = FUN_00402bc3();
    piVar3 = piStack_64;
    if (iVar1 < 0) {
      aiStack_6c[1] = 0x62157d;
      piStack_64 = (int *)iVar1;
      FUN_00878dfb();
      piVar3 = (int *)extraout_ECX_00;
    }
    piStack_64 = (int *)0x0;
    aiStack_6c[1] = 0;
    puStack_74 = (undefined1 *)aiStack_6c;
    *(int **)(unaff_EBP + -0x20) = aiStack_6c;
    iStack_70 = 0x5c6;
    aiStack_6c[0] = (int)piVar3;
    FUN_00679e4e();
    iStack_70 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_74 = (undefined1 *)0x6215a2;
    FUN_0040263d();
    puStack_74 = (undefined1 *)0x6215a9;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    aiStack_6c[0] = 0x6215b4;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    piStack_64 = (int *)(unaff_EBP + -0x1c);
    aiStack_6c[1] = 0x6215c3;
    piStack_64 = (int *)FUN_00404b30();
    if (((int)piStack_64 < 0) && (piStack_64 != (int *)0x80004002)) {
      aiStack_6c[1] = 0x6215d1;
      FUN_00878dfb();
    }
    piStack_64 = (int *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    aiStack_6c[1] = 0x6215de;
    iVar1 = FUN_00402bc3();
    piVar3 = piStack_64;
    if (iVar1 < 0) {
      aiStack_6c[1] = 0x6215e9;
      piStack_64 = (int *)iVar1;
      FUN_00878dfb();
      piVar3 = (int *)extraout_ECX_01;
    }
    piStack_64 = (int *)0x0;
    aiStack_6c[1] = 0;
    puStack_74 = (undefined1 *)aiStack_6c;
    *(int **)(unaff_EBP + -0x20) = aiStack_6c;
    iStack_70 = 0x6b6;
    aiStack_6c[0] = (int)piVar3;
    FUN_00679e4e();
    iStack_70 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_74 = (undefined1 *)0x62160e;
    FUN_0040263d();
    puStack_74 = (undefined1 *)0x621615;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    aiStack_6c[0] = 0x621620;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    piStack_64 = (int *)(unaff_EBP + -0x1c);
    aiStack_6c[1] = 0x62162f;
    piStack_64 = (int *)FUN_00404b30();
    if (((int)piStack_64 < 0) && (piStack_64 != (int *)0x80004002)) {
      aiStack_6c[1] = 0x62163d;
      FUN_00878dfb();
    }
    piStack_64 = (int *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    aiStack_6c[1] = 0x62164a;
    iVar1 = FUN_00402bc3();
    piVar3 = piStack_64;
    if (iVar1 < 0) {
      aiStack_6c[1] = 0x621655;
      piStack_64 = (int *)iVar1;
      FUN_00878dfb();
      piVar3 = (int *)extraout_ECX_02;
    }
    piStack_64 = (int *)0x0;
    aiStack_6c[1] = 0;
    puStack_74 = (undefined1 *)aiStack_6c;
    *(int **)(unaff_EBP + -0x20) = aiStack_6c;
    iStack_70 = 0x10de;
    aiStack_6c[0] = (int)piVar3;
    FUN_00679e4e();
    iStack_70 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_74 = (undefined1 *)0x62167a;
    FUN_0040263d();
    puStack_74 = (undefined1 *)0x621681;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    aiStack_6c[0] = 0x62168c;
    uVar2 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
    piStack_64 = (int *)(unaff_EBP + -0x1c);
    aiStack_6c[1] = 0x62169b;
    piStack_64 = (int *)FUN_00404b30();
    if (((int)piStack_64 < 0) && (piStack_64 != (int *)0x80004002)) {
      aiStack_6c[1] = 0x6216a9;
      FUN_00878dfb();
    }
    piStack_64 = (int *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    aiStack_6c[1] = 0x6216b6;
    piStack_64 = (int *)FUN_00402bc3();
    if ((int)piStack_64 < 0) {
      aiStack_6c[1] = 0x6216c1;
      FUN_00878dfb();
    }
    piVar3 = (int *)**(int **)(unaff_EBP + -0x14);
    if (piVar3 != *(int **)(unaff_EBP + -0x10)) {
      **(int **)(unaff_EBP + -0x14) = (int)*(int **)(unaff_EBP + -0x10);
      piStack_64 = (int *)0x6216d4;
      FUN_004125cc();
      if (piVar3 != (int *)0x0) {
        aiStack_6c[1] = 0x6216de;
        piStack_64 = piVar3;
        (**(code **)(*piVar3 + 8))();
      }
    }
    piStack_64 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_64 != (int *)0x0) {
      aiStack_6c[1] = 0x6216ef;
      (**(code **)(*piStack_64 + 8))();
    }
  }
  piStack_64 = (int *)**(int **)(unaff_EBP + -0x14);
  piVar3 = *(int **)(unaff_EBP + 8);
  *piVar3 = (int)piStack_64;
  if (piStack_64 != (int *)0x0) {
    aiStack_6c[1] = 0x621703;
    (**(code **)(*piStack_64 + 4))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar3;
}


