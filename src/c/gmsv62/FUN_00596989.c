/* FUN_00596989 - 0x00596989 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00596989(void)

{
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00596ec3();
  FUN_005266d6(0);
  FUN_00827f55(unaff_EBP + -0x10,3);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((*(char **)(unaff_EBP + -0x10) != (char *)0x0) && (**(char **)(unaff_EBP + -0x10) != '\0'))
     && (*(int *)(DAT_00973cd8 + 0x28) != 0)) {
    FUN_00596a19();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


