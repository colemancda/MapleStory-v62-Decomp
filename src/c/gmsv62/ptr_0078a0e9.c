/* ptr_0078a0e9 - 0x0078a0e9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0078a0e9(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  undefined4 uStack_4;
  
  uStack_4 = 0x78a0ee;
  uVar1 = FUN_00411641();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_4;
  uStack_4 = extraout_ECX;
  FUN_004033a1(uVar1);
  FUN_008163ca();
  iVar2 = *(int *)(unaff_ESI + 0x558);
  if (iVar2 == unaff_EBX) goto LAB_0078a1fb;
  *(int *)(unaff_EBP + -0x20) = unaff_EBX;
  *(int *)(unaff_EBP + -0x28) = unaff_EBX;
  *(int *)(unaff_EBP + -0x24) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(int *)(unaff_EBP + -0x2c) = unaff_EBX;
  if (iVar2 == 1) {
    uStack_4 = 0x78a184;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 4;
LAB_0078a198:
    FUN_00402676();
  }
  else {
    if (iVar2 == 2) {
      uStack_4 = 0x78a15e;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      goto LAB_0078a198;
    }
    if (iVar2 == 3) {
      uStack_4 = 0x78a138;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      goto LAB_0078a198;
    }
  }
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 != unaff_EBX) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450382();
  uStack_4 = *(undefined4 *)(unaff_ESI + 0x560);
  (**(code **)(**(int **)(unaff_ESI + 0x68) + 0x20))();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
LAB_0078a1fb:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


