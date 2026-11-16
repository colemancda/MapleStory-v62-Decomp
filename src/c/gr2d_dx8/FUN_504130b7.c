/* FUN_504130b7 - 0x504130b7 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4
FUN_504130b7(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,float param_6)

{
  float fVar1;
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  thunk_FUN_50412f80(local_24,param_2,param_5,param_6);
  thunk_FUN_50412f80(local_14,param_3,param_4,param_6);
  fVar1 = (1.0 - param_6) * param_6;
  thunk_FUN_50412f80(param_1,local_24,local_14,fVar1 + fVar1);
  return param_1;
}


