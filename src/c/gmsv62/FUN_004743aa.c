/* FUN_004743aa - 0x004743aa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004743aa(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = 0x10000;
  uVar1 = FUN_00475a9d(0x10000);
  uVar1 = FUN_004743fa(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),uVar1,uVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00475967();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


