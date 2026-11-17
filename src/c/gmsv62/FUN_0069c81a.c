/* FUN_0069c81a - 0x0069c81a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069c81a(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(extraout_ECX + 0xa4) == 0) {
    iVar1 = FUN_0045b90e(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  else {
    iVar1 = extraout_ECX + 0x9c;
  }
  FUN_00414f8b(iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_00414ebb();
  }
  FUN_00414f8b(extraout_ECX + 0xa0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


