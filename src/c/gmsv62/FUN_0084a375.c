/* FUN_0084a375 - 0x0084a375 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084a375(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_84;
  int *piStack_80;
  int iStack_7c;
  int iStack_78;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff90;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_78 = 0x84a3a2;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_78 = 0x84a3af;
  FUN_00403191();
  iStack_78 = 0;
  iStack_7c = unaff_EBP + -0x60;
  piStack_80 = (int *)(unaff_EBP + -0x50);
  *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_84;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_84 = extraout_ECX;
  FUN_00679e4e(&uStack_84,0xb68);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00405a1d();
  FUN_00402660();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00404a02(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_7c = 0x84a3fd;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  iStack_78 = 0x84a40c;
  iVar2 = FUN_00404b30();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    iStack_78 = 0x84a41d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_78 = 0x84a42a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_78 = 0x84a435;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_78 = 0x84a442;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_78 = 0x84a44d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_78 = 0x84a45a;
  iVar2 = FUN_00402bc3();
  if (-1 < iVar2) {
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      FUN_004027eb();
    }
    else {
      iStack_78 = 0x84a48f;
      FUN_00404960();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_78 = 0x84a49c;
      FUN_004035f5();
      FUN_004027b3();
      iStack_78 = 0x84a4ae;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      *(undefined1 *)(unaff_EBP + -4) = 10;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + -0x1c) == 0) {
          iStack_78 = 0x84a4c4;
          FUN_00878dfb();
        }
        piStack_80 = *(int **)(unaff_EBP + -0x1c);
        iStack_78 = unaff_EBP + -0x40;
        iStack_7c = 1;
        uStack_84 = 0x84a4d7;
        iVar2 = (**(code **)(*piStack_80 + 0xc))();
        if (iVar2 != 0) break;
        iStack_78 = unaff_EBP + -0x18;
        iStack_7c = 0x84a4ec;
        iVar2 = unaff_EBP + -0x40;
        FUN_00405a23();
        iStack_78 = iVar2;
        iStack_7c = unaff_EBP + -0x18;
        *(int **)(unaff_EBP + -0x30) = &iStack_78;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        piStack_80 = (int *)0x84a502;
        FUN_004059fd();
        iStack_7c = unaff_EBP + -0x70;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        piStack_80 = (int *)0x84a512;
        FUN_0040263d();
        piStack_80 = (int *)0x84a519;
        iStack_78 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_7c = 0x84a523;
        uVar1 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
        iStack_7c = unaff_EBP + -0x70;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        piStack_80 = (int *)0x84a533;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_78 = 0x84a540;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          FUN_00409205();
        }
        iStack_78 = 0x84a556;
        uVar1 = FUN_0087b6ab();
        *(undefined4 *)(unaff_EBP + -0x2c) = uVar1;
        iStack_78 = unaff_EBP + -0x2c;
        iStack_7c = 0x84a56c;
        FUN_0084f2b7();
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
        iStack_78 = 0x84a588;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_78 = 0x84a597;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_78 = 0x84a5a9;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_78 = 0x84a5b4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        iStack_78 = 0x84a5c4;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        iStack_78 = 0x84a5d5;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
    }
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  iStack_78 = 0x84a465;
  FUN_00878dfb();
  FUN_0084a46f();
  return;
}


