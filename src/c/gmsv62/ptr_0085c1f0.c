/* ptr_0085c1f0 - 0x0085c1f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0085c1f0(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 uStack_8;
  
  FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_8 = 0x85c217;
  FUN_0045cdbc();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_8 = 0x85c224;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  uStack_8 = 0x85c23c;
  FUN_0085cb0e();
  uStack_8 = 0x85c24b;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 != 0) {
    FUN_004defeb();
  }
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_8;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450368(unaff_EBP + 8);
  FUN_004e0fa1();
  uStack_8 = 0x85c286;
  FUN_008497ad();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


