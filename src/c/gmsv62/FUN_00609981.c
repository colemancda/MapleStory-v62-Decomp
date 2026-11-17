/* FUN_00609981 - 0x00609981 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00609981(void)

{
  int unaff_EBP;
  undefined4 uStack_10;
  undefined4 local_c;
  
  FUN_00879bb8();
  local_c = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_10;
  FUN_00609c71();
  FUN_00603843();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    local_c = 0;
    uStack_10 = 0x6099c4;
    FUN_00609cba();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


