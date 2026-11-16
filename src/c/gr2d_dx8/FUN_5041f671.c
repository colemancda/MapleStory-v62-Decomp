/* FUN_5041f671 - 0x5041f671 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int __cdecl FUN_5041f671(undefined4 *param_1)

{
  int iVar1;
  float local_104 [64];
  
  iVar1 = FUN_5041dbef(local_104);
  if (-1 < iVar1) {
    iVar1 = FUN_5041f0c5(param_1,(int)local_104);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


