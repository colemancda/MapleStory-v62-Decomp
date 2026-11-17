/* ptr_0078a07d - 0x0078a07d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0078a07d(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  int unaff_ESI;
  int iStack_8;
  int iStack_4;
  
  iStack_8 = unaff_EBP + 0xc;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  if (*(int *)(unaff_ESI + 0x554) == 0xb) {
    iStack_4 = unaff_EBP + -0x14;
    iStack_8 = 0x78a0c1;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_4 = 0x78a0ce;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
  }
  iStack_4 = *(undefined4 *)(unaff_ESI + 0x568);
  iStack_8 = 0x78a0ee;
  uVar1 = FUN_00411641();
  *(int **)(unaff_EBP + -0x18) = &iStack_8;
  iStack_8 = extraout_ECX;
  FUN_004033a1(uVar1);
  FUN_008163ca();
  iVar2 = *(int *)(unaff_ESI + 0x558);
  if (iVar2 == 0) goto LAB_0078a1fb;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (iVar2 == 1) {
    iStack_4 = unaff_EBP + -0x18;
    iStack_8 = 0x78a184;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_4 = 0x78a191;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 4;
LAB_0078a198:
    FUN_00402676();
  }
  else {
    if (iVar2 == 2) {
      iStack_4 = unaff_EBP + -0x10;
      iStack_8 = 0x78a15e;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_4 = 0x78a16b;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      goto LAB_0078a198;
    }
    if (iVar2 == 3) {
      iStack_4 = unaff_EBP + -0x14;
      iStack_8 = 0x78a138;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_4 = 0x78a145;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      goto LAB_0078a198;
    }
  }
  iStack_4 = 0x78a1ac;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_4 = 0x78a1cf;
  FUN_00450382();
  iStack_4 = 2;
  iStack_8 = *(int *)(unaff_ESI + 0x560);
  (**(code **)(**(int **)(unaff_ESI + 0x68) + 0x20))();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
LAB_0078a1fb:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


