/* FUN_004e80d7 - 0x004e80d7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e80d7(void)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  int extraout_ECX;
  int *extraout_ECX_00;
  int unaff_EBP;
  undefined1 *puStack_a0;
  int *piStack_9c;
  int *piStack_98;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x24) = extraout_ECX + 0x1bc;
  piStack_98 = (int *)0x4e80fa;
  FUN_004f1d8c();
  piStack_98 = (int *)0x4e80ff;
  uVar2 = FUN_007d1e08();
  piStack_98 = (int *)0x0;
  piStack_9c = (int *)0x0;
  *(undefined4 *)(extraout_ECX + 0x1d0) = uVar2;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_a0;
  FUN_00679e4e(&puStack_a0,0x10c8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar3 = unaff_EBP + -0x84;
  FUN_0040263d(iVar3);
  FUN_004048a4(iVar3);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puStack_a0 = (undefined1 *)0x4e8149;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar3 != 0) {
    piStack_98 = (int *)(unaff_EBP + -0x20);
    piStack_9c = (int *)0x4e815f;
    piStack_98 = (int *)FUN_00404b30();
    if (((int)piStack_98 < 0) && (piStack_98 != (int *)0x80004002)) {
      piStack_9c = (int *)0x4e8170;
      FUN_00878dfb();
    }
  }
  piStack_98 = (int *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_9c = (int *)0x4e8180;
  piStack_98 = (int *)FUN_00402bc3();
  if ((int)piStack_98 < 0) {
    piStack_9c = (int *)0x4e818b;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    piStack_98 = (int *)0x4e8198;
    FUN_004027eb();
  }
  else {
    iVar3 = 0;
    while( true ) {
      piStack_98 = (int *)0x4e81a7;
      FUN_0087a1b0();
      piStack_98 = (int *)0x0;
      piStack_9c = (int *)0x0;
      puStack_a0 = &stack0xffffff6c;
      uVar2 = FUN_00412335(iVar3);
      *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_a0;
      FUN_004033a1(uVar2);
      iVar4 = unaff_EBP + -100;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_0040263d(iVar4);
      FUN_004048a4(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puStack_a0 = (undefined1 *)0x4e81e0;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x1c) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar4 != 0) {
        piStack_98 = (int *)(unaff_EBP + -0x1c);
        piStack_9c = (int *)0x4e81f6;
        piStack_98 = (int *)FUN_00404b30();
        if (((int)piStack_98 < 0) && (piStack_98 != (int *)0x80004002)) {
          piStack_9c = (int *)0x4e8207;
          FUN_00878dfb();
        }
      }
      piStack_98 = (int *)(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_9c = (int *)0x4e8214;
      piVar5 = (int *)FUN_00402bc3();
      piStack_9c = piStack_98;
      if ((int)piVar5 < 0) {
        piStack_9c = (int *)0x4e821f;
        piStack_98 = piVar5;
        FUN_00878dfb();
        piStack_9c = extraout_ECX_00;
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) break;
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      piStack_98 = (int *)0x0;
      *(int ***)(unaff_EBP + -0x18) = &piStack_9c;
      puStack_a0 = (undefined1 *)0x10c9;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00679e4e(&piStack_9c);
      puStack_a0 = (undefined1 *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_0040263d();
      piStack_9c = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_a0 = (undefined1 *)0x4e8264;
      uVar2 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar2;
      puStack_a0 = (undefined1 *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_98 = (int *)FUN_00402bc3();
      if ((int)piStack_98 < 0) {
        piStack_9c = (int *)0x4e8281;
        FUN_00878dfb();
      }
      piStack_98 = (int *)0x0;
      *(int ***)(unaff_EBP + -0x18) = &piStack_9c;
      puStack_a0 = (undefined1 *)0x91e;
      FUN_00679e4e(&piStack_9c);
      puStack_a0 = (undefined1 *)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_0040263d();
      piStack_9c = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      puStack_a0 = (undefined1 *)0x4e82b6;
      iVar4 = FUN_00412550();
      *(int *)(unaff_EBP + -0x34) = iVar4 * 1000;
      puStack_a0 = (undefined1 *)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_98 = (int *)FUN_00402bc3();
      if ((int)piStack_98 < 0) {
        piStack_9c = (int *)0x4e82d9;
        FUN_00878dfb();
      }
      piStack_98 = (int *)0x0;
      *(int ***)(unaff_EBP + -0x18) = &piStack_9c;
      puStack_a0 = (undefined1 *)0xc43;
      FUN_00679e4e(&piStack_9c);
      puStack_a0 = (undefined1 *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_0040263d();
      piStack_9c = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_a0 = (undefined1 *)0x4e830e;
      uVar2 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x30) = uVar2;
      puStack_a0 = (undefined1 *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_98 = (int *)FUN_00402bc3();
      if ((int)piStack_98 < 0) {
        piStack_9c = (int *)0x4e832b;
        FUN_00878dfb();
      }
      puStack_a0 = (undefined1 *)&piStack_98;
      *(int ***)(unaff_EBP + -0x18) = &piStack_98;
      piStack_9c = (int *)0x638;
      FUN_00679e4e();
      piStack_9c = (int *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_a0 = (undefined1 *)0x4e8351;
      FUN_0040263d();
      puStack_a0 = (undefined1 *)0x4e8358;
      psVar6 = (short *)FUN_004048a4();
      sVar1 = *psVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      if (sVar1 == 8) {
        piStack_9c = *(int **)(psVar6 + 4);
      }
      else {
        piStack_9c = (int *)&DAT_0097812c;
      }
      piStack_98 = (int *)0xffffffff;
      puStack_a0 = (undefined1 *)0x4e8377;
      FUN_00454081();
      piStack_98 = (int *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_9c = (int *)0x4e8387;
      piStack_98 = (int *)FUN_00402bc3();
      if ((int)piStack_98 < 0) {
        piStack_9c = (int *)0x4e8392;
        FUN_00878dfb();
      }
      piStack_98 = (int *)0x4e839a;
      FUN_004f1c3c();
      piStack_98 = (int *)(unaff_EBP + -0x34);
      piStack_9c = (int *)0x4e83a5;
      FUN_004f1556();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_98 = (int *)0x4e83b1;
      FUN_00414ebb();
      piStack_98 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piStack_98 != (int *)0x0) {
        piStack_9c = (int *)0x4e83c2;
        (**(code **)(*piStack_98 + 8))();
      }
      iVar3 = iVar3 + 1;
    }
    piStack_98 = *(int **)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_98 != (int *)0x0) {
      piStack_9c = (int *)0x4e83d9;
      (**(code **)(*piStack_98 + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


