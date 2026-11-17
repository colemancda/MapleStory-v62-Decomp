/* FUN_008140e5 - 0x008140e5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_008140e5(void)

{
  undefined4 *_Dst;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *extraout_ECX = &PTR_LAB_008e8a60;
  _Dst = extraout_ECX + 2;
  extraout_ECX[1] = &PTR_LAB_008e9618;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  extraout_ECX[5] = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[6] = 0;
  extraout_ECX[0xe] = 0;
  extraout_ECX[0xf] = 0;
  extraout_ECX[0x14] = 0;
  extraout_ECX[0x15] = 0;
  extraout_ECX[0x16] = 0;
  extraout_ECX[0x12] = &PTR_FUN_008f2d8c;
  extraout_ECX[0x17] = 0;
  extraout_ECX[0x18] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *extraout_ECX = &PTR_FUN_008f2d58;
  extraout_ECX[1] = &PTR_LAB_008f2d0c;
  *_Dst = &PTR_FUN_008f2d08;
  FUN_00815de0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


