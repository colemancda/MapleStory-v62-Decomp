/* FUN_00454939 - 0x00454939 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00454939(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008e9168;
  extraout_ECX[-1] = &PTR_LAB_008e911c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e9118;
  piVar1 = (int *)extraout_ECX[0x155];
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0074d4c3();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  _DAT_009784b8 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


