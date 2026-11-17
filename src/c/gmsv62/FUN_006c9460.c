/* FUN_006c9460 - 0x006c9460 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006c9460(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar6;
  undefined4 uVar7;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x20) = extraout_ECX;
  piStack_24 = (int *)0x6c947a;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x20] = 0;
  *extraout_ECX = &PTR_FUN_008efd38;
  extraout_ECX[1] = &PTR_LAB_008efcec;
  extraout_ECX[2] = &PTR_FUN_008efce8;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piStack_24 = (int *)0x9a3;
  iStack_28 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_2c = 0x6c94b6;
  puVar1 = (undefined4 *)FUN_00679d86();
  iStack_28 = *puVar1;
  piStack_24 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_2c = unaff_EBP + -0x10;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_24 = (int *)0x6c94d8;
  FUN_00402676();
  piStack_24 = (int *)(unaff_EBP + -0x1c);
  iStack_28 = 0x6c94e4;
  piVar2 = (int *)FUN_004489f5();
  iVar4 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar4 == 0) {
    piStack_24 = (int *)0x80004003;
    iStack_28 = 0x6c94f8;
    FUN_00878dfb();
  }
  *(int *)(unaff_EBP + 0xc) = *piVar2;
  piStack_24 = (int *)(unaff_EBP + -0x18);
  iStack_28 = 0x6c9509;
  piVar2 = (int *)FUN_004489f5();
  iVar4 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar4 == 0) {
    piStack_24 = (int *)0x80004003;
    iStack_28 = 0x6c951d;
    FUN_00878dfb();
  }
  piStack_24 = (int *)0x0;
  iStack_28 = 1;
  iStack_2c = 10;
  *(int *)(unaff_EBP + -0x14) = *piVar2;
  uVar7 = 0x74;
  uVar6 = 0x10a;
  piVar2 = (int *)(*(int *)(unaff_EBP + 8) + 4);
  iVar3 = FUN_0042fb34(0x10a,0x74);
  iVar4 = (**(code **)(*piVar2 + 0x30))();
  iVar4 = iVar3 / 2 + -0x2a + iVar4;
  iVar3 = FUN_0042fb0a(iVar4);
  iVar5 = (**(code **)(*piVar2 + 0x2c))();
  _OOBECompleteWnfWaitCallback_28(iVar3 / 2 + -0x85 + iVar5,iVar4,uVar6,uVar7);
  piStack_24 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piStack_24 != (int *)0x0) {
    iStack_28 = 0x6c9585;
    (**(code **)(*piStack_24 + 8))();
  }
  piStack_24 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_24 != (int *)0x0) {
    iStack_28 = 0x6c9596;
    (**(code **)(*piStack_24 + 8))();
  }
  piStack_24 = (int *)0x0;
  iStack_28 = 0;
  iStack_2c = 0x6c95a2;
  uVar6 = FUN_00411641();
  *(int **)(unaff_EBP + 8) = &iStack_2c;
  FUN_004033a1(uVar6);
  FUN_008163ca();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_24 = (int *)0x6c95c1;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


