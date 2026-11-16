/* FUN_5041314e - 0x5041314e in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 *
FUN_5041314e(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            float param_5,float param_6)

{
  float fVar1;
  int iVar2;
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  fVar1 = param_5 + param_6;
  iVar2 = FUN_50410e65(fVar1,0.0);
  if (iVar2 == 0) {
    thunk_FUN_50412f80(local_24,param_2,param_3,fVar1);
    thunk_FUN_50412f80(local_14,param_2,param_4,fVar1);
    thunk_FUN_50412f80(param_1,local_24,local_14,param_6 / fVar1);
  }
  else if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return param_1;
}


