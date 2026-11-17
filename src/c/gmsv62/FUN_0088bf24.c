/* FUN_0088bf24 - 0x0088bf24 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0088bf24(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 < DAT_00980fe0) &&
     ((*(byte *)((&DAT_00980ee0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_00888cae(param_1);
    uVar1 = FUN_0088bf7d(param_1,param_2);
    FUN_00888d0d(param_1);
    return uVar1;
  }
  puVar2 = (undefined4 *)FUN_0087fc84();
  *puVar2 = 9;
  return 0xffffffff;
}


