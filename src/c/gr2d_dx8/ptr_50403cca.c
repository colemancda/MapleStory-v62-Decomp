/* ptr_50403cca - 0x50403cca in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 ptr_50403cca(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1 + 0xd8;
  FUN_50403d09(iVar1);
  *(int *)((int)param_1 + 0xdc) = (int)param_1 + 0x128;
  iVar2 = FUN_50408e84(param_1,iVar1);
  if (iVar2 != 0) {
    FUN_50409132();
    FUN_50409007(param_1,iVar1);
  }
  return 0;
}


