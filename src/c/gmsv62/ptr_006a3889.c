/* ptr_006a3889 - 0x006a3889 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a3889(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uVar1 = FUN_00679d86(unaff_EBP + -0x14,0x1112);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(unaff_ESI + 0x88) + 0x20))();
  uVar1 = FUN_00679d86(unaff_EBP + -0x14,0x1113);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(unaff_ESI + 0x90) + 0x20))();
  FUN_008164fd(*(undefined4 *)(unaff_ESI + 0x78));
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00608bf3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045c14e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


