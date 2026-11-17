/* FUN_004d654d - 0x004d654d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d654d(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 *extraout_ECX;
  int extraout_ECX_00;
  int *extraout_ECX_01;
  int unaff_EBP;
  undefined1 *puStack_d4;
  int *piStack_d0;
  int iStack_cc;
  int *piStack_c8;
  
  FUN_00879bb8();
  piStack_c8 = (int *)0x4d656e;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_c8 = (int *)0x4d657c;
  FUN_00403191();
  piStack_c8 = (int *)0x0;
  iStack_cc = unaff_EBP + -0x70;
  piStack_d0 = (int *)(unaff_EBP + -0x60);
  *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_d4;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_d4 = extraout_ECX;
  FUN_00679e4e(&puStack_d4,0xd36);
  iVar2 = unaff_EBP + -0xb0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_cc = 0x4d65cb;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x40) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    piStack_c8 = (int *)0x4d65e1;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_c8 = (int *)0x4d65f2;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_c8 = (int *)0x4d6602;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_c8 = (int *)0x4d660d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_c8 = (int *)0x4d661a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_c8 = (int *)0x4d6625;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_c8 = (int *)0x4d6632;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_c8 = (int *)0x4d663d;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_c8 = (int *)0x4d664c;
    FUN_00878dfb();
  }
  piStack_c8 = (int *)0x4d6658;
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_c8 = (int *)0x4d6665;
  FUN_004035f5();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
    piStack_c8 = (int *)0x4d6676;
    (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
  }
  piStack_c8 = (int *)0x4d6680;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x28) == 0) {
      piStack_c8 = (int *)0x4d6696;
      FUN_00878dfb();
    }
    piStack_d0 = *(int **)(unaff_EBP + -0x28);
    piStack_c8 = (int *)(unaff_EBP + -0x50);
    iStack_cc = 1;
    puStack_d4 = (undefined1 *)0x4d66a9;
    iVar2 = (**(code **)(*piStack_d0 + 0xc))();
    if (iVar2 != 0) {
      *(undefined1 *)(unaff_EBP + -4) = 10;
      piStack_c8 = (int *)0x4d694a;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_c8 = (int *)0x4d6955;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
        piStack_c8 = (int *)0x4d6966;
        (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_c8 = (int *)0x4d6977;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    piStack_c8 = (int *)(unaff_EBP + -0x18);
    iStack_cc = 0x4d66be;
    FUN_00405a23();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int **)(unaff_EBP + -0x18) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int **)(unaff_EBP + -0x18);
    }
    piStack_c8 = (int *)0x4d66d7;
    piVar3 = (int *)FUN_0087a208();
    iStack_cc = iVar2;
    piStack_c8 = (int *)0x0;
    piStack_d0 = (int *)(unaff_EBP + -0x18);
    *(int **)(unaff_EBP + -0x14) = &iStack_cc;
    puStack_d4 = (undefined1 *)0x4d66eb;
    FUN_004059fd();
    piStack_d0 = (int *)(unaff_EBP + -0x80);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_d4 = (undefined1 *)0x4d66fb;
    FUN_0040263d();
    puStack_d4 = (undefined1 *)0x4d6702;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_cc = 0x4d670d;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x38) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar2 != 0) {
      piStack_c8 = (int *)0x4d6723;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_c8 = (int *)0x4d6734;
        FUN_00878dfb();
      }
    }
    iVar2 = unaff_EBP + -0x80;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_c8 = (int *)0x4d6741;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      piStack_c8 = (int *)0x4d674c;
      FUN_00878dfb();
      iVar2 = extraout_ECX_00;
    }
    piStack_c8 = (int *)0x0;
    puStack_d4 = (undefined1 *)&iStack_cc;
    *(int **)(unaff_EBP + -0x14) = &iStack_cc;
    piStack_d0 = (int *)0x3b4;
    iStack_cc = iVar2;
    FUN_00679e4e();
    piStack_d0 = (int *)(unaff_EBP + -0x90);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_d4 = (undefined1 *)0x4d6774;
    FUN_0040263d();
    puStack_d4 = (undefined1 *)0x4d677b;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_cc = 0x4d6786;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x30) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    if (iVar2 != 0) {
      piStack_c8 = (int *)0x4d679c;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_c8 = (int *)0x4d67ad;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_c8 = (int *)0x4d67bd;
    piVar1 = (int *)(unaff_EBP + -0x90);
    iVar2 = FUN_00402bc3();
    piStack_c8 = piVar1;
    if (iVar2 < 0) {
      piStack_c8 = (int *)0x4d67c8;
      FUN_00878dfb();
      piStack_c8 = extraout_ECX_01;
    }
    piStack_d0 = (int *)&piStack_c8;
    *(int ***)(unaff_EBP + -0x14) = &piStack_c8;
    iStack_cc = 0x923;
    puStack_d4 = (undefined1 *)0x4d67dc;
    FUN_00679e4e();
    iStack_cc = unaff_EBP + -0xa0;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_d0 = (int *)0x4d67ef;
    FUN_0040263d();
    piStack_d0 = (int *)0x4d67f6;
    piStack_c8 = (int *)FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    iStack_cc = 0x4d6800;
    FUN_00412550();
    iStack_cc = unaff_EBP + -0xa0;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    piStack_d0 = (int *)0x4d6810;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_c8 = (int *)0x4d681d;
      FUN_00878dfb();
    }
    piStack_c8 = (int *)0x0;
    puStack_d4 = (undefined1 *)&iStack_cc;
    *(int **)(unaff_EBP + -0x14) = &iStack_cc;
    piStack_d0 = (int *)0xd34;
    FUN_00679e4e();
    piStack_d0 = (int *)(unaff_EBP + -0xc0);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_d4 = (undefined1 *)0x4d6845;
    FUN_0040263d();
    puStack_d4 = (undefined1 *)0x4d684c;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_cc = 0x4d6857;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (iVar2 != 0) {
      piStack_c8 = (int *)0x4d686d;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_c8 = (int *)0x4d687e;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    piStack_c8 = (int *)0x4d688e;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_c8 = (int *)0x4d6899;
      FUN_00878dfb();
    }
    piStack_c8 = *(int **)(unaff_EBP + -0x1c);
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff3c;
    if (piStack_c8 != (int *)0x0) {
      iStack_cc = 0x4d68b1;
      (**(code **)(*piStack_c8 + 4))();
    }
    iStack_cc = 0x4d68b7;
    piStack_c8 = piVar3;
    iVar2 = FUN_004d69e1();
    if (iVar2 == 0) break;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      piStack_c8 = (int *)0x4d68ce;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
      piStack_c8 = (int *)0x4d68df;
      (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      piStack_c8 = (int *)0x4d68f0;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    piStack_c8 = (int *)0x4d690c;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_c8 = (int *)0x4d691b;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0x22000006;
  *(undefined4 *)(unaff_EBP + -0x20) = 0x22000006;
  piStack_c8 = (int *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
                    /* WARNING: Subroutine does not return */
  iStack_cc = 0x4d693d;
  __CxxThrowException_8();
}


