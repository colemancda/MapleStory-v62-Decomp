/* FUN_004b3c06 - 0x004b3c06 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004b3c06(void)

{
  uint uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = -(uint)(*(int *)(unaff_EBP + 8) != 0) & *(int *)(unaff_EBP + 8) + 8U;
  *(uint *)(unaff_EBP + -0x10) = -(uint)(uVar1 != 0) & uVar1 - 8;
  FUN_004b3f35();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = FUN_004b41a1(unaff_EBP + -0x14,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b3f52();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


