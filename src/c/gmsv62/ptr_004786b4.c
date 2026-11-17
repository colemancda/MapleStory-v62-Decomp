/* ptr_004786b4 - 0x004786b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004786b4(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  int *piVar2;
  
  *(undefined4 **)(unaff_EBP + -0x10) = unaff_ESI;
  FUN_00402aba();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar2 = (int *)(unaff_EDI + 0x14);
  if (*piVar2 == 0) {
    iVar1 = FUN_00402aea(0x20,0x10);
    *piVar2 = iVar1;
  }
  *piVar2 = *(int *)*piVar2;
  piVar2 = unaff_ESI + 1;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *unaff_ESI = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


