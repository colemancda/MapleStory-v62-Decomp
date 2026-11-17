/* ptr_0085652b - 0x0085652b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0085652b(void)

{
  char cVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    uVar2 = FUN_00679d22(unaff_EBP + -0xd8,0x179);
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    FUN_00471102(uVar2,0xc);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    FUN_0045cdbc(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x58;
    FUN_00471102(unaff_EBP + -0x20,0xc);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


