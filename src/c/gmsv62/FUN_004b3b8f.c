/* FUN_004b3b8f - 0x004b3b8f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b3b8f(void)

{
  uint uVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = -(uint)(extraout_ECX != 0) & extraout_ECX + 8U;
  *(uint *)(unaff_EBP + -0x10) = -(uint)(uVar1 != 0) & uVar1 - 8;
  FUN_004b3f35();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00816370(extraout_ECX);
  if (*(int *)(unaff_EBP + 8) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004b3c06(*(undefined4 *)(unaff_EBP + 8));
  }
  FUN_004b3a49(extraout_ECX,uVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b3f52();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


