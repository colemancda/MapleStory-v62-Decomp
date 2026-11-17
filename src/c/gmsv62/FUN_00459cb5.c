/* FUN_00459cb5 - 0x00459cb5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00459cb5(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_10;
  int iStack_c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_c = 0;
  }
  else {
    iStack_c = *(int *)(*(int *)(unaff_EBP + 8) + -4);
  }
  iStack_c = iStack_c + 2;
  uStack_10 = 0x459ce0;
  FUN_00457cf8();
  iStack_c = *(int *)(extraout_ECX + 4) + *(int *)(extraout_ECX + 8);
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_10;
  FUN_00450368(unaff_EBP + 8);
  iVar1 = FUN_00459d1b();
  *(int *)(extraout_ECX + 8) = *(int *)(extraout_ECX + 8) + iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_c = 0x459d0c;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


