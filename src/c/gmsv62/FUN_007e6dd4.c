/* FUN_007e6dd4 - 0x007e6dd4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_007e6dd4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x74);
  if ((-1 < iVar1) && ((iVar1 < 5 || ((6 < iVar1 && (iVar1 < 9)))))) {
    return (-(uint)(*(int *)(param_1 + 0x9c) != 0) & 0xffffff88) + 0x78;
  }
  return 0;
}


