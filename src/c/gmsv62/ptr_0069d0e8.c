/* ptr_0069d0e8 - 0x0069d0e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0069d0e8(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  code *unaff_EDI;
  undefined4 uVar3;
  int iStack_10;
  undefined4 uStack_c;
  int iStack_8;
  
  (*unaff_EDI)();
  iStack_8 = unaff_EBP + -0x48;
  uStack_c = 0x69d0f4;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_8 = 0x69d100;
    FUN_00878dfb();
  }
  iStack_8 = unaff_EBP + -0x48;
  iStack_10 = unaff_EBP + -0x20;
  uStack_c = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  uStack_c = 0x69d124;
  uStack_c = FUN_00449749();
  iStack_10 = 0x69d12d;
  uVar2 = FUN_00449713();
  *(int **)(unaff_EBP + -0x28) = &iStack_10;
  FUN_00448a17(uVar2);
  uVar3 = 0x79;
  uVar2 = 0x19;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_004115d9(0x19,0x79);
  FUN_00448e3a(uVar2,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    iStack_8 = 0x69d161;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_8 = 0x69d16e;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_8 = 0x69d179;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_8 = 0x69d186;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_8 = 0x69d191;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_8 = 0x69d1ae;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


