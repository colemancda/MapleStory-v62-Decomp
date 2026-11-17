/* FUN_005b190a - 0x005b190a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b190a(void)

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
  uStack_18 = 0x5b192a;
  FUN_004b8b70();
  uStack_18 = *(undefined4 *)(unaff_EBP + 0xc);
  iStack_1c = 0x5b1939;
  FUN_004b6451();
  *(undefined4 *)(extraout_ECX + 0x710) = 0;
  if (*(int *)(extraout_ECX + 0xcc) == 0) {
    uStack_18 = 1;
    iStack_1c = 0x5b195b;
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x1ac) + 4) + 0x24))();
  }
  uStack_18 = 0;
  iStack_1c = 0x5b1963;
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
  uStack_18 = 0x5b19b6;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_18 = 0x5b19c1;
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
  uStack_18 = 0x5b1a0e;
  FUN_00402676();
  *(undefined4 *)(extraout_ECX + 0x7e8) = 1;
  uStack_18 = 0x5b1a1d;
  iVar3 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(int *)(extraout_ECX + 0x7ec) = iVar3 + 3000;
  uStack_18 = 0x5b1a34;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


