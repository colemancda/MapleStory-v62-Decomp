/* FUN_007d6c07 - 0x007d6c07 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_007d6c07(int param_1,int param_2,int param_3)

{
  int iVar1;
  ushort local_14 [8];
  
  (*DAT_0097b4a8)(local_14);
  if ((param_2 == 1) || (param_2 == 2)) {
    iVar1 = param_1 / 10000 + 0x76c;
  }
  else {
    iVar1 = param_1 / 10000 + 2000;
  }
  return param_3 <= (int)((uint)local_14[0] - iVar1);
}


