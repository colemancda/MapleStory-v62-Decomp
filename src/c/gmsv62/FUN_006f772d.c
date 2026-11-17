/* FUN_006f772d - 0x006f772d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006f772d(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f0490;
  extraout_ECX[-1] = &PTR_FUN_008f0444;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f0440;
  iVar1 = extraout_ECX[0x19c];
  *(undefined4 *)(unaff_EBP + -4) = 8;
  if (iVar1 != 0) {
    FUN_006fa00b(0);
    extraout_ECX[0x19c] = 0;
  }
  iVar1 = extraout_ECX[0x19a];
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar1 != 0) {
    FUN_006f9fdd(0);
    extraout_ECX[0x19a] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0087a0b8(extraout_ECX + 0x192,8,3,thunk_FUN_0045e5c9);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087a0b8(extraout_ECX + 0x18e,8,2,thunk_FUN_0045e5c9);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087a0b8(extraout_ECX + 0x168,8,0x13,thunk_FUN_0045e637);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087a0b8(extraout_ECX + 0x162,8,3,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087a0b8(extraout_ECX + 0x15e,8,2,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0045e5df();
  DAT_0097bd7c = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00789fbd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


