/* FUN_00540f5f - 0x00540f5f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00540f5f(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x7c) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_00679d86(unaff_EBP + 8,0x1164);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x68) + 0x20))
            (extraout_ECX,1000,0xf0,10,0,unaff_EBP + -0x20);
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x504);
  uVar1 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00499493(uVar1,1,1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  uVar1 = FUN_00679d86(unaff_EBP + 8,0x1165);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + 8) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x70) + 0x20))
            (extraout_ECX,0x3e9,300,10,0,unaff_EBP + -0x20);
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x505);
  uVar1 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00499493(uVar1,1,1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  uVar1 = FUN_00679d86(unaff_EBP + 8,0x4d2);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(extraout_ECX + 0x78) + 0x20))
            (extraout_ECX,0x3ea,0x179,7,0,unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


