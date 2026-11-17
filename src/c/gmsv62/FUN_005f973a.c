/* FUN_005f973a - 0x005f973a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f973a(void)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  uint uStack_1c;
  undefined4 uStack_18;
  
  FUN_00879bb8();
  uStack_18 = 0x5f9753;
  uVar2 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0xac4) = uVar2 & 0xff;
  if ((uVar2 & 0xff) == 1) {
    uStack_18 = 6;
    *(uint **)(unaff_EBP + -0x10) = &uStack_1c;
    FUN_00679d86(&uStack_1c,0x1d4);
    FUN_005c152d();
    uStack_18 = 0x61d;
    uStack_1c = unaff_EBP - 0x10;
    puVar3 = (uint *)FUN_00679d86();
    uStack_1c = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_18 = 100;
    FUN_007d40d5();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    uStack_18 = 0x5f97b9;
    bVar1 = FUN_0042452b();
    uStack_1c = (uint)bVar1;
    *(uint *)(extraout_ECX + 0xac0) = uStack_1c;
    if (uStack_1c == *(uint *)(extraout_ECX + 0xc0)) {
      iVar4 = *(int *)(extraout_ECX + 0xa94);
    }
    else {
      iVar4 = 3 - *(int *)(extraout_ECX + 0xa94);
    }
    uStack_18 = 6;
    *(int *)(extraout_ECX + 0xa98) = iVar4;
    if (uStack_1c == *(uint *)(extraout_ECX + 0xc0)) {
      *(uint **)(unaff_EBP + -0x10) = &uStack_1c;
      FUN_00679d86(&uStack_1c,0x1d3);
      FUN_005c152d();
      uStack_18 = 0x61e;
      uStack_1c = unaff_EBP - 0x10;
      *(undefined4 *)(extraout_ECX + 0xa94) = 2;
      puVar3 = (uint *)FUN_00679d86();
      uStack_1c = *puVar3;
      uStack_18 = 100;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      FUN_007d40d5();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      *(uint **)(unaff_EBP + -0x10) = &uStack_1c;
      FUN_00679d86(&uStack_1c,0x1d5);
      FUN_005c152d();
      uStack_18 = 0x61f;
      uStack_1c = unaff_EBP - 0x14;
      *(undefined4 *)(extraout_ECX + 0xa94) = 1;
      puVar3 = (uint *)FUN_00679d86();
      uStack_1c = *puVar3;
      uStack_18 = 100;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_007d40d5();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
  }
  uStack_18 = 0x5f988c;
  FUN_00402676();
  uStack_18 = *(undefined4 *)(unaff_EBP + 8);
  uStack_1c = 0x5f989a;
  FUN_004b6451();
  uStack_18 = *(undefined4 *)(unaff_EBP + 8);
  uStack_1c = 0x5f98a8;
  FUN_004b6451();
  *(undefined4 *)(extraout_ECX + 0xaa8) = 0;
  uStack_18 = 0;
  *(undefined4 *)(extraout_ECX + 0xaa0) = 2;
  uStack_1c = 0x5f98be;
  FUN_008161f1();
  uStack_18 = 0x5f98c5;
  FUN_005fe2a8();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


