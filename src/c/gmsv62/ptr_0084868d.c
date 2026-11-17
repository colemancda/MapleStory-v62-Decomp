/* ptr_0084868d - 0x0084868d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0084868d(void)

{
  int iVar1;
  int unaff_EBX;
  int unaff_EBP;
  
  FUN_00471777();
  FUN_004150c0();
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00434e21(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (*(int *)(unaff_EBP + -0x40) != unaff_EBX) {
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (*(int *)(unaff_EBP + -0x10) != unaff_EBX) {
    FUN_00434e38();
  }
  FUN_00471102();
  *(int *)(unaff_EBP + -0x14) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00415015();
  iVar1 = FUN_00471a4c();
  FUN_004150c0();
  if (iVar1 != unaff_EBX) {
    FUN_00471102();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (*(int *)(unaff_EBP + -0x14) != unaff_EBX) {
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x18) != unaff_EBX) {
    FUN_00434e38();
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  FUN_0046575e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


