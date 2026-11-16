/* FUN_5080bb96 - 0x5080bb96 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4
FUN_5080bb96(undefined4 param_1,int *param_2,int param_3,undefined4 *param_4,uint param_5,
            size_t *param_6)

{
  undefined4 *_Src;
  
  _Src = (undefined4 *)*param_2;
  if ((uint)(param_3 - (int)_Src) < param_5) {
    param_5 = param_3 - (int)_Src;
  }
  if (param_5 != 0) {
    if (param_5 == 1) {
      *(undefined1 *)param_4 = *(undefined1 *)_Src;
    }
    else if (param_5 == 2) {
      *(undefined2 *)param_4 = *(undefined2 *)_Src;
    }
    else if (param_5 == 3) {
      *(undefined1 *)param_4 = *(undefined1 *)_Src;
      *(undefined2 *)((int)param_4 + 1) = *(undefined2 *)(*param_2 + 1);
    }
    else if (param_5 == 4) {
      *param_4 = *_Src;
    }
    else {
      memcpy(param_4,_Src,param_5);
    }
  }
  if (param_6 != (size_t *)0x0) {
    *param_6 = param_5;
  }
  *param_2 = *param_2 + param_5;
  return 0;
}


