/* FUN_00758f91 - 0x00758f91 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00758f91(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int *piVar5;
  int extraout_ECX_01;
  int unaff_EBP;
  int iStack_80;
  undefined1 *puStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int *piStack_6c;
  int *piStack_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0x1c) == 0) {
    *(undefined4 *)(unaff_EBP + 0x1c) = 0x5e;
  }
  iStack_4c = 3;
  iStack_50 = 0;
  uStack_54 = 0x758fbf;
  FUN_004031b7();
  iVar4 = *(int *)(extraout_ECX + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar4 == 0) {
    iStack_4c = 0x80004003;
    iStack_50 = 0x758fd1;
    FUN_00878dfb();
  }
  iStack_4c = unaff_EBP + -0x28;
  iStack_50 = unaff_EBP + -0x10;
  uStack_54 = 0x758fe1;
  FUN_00425067();
  iStack_4c = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_50 = 0x758fee;
  iStack_4c = FUN_00402bc3();
  if (iStack_4c < 0) {
    iStack_50 = 0x758ff9;
    FUN_00878dfb();
  }
  if ((*(int *)(unaff_EBP + 8) == 0) ||
     (iVar4 = *(int *)(unaff_EBP + 0xc), *(undefined4 *)(unaff_EBP + 0xc) = 1,
     *(int *)(unaff_EBP + 8) <= iVar4)) {
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
  }
  iStack_4c = 3;
  iStack_50 = 0xff;
  uStack_54 = 0x75901e;
  FUN_004031b7();
  iVar4 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + 0x10) =
       *(undefined4 *)(extraout_ECX + (*(int *)(unaff_EBP + 0xc) + 0x11c + iVar4 * 2) * 4);
  piStack_68 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_68 == (int *)0x0) {
    iStack_4c = 0x80004003;
    iStack_50 = 0x759046;
    FUN_00878dfb();
    piStack_68 = *(int **)(unaff_EBP + -0x10);
  }
  uStack_5c = *(undefined4 *)(unaff_EBP + 0x10);
  uStack_58 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_54 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_50 = *(undefined4 *)(unaff_EBP + -0x30);
  iVar4 = *(int *)(unaff_EBP + 0x14) + iVar4 * 0xc;
  iVar2 = *piStack_68;
  iStack_60 = iVar4 + 0x20;
  iStack_4c = *(undefined4 *)(unaff_EBP + -0x2c);
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  *(int **)(unaff_EBP + -0x18) = piStack_68;
  *(int *)(unaff_EBP + 0x14) = iStack_60;
  piStack_6c = (int *)0x759078;
  iStack_64 = iVar1;
  iVar2 = (**(code **)(iVar2 + 0x80))();
  if (iVar2 < 0) {
    piStack_6c = (int *)&DAT_00963cc8;
    iStack_70 = *(int *)(unaff_EBP + -0x18);
    iStack_78 = 0x75908c;
    iStack_74 = iVar2;
    FUN_00878e09();
  }
  piStack_6c = (int *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_70 = 0x759099;
  iVar2 = FUN_00402bc3();
  piVar5 = piStack_6c;
  if (iVar2 < 0) {
    iStack_70 = 0x7590a4;
    piStack_6c = (int *)iVar2;
    FUN_00878dfb();
    piVar5 = (int *)extraout_ECX_00;
  }
  if (*(int *)(unaff_EBP + 0x18) == 0) {
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      iStack_74 = *(int *)(unaff_EBP + -0x14) + 0x4a0;
    }
    else {
      iStack_74 = *(int *)(unaff_EBP + -0x14) + 0x4a4;
    }
    piStack_6c = (int *)0x1;
    *(int **)(unaff_EBP + 0x1c) = &iStack_70;
    iStack_78 = 0x759206;
    iStack_70 = (int)piVar5;
    FUN_00424dbc();
    iStack_74 = *(int *)(unaff_EBP + 8);
    puStack_7c = (undefined1 *)(iVar1 + 0x32);
    iStack_78 = *(undefined4 *)(unaff_EBP + 0x14);
    *(int **)(unaff_EBP + 0x1c) = &iStack_80;
    iStack_80 = extraout_ECX_01;
    FUN_0046fc23(unaff_EBP + -0x10);
    FUN_007d3201();
  }
  else {
    piStack_6c = (int *)0x0;
    iStack_70 = 0;
    puStack_7c = (undefined1 *)&iStack_74;
    *(int **)(unaff_EBP + 8) = &iStack_74;
    iStack_78 = 0x2cd;
    iStack_80 = 0x7590c5;
    iStack_74 = (int)piVar5;
    FUN_00679e4e();
    iStack_78 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_7c = (undefined1 *)0x7590db;
    FUN_0040263d();
    puStack_7c = (undefined1 *)0x7590e2;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_74 = 0x7590ed;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + 0xc) = iVar2;
    *(undefined4 *)(unaff_EBP + 0x1c) = 0;
    if (iVar2 != 0) {
      piStack_6c = (int *)(unaff_EBP + 0xc);
      iStack_70 = 0x759103;
      piStack_6c = (int *)FUN_0041a581();
      if (((int)piStack_6c < 0) && (piStack_6c != (int *)0x80004002)) {
        iStack_70 = 0x759114;
        FUN_00878dfb();
      }
    }
    piStack_6c = (int *)(unaff_EBP + -0x48);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_70 = 0x759121;
    piStack_6c = (int *)FUN_00402bc3();
    if ((int)piStack_6c < 0) {
      iStack_70 = 0x75912c;
      FUN_00878dfb();
    }
    piStack_6c = (int *)0x3;
    iStack_70 = 0xff;
    iStack_74 = 0x75913b;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int *)(unaff_EBP + 0x1c) == 0) {
      piStack_6c = (int *)0x80004003;
      iStack_70 = 0x75914f;
      FUN_00878dfb();
      if (*(int *)(unaff_EBP + 0x1c) == 0) {
        piStack_6c = (int *)0x80004003;
        iStack_70 = 0x75915b;
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 0x1c);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_6c = (int *)0x80004003;
      iStack_70 = 0x75916d;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(int **)(unaff_EBP + 8) = piVar5;
    *(undefined4 *)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + 0x1c);
    piStack_6c = (int *)0x75917e;
    iVar2 = FUN_0040eed0();
    piStack_6c = (int *)0x75918b;
    iVar3 = FUN_0040eea9();
    puStack_7c = *(undefined1 **)(unaff_EBP + 0x14);
    iStack_78 = *(undefined4 *)(unaff_EBP + -0x38);
    iStack_74 = *(int *)(unaff_EBP + -0x34);
    iStack_70 = *(int *)(unaff_EBP + -0x30);
    piStack_6c = *(int **)(unaff_EBP + -0x2c);
    iStack_80 = (iVar4 - iVar2) + 0x20;
    iVar4 = (**(code **)(*piVar5 + 0x80))(*(undefined4 *)(unaff_EBP + 8),(iVar1 - iVar3) + 0x32);
    if (iVar4 < 0) {
      piStack_6c = (int *)&DAT_00963cc8;
      iStack_70 = *(int *)(unaff_EBP + 8);
      iStack_78 = 0x7591c0;
      iStack_74 = iVar4;
      FUN_00878e09();
    }
    piStack_6c = (int *)(unaff_EBP + -0x38);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_70 = 0x7591cd;
    piStack_6c = (int *)FUN_00402bc3();
    if ((int)piStack_6c < 0) {
      iStack_70 = 0x7591d8;
      FUN_00878dfb();
    }
    piStack_6c = (int *)0x7591e0;
    FUN_004125e6();
  }
  piStack_6c = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_6c != (int *)0x0) {
    iStack_70 = 0x759238;
    (**(code **)(*piStack_6c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


