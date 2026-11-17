/* FUN_0042db51 - 0x0042db51 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042db51(void)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int *piStack_1c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (-1 < *(int *)(unaff_EBP + 8)) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    piStack_1c = (int *)0x3d5;
    iStack_20 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_24 = 0x42db8a;
    piVar1 = (int *)FUN_00679d86();
    iStack_20 = *piVar1;
    piStack_1c = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_24 = unaff_EBP + -0x10;
    uStack_28 = 0x42db9d;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_1c = (int *)0x42dbac;
    FUN_00402676();
    piStack_1c = (int *)0xc00614a4;
    *(int **)(unaff_EBP + -0x18) = &iStack_20;
    iStack_24 = 0;
    uStack_28 = 0x42dbbd;
    FUN_00424e0a();
    iStack_24 = 0;
    uStack_28 = 0;
    *(undefined1 **)(unaff_EBP + -0x1c) = auStack_2c;
    FUN_00433bdf(unaff_EBP + 0xc);
    uVar3 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uVar2 = FUN_00411641(0);
    FUN_0042b613(uVar2,uVar3);
    piStack_1c = *(int **)(unaff_EBP + 8);
    iStack_20 = 0x42dbeb;
    FUN_007d4850();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_1c = (int *)0x42dbf7;
    FUN_00402676();
  }
  piStack_1c = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_1c != (int *)0x0) {
    iStack_20 = 0x42dc08;
    (**(code **)(*piStack_1c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


