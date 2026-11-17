/* ptr_00495345 - 0x00495345 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00495345(void)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00419192(in_EAX);
  uVar4 = (undefined1)unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = uVar4;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar1 == unaff_EBX) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = uVar4;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(unaff_ESI + 0x70) + 0x20))();
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x505);
  uVar2 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00499493(uVar2,1,1);
  *(undefined1 *)(unaff_EBP + -4) = uVar4;
  FUN_00402676();
  uVar2 = FUN_00679d86(unaff_EBP + 8,0x4d1);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = uVar4;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + 8) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 == unaff_EBX) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = uVar4;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(unaff_ESI + 0x78) + 0x20))();
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x506);
  uVar2 = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00499493(uVar2,1,1);
  *(undefined1 *)(unaff_EBP + -4) = uVar4;
  FUN_00402676();
  uVar2 = FUN_00679d86(unaff_EBP + 8,0x4d2);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = uVar4;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar1 == unaff_EBX) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = uVar4;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(unaff_ESI + 0x80) + 0x20))();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


