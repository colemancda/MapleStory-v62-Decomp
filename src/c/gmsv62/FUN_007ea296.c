/* FUN_007ea296 - 0x007ea296 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ea296(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0064961c();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iVar3 = *(int *)(extraout_ECX + 0xa4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 != 0) {
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x8b9);
    *(undefined4 *)(unaff_EBP + -0x10) = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x8b0);
    uVar4 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_007e6c97(unaff_EBP + -0x1c,uVar4,*(undefined4 *)(unaff_EBP + -0x10));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar3 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00450382(uVar4);
    iVar3 = *(int *)(extraout_ECX + 0x1c);
    iVar1 = *(int *)(extraout_ECX + 0x8c);
    *(int *)(unaff_EBP + -0x10) = iVar3 + -0x84;
    if (iVar1 != 0) {
      *(int *)(unaff_EBP + -0x10) = iVar3 + -0x8c;
    }
    (**(code **)(**(int **)(extraout_ECX + 0x644) + 0x20))
              (extraout_ECX,0x2000,*(undefined4 *)(unaff_EBP + -0x10),
               *(int *)(extraout_ECX + 0x20) + -0x4d,0,unaff_EBP + -0x28);
    uVar4 = FUN_007eec01(0xffffffff);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    FUN_00450479();
    FUN_00450463();
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4) = *(undefined4 *)(extraout_ECX + 0x644);
  }
  if (*(int *)(extraout_ECX + 0xa8) == 0) {
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x8bb);
    *(undefined4 *)(unaff_EBP + -0x18) = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x8b0);
    uVar4 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_007e6c97(unaff_EBP + -0x1c,uVar4,*(undefined4 *)(unaff_EBP + -0x18));
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar3 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00450382(uVar4);
    (**(code **)(**(int **)(extraout_ECX + 0x64c) + 0x20))
              (extraout_ECX,1,*(int *)(extraout_ECX + 0x1c) + -0x36,
               *(int *)(extraout_ECX + 0x20) + -0x1a,0,unaff_EBP + -0x28);
  }
  else {
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x8ba);
    *(undefined4 *)(unaff_EBP + -0x18) = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x8b0);
    uVar4 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_007e6c97(unaff_EBP + -0x1c,uVar4,*(undefined4 *)(unaff_EBP + -0x18));
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar3 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00450382(uVar4);
    iVar3 = *(int *)(extraout_ECX + 0x1c);
    iVar1 = *(int *)(extraout_ECX + 0x8c);
    *(int *)(unaff_EBP + -0x10) = iVar3 + -0x4e;
    if (iVar1 != 0) {
      *(int *)(unaff_EBP + -0x10) = iVar3 + -0x56;
    }
    (**(code **)(**(int **)(extraout_ECX + 0x64c) + 0x20))
              (extraout_ECX,0x2001,*(undefined4 *)(unaff_EBP + -0x10),
               *(int *)(extraout_ECX + 0x20) + -0x4d,0,unaff_EBP + -0x28);
    uVar4 = FUN_007eec01(0xffffffff);
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    FUN_00450479();
    FUN_00450463();
    *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4) = *(undefined4 *)(extraout_ECX + 0x64c);
  }
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x8bd);
  *(undefined4 *)(unaff_EBP + -0x18) = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x8b0);
  uVar4 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_007e6c97(unaff_EBP + -0x1c,uVar4,*(undefined4 *)(unaff_EBP + -0x18));
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x18) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x654) + 0x20))
            (extraout_ECX,2,9,*(int *)(extraout_ECX + 0x20) + -0x1a,0,unaff_EBP + -0x28);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


