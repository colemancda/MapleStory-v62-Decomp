/* FUN_005df3f8 - 0x005df3f8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_005df3f8(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_005e07d0(unaff_EBP + 0xc,unaff_EBP + -0x18);
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(unaff_EBP + -0x14);
  FUN_005e05a2();
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_005e064d(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


