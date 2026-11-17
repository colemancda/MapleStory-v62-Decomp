/* FUN_00743a05 - 0x00743a05 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00743a05(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00414f8b(unaff_EBP + 8);
  if ((*(char **)(extraout_ECX + 0xbc0) != (char *)0x0) &&
     (**(char **)(extraout_ECX + 0xbc0) != '\0')) {
    *(undefined4 *)(extraout_ECX + 0xb2c) = 5;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


