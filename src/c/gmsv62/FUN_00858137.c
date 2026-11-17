/* FUN_00858137 - 0x00858137 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_00858137(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_00414f8b(param_2 + 1);
  FUN_004725b8(param_2 + 2);
  FUN_008586ae(param_2 + 3);
  FUN_0085870e(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  *(undefined1 *)((int)param_1 + 0x1a) = *(undefined1 *)((int)param_2 + 0x1a);
  *(undefined2 *)((int)param_1 + 0x1b) = *(undefined2 *)((int)param_2 + 0x1b);
  *(undefined1 *)((int)param_1 + 0x1d) = *(undefined1 *)((int)param_2 + 0x1d);
  FUN_00414f8b((int)param_2 + 0x1e);
  *(undefined4 *)((int)param_1 + 0x22) = *(undefined4 *)((int)param_2 + 0x22);
  *(undefined4 *)((int)param_1 + 0x26) = *(undefined4 *)((int)param_2 + 0x26);
  return param_1;
}


