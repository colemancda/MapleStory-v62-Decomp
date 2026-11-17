/* FUN_00520b36 - 0x00520b36 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00520b36(void)

{
  undefined4 *extraout_ECX;
  void *unaff_retaddr;
  
  FUN_00879bb8();
  FUN_004bc4fa();
  extraout_ECX[0x1e] = 0;
  extraout_ECX[0x20] = 0;
  FUN_0087b2f0(extraout_ECX + 0x21,8,2,ptr_0045e147,thunk_FUN_00450463);
  FUN_0087b2f0(extraout_ECX + 0x25,8,2,ptr_0045e147,thunk_FUN_00450463);
  FUN_0087b2f0(extraout_ECX + 0x29,8,2,ptr_0045e147,thunk_FUN_00450463);
  FUN_0087b2f0(extraout_ECX + 0x2d,8,2,ptr_0045e147,thunk_FUN_00450463);
  extraout_ECX[0x32] = 0;
  extraout_ECX[0x33] = 0;
  extraout_ECX[0x34] = 0;
  *extraout_ECX = &PTR_FUN_008eb068;
  extraout_ECX[1] = &PTR_FUN_008eb01c;
  extraout_ECX[2] = &PTR_FUN_008eb018;
  _OOBECompleteWnfWaitCallback_28(0x113,100,0xfa,0x157,10,1,0);
  ExceptionList = unaff_retaddr;
  return extraout_ECX;
}


