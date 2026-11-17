/* FUN_0044590d - 0x0044590d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_0044590d(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_008e84a0;
  _memset(param_1,0,0xc);
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x11) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  *param_1 = &PTR_FUN_008e8cd8;
  _memset((void *)((int)param_1 + 0x19),0,0xc4);
  _memset((void *)((int)param_1 + 0x1a1),0,0xc);
  return param_1;
}


