/* ptr_00823d00 - 0x00823d00 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_00823d00(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 extraout_var;
  
  iVar1 = DAT_009794bc;
  if (DAT_009794bc == 0) {
    iVar1 = FUN_004029b9(0x1c);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_005e7791(extraout_var);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


