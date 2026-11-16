/* FUN_5140922a - 0x5140922a in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 FUN_5140922a(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) == unaff_EDI) {
    iVar2 = *(int *)(unaff_EBP + -0x18);
    *(int *)(iVar2 + 0x54) = unaff_EDI;
    piVar1 = (int *)(iVar2 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(int *)(iVar2 + 0x14) = unaff_EDI;
    }
  }
  else if (unaff_EDI <= *(int *)(unaff_EBP + -0x1c)) {
    FUN_5140833b();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}


