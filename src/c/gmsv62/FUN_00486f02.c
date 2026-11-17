/* FUN_00486f02 - 0x00486f02 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00486f02(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  int unaff_EBP;
  undefined1 *puStack_58;
  int iStack_54;
  int iStack_50;
  int *piStack_4c;
  
  FUN_00879bb8();
  piStack_4c = *(int **)(unaff_EBP + 8);
  iStack_50 = unaff_EBP + -0x10;
  *(int *)(unaff_EBP + -0x30) = extraout_ECX;
  *(undefined4 *)(extraout_ECX + 0x408) = 1;
  iStack_54 = 0x486f31;
  FUN_004497f5();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_4c = (int *)0x486f43;
    FUN_004027eb();
  }
  else {
    piStack_4c = (int *)0x0;
    puStack_58 = (undefined1 *)&iStack_50;
    *(int **)(unaff_EBP + -0x38) = &iStack_50;
    iStack_54 = 0x5ed;
    FUN_00679e4e();
    iStack_54 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_58 = (undefined1 *)0x486f70;
    FUN_0040263d();
    puStack_58 = (undefined1 *)0x486f77;
    iStack_50 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_54 = 0x486f81;
    uVar1 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar1;
    iStack_54 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_58 = (undefined1 *)0x486f90;
    piStack_4c = (int *)FUN_00402bc3();
    if ((int)piStack_4c < 0) {
      iStack_50 = 0x486f9d;
      FUN_00878dfb();
    }
    piStack_4c = (int *)0x0;
    puStack_58 = (undefined1 *)&iStack_50;
    *(int **)(unaff_EBP + -0x38) = &iStack_50;
    iStack_54 = 0x70d;
    FUN_00679e4e();
    iStack_54 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_58 = (undefined1 *)0x486fc0;
    FUN_0040263d();
    puStack_58 = (undefined1 *)0x486fc7;
    iStack_50 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_54 = 0x486fd1;
    uVar1 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar1;
    iStack_54 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_58 = (undefined1 *)0x486fe0;
    piStack_4c = (int *)FUN_00402bc3();
    if ((int)piStack_4c < 0) {
      iStack_50 = 0x486fed;
      FUN_00878dfb();
    }
    piStack_4c = (int *)0x0;
    puStack_58 = (undefined1 *)&iStack_50;
    *(int **)(unaff_EBP + -0x38) = &iStack_50;
    iStack_54 = 0xe7e;
    FUN_00679e4e();
    iStack_54 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_58 = (undefined1 *)0x487010;
    FUN_0040263d();
    puStack_58 = (undefined1 *)0x487017;
    iStack_50 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_54 = 0x487021;
    uVar1 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar1;
    iStack_54 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_58 = (undefined1 *)0x487030;
    piStack_4c = (int *)FUN_00402bc3();
    if ((int)piStack_4c < 0) {
      iStack_50 = 0x48703d;
      FUN_00878dfb();
    }
    piStack_4c = (int *)0x0;
    puStack_58 = (undefined1 *)&iStack_50;
    *(int **)(unaff_EBP + -0x34) = &iStack_50;
    iStack_54 = 0x655;
    FUN_00679e4e();
    iStack_54 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_58 = (undefined1 *)0x487060;
    FUN_0040263d();
    puStack_58 = (undefined1 *)0x487067;
    iStack_50 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_54 = 0x487071;
    uVar1 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x34) = uVar1;
    iStack_54 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_58 = (undefined1 *)0x487080;
    piStack_4c = (int *)FUN_00402bc3();
    if ((int)piStack_4c < 0) {
      iStack_50 = 0x48708d;
      FUN_00878dfb();
    }
    piStack_4c = (int *)&DAT_0097812c;
    puStack_58 = (undefined1 *)&iStack_50;
    *(int **)(unaff_EBP + -0x28) = &iStack_50;
    iStack_54 = 0x70e;
    FUN_00679e4e();
    iStack_54 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_58 = (undefined1 *)0x4870b4;
    FUN_0040263d();
    puStack_58 = (undefined1 *)0x4870bb;
    iStack_50 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_54 = 0x4870c5;
    iStack_50 = FUN_004343c5();
    piStack_4c = (int *)0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    iStack_54 = 0x4870d5;
    FUN_004184ca();
    piStack_4c = (int *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_50 = 0x4870e2;
    piStack_4c = (int *)FUN_00402bc3();
    if ((int)piStack_4c < 0) {
      iStack_50 = 0x4870ed;
      FUN_00878dfb();
    }
    piStack_4c = (int *)0x638;
    iStack_50 = unaff_EBP + -0x20;
    iStack_54 = 0x4870fd;
    puVar2 = (undefined4 *)FUN_00679d22();
    piStack_4c = (int *)*puVar2;
    iStack_50 = *(int *)(unaff_EBP + 8);
    iStack_54 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_58 = (undefined1 *)0x487115;
    FUN_00550bc4();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_4c = (int *)0x487121;
    FUN_00414ebb();
    piStack_4c = (int *)0xd74;
    iStack_50 = unaff_EBP + -0x28;
    iStack_54 = 0x487131;
    puVar2 = (undefined4 *)FUN_00679d22();
    piStack_4c = (int *)0xd73;
    iStack_50 = unaff_EBP + -0x24;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_54 = 0x487147;
    piVar3 = (int *)FUN_00679d22();
    piStack_4c = (int *)*puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_50 = *piVar3;
    puStack_58 = (undefined1 *)(unaff_EBP + -0x14);
    iStack_54 = *(undefined4 *)(unaff_EBP + -0x14);
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_4c = (int *)0x48716a;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_4c = (int *)0x487176;
    FUN_00414ebb();
    if ((*(short **)(unaff_EBP + -0x18) != (short *)0x0) && (**(short **)(unaff_EBP + -0x18) != 0))
    {
      piStack_4c = *(int **)(unaff_EBP + -0x2c);
      iStack_50 = *(int *)(unaff_EBP + -0x14);
      iStack_54 = 0x487192;
      FUN_00487200();
      if (*(int *)(unaff_EBP + -0x1c) == 3) {
        piStack_4c = *(int **)(unaff_EBP + 8);
        iStack_50 = 0x4871a6;
        FUN_007c8851();
      }
      else {
        piStack_4c = *(int **)(unaff_EBP + -0x34);
        iStack_50 = *(int *)(unaff_EBP + -0x38);
        iStack_54 = *(undefined4 *)(unaff_EBP + -0x1c);
        *(undefined1 ***)(unaff_EBP + 8) = &puStack_58;
        puStack_58 = extraout_ECX_00;
        FUN_004343e4(unaff_EBP + -0x18);
        FUN_00487b16();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    piStack_4c = (int *)0x4871d3;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_4c = (int *)0x4871de;
    FUN_00402676();
    piStack_4c = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_4c != (int *)0x0) {
      iStack_50 = 0x4871ef;
      (**(code **)(*piStack_4c + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


