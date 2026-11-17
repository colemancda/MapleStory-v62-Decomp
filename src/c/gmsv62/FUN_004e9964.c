/* FUN_004e9964 - 0x004e9964 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e9964(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (*(int *)(extraout_ECX + 0xbcc) == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    uStack_14 = 0xffffffff;
    puStack_18 = &DAT_00978474;
    FUN_00414edd();
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar1 = unaff_EBP + -0x10;
  }
  else {
    iVar1 = *(int *)(extraout_ECX + 0xbd0);
  }
  uStack_14 = 0;
  *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_18;
  FUN_00450368(iVar1);
  FUN_00743a05();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if ((*(byte *)(unaff_EBP + -0x14) & 1) != 0) {
    uStack_14 = 0x4e99d2;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


