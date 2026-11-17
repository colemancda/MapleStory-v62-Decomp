/* FUN_0056786b - 0x0056786b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0056786b(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(char **)(unaff_EBP + 8) == (char *)0x0) || (**(char **)(unaff_EBP + 8) == '\0')) {
    FUN_00414f29();
    *(undefined4 *)(extraout_ECX + 0x90) = 0;
  }
  else {
    FUN_00414f8b(unaff_EBP + 8);
    *(undefined4 *)(extraout_ECX + 0x90) = 1;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


