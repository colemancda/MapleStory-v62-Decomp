/* ptr_0041afd4 - 0x0041afd4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_0041afd4(undefined4 param_1)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = DAT_0097b988;
  DAT_0097b988 = in_EAX;
  in_EAX[2] = param_1;
  in_EAX[3] = param_1;
  in_EAX[5] = param_1;
  *in_EAX = &PTR_FUN_008e8548;
  DAT_00980e2c = in_EAX;
  return;
}


