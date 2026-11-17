/* FUN_00599053 - 0x00599053 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00599053(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_005990fe(unaff_EBP + 8);
  if (iVar1 == 0) {
    FUN_00419192(unaff_EBP + 8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1 == 0;
}


