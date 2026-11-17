/* ptr_004d12e8 - 0x004d12e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004d12e8(void)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  uVar2 = FUN_00402aea();
  *unaff_EDI = uVar2;
  *unaff_EDI = *(undefined4 *)*unaff_EDI;
  piVar1 = unaff_ESI + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *unaff_ESI = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


