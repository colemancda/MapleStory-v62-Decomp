/* ptr_0085605a - 0x0085605a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0085605a(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  uVar1 = FUN_00679d22(unaff_EBP + -0x98,0xc8a);
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  FUN_004655d4(0xffffffff);
  FUN_00414f8b(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  if (*(int *)(unaff_EBP + -0x98) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x98) + -0xc);
  }
  FUN_00856a7c(unaff_EBP + -0x10,0x1eab97);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0045f10c();
  if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 2)) {
    FUN_0077e45e();
  }
  if (DAT_00978358 != 0) {
    FUN_007b02be();
  }
  if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 3)) {
    FUN_0077e45e();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


