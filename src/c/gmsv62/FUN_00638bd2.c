/* FUN_00638bd2 - 0x00638bd2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00638bd2(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  int *piStack_5c;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    piStack_5c = (int *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_60 = 0x638c0a;
    iVar1 = FUN_00639a14();
    if (iVar1 == 0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      piStack_5c = (int *)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_60 = 0x638c2c;
      puVar2 = (undefined4 *)FUN_00679d86();
      piStack_5c = (int *)*puVar2;
      iStack_60 = unaff_EBP + -0x14;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_64 = 0x638c3f;
      FUN_0041354c();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00402676();
      piStack_5c = (int *)0x638c58;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
      piStack_5c = (int *)(unaff_EBP + -0x34);
      iStack_60 = 0x638c67;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        piStack_5c = (int *)0x638c73;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      piStack_5c = (int *)0x638c80;
      FUN_00403191();
      piStack_5c = (int *)0x0;
      iStack_60 = unaff_EBP + -0x34;
      iStack_64 = unaff_EBP + -0x44;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uStack_68 = 0x638c96;
      uVar3 = FUN_00411641();
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_68;
      FUN_004033a1(uVar3);
      iVar1 = unaff_EBP + -0x54;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00405a1d(iVar1);
      FUN_00402660();
      FUN_00404a02(iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_60 = 0x638cc8;
      iVar1 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x18) = iVar1;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar1 != 0) {
        piStack_5c = (int *)0x638cde;
        iVar1 = FUN_00404b30();
        if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
          piStack_5c = (int *)0x638cef;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      piStack_5c = (int *)0x638cfc;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_5c = (int *)0x638d07;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_5c = (int *)0x638d14;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_5c = (int *)0x638d1f;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      piStack_5c = (int *)0x638d2c;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_5c = (int *)0x638d37;
        FUN_00878dfb();
      }
      piStack_5c = *(int **)(unaff_EBP + -0x10);
      *(undefined1 **)(unaff_EBP + -0x1c) = &stack0xffffffa8;
      if (piStack_5c != (int *)0x0) {
        iStack_60 = 0x638d4f;
        (**(code **)(*piStack_5c + 4))();
      }
      piStack_5c = *(int **)(unaff_EBP + 8);
      iStack_60 = 0x638d57;
      iVar1 = FUN_00638480();
      if (iVar1 == 0) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 0x22000006;
        *(undefined4 *)(unaff_EBP + -0x18) = 0x22000006;
        piStack_5c = (int *)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
                    /* WARNING: Subroutine does not return */
        iStack_60 = 0x638d7a;
        __CxxThrowException_8();
      }
      piStack_5c = (int *)(unaff_EBP + 8);
      iStack_60 = 0x638d89;
      FUN_00639a14();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_5c = (int *)0x638d9a;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
    }
    iVar1 = *(int *)(unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (iVar1 != 0) {
      piStack_5c = (int *)0x638db9;
      FUN_00639956();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


