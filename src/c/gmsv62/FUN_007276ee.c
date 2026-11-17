/* FUN_007276ee - 0x007276ee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007276ee(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  int unaff_EBP;
  int iVar4;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined1 *puStack_c0;
  int iStack_bc;
  int *piStack_b8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  piStack_b8 = (int *)0x72770c;
  FUN_004b2689();
  piStack_b8 = &DAT_00980690;
  iStack_bc = 0x72771a;
  FUN_00403191();
  piStack_b8 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_bc = 0x727728;
  FUN_00403191();
  piStack_b8 = (int *)0x0;
  iStack_bc = 0;
  puStack_c0 = (undefined1 *)(unaff_EBP + -0x44);
  iStack_c4 = unaff_EBP + -100;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_c8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&uStack_c8,0xb38);
  iVar2 = unaff_EBP + -0x84;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_c0 = (undefined1 *)0x727777;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x34) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 != 0) {
    piStack_b8 = (int *)(unaff_EBP + -0x34);
    iStack_bc = 0x72778d;
    piStack_b8 = (int *)FUN_00404b30();
    if (((int)piStack_b8 < 0) && (piStack_b8 != (int *)0x80004002)) {
      iStack_bc = 0x72779e;
      FUN_00878dfb();
    }
  }
  piStack_b8 = (int *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_bc = 0x7277ae;
  piStack_b8 = (int *)FUN_00402bc3();
  if ((int)piStack_b8 < 0) {
    iStack_bc = 0x7277b9;
    FUN_00878dfb();
  }
  piStack_b8 = (int *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_bc = 0x7277c6;
  piStack_b8 = (int *)FUN_00402bc3();
  if ((int)piStack_b8 < 0) {
    iStack_bc = 0x7277d1;
    FUN_00878dfb();
  }
  piStack_b8 = (int *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_bc = 0x7277de;
  piStack_b8 = (int *)FUN_00402bc3();
  if ((int)piStack_b8 < 0) {
    iStack_bc = 0x7277e9;
    FUN_00878dfb();
  }
  piStack_b8 = &DAT_00980690;
  iStack_bc = 0x7277f2;
  FUN_00403191();
  piStack_b8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_bc = 0x7277ff;
  FUN_00403191();
  piStack_b8 = (int *)0x0;
  iStack_bc = 0;
  puStack_c0 = (undefined1 *)(unaff_EBP + -0x74);
  iStack_c4 = unaff_EBP + -0x54;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_c8;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uStack_c8 = extraout_ECX_00;
  FUN_00679e4e(&uStack_c8,0xb39);
  iVar2 = unaff_EBP + -0xa4;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_c0 = (undefined1 *)0x727849;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar2 != 0) {
    piStack_b8 = (int *)(unaff_EBP + -0x2c);
    iStack_bc = 0x72785f;
    piStack_b8 = (int *)FUN_00404b30();
    if (((int)piStack_b8 < 0) && (piStack_b8 != (int *)0x80004002)) {
      iStack_bc = 0x727870;
      FUN_00878dfb();
    }
  }
  piStack_b8 = (int *)(unaff_EBP + -0xa4);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_bc = 0x727880;
  piStack_b8 = (int *)FUN_00402bc3();
  if ((int)piStack_b8 < 0) {
    iStack_bc = 0x72788b;
    FUN_00878dfb();
  }
  piStack_b8 = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_bc = 0x727898;
  piStack_b8 = (int *)FUN_00402bc3();
  if ((int)piStack_b8 < 0) {
    iStack_bc = 0x7278a3;
    FUN_00878dfb();
  }
  piStack_b8 = (int *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_bc = 0x7278b0;
  piStack_b8 = (int *)FUN_00402bc3();
  if ((int)piStack_b8 < 0) {
    iStack_bc = 0x7278bb;
    FUN_00878dfb();
  }
  piStack_b8 = (int *)(unaff_EBP + -0x24);
  iStack_bc = 0x7278ca;
  iVar2 = FUN_00455c59();
  iVar2 = *(int *)(iVar2 + 4);
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    piStack_b8 = (int *)0x0;
    iStack_bc = 0x7278db;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  piStack_b8 = *(int **)(iVar2 + 0x3d);
  iStack_bc = iVar2 + 0x39;
  puStack_c0 = (undefined1 *)0x7278ea;
  sVar1 = FUN_0045f084();
  puStack_c0 = (undefined1 *)(int)sVar1;
  iStack_c4 = 0x7278f3;
  uVar3 = FUN_00483340();
  iVar2 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x30) = uVar3;
  iVar4 = 0;
  if (*(int *)(iVar2 + 200) != -1 && -1 < *(int *)(iVar2 + 200) + 1) {
    do {
      piStack_b8 = (int *)0x727915;
      FUN_0087a1b0();
      piStack_b8 = (int *)0x0;
      iStack_bc = 0;
      uStack_c8 = 0x727920;
      iStack_c4 = iVar4;
      puStack_c0 = &stack0xffffff4c;
      iStack_c4 = FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_c0;
      uStack_c8 = 0x72792c;
      FUN_004033a1();
      iStack_c4 = unaff_EBP + -0xb4;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      uStack_c8 = 0x72793f;
      FUN_0040263d();
      uStack_c8 = 0x727946;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_c0 = (undefined1 *)0x727951;
      uVar3 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
      piStack_b8 = (int *)0x72795c;
      FUN_0087a1b0();
      piStack_b8 = (int *)0x0;
      iStack_bc = 0;
      uStack_c8 = 0x727967;
      iStack_c4 = iVar4;
      puStack_c0 = &stack0xffffff4c;
      iStack_c4 = FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x10) = &puStack_c0;
      uStack_c8 = 0x727973;
      FUN_004033a1();
      iStack_c4 = unaff_EBP + -0x94;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      uStack_c8 = 0x727986;
      FUN_0040263d();
      uStack_c8 = 0x72798d;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      puStack_c0 = (undefined1 *)0x727998;
      uVar3 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
      piStack_b8 = (int *)(uint)(iVar4 < *(int *)(unaff_EBP + -0x30));
      puStack_c0 = (undefined1 *)(unaff_EBP + -0x28);
      *(int **)(unaff_EBP + -0x10) = &iStack_bc;
      iStack_c4 = 0x7279b3;
      FUN_0048bb05();
      iStack_c4 = unaff_EBP + -0x1c;
      *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_c0;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      uStack_c8 = 0x7279c6;
      puStack_c0 = extraout_ECX_01;
      FUN_0048bb05();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_c4 = 0x7279d2;
      FUN_0048b99c();
      iStack_c4 = 0x7279d9;
      FUN_004b22e5();
      piStack_b8 = (int *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_bc = 0x7279e9;
      piStack_b8 = (int *)FUN_00402bc3();
      if ((int)piStack_b8 < 0) {
        iStack_bc = 0x7279f4;
        FUN_00878dfb();
      }
      piStack_b8 = (int *)(unaff_EBP + -0xb4);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      iStack_bc = 0x727a04;
      piStack_b8 = (int *)FUN_00402bc3();
      if ((int)piStack_b8 < 0) {
        iStack_bc = 0x727a0f;
        FUN_00878dfb();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar2 + 200) + 1);
  }
  iVar4 = *(int *)(iVar2 + 0xc0);
  piStack_b8 = *(int **)(*(int *)(iVar2 + 0x7c) + 0x48);
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  if (iVar4 < (int)piStack_b8) {
    piStack_b8 = (int *)iVar4;
  }
  iStack_bc = 0x727a3d;
  FUN_004b2699();
  piStack_b8 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piStack_b8 != (int *)0x0) {
    iStack_bc = 0x727a4e;
    (**(code **)(*piStack_b8 + 8))();
  }
  piStack_b8 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_b8 != (int *)0x0) {
    iStack_bc = 0x727a5f;
    (**(code **)(*piStack_b8 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


