/* ptr_5180c8d9 - 0x5180c8d9 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void ptr_5180c8d9(void)

{
  void *this;
  int unaff_EBP;
  
  FUN_5180ea30();
  FUN_5180a284(this,*(int *)(unaff_EBP + 8),*(int **)(unaff_EBP + 0xc));
  FUN_51804b19();
  FUN_51809d68();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_51801359();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_51813012(unaff_EBP + -0x14);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


