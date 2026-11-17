/* ptr_004caee8 - 0x004caee8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004caee8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  
  FUN_00878dfb();
  iVar2 = (**(code **)(*(int *)*unaff_ESI + 0xe0))();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878e09(iVar2);
  }
  uVar3 = FUN_0045e2eb();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
  uVar3 = FUN_0045e2eb();
  iVar2 = *(int *)(unaff_EBP + -0x14);
  uVar3 = FUN_004cb0c5(uVar3);
  *(undefined4 *)(iVar2 + 0x50) = uVar3;
  iVar2 = *(int *)(unaff_EBP + -0x70);
  *(int **)(*(int *)(unaff_EBP + -0x14) + 0x4c) = unaff_EBX;
  iVar1 = *(int *)(unaff_EBP + -0x7c);
  *(int *)(*(int *)(unaff_EBP + -0x14) + 0x40) = iVar2 + iVar1;
  *(int *)(*(int *)(unaff_EBP + -0x14) + 0x54) = iVar1 + -3000;
  *(int **)(*(int *)(unaff_EBP + -0x14) + 0x58) = unaff_EBX;
  *(undefined8 *)(*(int *)(unaff_EBP + -0x14) + 0x60) = 0;
  if (*(int **)(*(int *)(unaff_EBP + -0x14) + 0x30) == unaff_EBX) {
    FUN_004245d2();
  }
  else {
    _memset((void *)(*(int *)(unaff_EBP + -0x14) + 0x80),(int)unaff_EBX,8);
  }
  iVar2 = *(int *)(unaff_EBP + -0x14);
  uVar4 = FUN_0042452b();
  *(uint *)(iVar2 + 0x88) = uVar4 & 0xff;
  *(undefined1 **)(unaff_EBP + 8) = &stack0xfffffff4;
  FUN_004cd4d5();
  FUN_004cb02d();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + -0x28) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0x10) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x24) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  *(undefined ***)(unaff_EBP + -0x6c) = &PTR_FUN_008ea328;
  FUN_004cdcea();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
    FUN_004cd5da();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


