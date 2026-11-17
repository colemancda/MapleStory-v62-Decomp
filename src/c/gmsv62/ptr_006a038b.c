/* ptr_006a038b - 0x006a038b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a038b(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x48) = **(undefined4 **)(unaff_EBP + -0x10);
  if (*(int *)(unaff_EBP + -0x14) != unaff_EBX) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0x32;
  *(int *)(unaff_EBP + -0x28) = unaff_EBX;
  iVar1 = FUN_004029b9(0xb8);
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 == unaff_EBX) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004a0726();
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  FUN_0045e196(uVar2);
  (**(code **)(**(int **)(unaff_ESI + 0x7c) + 8))();
  FUN_008164fd(*(undefined4 *)(unaff_ESI + 0x7c));
  *(int *)(unaff_EBP + -0x18) = unaff_EBX;
  *(int *)(unaff_EBP + -0x20) = unaff_EBX;
  *(int *)(unaff_EBP + -0x1c) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(int *)(unaff_EBP + -0x24) = unaff_EBX;
  uVar2 = FUN_00679d86(unaff_EBP + -0x14,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar1 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 == unaff_EBX) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar2);
  (**(code **)(**(int **)(unaff_ESI + 0x84) + 0x20))();
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045c14e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


