/* FUN_00820a6f - 0x00820a6f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00820a6f(void)

{
  short *psVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  int *piStack_60;
  
  FUN_00879bb8();
  psVar1 = *(short **)(extraout_ECX + 0x74);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffa8;
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    piStack_60 = (int *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_64 = 0x820aba;
    puVar2 = (undefined4 *)FUN_00679d86();
    piStack_60 = (int *)*puVar2;
    iStack_64 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_68 = 0x820acd;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00402676();
    piStack_60 = (int *)0x820ae8;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
    piStack_60 = (int *)(unaff_EBP + -0x48);
    iStack_64 = 0x820af7;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_60 = (int *)0x820b03;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_60 = (int *)0x820b0d;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    piStack_60 = (int *)(unaff_EBP + -0x38);
    iStack_64 = 0x820b17;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      piStack_60 = (int *)0x820b23;
      FUN_00878dfb();
    }
    piStack_60 = (int *)0x0;
    iStack_64 = unaff_EBP + -0x48;
    iStack_68 = unaff_EBP + -0x38;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_6c = 0x820b39;
    uVar4 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_6c;
    FUN_004033a1(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00405a1d();
    FUN_00402660();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00404a02(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_64 = 0x820b6f;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x20) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar3 != 0) {
      piStack_60 = (int *)0x820b85;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_60 = (int *)0x820b96;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    piStack_60 = (int *)0x820ba3;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_60 = (int *)0x820bae;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_60 = (int *)0x820bbb;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_60 = (int *)0x820bc6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_60 = (int *)0x820bd3;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_60 = (int *)0x820bde;
      FUN_00878dfb();
    }
    piStack_60 = (int *)(unaff_EBP + -0x24);
    iStack_64 = 0x820bf1;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_60 = (int *)0x820bfc;
    FUN_007d3cdd();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00402676();
    piStack_60 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 **)(unaff_EBP + -0x28) = &stack0xffffffa4;
    if (piStack_60 != (int *)0x0) {
      iStack_64 = 0x820c21;
      (**(code **)(*piStack_60 + 4))();
    }
    piStack_60 = (int *)0x820c29;
    FUN_0081cdd9();
    piStack_60 = (int *)0x820c32;
    FUN_008161f1();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      piStack_60 = (int *)0x820c43;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


