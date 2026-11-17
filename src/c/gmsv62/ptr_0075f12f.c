/* ptr_0075f12f - 0x0075f12f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0075f12f(void)

{
  int unaff_EBP;
  undefined4 uVar1;
  
  FUN_00879bb8();
  if ((*(byte *)(unaff_EBP + 0xf) & 0x80) == 0) {
    if (*(int *)(unaff_EBP + 8) == 0xd) {
      FUN_0045b90e(unaff_EBP + 8);
      uVar1 = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0045ed72(0);
      uVar1 = FUN_0045ee27(uVar1);
      FUN_0075efca(uVar1);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    }
    else if ((*(int *)(unaff_EBP + 8) == 0x1b) && (DAT_0097bea8 != 0)) {
      FUN_0075f095();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


