/* FUN_005bd68f - 0x005bd68f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005bd68f(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ec9e8;
  piVar1 = (int *)extraout_ECX[0xc];
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[7] = &PTR_FUN_008ec9ec;
  FUN_005be866();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = &PTR_FUN_008ec9f0;
  FUN_005be6c5();
  DAT_0097925c = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


