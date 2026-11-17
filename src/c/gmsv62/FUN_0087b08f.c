/* FUN_0087b08f - 0x0087b08f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0087b08f(ushort *param_1,ushort *param_2)

{
  int iVar1;
  ushort uVar2;
  
  uVar2 = *param_2;
  while ((iVar1 = (uint)*param_1 - (uint)uVar2, iVar1 == 0 && (uVar2 != 0))) {
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    uVar2 = *param_2;
  }
  if (iVar1 < 0) {
    return -1;
  }
  if (0 < iVar1) {
    iVar1 = 1;
  }
  return iVar1;
}


