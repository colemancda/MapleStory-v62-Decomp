/* ptr_00544450 - 0x00544450 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00544450(void)

{
  int iVar1;
  undefined1 unaff_BL;
  int unaff_EBP;
  undefined1 auStack_c [4];
  
  FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = unaff_BL;
  FUN_00414ebb();
  *(undefined1 **)(unaff_EBP + -0x18) = auStack_c;
  FUN_00450368(unaff_EBP + 8);
  iVar1 = FUN_007db791();
  if (iVar1 == 6) {
    FUN_0052af59();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


