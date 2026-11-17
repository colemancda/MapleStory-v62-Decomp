/* ptr_00752f00 - 0x00752f00 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00752f00(void)

{
  int in_EAX;
  int unaff_EBP;
  int unaff_EDI;
  
  FUN_00434e38(in_EAX + -0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int *)(unaff_EBP + -0x24) != unaff_EDI) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x24) + -0xc);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x28) != unaff_EDI) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x28) + -0xc);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != unaff_EDI) {
    FUN_00434e38(*(int *)(unaff_EBP + -0x18) + -0xc);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0052e143();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


