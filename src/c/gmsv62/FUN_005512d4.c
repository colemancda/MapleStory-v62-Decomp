/* FUN_005512d4 - 0x005512d4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005512d4(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int *piStack_98;
  int *piStack_94;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    piStack_94 = (int *)0x5512fe;
    FUN_00878dfb();
  }
  piStack_94 = (int *)0x55130a;
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_94 = (int *)0x551317;
  FUN_004035f5();
  FUN_004027b3();
  piStack_94 = (int *)0x55132b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      piStack_94 = (int *)0x551341;
      FUN_00878dfb();
    }
    piStack_94 = (int *)(unaff_EBP + -0x7c);
    piStack_98 = (int *)0x1;
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 0xc))(*(int **)(unaff_EBP + -0x24));
    if (iVar2 != 0) break;
    piStack_94 = (int *)(unaff_EBP + -0x20);
    piStack_98 = (int *)0x551369;
    FUN_00405a23();
    if (*(undefined4 **)(unaff_EBP + -0x20) == (undefined4 *)0x0) {
      piStack_98 = (int *)0x0;
    }
    else {
      piStack_98 = (int *)**(undefined4 **)(unaff_EBP + -0x20);
    }
    piStack_94 = (int *)(unaff_EBP + -0x3c);
    uVar3 = FUN_0087bb75();
    *(undefined4 *)(unaff_EBP + -0x40) = uVar3;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    piStack_94 = (int *)0x0;
    *(int ***)(unaff_EBP + -0x4c) = &piStack_98;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_004059fd(unaff_EBP + -0x20);
    iVar2 = unaff_EBP + -0x8c;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_98 = (int *)0x5513c7;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar3;
    piStack_94 = (int *)0x5513d6;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_94 = (int *)0x5513e7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    piStack_94 = (int *)0x5513f7;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_94 = (int *)0x551402;
      FUN_00878dfb();
    }
    if (**(short **)(unaff_EBP + -0x3c) == 0) {
      piStack_94 = (int *)(unaff_EBP + -0x40);
      piStack_98 = (int *)0x551437;
      FUN_00559668();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_94 = (int *)0x551448;
        FUN_00878dfb();
      }
      piStack_94 = (int *)0x551454;
      FUN_00404960();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_94 = (int *)0x551461;
      FUN_004035f5();
      FUN_004027b3();
      piStack_94 = (int *)0x55146f;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      *(undefined4 *)(unaff_EBP + -0x48) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
          piStack_94 = (int *)0x551485;
          FUN_00878dfb();
        }
        piStack_94 = (int *)(unaff_EBP + -0x6c);
        piStack_98 = (int *)0x1;
        iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0xc))(*(int **)(unaff_EBP + -0x1c));
        if (iVar2 != 0) break;
        piStack_94 = (int *)(unaff_EBP + -0x18);
        piStack_98 = (int *)0x5514ad;
        FUN_00405a23();
        piStack_94 = (int *)(unaff_EBP + -0x18);
        *(undefined1 **)(unaff_EBP + -0x4c) = &stack0xffffff70;
        piStack_98 = (int *)0x5514be;
        FUN_0040810c();
        piStack_94 = (int *)(unaff_EBP + -0x5c);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        piStack_98 = (int *)0x5514ce;
        FUN_0040263d();
        piStack_98 = (int *)0x5514d5;
        FUN_004048a4();
        piStack_94 = *(int **)(unaff_EBP + -0x54);
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        if (*(short *)(unaff_EBP + -0x5c) != 8) {
          piStack_94 = (int *)&DAT_0097812c;
        }
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        piStack_98 = (int *)0x5514f6;
        FUN_00454081();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        }
        else {
          uVar3 = FUN_00409205();
          *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
        }
        piStack_94 = (int *)(unaff_EBP + -0x2c);
        piStack_98 = (int *)0x55151d;
        FUN_00559c38();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          piStack_94 = (int *)0x551531;
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        piStack_94 = (int *)0x55153f;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          piStack_94 = (int *)0x55154a;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_00402fa6();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_94 = (int *)0x551568;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_94 = (int *)0x551573;
        FUN_00878dfb();
      }
      FUN_004027f8();
    }
    else {
      *(undefined1 **)(unaff_EBP + -0x4c) = &stack0xffffff70;
      piStack_94 = (int *)0x55141a;
      FUN_004125cc();
      piStack_94 = (int *)0x551422;
      FUN_005512d4();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_94 = (int *)0x55158c;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00402fa6();
  }
  if (DAT_0097c1a8 == (int *)0x0) {
    piStack_94 = (int *)0x5515af;
    FUN_00878dfb();
  }
  piVar1 = DAT_0097c1a8;
  piStack_94 = DAT_0097c1a8;
  piStack_98 = (int *)0x5515bc;
  iVar2 = (**(code **)(*DAT_0097c1a8 + 0x24))();
  if (iVar2 < 0) {
    piStack_98 = (int *)&DAT_00963cf8;
    FUN_00878e09(iVar2,piVar1);
  }
  piStack_98 = (int *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_98 = (int *)FUN_00402bc3();
  if ((int)piStack_98 < 0) {
    FUN_00878dfb();
  }
  piStack_98 = *(int **)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_98 != (int *)0x0) {
    (**(code **)(*piStack_98 + 8))();
  }
  piStack_98 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_98 != (int *)0x0) {
    (**(code **)(*piStack_98 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


