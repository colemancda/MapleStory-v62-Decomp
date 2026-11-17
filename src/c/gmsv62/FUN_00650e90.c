/* FUN_00650e90 - 0x00650e90 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00650e90(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined1 *extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  undefined1 *puStack_bc;
  int *piStack_b8;
  int iStack_b4;
  int iStack_b0;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff58;
  *(undefined4 *)(unaff_EBP + -0x30) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_b0 = 0x650ebc;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_b0 = 0x650ec9;
  FUN_00403191();
  iStack_b0 = 0;
  iStack_b4 = unaff_EBP + -0x78;
  piStack_b8 = (int *)(unaff_EBP + -0x68);
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_bc;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_bc = extraout_ECX_00;
  FUN_00679e4e(&puStack_bc,0xaa7);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00405a1d();
  FUN_00402660();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00404a02(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_b4 = 0x650f1a;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x3c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 != 0) {
    iStack_b0 = 0x650f30;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      iStack_b0 = 0x650f41;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_b0 = 0x650f51;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b0 = 0x650f5c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_b0 = 0x650f69;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b0 = 0x650f74;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_b0 = 0x650f81;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_b0 = 0x650f8c;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    iStack_b0 = 0x650f9b;
    FUN_00878dfb();
  }
  iStack_b0 = 0x650fa7;
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_b0 = 0x650fb4;
  FUN_004035f5();
  FUN_004027b3();
  iStack_b0 = 0x650fc6;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x28) == 0) {
      iStack_b0 = 0x650fdc;
      FUN_00878dfb();
    }
    piStack_b8 = *(int **)(unaff_EBP + -0x28);
    iStack_b0 = unaff_EBP + -0x58;
    iStack_b4 = 1;
    puStack_bc = (undefined1 *)0x650fef;
    iVar2 = (**(code **)(*piStack_b8 + 0xc))();
    if (iVar2 != 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iStack_b0 = 0x6511eb;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_b0 = 0x6511f6;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
        iStack_b0 = 0x651207;
        (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        iStack_b0 = 0x651218;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      FUN_0065122b();
      return;
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    FUN_00654531();
    iStack_b0 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_b4 = 0x651013;
    FUN_00405a23();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (*(int **)(unaff_EBP + -0x18) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int **)(unaff_EBP + -0x18);
    }
    puVar1 = *(undefined4 **)(unaff_EBP + -0x1c);
    iStack_b0 = 0x65102f;
    uVar3 = FUN_0087a208();
    iStack_b4 = iVar2;
    iStack_b0 = 0;
    *puVar1 = uVar3;
    piStack_b8 = (int *)(unaff_EBP + -0x18);
    *(int **)(unaff_EBP + -0x34) = &iStack_b4;
    puStack_bc = (undefined1 *)0x651043;
    FUN_004059fd();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    piStack_b8 = (int *)0x65104f;
    FUN_0040263d();
    piStack_b8 = (int *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    puStack_bc = (undefined1 *)0x651061;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_b4 = 0x65106c;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x2c) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar2 != 0) {
      iStack_b0 = 0x651082;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        iStack_b0 = 0x651093;
        FUN_00878dfb();
      }
    }
    iVar2 = unaff_EBP + -0x98;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_b0 = 0x6510a3;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_b0 = 0x6510ae;
      FUN_00878dfb();
      iVar2 = extraout_ECX_01;
    }
    iStack_b0 = 0;
    puStack_bc = (undefined1 *)&iStack_b4;
    *(int **)(unaff_EBP + -0x34) = &iStack_b4;
    piStack_b8 = (int *)0x652;
    iStack_b4 = iVar2;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    piStack_b8 = (int *)0x6510d2;
    FUN_0040263d();
    piStack_b8 = (int *)(unaff_EBP + -0xa8);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_bc = (undefined1 *)0x6510e4;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_b4 = 0x6510ef;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar3;
    *(undefined1 **)(unaff_EBP + -0x34) = &stack0xffffff54;
    if (*(int *)(unaff_EBP + -0x38) != 0) {
      iStack_b0 = unaff_EBP + -0x38;
      iStack_b4 = 0x651108;
      iStack_b0 = FUN_00404b30();
      if ((iStack_b0 < 0) && (iStack_b0 != -0x7fffbffe)) {
        iStack_b4 = 0x651119;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_b0 = 0x651125;
    iVar2 = FUN_00654431();
    iStack_b0 = 0x65112f;
    piVar5 = (int *)FUN_00654431();
    iStack_b0 = iVar2 + 4;
    iStack_b4 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_b8 = (int *)0x651141;
    iVar2 = FUN_006512c0();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_b0 = 0x651156;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_b0 = 0x651161;
      FUN_00878dfb();
    }
    if (iVar2 == 0) break;
    iStack_b0 = *(undefined4 *)(unaff_EBP + -0x1c);
    iStack_b4 = 0x65118c;
    FUN_00654c2f();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      iStack_b0 = 0x65119d;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      iStack_b0 = 0x6511be;
      FUN_00654690();
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    iStack_b0 = 0x6511ca;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_b0 = 0x6511d9;
      FUN_00878dfb();
    }
  }
  iStack_b0 = unaff_EBP + -0x48;
  *(undefined4 *)(unaff_EBP + -0x48) = 0x80004005;
                    /* WARNING: Subroutine does not return */
  iStack_b4 = 0x65117a;
  __CxxThrowException_8();
}


