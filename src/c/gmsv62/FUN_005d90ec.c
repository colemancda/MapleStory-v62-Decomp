/* FUN_005d90ec - 0x005d90ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_005d90ec(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int *piStack_58;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  piStack_58 = (int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  iStack_5c = 0x5d911c;
  FUN_005dd1f2();
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    piStack_58 = (int *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_5c = 0x5d913f;
    puVar2 = (undefined4 *)FUN_00679d86();
    piStack_58 = (int *)*puVar2;
    iStack_5c = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_60 = 0x5d9150;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00402676();
    piStack_58 = (int *)0x5d9169;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    piStack_58 = (int *)(unaff_EBP + -0x30);
    iStack_5c = 0x5d9178;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_58 = (int *)0x5d9184;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_58 = (int *)0x5d9191;
    FUN_00403191();
    piStack_58 = (int *)0x0;
    iStack_5c = unaff_EBP + -0x30;
    iStack_60 = unaff_EBP + -0x40;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_64 = 0x5d91a7;
    uVar4 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_64;
    FUN_004033a1(uVar4);
    iVar3 = unaff_EBP + -0x50;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00405a1d(iVar3);
    FUN_00402660();
    FUN_00404a02(iVar3);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_5c = 0x5d91d9;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x14) = iVar3;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if (iVar3 != 0) {
      piStack_58 = (int *)0x5d91ef;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_58 = (int *)0x5d9200;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_58 = (int *)0x5d920d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_58 = (int *)0x5d9218;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_58 = (int *)0x5d9225;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_58 = (int *)0x5d9230;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_58 = (int *)0x5d923d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_58 = (int *)0x5d9248;
      FUN_00878dfb();
    }
    piStack_58 = *(int **)(unaff_EBP + 8);
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffffac;
    if (piStack_58 != (int *)0x0) {
      iStack_5c = 0x5d9260;
      (**(code **)(*piStack_58 + 4))();
    }
    iStack_5c = 0x5d9266;
    piStack_58 = (int *)uVar1;
    iVar3 = FUN_005d92df();
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0x22000006;
      *(undefined4 *)(unaff_EBP + -0x14) = 0x22000006;
      piStack_58 = (int *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
                    /* WARNING: Subroutine does not return */
      iStack_5c = 0x5d9289;
      __CxxThrowException_8();
    }
    piStack_58 = (int *)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
    iStack_5c = 0x5d929e;
    FUN_005dd1f2();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      piStack_58 = (int *)0x5d92af;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
  }
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (iVar3 != 0) {
    piStack_58 = (int *)0x5d92ce;
    FUN_005dd104();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


