/* FUN_50c0a567 - 0x50c0a567 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __cdecl FUN_50c0a567(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 8) {
    uVar1 = (*DAT_50c20fbc)(0,param_1 + -0xc);
    (*DAT_50c20fb8)(uVar1);
  }
  return;
}


