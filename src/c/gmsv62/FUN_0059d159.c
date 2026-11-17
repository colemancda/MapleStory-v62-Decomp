/* FUN_0059d159 - 0x0059d159 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0059d159(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar2;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = DAT_00979448;
  bVar2 = DAT_00979448 != 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xb;
  if (bVar2) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    FUN_0059c174();
    FUN_0059da52();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(extraout_ECX + 0x1bd) = &PTR_LAB_008e84a0;
  *(undefined ***)(extraout_ECX + 0x10) = &PTR_LAB_008e84a0;
  DAT_0097924c = 0;
  return;
}


