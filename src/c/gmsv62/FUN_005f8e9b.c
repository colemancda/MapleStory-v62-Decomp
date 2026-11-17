/* FUN_005f8e9b - 0x005f8e9b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f8e9b(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  int iStack_1c;
  undefined4 uStack_18;
  
  FUN_00879bb8();
  uStack_18 = 0x5f8ebb;
  FUN_004b8b70();
  uStack_18 = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_1c = 0x5f8eca;
  FUN_004b6451();
  *(undefined4 *)(extraout_ECX + 0xaa8) = 0;
  if (*(int *)(extraout_ECX + 0xcc) == 0) {
    uStack_18 = 1;
    iStack_1c = 0x5f8eec;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x1ac) + 4) + 0x24))();
  }
  uStack_18 = 0;
  iStack_1c = 0x5f8ef4;
  FUN_008161f1();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  uStack_18 = 1;
  iStack_1c = unaff_EBP + -0x14;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_005b1a45();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar1;
  uStack_18 = 0x1c3;
  iStack_1c = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piVar2 = (int *)FUN_00679d22();
  uStack_18 = **(undefined4 **)(unaff_EBP + 0xc);
  iStack_1c = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00434e21(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_18 = 0x5f8f47;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_18 = 0x5f8f52;
  FUN_00414ebb();
  uStack_18 = 6;
  *(int **)(unaff_EBP + 0xc) = &iStack_1c;
  uVar4 = 0xffffffff;
  uVar1 = FUN_00449713(0xffffffff);
  FUN_004dbb20(uVar1,uVar4);
  FUN_005c152d();
  uStack_18 = 0x61a;
  iStack_1c = unaff_EBP + 0xc;
  piVar2 = (int *)FUN_00679d86();
  iStack_1c = *piVar2;
  uStack_18 = 100;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_007d40d5();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_18 = 0x5f8f9f;
  FUN_00402676();
  *(undefined4 *)(extraout_ECX + 0xab0) = 1;
  uStack_18 = 0x5f8fae;
  iVar3 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(int *)(extraout_ECX + 0xacc) = iVar3 + 3000;
  uStack_18 = 0x5f8fc5;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


