/* ptr_0044f2e8 - 0x0044f2e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0044f2e8(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_EDI;
  
  (**(code **)(in_EAX + 0x20))();
  uVar1 = FUN_00679d86(unaff_EBP + -0x1c,0xd32);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x20) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(unaff_EDI + 0x580) + 0x20))();
  uVar1 = FUN_00679d86(unaff_EBP + -0x20,0xd33);
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00450382(uVar1);
  (**(code **)(**(int **)(unaff_EDI + 0x588) + 0x20))();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


