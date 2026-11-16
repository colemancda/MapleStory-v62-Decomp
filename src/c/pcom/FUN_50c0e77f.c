/* FUN_50c0e77f - 0x50c0e77f in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0e77f(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50c0c5e5();
  if ((int *)*extraout_ECX != (int *)0x0) {
    FUN_50c02a85((int *)*extraout_ECX);
    *extraout_ECX = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


