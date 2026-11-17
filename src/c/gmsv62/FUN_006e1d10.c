/* FUN_006e1d10 - 0x006e1d10 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006e1d10(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0087b2f0(extraout_ECX + 0x1d,8,2,ptr_0045e147,thunk_FUN_00450463);
  iVar1 = *(int *)(unaff_EBP + 0xc);
  extraout_ECX[0x21] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_008f00c0;
  extraout_ECX[1] = &PTR_FUN_008f0074;
  extraout_ECX[2] = &PTR_FUN_008f0070;
  if (600 < iVar1 + 0x27) {
    iVar1 = 0x231;
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  if (800 < iVar2 + 0x50) {
    iVar2 = 0x2d0;
  }
  _OOBECompleteWnfWaitCallback_28(iVar2,iVar1,0x50,0x27,10,1,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


