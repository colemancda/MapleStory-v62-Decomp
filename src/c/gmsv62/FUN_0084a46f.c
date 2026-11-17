/* FUN_0084a46f - 0x0084a46f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084a46f(void)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_EBX;
  int unaff_EBP;
  int iStack_8;
  
  *(int **)(unaff_EBP + -4) = unaff_EBX;
  if (*(int **)(unaff_EBP + -0x14) == unaff_EBX) {
    FUN_004027eb();
  }
  else {
    iStack_8 = 0x84a48f;
    FUN_00404960();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_8 = 0x84a49c;
    FUN_004035f5();
    FUN_004027b3();
    iStack_8 = 0x84a4ae;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
    *(undefined1 *)(unaff_EBP + -4) = 10;
    *(int **)(unaff_EBP + -0x24) = unaff_EBX;
    while( true ) {
      if (*(int **)(unaff_EBP + -0x1c) == unaff_EBX) {
        iStack_8 = 0x84a4c4;
        FUN_00878dfb();
      }
      iStack_8 = unaff_EBP + -0x40;
      iVar1 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0xc))(*(int **)(unaff_EBP + -0x1c),1);
      if (iVar1 != 0) break;
      iStack_8 = unaff_EBP + -0x18;
      iVar1 = unaff_EBP + -0x40;
      FUN_00405a23();
      iStack_8 = iVar1;
      *(int **)(unaff_EBP + -0x30) = &iStack_8;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_004059fd(unaff_EBP + -0x18);
      iVar1 = unaff_EBP + -0x70;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_0040263d(iVar1);
      iStack_8 = FUN_004048a4(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      uVar2 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x28) = uVar2;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x70);
      if (iVar1 < (int)unaff_EBX) {
        iStack_8 = 0x84a540;
        FUN_00878dfb();
      }
      if (*(int **)(unaff_EBP + -0x18) != unaff_EBX) {
        FUN_00409205();
      }
      iStack_8 = 0x84a556;
      uVar2 = FUN_0087b6ab();
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar2;
      iStack_8 = unaff_EBP + -0x2c;
      FUN_0084f2b7();
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (*(int **)(unaff_EBP + -0x18) != unaff_EBX) {
        FUN_004030b1();
        *(int **)(unaff_EBP + -0x18) = unaff_EBX;
      }
      iStack_8 = 0x84a588;
      iVar1 = FUN_00402bc3();
      if (iVar1 < (int)unaff_EBX) {
        iStack_8 = 0x84a597;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_8 = 0x84a5a9;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      iStack_8 = 0x84a5b4;
      FUN_00878dfb();
    }
    *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
    if (*(int **)(unaff_EBP + -0x1c) != unaff_EBX) {
      iStack_8 = 0x84a5c4;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
      iStack_8 = 0x84a5d5;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


