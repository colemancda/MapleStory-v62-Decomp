/* FUN_00540a0e - 0x00540a0e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00540a0e(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 1000) {
    iVar1 = FUN_004029b9(0x594);
    *(int *)(unaff_EBP + 8) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 != 0) {
      FUN_005336bc(*(undefined4 *)(extraout_ECX + 0x90));
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004bc6a2();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


