/* FUN_00558aa2 - 0x00558aa2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00558aa2(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_9c;
  int *piStack_98;
  int iStack_94;
  int *piStack_90;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x30) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_90 = (int *)0x558acb;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_90 = (int *)0x558ad8;
  FUN_00403191();
  piStack_90 = (int *)0x0;
  iStack_94 = unaff_EBP + -0x68;
  piStack_98 = (int *)(unaff_EBP + -0x58);
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_9c;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_9c = extraout_ECX_00;
  FUN_00679e4e(&uStack_9c,0xeab);
  iVar1 = unaff_EBP + -0x78;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_94 = 0x558b22;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x20) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar1 != 0) {
    piStack_90 = (int *)0x558b38;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      piStack_90 = (int *)0x558b49;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_90 = (int *)0x558b56;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_90 = (int *)0x558b61;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_90 = (int *)0x558b6e;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_90 = (int *)0x558b79;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_90 = (int *)0x558b86;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    piStack_90 = (int *)0x558b91;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    piStack_90 = (int *)0x558ba1;
    FUN_00878dfb();
  }
  piStack_90 = (int *)0x558bad;
  FUN_00404960();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_90 = (int *)0x558bba;
  FUN_004035f5();
  FUN_004027b3();
  piStack_90 = (int *)0x558bcc;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  do {
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      piStack_90 = (int *)0x558bde;
      FUN_00878dfb();
    }
    piStack_98 = *(int **)(unaff_EBP + -0x1c);
    piStack_90 = (int *)(unaff_EBP + -0x48);
    iStack_94 = 1;
    uStack_9c = 0x558bf1;
    iVar1 = (**(code **)(*piStack_98 + 0xc))();
    if (iVar1 != 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_90 = (int *)0x558d46;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_90 = (int *)0x558d51;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        piStack_90 = (int *)0x558d62;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        piStack_90 = (int *)0x558d72;
        (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    piStack_90 = (int *)(unaff_EBP + -0x14);
    iStack_94 = 0x558c06;
    iVar1 = unaff_EBP + -0x48;
    FUN_00405a23();
    iStack_94 = iVar1;
    piStack_90 = (int *)0x0;
    piStack_98 = (int *)(unaff_EBP + -0x14);
    *(int **)(unaff_EBP + -0x38) = &iStack_94;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    uStack_9c = 0x558c1d;
    FUN_004059fd();
    piStack_98 = (int *)(unaff_EBP + -0x88);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    uStack_9c = 0x558c30;
    FUN_0040263d();
    uStack_9c = 0x558c37;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_94 = 0x558c42;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x2c) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar1 != 0) {
      piStack_90 = (int *)0x558c58;
      iVar1 = FUN_00404b30();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        piStack_90 = (int *)0x558c69;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    piStack_90 = (int *)0x558c79;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_90 = (int *)0x558c84;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_004027eb();
LAB_00558d10:
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00402fa6();
    }
    else {
      piStack_90 = (int *)0x558ca6;
      iVar1 = FUN_0087a208();
      if (iVar1 / 10000 == 0xe3) {
        piStack_90 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 **)(unaff_EBP + -0x38) = &stack0xffffff74;
        if (piStack_90 != (int *)0x0) {
          iStack_94 = 0x558cf6;
          (**(code **)(*piStack_90 + 4))();
        }
        iStack_94 = 0x558cff;
        piStack_90 = (int *)iVar1;
        FUN_00552209();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          piStack_90 = (int *)0x558d10;
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
        }
        goto LAB_00558d10;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_90 = (int *)0x558cc9;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
    }
    piStack_90 = (int *)0x558d25;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_90 = (int *)0x558d34;
      FUN_00878dfb();
    }
  } while( true );
}


