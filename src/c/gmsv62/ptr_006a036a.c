/* ptr_006a036a - 0x006a036a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a036a(void)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x54) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xff000000;
  uVar1 = FUN_00679e4e(in_EAX);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar1;
  FUN_00408b49();
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x48) = **(undefined4 **)(unaff_EBP + -0x10);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_004030b1();
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0x32;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 != 0) {
    FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e196();
  (**(code **)(**(int **)(unaff_ESI + 0x7c) + 8))();
  FUN_008164fd(*(undefined4 *)(unaff_ESI + 0x7c));
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  uVar1 = FUN_00679d86(unaff_EBP + -0x14,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(unaff_ESI + 0x84) + 0x20))();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045c14e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


