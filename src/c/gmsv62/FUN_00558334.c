/* FUN_00558334 - 0x00558334 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_00558334(int param_1)

{
  FUN_0087b2f0(param_1 + 4,0x14,0x31,&LAB_0055950f,FUN_004343d9);
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3e4) = 0;
  *(undefined4 *)(param_1 + 1000) = 0;
  *(undefined ***)(param_1 + 0x3d8) = &PTR_FUN_008e8ab0;
  return param_1;
}


