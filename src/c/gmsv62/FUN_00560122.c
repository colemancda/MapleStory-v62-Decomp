/* FUN_00560122 - 0x00560122 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00560122(void)

{
  undefined4 *_Dst;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *extraout_ECX = &PTR_LAB_008e8a60;
  _Dst = extraout_ECX + 2;
  extraout_ECX[1] = &PTR_LAB_008ebbe4;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0046a790();
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x1d] = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *_Dst = &PTR_FUN_008ebbe0;
  *extraout_ECX = &PTR_LAB_008ebbdc;
  extraout_ECX[1] = &PTR_LAB_008ebbb8;
  return extraout_ECX;
}


