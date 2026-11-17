/* FUN_0079e2ec - 0x0079e2ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0079e2ec(void)

{
  undefined4 *_Dst;
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  _Dst = extraout_ECX + 1;
  *extraout_ECX = &PTR_LAB_008ebbe4;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[5] = 0;
  extraout_ECX[6] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar1 = FUN_004029b9(0x90);
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_005c5810();
  }
  extraout_ECX[8] = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *_Dst = &PTR_FUN_008f18cc;
  *extraout_ECX = &PTR_LAB_008f18a8;
  return extraout_ECX;
}


