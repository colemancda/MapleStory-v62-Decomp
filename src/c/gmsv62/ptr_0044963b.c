/* ptr_0044963b - 0x0044963b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0044963b(void)

{
  int *in_EAX;
  int iVar1;
  int unaff_EBP;
  
  (**(code **)(*in_EAX + 8))();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x60);
  if (iVar1 < 0) {
    FUN_00878dfb(iVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


