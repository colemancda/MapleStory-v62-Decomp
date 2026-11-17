/* ptr_0084818b - 0x0084818b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0084818b(void)

{
  undefined4 uVar1;
  undefined4 in_EAX;
  undefined4 *puVar2;
  int unaff_EBX;
  int unaff_EBP;
  
  puVar2 = (undefined4 *)FUN_00679d22(in_EAX);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00434e21(unaff_EBP + -0x10,uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  if (DAT_0097951c != unaff_EBX) {
    FUN_0042459a();
    FUN_007667e0();
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  FUN_00414ebb();
  FUN_00471102(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


