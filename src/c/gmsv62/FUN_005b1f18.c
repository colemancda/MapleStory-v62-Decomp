/* FUN_005b1f18 - 0x005b1f18 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b1f18(void)

{
  uint uVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_18;
  undefined4 uStack_14;
  
  FUN_00879bb8();
  uStack_14 = 0x5b1f30;
  uVar1 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0x72c) = uVar1 & 0xff;
  if ((uVar1 & 0xff) == 1) {
    uStack_14 = 6;
    *(int **)(unaff_EBP + -0x10) = &iStack_18;
    FUN_00679d86(&iStack_18,0x1d4);
    FUN_005c152d();
    uStack_14 = 0x61d;
    iStack_18 = unaff_EBP + -0x10;
    piVar2 = (int *)FUN_00679d86();
    iStack_18 = *piVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_14 = 100;
    FUN_007d40d5();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    uStack_14 = 0x5b1f93;
    uVar1 = FUN_0042452b();
    uStack_14 = 6;
    *(uint *)(extraout_ECX + 0x728) = uVar1 & 0xff;
    if ((uVar1 & 0xff) == *(uint *)(extraout_ECX + 0xc0)) {
      *(int **)(unaff_EBP + -0x10) = &iStack_18;
      FUN_00679d86(&iStack_18,0x1d3);
      FUN_005c152d();
      uStack_14 = 0x61e;
      iStack_18 = unaff_EBP + -0x10;
      piVar2 = (int *)FUN_00679d86();
      iStack_18 = *piVar2;
      uStack_14 = 100;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      FUN_007d40d5();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      *(int **)(unaff_EBP + -0x10) = &iStack_18;
      FUN_00679d86(&iStack_18,0x1d5);
      FUN_005c152d();
      uStack_14 = 0x61f;
      iStack_18 = unaff_EBP + -0x14;
      piVar2 = (int *)FUN_00679d86();
      iStack_18 = *piVar2;
      uStack_14 = 100;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_007d40d5();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
  }
  uStack_14 = 0x5b203c;
  FUN_00402676();
  uStack_14 = *(undefined4 *)(unaff_EBP + 8);
  iStack_18 = 0x5b204a;
  FUN_004b6451();
  uStack_14 = *(undefined4 *)(unaff_EBP + 8);
  iStack_18 = 0x5b2058;
  FUN_004b6451();
  *(undefined4 *)(extraout_ECX + 0x710) = 0;
  uStack_14 = 0;
  *(undefined4 *)(extraout_ECX + 0x708) = 2;
  iStack_18 = 0x5b2072;
  FUN_008161f1();
  uStack_14 = 0x5b2079;
  FUN_005b9c24();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


