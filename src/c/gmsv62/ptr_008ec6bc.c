/* ptr_008ec6bc - 0x008ec6bc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall ptr_008ec6bc(uint *param_1)

{
  undefined4 uVar1;
  undefined1 in_CF;
  
  uVar1 = _DAT_450059b8;
  *param_1 = (uint)(CONCAT14(in_CF,*param_1) >> 0x1d) | *param_1 << 4;
  return uVar1;
}


