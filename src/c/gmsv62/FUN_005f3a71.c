/* FUN_005f3a71 - 0x005f3a71 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_005f3a71(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *extraout_ECX;
  int *piVar4;
  int unaff_EBP;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  int *piStack_94;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  iVar2 = *(int *)(unaff_EBP + 8);
  piStack_94 = (int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x18) = iVar2;
  iStack_98 = 0x5f3aa4;
  FUN_005f58ea();
  if ((iVar2 != 0) && (*(int *)(unaff_EBP + -0x28) == 0)) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    piStack_94 = (int *)(unaff_EBP + -0x1c);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_98 = 0x5f3ad1;
    puVar1 = (undefined4 *)FUN_00679d86();
    piStack_94 = (int *)*puVar1;
    iStack_98 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_9c = 0x5f3ae2;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00402676();
    piStack_94 = (int *)0x5f3aff;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_94 = (int *)0x5f3b0c;
    FUN_00403191();
    piStack_94 = (int *)0x0;
    iStack_98 = unaff_EBP + -0x5c;
    iStack_9c = unaff_EBP + -0x4c;
    *(undefined4 **)(unaff_EBP + -0x20) = &uStack_a0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00679e4e(&uStack_a0,0x684);
    iVar2 = unaff_EBP + -0x7c;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_98 = 0x5f3b53;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x1c) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar2 != 0) {
      piStack_94 = (int *)0x5f3b6e;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_94 = (int *)0x5f3b7c;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_94 = (int *)0x5f3b89;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_94 = (int *)0x5f3b94;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_94 = (int *)0x5f3ba1;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_94 = (int *)0x5f3bac;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_94 = (int *)0x5f3bb9;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_94 = (int *)0x5f3bc4;
      FUN_00878dfb();
    }
    piStack_94 = (int *)0x5f3bce;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    piStack_94 = (int *)(unaff_EBP + -0x3c);
    iStack_98 = 0x5f3bd8;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      piStack_94 = (int *)0x5f3be4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_94 = (int *)0x5f3bf1;
    FUN_00403191();
    piStack_94 = (int *)0x0;
    iStack_98 = unaff_EBP + -0x3c;
    iStack_9c = unaff_EBP + -0x6c;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    uStack_a0 = 0x5f3c07;
    uVar3 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_a0;
    FUN_004033a1(uVar3);
    iVar2 = unaff_EBP + -0x8c;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_98 = 0x5f3c3c;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar2 != 0) {
      piStack_94 = (int *)0x5f3c52;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_94 = (int *)0x5f3c60;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    piStack_94 = (int *)0x5f3c70;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_94 = (int *)0x5f3c7b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    piStack_94 = (int *)0x5f3c88;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_94 = (int *)0x5f3c93;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_94 = (int *)0x5f3ca0;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_94 = (int *)0x5f3cab;
      FUN_00878dfb();
    }
    piVar4 = *(int **)(unaff_EBP + -0x10);
    piStack_94 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff70;
    if (piStack_94 != (int *)0x0) {
      iStack_98 = 0x5f3cc3;
      (**(code **)(*piStack_94 + 4))();
      piVar4 = extraout_ECX;
    }
    iStack_98 = unaff_EBP + -0x14;
    *(int ***)(unaff_EBP + -0x24) = &piStack_94;
    iStack_9c = 0x5f3cd2;
    piStack_94 = piVar4;
    FUN_00424dbc();
    uVar3 = *(undefined4 *)(unaff_EBP + 8);
    iStack_9c = 0x5f3cdb;
    iStack_98 = uVar3;
    iVar2 = FUN_005f3d66();
    if (iVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x24) = 0x22000006;
      *(undefined4 *)(unaff_EBP + 8) = 0x22000006;
      piStack_94 = (int *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
                    /* WARNING: Subroutine does not return */
      iStack_98 = 0x5f3cff;
      __CxxThrowException_8();
    }
    piStack_94 = (int *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + 8) = uVar3;
    iStack_98 = 0x5f3d14;
    FUN_005f58ea();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      piStack_94 = (int *)0x5f3d25;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      piStack_94 = (int *)0x5f3d36;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
  }
  iVar2 = *(int *)(unaff_EBP + -0x28);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (iVar2 != 0) {
    piStack_94 = (int *)0x5f3d55;
    FUN_005f57ed();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


