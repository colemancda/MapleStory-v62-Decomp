/* FUN_004b3795 - 0x004b3795 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_004b3795(undefined4 *param_1)

{
  undefined4 *_Dst;
  
  *param_1 = &PTR_LAB_008e8a60;
  _Dst = param_1 + 2;
  param_1[1] = &PTR_LAB_008e9618;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 1;
  param_1[0xb] = 1;
  param_1[0xc] = 1;
  *_Dst = &PTR_FUN_008e9fbc;
  *param_1 = &PTR_LAB_008e9f9c;
  param_1[1] = &PTR_ptr_00456316_008e9f50;
  return param_1;
}


