/* FUN_0041f6dc - 0x0041f6dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0041f6dc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e8998;
  iVar1 = extraout_ECX[4];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    (*DAT_0097b534)(iVar1,0);
    (*DAT_0097b518)(extraout_ECX[4]);
    uVar2 = (*DAT_0097b380)(0);
    (*DAT_0097b5e8)(s_AdSpace_00963e26 + 2,uVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_FUN_008e89a0;
  FUN_0041f6a0();
  DAT_00973cd4 = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


