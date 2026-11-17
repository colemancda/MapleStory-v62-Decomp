/* FUN_0045ce85 - 0x0045ce85 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_0045ce85(undefined4 *param_1)

{
  undefined4 *_Dst;
  
  *param_1 = &PTR_LAB_008e8a60;
  param_1[1] = &PTR_LAB_008e9618;
  _Dst = param_1 + 3;
  param_1[2] = &PTR_LAB_008e9614;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *_Dst = &PTR_FUN_008e9610;
  *param_1 = &LAB_008e9604;
  param_1[1] = &PTR_LAB_008e95b8;
  param_1[2] = &PTR_FUN_008e95b4;
  return param_1;
}


