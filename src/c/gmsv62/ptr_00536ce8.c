/* ptr_00536ce8 - 0x00536ce8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00536ce8(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  int unaff_EBP;
  
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_0049e176();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00414ebb();
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_0049e176();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00414ebb();
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_0049e176();
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 1;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00402676();
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (iVar2 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iVar2 = FUN_00450382();
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  uVar3 = FUN_00679d86(unaff_EBP + -0x10,0x4ee);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iVar2 = FUN_00450382(uVar3);
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))();
  FUN_008164fd(*(undefined4 *)(unaff_EBX + 0xb4));
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00402676();
  if (*(int *)(unaff_EBP + -0xcc) != 0) {
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0xcc) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045c14e();
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


